using System.Collections;
using UnityEngine;

public class ParcelFallScript : MonoBehaviour
{
    public ConfigurableJoint joint;
    public GameObject GameoverPanel;
    public GameObject WinPanel;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag != "rope" && collision.gameObject.tag != "drone")
        {
            joint.connectedBody = null;
            joint.yMotion = ConfigurableJointMotion.Free;
            StartCoroutine(WaitAndGameOver());
        }

        if (collision.gameObject.tag == "Droppad")
        {
            WinPanel.SetActive(true);
            Time.timeScale = 0f;
        }
    }

    IEnumerator WaitAndGameOver()
    {
        yield return new WaitForSeconds(0.5f);
        GameoverPanel.SetActive(true);
        Time.timeScale = 0;
    }


}
