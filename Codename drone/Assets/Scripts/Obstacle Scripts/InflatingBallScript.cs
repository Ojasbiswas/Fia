using System.Collections;
using UnityEngine;

public class InflatingBallScript : MonoBehaviour
{
    public float waitSec = 1.5f;
    public Vector3 inflateScale;
    public Vector3 normalScale;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        StartCoroutine(Inflate());
    }

    IEnumerator Inflate()
    {
        while (true)
        {
            yield return new WaitForSeconds(waitSec);
            transform.localScale = inflateScale;
            yield return new WaitForSeconds(waitSec / 3);
            transform.localScale = normalScale;
        }
    }
    
}
