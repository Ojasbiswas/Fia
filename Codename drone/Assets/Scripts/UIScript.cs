using UnityEngine;
using UnityEngine.SceneManagement;

public class UIScript : MonoBehaviour
{
    public Vector3 lvl1Pos = new Vector3(-148.699997f, 9.59000015f, -5.5f);
    public Vector3 lvl2Pos = new Vector3(-134, 37, -6);
    public Vector3 lvl3Pos = new Vector3(80.7999878f, 7.19999695f, -49.7999992f);

    public void RetryButton()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        //Time.timeScale = 1f;
    }

    public void NextLevel()
    {
        if (SceneManager.GetActiveScene().buildIndex + 1 == 2)
        {
            CheckpointManager.Instance.SetCheckpoint(lvl1Pos);
        }
        if (SceneManager.GetActiveScene().buildIndex + 1 == 3)
        {
            CheckpointManager.Instance.SetCheckpoint(lvl2Pos);
        }
        if (SceneManager.GetActiveScene().buildIndex + 1 == 4)
        {
            CheckpointManager.Instance.SetCheckpoint(lvl3Pos);
        }
         
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);

    }

    public void MainMenu()
    {
        SceneManager.LoadScene(0);
    }
}
