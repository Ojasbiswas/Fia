using UnityEngine;

public class LaserBlockMovement : MonoBehaviour
{
    public bool isRight;
    public Rigidbody rb;
    public float speed = 50;


    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (isRight)
        {
            rb.AddForce(transform.forward * speed * Time.fixedDeltaTime);
        }
        else if (!isRight)
        {
            rb.AddForce(transform.forward  * speed * Time.fixedDeltaTime * -1);
        }
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("platform"))
        {
            rb.linearVelocity = Vector3.zero;
            if (!isRight)
            {
                isRight = true;
            }
            else
            {
                isRight = false;
            }
        }
    }
}
