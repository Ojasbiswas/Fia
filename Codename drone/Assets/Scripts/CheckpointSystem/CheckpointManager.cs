using UnityEngine;
using UnityEngine.SceneManagement;

public class CheckpointManager : MonoBehaviour
{
    public static CheckpointManager Instance;

    private Vector3 lastCheckpoint;
    private bool hasCheckpoint = false;

    

    void Awake()
    {
        

        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    public void SetCheckpoint(Vector3 pos)
    {
        lastCheckpoint = pos;
        hasCheckpoint = true;
        Debug.Log("Checkpoint set at: " + pos);
    }

    public bool HasCheckpoint()
    {
        return hasCheckpoint;
    }

    public Vector3 GetCheckpoint()
    {
        return lastCheckpoint;
    }

    public void ClearCheckpoint()
    {
        hasCheckpoint = false;
    }
}
