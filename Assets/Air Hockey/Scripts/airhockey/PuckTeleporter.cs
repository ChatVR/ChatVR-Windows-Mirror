using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuckTeleporter : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    Vector3 InitPos;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        InitPos = transform.position;
    }
    void OnTriggerEnter(Collider col)
    {
        Debug.Log(col.gameObject.tag);

        //Check for a match with the specific tag on any GameObject that collides with your GameObject
        if (col.gameObject.tag == "Goal")
        {
            //If the GameObject has the same tag as specified, output this message in the console
            rb.velocity = Vector3.zero;
            transform.position = InitPos;
        }
    }
}
