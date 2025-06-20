using UnityEngine;

public class Checkpoint : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("drone"))
        {
            CheckpointManager.Instance.SetCheckpoint(transform.position);
        }
    }
}
