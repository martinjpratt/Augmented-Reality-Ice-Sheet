using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SceneSystem;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UILoaderManager : MonoBehaviour
{
    //Public variables
    public GameObject loaderCanvas;
    public GameObject massBalanceCanvas;

    public GameObject loaderPanel;
    public GameObject aboutPanel;
    public GameObject menuPanel;
    public GameObject imageryPanel;
    public GameObject arIceSheetPanel;
    public GameObject modelsPanel;

    // Start is called before the first frame update
    void Start()
    {
        Screen.orientation = ScreenOrientation.Portrait;
        aboutPanel.GetComponent<RectTransform>().DOAnchorPosY(-aboutPanel.GetComponent<RectTransform>().rect.height, 0).SetDelay(0);
        imageryPanel.GetComponent<RectTransform>().DOAnchorPosX(imageryPanel.GetComponent<RectTransform>().rect.width, 0).SetDelay(0);
        arIceSheetPanel.GetComponent<RectTransform>().DOAnchorPosX(arIceSheetPanel.GetComponent<RectTransform>().rect.width, 0).SetDelay(0);
        modelsPanel.GetComponent<RectTransform>().DOAnchorPosX(modelsPanel.GetComponent<RectTransform>().rect.width, 0).SetDelay(0);
    }

    public void ShowLoaderPanel()
    {
        loaderPanel.GetComponent<RectTransform>().DOAnchorPosX(0, 0.3f).SetDelay(0);
    }

    public void HideLoaderPanel()
    {
        loaderPanel.GetComponent<RectTransform>().DOAnchorPosX(-loaderPanel.GetComponent<RectTransform>().rect.width, 0.3f).SetDelay(0);
    }

    public void ShowAboutPanel()
    {
        aboutPanel.GetComponent<RectTransform>().DOAnchorPosY(0, 0.3f).SetDelay(0);
    }

    public void HideAboutPanel()
    {
        aboutPanel.GetComponent<RectTransform>().DOAnchorPosY(-aboutPanel.GetComponent<RectTransform>().rect.height, 0.3f).SetDelay(0);
    }

    public void ShowSubMenuPanel(GameObject subMenuPanel)
    {
        subMenuPanel.GetComponent<RectTransform>().DOAnchorPosX(0, 0.3f).SetDelay(0);
    }

    public void HideSubMenuPanel(GameObject subMenuPanel)
    {
        subMenuPanel.GetComponent<RectTransform>().DOAnchorPosX(subMenuPanel.GetComponent<RectTransform>().rect.width, 0.3f).SetDelay(0);
    }

    public void LoadARIceSheet()
    {
        loaderCanvas.SetActive(false);
        massBalanceCanvas.SetActive(true);
        UIMassBalanceManager uiMassBalanceManager = FindObjectOfType<UIMassBalanceManager>();
        uiMassBalanceManager.CreatePlacementIndicator();
        Screen.orientation = ScreenOrientation.AutoRotation;
    }

    public void LoadImagery()
    {
        //await sceneSystem.LoadContent("Imagery", LoadSceneMode.Single);
    }

    public void BackToLoader()
    {
        loaderCanvas.SetActive(true);
        massBalanceCanvas.SetActive(false);
        UIMassBalanceManager uiMassBalanceManager = FindObjectOfType<UIMassBalanceManager>();
        uiMassBalanceManager.DeleteSurface();
        uiMassBalanceManager.DestroyPlacementMarker();
        MouseBedCollision mbc = FindObjectOfType<MouseBedCollision>();
        if (mbc != null)
        {
            mbc.allowModification();
        }
        uiMassBalanceManager.ModelObject.SetActive(false);
        uiMassBalanceManager.UIBedPanel.SetActive(false);
        Screen.orientation = ScreenOrientation.Portrait;
    }

}
