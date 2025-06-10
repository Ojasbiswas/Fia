using UnityEngine;
using System.Collections;

public class RopeDestructionScript : MonoBehaviour
{

    public ConfigurableJoint joint;
    public GameObject GameoverPanel;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        joint = GetComponent<ConfigurableJoint>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag != "rope" && other.gameObject.tag != "parcel")
        {
            joint.connectedBody = null;
            joint.yMotion = ConfigurableJointMotion.Free;
            StartCoroutine(WaitAndGameOver());
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag != "rope" && other.gameObject.tag != "parcel")
        {
            joint.connectedBody = null;
            joint.yMotion = ConfigurableJointMotion.Free;
            StartCoroutine(WaitAndGameOver());
        }
    }


    IEnumerator WaitAndGameOver()
    {
        yield return new WaitForSeconds(0.5f);
        GameoverPanel.SetActive(true);
        Time.timeScale = 0;
    }
}
