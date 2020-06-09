using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class RaycastDeformer : MonoBehaviour
{
    bool isDeforming;
    float startTime;
    float speed = 1.0f;
    float journeyLength = 10.0f;
    double[,] perlinSurface = new double[41, 41];
    Vector3[] newVertices;
    Mesh bedMesh;
    // Start is called before the first frame update
    void Start()
    {
        startTime = Time.time;
        isDeforming = false;
    }
    // Update is called once per frame
    void Update()
    {
        if (isDeforming)
        {
            //Mesh bedMesh = this.GetComponent<MeshFilter>().mesh;
            float distCovered = (Time.time - startTime) * speed;
            float fractionOfJourney = distCovered / journeyLength;
            //print(fractionOfJourney);
            Vector3[] tempVertices = new Vector3[bedMesh.vertexCount];
            for (int i = 0; i < bedMesh.vertices.Length; i++)
            {
                tempVertices[i] = Vector3.Lerp(bedMesh.vertices[i], newVertices[i], fractionOfJourney);
            }
            bedMesh.vertices = tempVertices;
            bedMesh.RecalculateBounds();
            bedMesh.RecalculateNormals();
            if (fractionOfJourney >= 1)
            {
                isDeforming = false;
            }
        }
    }
    public void DeformMesh()
    {
        bedMesh = this.GetComponent<MeshFilter>().mesh;
        newVertices = new Vector3[bedMesh.vertices.Length];
        for (int i = 0; i < bedMesh.vertices.Length; i++)
        {
            int layerMask = 1 << 4;
            layerMask = ~layerMask;
            RaycastHit hit;
            Vector3 worldPt = transform.TransformPoint(bedMesh.vertices[i]);
            if (Physics.Raycast(worldPt + (10 * Vector3.up), Vector3.down, out hit, Mathf.Infinity, layerMask))
            {
                Vector3 hitPosition = transform.InverseTransformPoint(hit.point);
                newVertices[i] = new Vector3(bedMesh.vertices[i].x, hitPosition.y, bedMesh.vertices[i].z);
            }
            else
            {
                newVertices[i] = new Vector3(bedMesh.vertices[i].x, 0, bedMesh.vertices[i].z);
                print("Missed");
            }
        }
        bedMesh.vertices = newVertices;
        bedMesh.RecalculateBounds();
        bedMesh.RecalculateNormals();
        //isDeforming = true;
    }
    public void AddPerlinNoise()
    {
        bedMesh = this.GetComponent<MeshFilter>().mesh;
        newVertices = new Vector3[bedMesh.vertices.Length];
        for (int i = 0, z = 0; z <= 40; z++)
        {
            for (int x = 0; x <= 40; x++)
            {
                float y = Mathf.PerlinNoise((float)x * .3f, (float)z * .3f);
                y = (y - 0.5f) * 4000f;
                if (y < 0)
                {
                    y = 0;
                }
                newVertices[i] = new Vector3(bedMesh.vertices[i].x, y, bedMesh.vertices[i].z);
                perlinSurface[x, z] = y;
                i++;
            }
        }
        bedMesh.vertices = newVertices;
        bedMesh.RecalculateBounds();
        bedMesh.RecalculateNormals();
        this.GetComponent<Build3DBed>().bed = perlinSurface;
        this.GetComponent<MeshCollider>().sharedMesh = bedMesh;
    }
}