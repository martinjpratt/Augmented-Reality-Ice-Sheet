using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Accord.Math;

public class Build3DBed : MonoBehaviour {

    public TextAsset AntarcticBed;
    public double[,] modifiedBed;
    public double[,] bed;
    public float J = 40;
    public float L = 1200e3f;
    public bool buildBed = false;


    List<UnityEngine.Vector3> vertexBuffer;
    int xSize = 40;
    int zSize = 40;
    Mesh mesh;
    private Vector2[] uv;
    private int[] triangles;
    MeshCollider meshCollider;
    MeshFilter meshFilter;

    // Use this for initialization
    void Start () {
        meshCollider = this.GetComponent<MeshCollider>();
        meshFilter = this.GetComponent<MeshFilter>();
        vertexBuffer = new List<UnityEngine.Vector3>((xSize + 1) * (zSize + 1));
        triangles = new int[xSize * zSize * 6];

        InitiateBed();
        
    }

    public void InitiateBed()
    {
        //Generate a matrix of points
        float dx = 2 * L / J;
        float[] x_temp = new float[(int)(2 * L / dx) + 1];
        float[] y_temp = new float[(int)(2 * L / dx) + 1];
        mesh = new Mesh();
        mesh.name = "Bed Mesh";

        bed = new double[41, 41];
        modifiedBed = new double[41, 41];

        initTriangles();
        Generate(bed);
    }

    public void InitiateAntacticBed()
    {
        //Generate a matrix of points
        float dx = 2 * L / J;
        float[] x_temp = new float[(int)(2 * L / dx) + 1];
        float[] y_temp = new float[(int)(2 * L / dx) + 1];
        mesh = new Mesh();
        mesh.name = "Bed Mesh";

        modifiedBed = new double[41, 41];

        string[] lineData = AntarcticBed.text.Split("\n"[0]);
        for (int i = 0; i < lineData.Length; i++)
        {
            string[] elementData = lineData[i].Split(","[0]);
            for (int j = 0; j < elementData.Length; j++)
            {
                modifiedBed[i, j] = double.Parse(elementData[j]);
            }
        }

        initTriangles();
        Generate(modifiedBed);
    }



    private void initTriangles()
    {
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
    }


    public void Generate(double[,] b)
    {
        vertexBuffer.Clear();
        for (int i = 0, y = 0; y <= zSize; y++)
        {
            for (int x = 0; x <= xSize; x++, i++)
            {

                vertexBuffer.Add(new UnityEngine.Vector3(x, (float)b[x,y], y));
            }
        }
        mesh.Clear();
        mesh.SetVertices(vertexBuffer);
        mesh.triangles = triangles;

        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        meshFilter.sharedMesh = mesh;
        meshCollider.sharedMesh = mesh;
    }
	
	// Update is called once per frame
	void Update () {
        if (buildBed)
        {
            bed = bed.Add(modifiedBed);
            for (int i = 0, y = 0; y <= zSize; y++)
            {
                for (int x = 0; x <= xSize; x++, i++)
                {
                    if (bed[x, y] < 0)
                    {
                        bed[x, y] = 0;
                    }
                }
            }
            Generate(bed);
            modifiedBed = new double[41, 41];
        }
	}
}
