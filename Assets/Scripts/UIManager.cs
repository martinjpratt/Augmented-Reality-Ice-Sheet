using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.XR.WSA;

public class UIManager : MonoBehaviour, IMixedRealityPointerHandler
{
    Camera mainCamera;
    public bool isPlacing;
    bool anchorValid;
    Pose anchorPose;
    public GameObject anchorObject;
    public GameObject ModelObject;
    public GameObject bedSurface;
    public Material[] nonOcclusionMaterials;
    public Material[] occlusionMaterials;
    public TextMesh topoLabel;
    public TextMesh playLabel;
    public GameObject LoaderObject;
    public GameObject helpDisplay;


    GameObject newAnchorObject;
    GazeProvider gazeProvider;
    public GameObject UIBedPanel;
    public GameObject UISurfacePanel;
    public GameObject UIModelPanel;

    // Start is called before the first frame update
    void Start()
    {
        mainCamera = Camera.main;
        gazeProvider = FindObjectOfType<GazeProvider>();
        
    }

    public void StartSession()
    {
        LoaderObject.SetActive(false);
        CreatePlacementIndicator();
    }

    public void ShowHelp()
    {
        helpDisplay.SetActive(true);
        helpDisplay.transform.rotation = ModelObject.transform.rotation;
        helpDisplay.transform.position = ModelObject.transform.position + ModelObject.transform.TransformDirection(new Vector3(0, 0.75f, -4));
    }

    public void HideHelp()
    {
        helpDisplay.SetActive(false);
    }

    public void CreatePlacementIndicator()
    {
        newAnchorObject = Instantiate(anchorObject);
        isPlacing = true;
    }

    public void ListenForClicks()
    {
        CoreServices.InputSystem?.RegisterHandler<IMixedRealityPointerHandler>(this);
    }

    public void StopListenForClicks()
    {
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
    }

    // Update is called once per frame
    void Update()
    {
        if (isPlacing)
        {
            if (gazeProvider.HitPosition.magnitude > 0)
            {
                ListenForClicks();

                anchorValid = true;
                newAnchorObject.GetComponentInChildren<Renderer>().enabled = true;

                var cameraForward = mainCamera.transform.forward;
                var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
                anchorPose.rotation = Quaternion.LookRotation(cameraBearing) * Quaternion.Euler(90,0,0);
                anchorPose.position = gazeProvider.HitPosition + new Vector3(0,0.05f,0);

                newAnchorObject.transform.SetPositionAndRotation(anchorPose.position, anchorPose.rotation);
            }
            else
            {
                StopListenForClicks();
                anchorValid = false;
                newAnchorObject.GetComponentInChildren<Renderer>().enabled = false;
            }
        }
    }

    public void SetBed()
    {
        UIBedPanel.SetActive(false);
        UISurfacePanel.SetActive(true);

        if (bedSurface.GetComponent<RaycastDeformer>().arBed)
        {
            
            bedSurface.GetComponent<Renderer>().materials = occlusionMaterials;
        }

        CoreServices.SpatialAwarenessSystem.Disable();
        mainCamera.GetComponent<SpatialMappingCollider>().enabled = false;
    }

    public void DeleteSurface()
    {
        UISurfacePanel.SetActive(false);
        UIModelPanel.SetActive(false);
        UIBedPanel.SetActive(true);

        bedSurface.GetComponent<Renderer>().materials = nonOcclusionMaterials;
        CoreServices.SpatialAwarenessSystem.Enable();
        mainCamera.GetComponent<SpatialMappingCollider>().enabled = true;
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

    public void TopoNameSwitcher(string newString)
    {
        topoLabel.text = newString;
    }

    public void PlayNameSwitcher(string newString)
    {
        playLabel.text = newString;
    }

    public void OnPointerDown(MixedRealityPointerEventData eventData)
    {
    }

    public void OnPointerDragged(MixedRealityPointerEventData eventData)
    {
    }

    public void OnPointerUp(MixedRealityPointerEventData eventData)
    {
    }

    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        if (anchorValid)
        {
            isPlacing = false;

            ModelObject.SetActive(true);
            ModelObject.transform.SetPositionAndRotation(anchorPose.position, anchorPose.rotation * Quaternion.Euler(-90, 0, 0));
            Destroy(newAnchorObject);
            StopListenForClicks();
            IReadOnlyList<IMixedRealitySpatialAwarenessMeshObserver> observers = CoreServices.SpatialAwarenessSystem.GetObservers<IMixedRealitySpatialAwarenessMeshObserver>();
            foreach (var observer in observers)
            {
                observer.LevelOfDetail = SpatialAwarenessMeshLevelOfDetail.Fine;
            }
        }
    }
}
