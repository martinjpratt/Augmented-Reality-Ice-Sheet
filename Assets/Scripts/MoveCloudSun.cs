using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveCloudSun : MonoBehaviour {

#if UNITY_WSA
    public PinchSlider UISlider;
#elif UNITY_IOS || UNITY_ANDROID
    public Slider UISlider;
#endif
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
            if (UISlider.value >= 0.5f)
            {
                IsSun = false;
                SunObject.SetActive(false);
                CloudObject.SetActive(true);
                //CloudObject.transform.position = new Vector3(hitPosition.x, CloudObject.transform.position.y, hitPosition.z);
            }
            else
            {
                IsSun = true;
                SunObject.SetActive(true);
                CloudObject.SetActive(false);
                //SunObject.transform.position = new Vector3(hitPosition.x, CloudObject.transform.position.y, hitPosition.z);
            }
        }
        else
        {
            SunObject.SetActive(false);
            CloudObject.SetActive(false);
        }


	}
}
