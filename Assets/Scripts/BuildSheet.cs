using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildSheet : MonoBehaviour {

    public int xSize, zSize;
    private Mesh mesh;
    private Vector3[] vertices;


    public float timeIncrement = 0.01f; //years
    public float littleX = 400;
    public float bigX = 60000;


    private float n = 3;
    private float A = 24e-25f * (365f*24f*60f*60f);
    private float rho = 1000f;
    private float g = 10f;

    private float e = 0.0001f;
    private float bigL;
    private float h0;
    private float[] H = new float[151];
    private float[] xLoc = new float[151];
    public float[] b = new float[151];
//    private int ii = 0;
    private float[] hNew = new float[151];
	public float[] zb = new float[151];
    public float[] xStag = new float[150];
    public float[] hStag = new float[150];
    private float[] alpha = new float[150];
    public float[] q = new float[150];


    // Use this for initialization
    void Start () {
        GetComponent<MeshFilter>().mesh = mesh = new Mesh();
        mesh.name = "Procedural Grid";

        bigL = bigX / 2f;
        h0 = 1000;

        

        int counter = 0;
        for (int i = 0; i < bigX+1; i+=(int)littleX)
        {
            xLoc[counter] = i;
            float tempFunc = h0 - (h0 * Mathf.Pow((i / bigL), 2));
            if (tempFunc > e)
            {
                H[counter] = tempFunc;
            }
            else
            {
                H[counter] = e;
            }

            b[counter] = 1e-4f * (bigX / 3f - i);
            
            counter++;
        }

        for (int i = 0; i < 150; i++)
        {
            xStag[i] = xLoc[i] + 0.5f * littleX;
        }

        Generate(H);
	}


    private void Generate(float[] h)
    {
        vertices = new Vector3[(xSize + 1) * (zSize + 1)];
        Vector2[] uv = new Vector2[vertices.Length];
        for (int i = 0, y = 0; y <= zSize; y++)
        {
            for (int x = 0; x <= xSize; x++, i++)
            {
                vertices[i] = new Vector3(xLoc[x], h[x], y);
                uv[i] = new Vector2(x / xSize, y / zSize);
            }
        }
        mesh.vertices = vertices;
        mesh.uv = uv;

        int[] triangles = new int[xSize * zSize * 6];
        for (int ti = 0, vi = 0, y = 0; y < zSize; y++, vi++)
        {
            for (int x = 0; x < xSize; x++, ti += 6, vi++)
            {
                triangles[ti] = vi;
                triangles[ti + 3] = triangles[ti + 2] = vi + 1;
                triangles[ti + 4] = triangles[ti + 1] = vi + xSize + 1;
                triangles[ti + 5] = vi + xSize + 2;
            }
        }
        mesh.triangles = triangles;


        
    }

    // Update is called once per frame
    void Update () {

        for (int ii = 0; ii < 2000; ii++)
        {
            //float[] hOld = H;
            for (int i = 1; i < H.Length; i++)
            {
                hStag[i - 1] = (H[i] + H[i - 1]) / 2f;

				alpha[i - 1] = (-((zb[i] + H[i]) - (zb[i-1] + H[i - 1]))) / littleX;
                q[i - 1] = (10 * (hStag[i - 1])) + (2 * (A / (n + 2))) * Mathf.Pow((rho * g * alpha[i - 1]), n) * Mathf.Pow(hStag[i - 1], n + 2);
            }

            
            for (int i = 1; i < hNew.Length - 1; i++)
            {
                float tempFunc = H[i] + timeIncrement * (b[i] - (q[i] - q[i - 1]) / littleX);
                if (tempFunc > e)
                {
                    hNew[i] = tempFunc;
                }
                else
                {
                    hNew[i] = e;
                }
            }
            hNew[0] = hNew[1];
            hNew[hNew.Length - 1] = e;
            H = hNew;
        }

        vertices = new Vector3[(xSize + 1) * (zSize + 1)];
        for (int i = 0, y = 0; y <= zSize; y++)
        {
            for (int x = 0; x <= xSize; x++, i++)
            {
                vertices[i] = new Vector3(xLoc[x], hNew[x], y);
            }
        }
        mesh.vertices = vertices;
        mesh.RecalculateNormals();
        mesh.RecalculateBounds();
        GetComponent<MeshCollider>().sharedMesh = mesh;
    }
}
