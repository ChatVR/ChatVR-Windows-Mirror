using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PadController : MonoBehaviour
{
    Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        
    }

    // Update is called once per frame
    void Update()
    {
        float h = Input.GetAxis("Horizontal")*2;
        float v = Input.GetAxis("Vertical")*2;

        rb.velocity = new Vector3(h, 0, v);
    }
}
