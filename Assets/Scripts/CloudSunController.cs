using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudSunController : MonoBehaviour
{
    public bool controlCloud { get; set; }
    Camera camera;

    private void Start()
    {
        camera = Camera.main;
        controlCloud = false;
    }


    // Update is called once per frame
    void Update()
    {
        if (controlCloud)
        {
            transform.position = camera.transform.position + (camera.transform.forward * 0.5f);
        }
    }
}
