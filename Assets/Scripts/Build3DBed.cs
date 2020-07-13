using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Accord.Math;

public class Build3DBed : MonoBehaviour {

    public TextAsset AntarcticBed;
    public double[,] modifiedBed;
    public double[,] bed;
    public GameObject sideMesh;
    public float J = 40;
    public float L = 1200e3f;
    public bool buildBed = false;



    List<UnityEngine.Vector3> vertexBuffer;
    List<UnityEngine.Vector3> sideVertexBuffer;
    int xSize = 40;
    int zSize = 40;
    Mesh mesh;
    private Vector2[] uv;
    private int[] triangles;
    private int[] sideTriangles;
    MeshCollider meshCollider;
    MeshFilter meshFilter;
    MeshFilter sideMeshFilter;
    Camera camera;

    // Use this for initialization
    void Start () {
        meshCollider = this.GetComponent<MeshCollider>();
        meshFilter = this.GetComponent<MeshFilter>();
        sideMeshFilter = sideMesh.GetComponent<MeshFilter>();
        vertexBuffer = new List<UnityEngine.Vector3>((xSize + 1) * (zSize + 1));
        sideVertexBuffer = new List<UnityEngine.Vector3>(41 * 4 * 2);
        triangles = new int[xSize * zSize * 6];
        sideTriangles = new int[40 * 4 * 4 * 6];
        uv = new Vector2[41 * 41];

        GetComponent<Renderer>().material.renderQueue = 2001;

        InitiateBed();

        camera = Camera.main;
        
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

        initSideTriangles();
        GenerateSides(bed);

        this.GetComponent<RaycastDeformer>().arBed = false;
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

        initSideTriangles();
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

    private void initSideTriangles()
    {
        for (int ti = 0, vi = 0, y = 0; y < 1; y++, vi++)
        {
            for (int x = 0; x < 160; x++, ti += 6, vi++)
            {
                sideTriangles[ti] = vi;
                sideTriangles[ti + 3] = sideTriangles[ti + 2] = vi + 1;
                sideTriangles[ti + 4] = sideTriangles[ti + 1] = vi + 160 + 1;
                sideTriangles[ti + 5] = vi + 160 + 2;
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
                uv[i] = new Vector2((float)x / 10, (float)y / 10);
            }
        }
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.Clear();
        mesh.SetVertices(vertexBuffer);
        mesh.triangles = triangles;
        mesh.uv = uv;

        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        meshFilter.sharedMesh = mesh;
        meshCollider.sharedMesh = mesh;
    }

    public void GenerateSides(double[,] b)
    {
        sideVertexBuffer.Clear();

        for (int x = 0; x <= 40; x++)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(x, -200, 0));
        }

        for (int x = 1; x <= 40; x++)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(40, -200, x));
        }

        for (int x = 39; x >= 0; x--)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(x, -200, 40));
        }

        for (int x = 39; x >= 0; x--)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(0, -200, x));
        }

        for (int x = 0; x <= 40; x++)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(x, (float)b[x,0], 0));
        }

        for (int x = 1; x <= 40; x++)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(40, (float)b[40, x], x));
        }

        for (int x = 39; x >= 0; x--)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(x, (float)b[x, 40], 40));
        }

        for (int x = 39; x >= 0; x--)
        {
            sideVertexBuffer.Add(new UnityEngine.Vector3(0, (float)b[0, x], x));
        }

        Mesh smesh = new Mesh();
        smesh.name = "Bed Panels Mesh";
        smesh.Clear();
        smesh.SetVertices(sideVertexBuffer);
        smesh.triangles = sideTriangles;

        smesh.RecalculateNormals();
        smesh.RecalculateBounds();
        sideMeshFilter.sharedMesh = smesh;
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
            GenerateSides(bed);
            modifiedBed = new double[41, 41];
        }
	}
}
