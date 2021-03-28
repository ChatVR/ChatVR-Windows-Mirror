using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.SpatialTracking;

public class LocalPlayer : NetworkBehaviour
{
    // Start is called before the first frame update
    //public GameObject movement;
    public GameObject rig;
    public GameObject camera;
    public GameObject rightArm;
    public GameObject leftArm;

    void Start()
    {
        if (isLocalPlayer)
        {
            //(CameraOffset)movement.GetComponent<CameraOffset>().enabled = true;
            camera.SetActive(true);
            ((VRPlayerController)GetComponent<VRPlayerController>()).enabled = true;
            ((TrackedPoseDriver)rightArm.GetComponent<TrackedPoseDriver>()).enabled = true;
            ((TrackedPoseDriver)leftArm.GetComponent<TrackedPoseDriver>()).enabled = true;
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
