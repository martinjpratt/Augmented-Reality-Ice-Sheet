using System.Collections;
using UnityEngine;
using OSGeo.OGR;
using OSGeo.OSR;

public class BuildGlobePolar : MonoBehaviour {

    public GameObject planeSegment;
    public TextAsset polarPlaneVertexLoactions;


    Vector3[] meshVertices = new Vector3[121];

    private void Start()
    {
        GeneratePolar("Antarctic", "BlueMarble_ShadedRelief", "500m", "jpeg", "", false);
    }




    public void GeneratePolar(string projection, string instrument, string resolution, string imageType, string imageDate, bool isArctic) {

        var llList = polarPlaneVertexLoactions.text.Split("\n"[0]);
        float rad = 0.7f;
        int c = 0;
        int u = 0;
        int v = 0;


        if (projection != "Polar")
        { 
            GameObject[] tileplanes = GameObject.FindGameObjectsWithTag("PolarTilePlane");
            if (tileplanes.Length > 0)
            {
                foreach (var go in tileplanes)
                {
                    Destroy(go);
                }
            }
        }

        for (int j = 0; j < 4; j++)
        {
            for (int i = 0 + c; i < 121 + c; i++)
            {
                var dataList = llList[i].Split(","[0]);

                float cosLat = Mathf.Cos(float.Parse(dataList[0]) * Mathf.PI / 180f);
                float sinLat = Mathf.Sin(float.Parse(dataList[0]) * Mathf.PI / 180f);
                float cosLon = Mathf.Cos(float.Parse(dataList[1]) * Mathf.PI / 180f);
                float sinLon = Mathf.Sin(float.Parse(dataList[1]) * Mathf.PI / 180f);
                meshVertices[i - c] = new Vector3(rad * cosLat * cosLon, rad * sinLat, rad * cosLat * sinLon);
            }
            
            GameObject newPlaneObject = Instantiate(planeSegment);
            newPlaneObject.tag = "PolarTilePlane";
            newPlaneObject.GetComponent<RestructurePlane>().enabled = false;
            Mesh mesh = newPlaneObject.GetComponent<MeshFilter>().mesh;
            Vector3[] verts = mesh.vertices;
            newPlaneObject.transform.parent = this.transform;
            newPlaneObject.transform.localPosition = Vector3.zero;
            newPlaneObject.transform.localEulerAngles = new Vector3(0,180,0);
            if (isArctic)
            {
                newPlaneObject.transform.eulerAngles = new Vector3(180, 45, 0);
            }
            mesh.vertices = meshVertices;
            mesh.RecalculateBounds();
            mesh.RecalculateNormals();
            newPlaneObject.GetComponent<MeshCollider>().sharedMesh = mesh;
            StartCoroutine(AddTexture(newPlaneObject, u, v, instrument, imageDate, resolution, imageType, isArctic));

            if (u == 0 & v == 1)
            {
                u = 1;
            }
            if (u == 1 & v == 0)
            {
                u = 0;
                v = 1;
            }
            if (u == 0 & v == 0)
            {
                u = 1;
            }
            
            c += 121;
            
        }
        
	}

    private IEnumerator AddTexture(GameObject newPlaneObject, int i, int j, string instrument, string imageDate, string resolution, string imageType, bool isArctic)
    {
        string url;
        if (isArctic)
        {
            url = "https://gibs.earthdata.nasa.gov/wmts/epsg3413/best/" + instrument + "/default/" + imageDate + "/" + resolution + "/0/" + i + "/" + j + "." + imageType;
        }
        else
        {
            url = "https://gibs.earthdata.nasa.gov/wmts/epsg3031/best/" + instrument + "/default/" + imageDate + "/" + resolution + "/0/" + i + "/" + j + "." + imageType;
            print(url);
        }

        Texture2D tex;
        tex = new Texture2D(4, 4, TextureFormat.DXT1, false);
        using (WWW www = new WWW(url))
        {
            yield return www;
            www.LoadImageIntoTexture(tex);
            newPlaneObject.GetComponent<Renderer>().material.mainTexture = tex;
            newPlaneObject.GetComponent<Renderer>().material.renderQueue = 3001;
        }
    }

}
