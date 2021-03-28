using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class VRPlayerController : NetworkBehaviour
{
    [Range(0,10)]
    public float playerSpeed = 0.2f;

    [Range(0.1f, 10)]
    public float moveSens = 1; 

    public Collider col;
    public Rigidbody rb;

    /* Player Objects */
    public GameObject playerRig;
    public GameObject playerCamera;
    public GameObject leftHand;
    public GameObject rightHand;

    /* Previous Locations */
    private Vector3 prevPlayerLoc;
    private Vector3 prevLeftHandLoc;
    private Vector3 prevRightHandLoc;

    void Start()
    {
        col = playerRig.GetComponent<Collider>();
        rb = playerRig.GetComponent<Rigidbody>();

        prevPlayerLoc = playerRig.transform.position;
        prevLeftHandLoc = leftHand.transform.position;
        prevRightHandLoc = rightHand.transform.position;
    }

    void Update()
    {
        //Vector2 inp = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick);

        //if (inp == Vector2.zero) return;

        Vector3 playerLoc = playerRig.transform.position;
        Vector3 leftHandLoc = leftHand.transform.position;
        Vector3 rightHandLoc = rightHand.transform.position;

        float playerDistance = Vector3.Distance(playerLoc, prevPlayerLoc);
        float handSpeed = (Vector3.Distance(leftHandLoc, prevLeftHandLoc) - playerDistance) +
            (Vector3.Distance(rightHandLoc, prevRightHandLoc) - playerDistance);

        prevPlayerLoc = playerLoc;
        prevLeftHandLoc = leftHandLoc;
        prevRightHandLoc = rightHandLoc;
        if (handSpeed * 100 > moveSens)
        {
            Vector3 forward = Utils.toXZPlane(playerCamera.transform.forward).normalized;

            rb.velocity = playerSpeed * forward;
            Debug.Log(forward);
        }



        /*
        Vector3 facingForward = Utils.toXZPlane(playerCamera.transform.forward).normalized;
        Vector3 facingSide = Utils.toXZPlane(playerCamera.transform.right).normalized;
        transform.Translate((facingForward*inp.y+facingSide*inp.x)*playerSpeed*Time.deltaTime);
        */
    }

}
