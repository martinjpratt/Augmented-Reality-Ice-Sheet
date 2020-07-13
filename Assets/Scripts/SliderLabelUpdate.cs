using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SliderLabelUpdate : MonoBehaviour
{
    public void UpdateSlider(float sliderValue)
    {
        this.GetComponent<TextMeshProUGUI>().text = (sliderValue * 2 - 1).ToString("F2");
    }
}
