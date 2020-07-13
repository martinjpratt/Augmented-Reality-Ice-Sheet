using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ParticleEmitterController : MonoBehaviour {

    public PinchSlider UISlider;
    ParticleSystem ps;

	// Use this for initialization
	void Start () {
        ps = this.GetComponent<ParticleSystem>();
    }
	
	// Update is called once per frame
	void Update () {
        if (UISlider.SliderValue > 0.5f)
        {
            var emission = ps.emission;
            emission.rateOverTime = Mathf.Pow(10, UISlider.SliderValue * 2);
        }
	}
}
