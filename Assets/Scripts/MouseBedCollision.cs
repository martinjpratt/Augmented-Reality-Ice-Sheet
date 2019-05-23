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
    bool modificationMode;
    public Text bedStateText;
    public GameObject initiateUIobject;
    public GameObject modelUIobject;
    public GameObject IceSurfaceObject;

    // Use this for initialization
    void Start () {
        modificationMode = true;
    }

    public void allowModification()
    {
        modificationMode = true;
        bedStateText.text = "Modifiable";
        initiateUIobject.SetActive(false);
        Destroy(IceSurfaceObject.GetComponent<MeshFilter>().mesh);
        Destroy(IceSurfaceObject.GetComponent<MeshCollider>().sharedMesh);
        modelUIobject.transform.GetChild(1).gameObject.GetComponent<Button>().onClick.Invoke();
        modelUIobject.SetActive(false);
    }

    public void disallowModification()
    {
        modificationMode = false;
        bedStateText.text = "Locked";
        initiateUIobject.SetActive(true);

    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetMouseButton(0) && modificationMode)
        {
            this.GetComponent<Build3DBed>().buildBed = true;
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                Vector3 point = hit.point;
                Mesh mesh = hit.transform.GetComponent<MeshFilter>().mesh;

                float minDistanceSqr = Mathf.Infinity;
                nearestVertex = Vector3.zero;

                int counter = 0;

                foreach (Vector3 vertex in mesh.vertices)
                {
                    Vector3 diff = point - hit.transform.TransformPoint(vertex);
                    float distSqr = diff.sqrMagnitude;
                    if (distSqr < minDistanceSqr)
                    {
                        minDistanceSqr = distSqr;
                        nearestVertex = vertex;
                        nearestVertexIndex = counter;
                    }
                    counter++;
                }
                this.GetComponent<Build3DBed>().modifiedBed[nearestVertexIndex % 41, (int)Mathf.Floor((float)nearestVertexIndex / 41f)] = accumualtionIncrement;

            }

        } else if (Input.GetMouseButton(1) && modificationMode)
        {
            this.GetComponent<Build3DBed>().buildBed = true;
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                Vector3 point = hit.point;
                Mesh mesh = hit.transform.GetComponent<MeshFilter>().mesh;

                float minDistanceSqr = Mathf.Infinity;
                nearestVertex = Vector3.zero;

                int counter = 0;

                foreach (Vector3 vertex in mesh.vertices)
                {
                    Vector3 diff = point - hit.transform.TransformPoint(vertex);
                    float distSqr = diff.sqrMagnitude;
                    if (distSqr < minDistanceSqr)
                    {
                        minDistanceSqr = distSqr;
                        nearestVertex = vertex;
                        nearestVertexIndex = counter;
                    }
                    counter++;
                }

                this.GetComponent<Build3DBed>().modifiedBed[nearestVertexIndex % 41, (int)Mathf.Floor((float)nearestVertexIndex / 41f)] = -accumualtionIncrement;

            }

        } else
        {
            this.GetComponent<Build3DBed>().buildBed = false;
        }
        
    }
}
