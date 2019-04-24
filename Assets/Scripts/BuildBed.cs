using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildBed : MonoBehaviour {
	public int xSize, zSize;
	public float littleX = 400;
	public float bigX = 60000;
	private Mesh mesh;
	private Vector3[] vertices;


	private float[] xLoc = new float[151];

	// Use this for initialization
	void Awake () {
		GetComponent<MeshFilter>().mesh = mesh = new Mesh();
		mesh.name = "Procedural Grid";


		int counter = 0;
		for (int i = 0; i < bigX + 1; i += (int)littleX) {
			xLoc [counter] = i;
			counter++;
		}

		vertices = new Vector3[(xSize + 1) * (zSize + 1)];
		Vector2[] uv = new Vector2[vertices.Length];
		for (int i = 0, y = 0; y <= zSize; y++)
		{
			for (int x = 0; x <= xSize; x++, i++)
			{
				vertices[i] = new Vector3(xLoc[x], 0, y);
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

		mesh.vertices = vertices;
		mesh.RecalculateNormals();
		mesh.RecalculateBounds();

		for (int i = 0; i < 151; i+=10) {
			GameObject newBedDeformer = GameObject.CreatePrimitive (PrimitiveType.Sphere);
			newBedDeformer.transform.localScale = new Vector3 (0.1f, 0.1f, 0.1f);
			newBedDeformer.transform.parent = this.transform;
			newBedDeformer.transform.localPosition = vertices [i];
			newBedDeformer.AddComponent<MeshDeformer> ();
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
