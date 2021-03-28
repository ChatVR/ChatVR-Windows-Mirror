using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PocketManager : MonoBehaviour
{
    public GameObject Unpocketed, Pocketed, CueBall;
    private Dictionary<string, Vector3> positions;
    private Dictionary<string, Quaternion> rotations;
    private Vector3 initCuePos;
    void Start()
    {
        positions = new Dictionary<string, Vector3>();
        rotations = new Dictionary<string, Quaternion>(); 
        foreach (Transform child in Unpocketed.transform)
        {
            positions.Add(child.gameObject.name, child.position);
            //Debug.Log(rotations);
            rotations.Add(child.gameObject.name, child.rotation);
        }
        initCuePos = CueBall.transform.position;
        
    }
    public void BallPocketed(GameObject ball)
    {
        Debug.Log("HERE "+ ball.tag);
        Debug.Log(ball.name);
        //Check for a match with the specific tag on any GameObject that collides with your GameObject
        if (ball.tag == "Ball")
        {
            Debug.Log(ball.name + " is pocketed.");
            ball.SetActive(false);
            ball.transform.position = positions[ball.name];
            ball.transform.rotation = rotations[ball.name];
            Rigidbody rb = ball.GetComponent<Rigidbody>();
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            ball.transform.parent = Pocketed.transform;
        } else if (ball.name == "CueBall")
        {
            Rigidbody rb = CueBall.GetComponent<Rigidbody>();
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            CueBall.transform.position = initCuePos;
        }

        if (Unpocketed.transform.childCount == 0)
        {
            Rigidbody rb = CueBall.GetComponent<Rigidbody>();
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            CueBall.transform.position = initCuePos;
            while (Pocketed.transform.childCount != 0)
            {
                Transform child = Pocketed.transform.GetChild(0);
                child.parent = Unpocketed.transform;
                child.gameObject.SetActive(true);
            }
        }
    }
}

