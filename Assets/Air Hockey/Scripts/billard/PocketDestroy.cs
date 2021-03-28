using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PocketDestroy : MonoBehaviour
{
    public GameObject Unpocketed, Pocketed, CueBall;
    private Dictionary<string, Vector3> positions;
    private Dictionary<string, Quaternion> rotations;
    private Vector3 initCuePos;
    void Start()
    {
        positions = new Dictionary<string, Vector3>();
        foreach (Transform child in Unpocketed.transform)
        {
            positions.Add(child.gameObject.name, child.position);
            rotations.Add(child.gameObject.name, child.rotation);
        }
        initCuePos = CueBall.transform.position;
        
    }
    void BallPocketed(GameObject ball)
    {
        Debug.Log(ball.tag);
        Debug.Log(Unpocketed.name);
        //Check for a match with the specific tag on any GameObject that collides with your GameObject
        if (ball.tag == "Ball")
        {
            Debug.Log(ball.name + " is pocketed.");
            ball.SetActive(false);
            ball.transform.position = positions[ball.name];
            ball.transform.rotation = rotations[ball.name];
            ball.transform.SetParent(Unpocketed.transform, true);
        }
    }
}

