﻿using Mirror;
using UnityEngine;

namespace Dissonance.Integrations.MirrorIgnorance.Demo
{
    public class MirrorIgnorancePlayerController : NetworkBehaviour
    {
        private void Update()
        {
            if (!isLocalPlayer)
            {
                return;
            }

            var controller = GetComponent<CharacterController>();
            
            var rotation = Input.GetAxis("Horizontal") * Time.deltaTime * 150.0f;
            var speed = Input.GetAxis("Vertical") * 3.0f;
            
            transform.Rotate(0, rotation, 0);
            var forward = transform.TransformDirection(Vector3.forward);
            controller.SimpleMove(forward * speed);

            if (transform.position.y < -3)
            {
                transform.position = Vector3.zero;
                transform.rotation = Quaternion.identity;
            }
        }
    }
}