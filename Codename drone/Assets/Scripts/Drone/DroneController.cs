using UnityEngine;
using UnityEngine.InputSystem;
//using static UnityEditor.Searcher.SearcherWindow.Alignment;
using System.Collections;

//pos = new Vector3(80.7999878,7.19999695,-49.7999992)
//pos(level2) = new Vector3(-148.699997,9.59000015,-5.5)
// lv3 pos = Vector3(-134,37,-6)

public class DroneController : MonoBehaviour
{
    public float moveSpeed = 10f;
    public float ascendSpeed = 5f;
    public float rotationSpeed = 100f;

    public float pitchMin = -45f;
    public float pitchMax = 45f;

    public float rollAmount = 20f;   // Maximum roll angle in degrees
    public float rollSpeed = 5f;     // How quickly to apply roll

    public Rigidbody holder;
    public Rigidbody boxRb;
    public ConfigurableJoint parcelConnectedBody;
    public GameObject ropeJoint;
    public GameObject GameoverPanel;

    private Rigidbody rb;
    private float yaw;
    private float pitch;

    void Start()
    {

        Time.timeScale = 1f;

        rb = transform.GetComponent<Rigidbody>();
        rb.freezeRotation = true; // Stop physics from rotating the drone

        Vector3 currentRotation = transform.rotation.eulerAngles;
        yaw = currentRotation.y;
        pitch = currentRotation.x;

        //Respawn at Checkpoint
        if (CheckpointManager.Instance.HasCheckpoint())
        {
            transform.position = CheckpointManager.Instance.GetCheckpoint();
            rb.linearVelocity = Vector3.zero;
        }
    }

    private void Update()
    {
        HandleRotation();

        if (Input.GetMouseButtonDown(1))
        {
            parcelConnectedBody.connectedBody = null;
        }


    }

    void FixedUpdate()
    {
        HandleMovement();
    }

    void HandleMovement()
    {
        float horizontal = Input.GetAxis("Horizontal"); // A/D
        float vertical = Input.GetAxis("Vertical");     // W/S

        // Flattened direction vectors (ignore Y tilt/roll)
        Vector3 flatForward = Vector3.ProjectOnPlane(transform.forward, Vector3.up).normalized;
        Vector3 flatRight = Vector3.ProjectOnPlane(transform.right, Vector3.up).normalized;

        Vector3 move = (flatForward * vertical + flatRight * horizontal) * moveSpeed;

        // Ascend/Descend � separately scaled
        if (Input.GetKey(KeyCode.Space))
            move += Vector3.up * ascendSpeed;
        if (Input.GetKey(KeyCode.LeftShift))
            move += Vector3.down * ascendSpeed;

        rb.AddForce(move);
    }


    void HandleRotation()
    {
        // Mouse rotation
        float mouseX = Input.GetAxis("Mouse X") * rotationSpeed * Time.fixedDeltaTime;
        float mouseY = -Input.GetAxis("Mouse Y") * rotationSpeed * Time.fixedDeltaTime;
        float horizontal = Input.GetAxis("Horizontal");

        yaw += mouseX;
        pitch += mouseY;

        // Clamp angles
        pitch = Mathf.Clamp(pitch, pitchMin, pitchMax);

        // Apply only pitch and yaw (no roll)
        transform.rotation = Quaternion.Euler(pitch, yaw, 0f);
    }

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag != "parcel" && collision.gameObject.tag != "Invisible Wall")
        {
            ropeJoint.GetComponent<ConfigurableJoint>().connectedBody = null;
            ropeJoint.GetComponent<Rigidbody>().isKinematic = false;
            ropeJoint.GetComponent<Rigidbody>().useGravity = true;
            StartCoroutine(WaitAndGameOver());
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag != "parcel" && collision.gameObject.tag != "Invisible Wall")
        {
            ropeJoint.GetComponent<ConfigurableJoint>().connectedBody = null;
            ropeJoint.GetComponent<Rigidbody>().isKinematic = false;
            ropeJoint.GetComponent<Rigidbody>().useGravity = true;
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

