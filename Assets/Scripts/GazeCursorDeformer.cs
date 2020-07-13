using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;

public class GazeCursorDeformer : MonoBehaviour, IMixedRealityPointerHandler
{

    public bool modificationMode;
    public float radius = 4;
    public float accumulationIncrement;
    double[,] modifiedVertices;
    Mesh mesh;
    GazeProvider gazeProvider;
    bool goDeform;
    bool raiseLowerTopo;
    public GameObject IceSurfaceObject;

    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        
    }

    public void OnPointerDown(MixedRealityPointerEventData eventData)
    {
        if (modificationMode && gazeProvider.GazeTarget.name == "BedSurface")
        {
            this.GetComponent<Build3DBed>().buildBed = true;
            goDeform = true;
        }
    }

    public void OnPointerDragged(MixedRealityPointerEventData eventData)
    {
        
    }

    public void OnPointerUp(MixedRealityPointerEventData eventData)
    {
        goDeform = false;
        this.GetComponent<Build3DBed>().buildBed = false;
    }

    public void modificationSwitch(bool onOffSwitch)
    {
        modificationMode = !onOffSwitch;
    }

    public void allowModification()
    {
        Destroy(IceSurfaceObject.GetComponent<MeshFilter>().mesh);
        Destroy(IceSurfaceObject.GetComponent<MeshCollider>().sharedMesh);
        modificationMode = true;
    }

    public void disallowModification()
    {
        modificationMode = false;
    }

    public void ChangeTopo(bool changeTopo)
    {
        raiseLowerTopo = changeTopo;
    }


    // Start is called before the first frame update
    void Start()
    {
        goDeform = false;
        raiseLowerTopo = false;
        modificationMode = true;
        gazeProvider = FindObjectOfType<GazeProvider>();
    }

    void Update()
    {
        if (goDeform && !raiseLowerTopo)
        {
            Vector3 point = gazeProvider.HitPosition;
            mesh = gazeProvider.GazeTarget.GetComponent<MeshFilter>().mesh;

            modifiedVertices = new double[41, 41];

            int counter = 0;

            foreach (var vertex in mesh.vertices)
            {
                Vector3 diff = point - gazeProvider.GazeTarget.transform.TransformPoint(vertex);
                float distSqr = diff.sqrMagnitude;
                if (distSqr < radius)
                {
                    modifiedVertices[counter % 41, (int)Mathf.Floor((float)counter / 41f)] = accumulationIncrement * GaussFalloff(distSqr, radius);
                }
                counter++;
            }

            this.GetComponent<Build3DBed>().modifiedBed = modifiedVertices;
        }
        else if (goDeform && raiseLowerTopo)
        {
            Vector3 point = gazeProvider.HitPosition;
            mesh = gazeProvider.GazeTarget.GetComponent<MeshFilter>().mesh;

            modifiedVertices = new double[41, 41];

            int counter = 0;

            foreach (var vertex in mesh.vertices)
            {
                Vector3 diff = point - gazeProvider.GazeTarget.transform.TransformPoint(vertex);
                float distSqr = diff.sqrMagnitude;
                if (distSqr < radius)
                {
                    modifiedVertices[counter % 41, (int)Mathf.Floor((float)counter / 41f)] = -accumulationIncrement * GaussFalloff(distSqr, radius);
                }
                counter++;
            }

            this.GetComponent<Build3DBed>().modifiedBed = modifiedVertices;
        }
    }

    float GaussFalloff(float distance, float inRadius)
    {
        return Mathf.Clamp01(Mathf.Pow(360.0f, -Mathf.Pow(distance / inRadius, 2.5f) - -0.01f));
    }
}
