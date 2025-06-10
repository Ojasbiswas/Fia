using UnityEngine;

public class DroneVisualTilt : MonoBehaviour
{
    public float forwardTiltAmount = 10f;
    public float sideTiltAmount = 15f;
    public float tiltSmoothing = 5f;

    private Vector3 currentTilt;
    private Quaternion initialLocalRotation;

    void Start()
    {
        initialLocalRotation = transform.localRotation;
    }

    void LateUpdate()
    {
        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");

        float targetPitch =     vertical * forwardTiltAmount;
        float targetRoll = -horizontal * sideTiltAmount;

        Vector3 targetEuler = new Vector3(targetPitch, 0f, targetRoll);
        currentTilt = Vector3.Lerp(currentTilt, targetEuler, Time.deltaTime * tiltSmoothing);

        transform.localRotation = initialLocalRotation * Quaternion.Euler(currentTilt);
    }
}
