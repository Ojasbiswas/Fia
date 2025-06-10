using UnityEngine;

public class DroneWobbleFX : MonoBehaviour
{
    public float wobbleAmount = 1.5f;       // Max angle
    public float wobbleSpeed = 5f;          // Oscillation speed

    private Vector3 initialLocalRotation;
    private float wobbleTimer;

    void Start()
    {
        initialLocalRotation = transform.localEulerAngles;
        wobbleTimer = Random.Range(0f, 100f);
    }

    void LateUpdate()
    {
        wobbleTimer += Time.deltaTime * wobbleSpeed;

        float pitchWobble = Mathf.Sin(wobbleTimer) * wobbleAmount;
        float rollWobble = Mathf.Cos(wobbleTimer * 1.2f) * wobbleAmount;

        // Apply visual-only wobble (local rotation offset)
        transform.localRotation = Quaternion.Euler(
            initialLocalRotation.x + pitchWobble,
            initialLocalRotation.y,
            initialLocalRotation.z + rollWobble
        );
    }
}
