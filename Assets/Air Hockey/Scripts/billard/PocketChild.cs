using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PocketChild : MonoBehaviour
{
    public void OnCollisionEnter(Collision col)
    {
        Debug.Log(col.gameObject.name);
        if (col.gameObject.tag == "Ball" || col.gameObject.name == "CueBall")
        {
            PocketManager pMan = this.transform.parent.GetComponent<PocketManager>();
            pMan.BallPocketed(col.gameObject);
        }
    }
}
