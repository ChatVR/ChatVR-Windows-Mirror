using System.Collections;
using System.Collections.Generic;
using UnityEngine;

static public class Utils
{
    static public Vector3 toXZPlane(Vector3 vector)
    {
        return new Vector3(vector.x, 0, vector.z);
    }
}
