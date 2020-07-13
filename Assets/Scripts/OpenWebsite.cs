using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenWebsite : MonoBehaviour
{
    public string url = "https://virtualplanet.wustl.edu/";

    public void LinkToWebsite()
    {
        Application.OpenURL(url);
    }

    public void LinkToFeedbackForm()
    {
        Application.OpenURL("https://docs.google.com/forms/d/e/1FAIpQLSf8mTQNHxgq9A4uMmglhrju-unT2iv13KB3giJ1O8UxISYYmQ/viewform?usp=sf_link");
    }
}
