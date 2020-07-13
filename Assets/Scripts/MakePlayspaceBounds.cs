using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakePlayspaceBounds : MonoBehaviour, IMixedRealityPointerHandler
{
    public GameObject BoundingBox;
    public Vector3 centerPoint;
    public float playspaceDimension;
    public bool isBoxMade;

    GameObject newBB;
    GazeProvider gazeProvider;
    bool isMakingBox;
    Vector3 startPoint;

    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        if (!isMakingBox && !isBoxMade)
        {
            startPoint = gazeProvider.HitPosition;

            newBB = Instantiate(BoundingBox, startPoint, Quaternion.identity, this.transform);
            newBB.GetComponent<LineRenderer>().SetPosition(0, startPoint);
            newBB.GetComponent<LineRenderer>().SetPosition(4, startPoint);

            isMakingBox = true;
        }
        else if (isMakingBox && !isBoxMade)
        {
            isBoxMade = true;
        }
    }

   

    // Start is called before the first frame update
    void Start()
    {
        isMakingBox = false;
        gazeProvider = Camera.main.GetComponent<GazeProvider>();
    }

    // Update is called once per frame
    void Update()
    {
        if (isMakingBox && !isBoxMade)
        {
            float diffValue = GetMinGazeDistance(gazeProvider.HitPosition);

            newBB.GetComponent<LineRenderer>().SetPosition(1, new Vector3(startPoint.x, startPoint.y, startPoint.z + diffValue));
            newBB.GetComponent<LineRenderer>().SetPosition(2, new Vector3(startPoint.x + diffValue, startPoint.y, startPoint.z + diffValue));
            newBB.GetComponent<LineRenderer>().SetPosition(3, new Vector3(startPoint.x + diffValue, startPoint.y, startPoint.z));

        }
    }

    float GetMinGazeDistance(Vector3 gazeHitPosition)
    {
        Vector3 diff = gazeHitPosition - startPoint;

        float minValue = Mathf.Min(diff.x, diff.z);

        return minValue;

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
}
