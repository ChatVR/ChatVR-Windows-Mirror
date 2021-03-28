using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.SceneManagement;

public class ownership : NetworkBehaviour
{
    public GameObject listenFor;
    private GameObject currentOwner;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isServer)
        {
            GameObject closest = null;
            float dist = 99999999999999;

            foreach (GameObject root in SceneManager.GetActiveScene().GetRootGameObjects())
            {
                if (root.name == "Player Model(Clone)")
                {
                    foreach (Transform rig in root.transform)
                    {
                        float curDist = Vector3.Magnitude(listenFor.transform.position - rig.position);
                        if (curDist < dist)
                        {
                            dist = curDist;
                            closest = root;
                        }
                    }
                    
                }
            }

            if (!(closest == currentOwner))
            {
                NetworkIdentity identity = listenFor.GetComponent<NetworkIdentity>();
                NetworkIdentity newOwner = closest.GetComponent<NetworkIdentity>();

                if (currentOwner != null)
                {
                    identity.RemoveClientAuthority();//((NetworkIdentity)currentOwner.GetComponent<NetworkIdentity>()).connectionToClient);
                }

                currentOwner = closest;
                identity.AssignClientAuthority(newOwner.connectionToClient); //NetworkConnection.NetworkConnectionToClient(newOwner));
                Debug.Log("Set network authority");
            }
        }
    }
}
