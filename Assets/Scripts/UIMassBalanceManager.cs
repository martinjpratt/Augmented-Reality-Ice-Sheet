using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using UnityEngine.XR.ARFoundation;
using TMPro;
using UnityEngine.UI;

public class UIMassBalanceManager : MonoBehaviour
{
    Camera mainCamera;
    public bool isPlacing;

    ARRaycastManager raycastManager;
    ARPlaneManager arPlaneManager;
    bool anchorValid;
    GameObject newAnchorObject;
    bool iceSheetPresent;
    bool helpShowing;
    bool startHelpShowing;
    GameObject[] labels;
    float startHelpTime;


    public Pose anchorPose;
    public GameObject anchorObject;
    public GameObject ModelObject;
    Renderer[] placementIndicatorRends;

    //UI objects;
    public GameObject UIBedPanel;
    public GameObject UISurfacePanel;
    public GameObject UIModelPanel;
    public Image playImage;
    public Sprite playSprite;
    public Sprite pauseSprite;
    
    // Start is called before the first frame update
    private void Start()
    {
        iceSheetPresent = false;
        helpShowing = false;
        startHelpShowing = false;
        //Screen.orientation = ScreenOrientation.Landscape;
        mainCamera = Camera.main;
        //CreatePlacementIndicator();
        raycastManager = FindObjectOfType<ARRaycastManager>();
        arPlaneManager = FindObjectOfType<ARPlaneManager>();
        arPlaneManager.enabled = false;
    }

    public void CreatePlacementIndicator()
    {
        newAnchorObject = Instantiate(anchorObject);
        placementIndicatorRends = newAnchorObject.GetComponentsInChildren<Renderer>();
#if UNITY_EDITOR
        isPlacing = false;
#else
        isPlacing = true;

        if (arPlaneManager.trackables.count > 0)
        {
            foreach (var plane in arPlaneManager.trackables)
            {
                plane.gameObject.SetActive(false);
            }
        }
        arPlaneManager.enabled = true;
#endif
    }

    // Update is called once per frame
    void Update()
    {
        if (helpShowing)
        {
            if (Time.time - startHelpTime < 2)
            {
                foreach (var label in labels)
                {
                    label.GetComponent<TextMeshProUGUI>().color = new Color(1, 1, 1, Mathf.Lerp(0, 1, Time.time - startHelpTime));
                }
            }
            else if (Time.time - startHelpTime > 5)
            {
                foreach (var label in labels)
                {
                    label.GetComponent<TextMeshProUGUI>().color = new Color(1, 1, 1, Mathf.Lerp(1, 0, Time.time - 5 - startHelpTime));
                }

                if (Time.time - 5 - startHelpTime >= 1)
                {
                    helpShowing = false;
                }
            }
        }



        if (isPlacing)
        {
            var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
            var hits = new List<ARRaycastHit>();
            raycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon);

            anchorValid = hits.Count > 0;
            if (anchorValid)
            {
                anchorPose = hits[0].pose;

                foreach (var rend in placementIndicatorRends)
                {
                    rend.enabled = true;
                }

                var cameraForward = Camera.current.transform.forward;
                var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
                anchorPose.rotation = Quaternion.LookRotation(cameraBearing);

                newAnchorObject.transform.SetPositionAndRotation(anchorPose.position, anchorPose.rotation);

                if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    isPlacing = false;
                    Destroy(newAnchorObject);
                    ModelObject.SetActive(true);
                    ModelObject.transform.SetPositionAndRotation(anchorPose.position, anchorPose.rotation);
                    UIBedPanel.SetActive(true);
                    arPlaneManager.enabled = false;

                }
            }
            else
            {
                
                foreach (var rend in placementIndicatorRends)
                {
                    rend.enabled = false;
                }
            }
        }
    }

    public void SetBed()
    {
        UIBedPanel.SetActive(false);
        UISurfacePanel.SetActive(true);
    }

    public void DeleteSurface()
    {
        UISurfacePanel.SetActive(false);
        UIModelPanel.SetActive(false);
        UIBedPanel.SetActive(true);
    }

    public void ShowHideHelp()
    {
        if (!helpShowing)
        {
            startHelpTime = Time.time;
            labels = GameObject.FindGameObjectsWithTag("label");
            helpShowing = true;
        }
    }

    public void ShowModelControls()
    {
        UIModelPanel.SetActive(true);
    }

    public void HideSurfaceControls()
    {
        UISurfacePanel.SetActive(false);
    }

    public void ShowSurfaceControls()
    {
        UISurfacePanel.SetActive(true);
    }

    public void DestroyPlacementMarker()
    {
        Destroy(newAnchorObject);
    }

}