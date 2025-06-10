using UnityEngine;

public class DroneVisualBob : MonoBehaviour
{
    public float bobAmplitude = 0.1f;
    public float bobFrequency = 2f;
    public float movementThreshold = 0.2f;

    private Vector3 startPos;
    private float bobOffset;
    private Rigidbody droneRb;

    void Start()
    {
        startPos = transform.localPosition;
        bobOffset = Random.Range(0f, 100f);
        droneRb = GetComponentInParent<Rigidbody>();
    }

    void LateUpdate()
    {
        if (droneRb.linearVelocity.magnitude < movementThreshold)
        {
            float bob = Mathf.Sin((Time.time + bobOffset) * bobFrequency) * bobAmplitude;
            transform.localPosition = startPos + new Vector3(0f, bob, 0f);
        }
        else
        {
            // Reset to original position when moving
            transform.localPosition = Vector3.Lerp(transform.localPosition, startPos, Time.deltaTime * 5f);
        }
    }
}
