using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MouseBedCollision : MonoBehaviour {

    RaycastHit hit;
    Ray ray;
    Vector3 nearestVertex;
    public int nearestVertexIndex;
    public float accumualtionIncrement;
    public bool modificationMode;
    public Text bedStateText;
    public GameObject initiateUIobject;
    public GameObject modelUIobject;
    public GameObject IceSurfaceObject;
    public Slider topoSlider;
    public Button setBedButton;

    // Use this for initialization
    void Start () {
        modificationMode = true;
    }


    public void modificationSwitch(bool onOffSwitch)
    {
        modificationMode = !onOffSwitch;
        setBedButton.interactable = !onOffSwitch;
    }

    public void allowModification()
    {
        //bedStateText.text = "Modifiable";
        //initiateUIobject.SetActive(false);
        Destroy(IceSurfaceObject.GetComponent<MeshFilter>().mesh);
        Destroy(IceSurfaceObject.GetComponent<MeshCollider>().sharedMesh);
        modificationMode = true;
        //modelUIobject.transform.GetChild(1).gameObject.GetComponent<Button>().onClick.Invoke();
        //modelUIobject.SetActive(false);
    }

    public void disallowModification()
    {
        modificationMode = false;
        //bedStateText.text = "Locked";
        //initiateUIobject.SetActive(true);

    }

    public float radius = 4;
    double[,] modifiedVertices;
    Mesh mesh;
    // Update is called once per frame
    void Update () {
        if (Input.GetMouseButton(0) && modificationMode && topoSlider.value == 1)
        {
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                this.GetComponent<Build3DBed>().buildBed = true;
                Vector3 point = hit.point;
                mesh = hit.transform.GetComponent<MeshFilter>().mesh;

                modifiedVertices = new double[41, 41];

                int counter = 0;
                
                foreach(Vector3 vertex in mesh.vertices)
                {
                    Vector3 diff = point - hit.transform.TransformPoint(vertex);
                    float distSqr = diff.sqrMagnitude;
                    if (distSqr < radius)
                    {
                        modifiedVertices[counter % 41, (int)Mathf.Floor((float)counter / 41f)] = accumualtionIncrement * GaussFalloff(distSqr, radius);
                    }
                    counter++;
                }

                this.GetComponent<Build3DBed>().modifiedBed = modifiedVertices;

            }

        } else if (Input.GetMouseButton(0) && modificationMode && topoSlider.value == 0)
        {
            
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {

                this.GetComponent<Build3DBed>().buildBed = true;
                Vector3 point = hit.point;
                mesh = hit.transform.GetComponent<MeshFilter>().mesh;

                modifiedVertices = new double[41, 41];

                int counter = 0;

                foreach (Vector3 vertex in mesh.vertices)
                {
                    Vector3 diff = point - hit.transform.TransformPoint(vertex);
                    float distSqr = diff.sqrMagnitude;
                    if (distSqr < radius)
                    {
                        modifiedVertices[counter % 41, (int)Mathf.Floor((float)counter / 41f)] = -accumualtionIncrement * GaussFalloff(distSqr, radius);
                    }
                    counter++;
                }

                this.GetComponent<Build3DBed>().modifiedBed = modifiedVertices;
            }

        } else
        {
            this.GetComponent<Build3DBed>().buildBed = false;
        }
        
    }

    float GaussFalloff(float distance, float inRadius) {
        return Mathf.Clamp01(Mathf.Pow(360.0f, -Mathf.Pow(distance / inRadius, 2.5f) - 0.01f));
    }
}
