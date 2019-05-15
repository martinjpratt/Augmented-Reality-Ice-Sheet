using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MouseIceSheetCollision : MonoBehaviour
{

    public GameObject dot;
    public int nearestVertexIndex;
    public float accumualtionIncrement;
    public Slider UISlider;
    float baseAccumulationIncrement;
    RaycastHit hit;
    Ray ray;
    Vector3 nearestVertex;
    float distSqr;
    Vector3 diff;

    // Use this for initialization
    void Start()
    {
        baseAccumulationIncrement = accumualtionIncrement;
        //results = new RaycastHit[255];
    }


    public void sliderChangeMB()
    {
        accumualtionIncrement = baseAccumulationIncrement * UISlider.value;
    }

    // Update is called once per frame
    void Update()
    {
        

        if (this.GetComponent<Build3DSheet>().runModel)
        {   
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



                this.GetComponent<Build3DSheet>().Mnew[nearestVertexIndex % 41, (int)Mathf.Floor((float)nearestVertexIndex / 41f)] = accumualtionIncrement; // 0.2/31556926f;
                this.GetComponent<Build3DSheet>().Mnew[nearestVertexIndex % 41, (int)Mathf.Floor((float)nearestVertexIndex / 41f) + 1] = accumualtionIncrement;
                this.GetComponent<Build3DSheet>().Mnew[nearestVertexIndex % 41, (int)Mathf.Floor((float)nearestVertexIndex / 41f) - 1] = accumualtionIncrement;
                this.GetComponent<Build3DSheet>().Mnew[(nearestVertexIndex % 41) + 1, (int)Mathf.Floor((float)nearestVertexIndex / 41f)] = accumualtionIncrement;
                this.GetComponent<Build3DSheet>().Mnew[(nearestVertexIndex % 41) + 1, (int)Mathf.Floor((float)nearestVertexIndex / 41f) + 1] = accumualtionIncrement;
                this.GetComponent<Build3DSheet>().Mnew[(nearestVertexIndex % 41) + 1, (int)Mathf.Floor((float)nearestVertexIndex / 41f) - 1] = accumualtionIncrement;
                this.GetComponent<Build3DSheet>().Mnew[(nearestVertexIndex % 41) - 1, (int)Mathf.Floor((float)nearestVertexIndex / 41f)] = accumualtionIncrement;
                this.GetComponent<Build3DSheet>().Mnew[(nearestVertexIndex % 41) - 1, (int)Mathf.Floor((float)nearestVertexIndex / 41f) + 1] = accumualtionIncrement;
                this.GetComponent<Build3DSheet>().Mnew[(nearestVertexIndex % 41) - 1, (int)Mathf.Floor((float)nearestVertexIndex / 41f) - 1] = accumualtionIncrement;
                
            }

        }
    }
}
