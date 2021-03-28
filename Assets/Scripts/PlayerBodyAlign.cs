using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBodyAlign : MonoBehaviour
{

    public GameObject cameraController;

    public Vector3 bodyOffset;

    void Update()
    {
        Vector3 eularRotation = new Vector3(transform.eulerAngles.x, cameraController.transform.eulerAngles.y+180, transform.eulerAngles.z);
        transform.rotation = Quaternion.Euler(eularRotation);

        transform.position = cameraController.transform.position+bodyOffset;
    }
}
