using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    bool menuActive = false;
    public GameObject uiPanel;
    public GameObject menuButton;


    private void Start()
    {
        Screen.orientation = ScreenOrientation.Landscape;
    }

    public void ShowHideMenu()
    {
        if (!menuActive)
        {
            uiPanel.SetActive(true);
            menuButton.SetActive(false);
            menuActive = true;
        }
        else
        {
            uiPanel.SetActive(false);
            menuButton.SetActive(true);
            menuActive = false;
        }
    }
}
