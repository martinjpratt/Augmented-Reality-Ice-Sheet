using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveCloudSun : MonoBehaviour {

    public Slider UISlider;
    public bool IsSun = false;
    public GameObject SunObject;
    public GameObject CloudObject;
    public Vector3 hitPosition;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        if (this.GetComponent<Build3DSheet>().runModel)
        {
            if (UISlider.value > 0)
            {
                IsSun = false;
                SunObject.SetActive(false);
                CloudObject.SetActive(true);
                CloudObject.transform.position = new Vector3(hitPosition.x, hitPosition.y + 5.5f, hitPosition.z);
            }
            else
            {
                IsSun = true;
                SunObject.SetActive(true);
                CloudObject.SetActive(false);
                SunObject.transform.position = new Vector3(hitPosition.x, hitPosition.y + 5.5f, hitPosition.z);
            }
        }
        else
        {
            SunObject.SetActive(false);
            CloudObject.SetActive(false);
        }


	}
}
