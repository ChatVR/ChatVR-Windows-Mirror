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
    public GameObject body;

    void Start()
    {
        if (isLocalPlayer)
        {
            //(CameraOffset)movement.GetComponent<CameraOffset>().enabled = true;
            //camera.SetActive(true);
            ((Camera)camera.GetComponent<Camera>()).enabled = true;
            ((AudioListener)camera.GetComponent<AudioListener>()).enabled = true;
            ((Camera)camera.GetComponent<Camera>()).enabled = true;
            ((TrackedPoseDriver)camera.GetComponent<TrackedPoseDriver>()).enabled = true;

            ((VRPlayerController)GetComponent<VRPlayerController>()).enabled = true;
            //((TrackedPoseDriver)rightArm.GetComponent<TrackedPoseDriver>()).enabled = true;
            
            ((UnityEngine.XR.Interaction.Toolkit.XRController)rightArm.GetComponent<UnityEngine.XR.Interaction.Toolkit.XRController>()).enabled = true;
            ((UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor)rightArm.GetComponent<UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor>()).enabled = true;

            ((UnityEngine.XR.Interaction.Toolkit.XRController)leftArm.GetComponent<UnityEngine.XR.Interaction.Toolkit.XRController>()).enabled = true;
            ((UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor)leftArm.GetComponent<UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor>()).enabled = true;

            ((UnityEngine.XR.Interaction.Toolkit.XRRig)rig.GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRig>()).enabled = true;
            ((PlayerBodyAlign)body.GetComponent<PlayerBodyAlign>()).enabled = true;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
