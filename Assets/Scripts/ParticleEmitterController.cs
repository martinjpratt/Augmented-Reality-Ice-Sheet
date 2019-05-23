using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ParticleEmitterController : MonoBehaviour {

    public Slider UISlider;
    ParticleSystem ps;

	// Use this for initialization
	void Start () {
        ps = this.GetComponent<ParticleSystem>();
    }
	
	// Update is called once per frame
	void Update () {
        if (UISlider.value > 0)
        {
            var emission = ps.emission;
            emission.rateOverTime = Mathf.Pow(10, UISlider.value * 2);
        }
	}
}
