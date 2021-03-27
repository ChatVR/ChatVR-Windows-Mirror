using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class LocalPlayer : NetworkBehaviour
{
    // Start is called before the first frame update
    //public GameObject movement;
    public GameObject camera;
    void Start()
    {
        if (isLocalPlayer)
        {
            //(CameraOffset)movement.GetComponent<CameraOffset>().enabled = true;
            camera.SetActive(true);
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
