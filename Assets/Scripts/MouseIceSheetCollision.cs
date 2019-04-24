using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseIceSheetCollision : MonoBehaviour {

    public GameObject dot;
    public int nearestVertexIndex;
    public float  accumualtionIncrement;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetMouseButtonDown(0))
        {
            this.GetComponent<Build3DSheet>().Mnew[5, 5] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[5, 6] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[5, 7] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[6, 5] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[6, 6] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[6, 7] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[7, 5] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[7, 6] += accumualtionIncrement;
            this.GetComponent<Build3DSheet>().Mnew[7, 7] += accumualtionIncrement; 
            /*
            RaycastHit hit;
            var ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                //Vector3 point = hit.transform.InverseTransformPoint(hit.point);
                Vector3 point = hit.point;

                Mesh mesh = hit.transform.GetComponent<MeshFilter>().mesh;
                
                float minDistanceSqr = Mathf.Infinity;
                Vector3 nearestVertex = Vector3.zero;
                // scan all vertices to find nearest
                for (int i = 0; i < mesh.vertices.Length; i++)
                {
                    Vector3 diff = point - hit.transform.TransformPoint(mesh.vertices[i]);
                    float distSqr = diff.sqrMagnitude;
                    if (distSqr < minDistanceSqr)
                    {
                        minDistanceSqr = distSqr;
                        nearestVertex = mesh.vertices[i];
                        nearestVertexIndex = i;
                    }
                }

                this.GetComponent<Build3DSheet>().Mnew[nearestVertexIndex % 41, (int)Mathf.Floor((float)nearestVertexIndex / 41f)] = 0.2/31556926f;

                //GameObject newPoint = Instantiate(dot, hit.transform);
                //newPoint.transform.localPosition = nearestVertex;
                //newPoint.transform.localScale = new Vector3(1, 1000, 1);
            }
            */
        }
    }
}
