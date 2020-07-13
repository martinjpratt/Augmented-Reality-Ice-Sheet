using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class AntarcticMapTiles : MonoBehaviour
{
    public GameObject mapTile;
    public int zoomLevel = 0;
    public Vector2 centerCoord;
    public bool InitiateOnStart;
    public bool overlay;
    float[] masterValues64 = new float[] { -4194304, -3145728, -2097152, -1048576, 0, 1048576, 2097152, 3145728, 4194304 };

    // Start is called before the first frame update
    void Start()
    {
        //DoOne();
        if (InitiateOnStart)
        {
            GenerateTiles("BlueMarble_ShadedRelief", "", "500m", "jpeg", false);   
        }
        
    }

    public void GenerateTiles(string instrument, string imageDate, string resolution, string imageType, bool isoverlay)
    {
        int numberOfTiles = (int)Mathf.Pow(2, 2 * (zoomLevel+1));
        int maxX = (int)Mathf.Sqrt(numberOfTiles);
        int maxY = maxX;

        for (int i = 0; i < maxX; i++)
        {
            for (int j = 0; j < maxY; j++)
            {
                GameObject newTile = Instantiate(mapTile, Vector3.zero, Quaternion.identity, this.transform);
                newTile.name = zoomLevel + "/" + j + "/" + i;
                //newTile.transform.localPosition = new Vector3((-i*10)+5,0,(j*10)-5);
                RecalculateVectors(newTile, j, i);
                newTile.GetComponent<AntarcticTileTexture>().zoomLevel = zoomLevel;
                newTile.GetComponent<AntarcticTileTexture>().iValue = i;
                newTile.GetComponent<AntarcticTileTexture>().jValue = j;
                StartCoroutine(newTile.GetComponent<AntarcticTileTexture>().AddTexture(zoomLevel, i, j, instrument, imageDate, resolution, imageType, false, isoverlay));
            }
        }

        transform.position = new Vector3(0, -1, 1.25f);
        transform.eulerAngles = new Vector3(180, -90, 0);
    }

    //void DoOne()
    //{
    //    GameObject newTile = Instantiate(mapTile, Vector3.zero, Quaternion.identity, this.transform);
    //    RecalculateVectors(newTile, 2, 0);
    //    StartCoroutine(newTile.GetComponent<AntarcticTileTexture>().AddTexture(zoomLevel, 0, 2, "BlueMarble_ShadedRelief", "", "500m", "jpeg", false));
    //}

    private void RecalculateVectors(GameObject newTile, int j, int i)
    {
        Mesh mesh = newTile.GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;

        float startX = 0;
        float endX = 0;
        float startY = 0;
        float endY = 0;

        if (zoomLevel == 2)
        {
            startX = masterValues64[1 + i];
            endX = masterValues64[0 + i];
            startY = masterValues64[8 - j];
            endY = masterValues64[7 - j];
        }
        else if (zoomLevel == 1)
        {
            startX = masterValues64[2 + (i * 2)];
            endX = masterValues64[0 + (i * 2)];
            startY = masterValues64[8 - (j * 2)];
            endY = masterValues64[6 - (j * 2)];
        }
        else if (zoomLevel == 0)
        {
            startX = masterValues64[4 + (i * 4)];
            endX = masterValues64[0 + (i * 4)];
            startY = masterValues64[8 - (j * 4)];
            endY = masterValues64[4 - (j * 4)];
        }
        

        var xVals = LinSpace(startX, endX, 11);
        var yVals = LinSpace(startY, endY, 11);

        Vector2[] uv = new Vector2[vertices.Length];
        Vector3[] newVertices = new Vector3[vertices.Length];
        int counter = 0;
        for (int k = 0; k < yVals.Count; k++)
        {
            for (int l = 0; l < xVals.Count; l++)
            {
                newVertices[counter] = ps2xyz((float)xVals[l], (float)yVals[k]);
                uv[counter] = new Vector2(10 - ((float)l / 10), 10 - ((float)k / 10));
                counter++;
            }
        }

        mesh.vertices = newVertices;
        mesh.uv = uv;
        mesh.RecalculateBounds();
        mesh.RecalculateNormals();
    }


    public static List<double> LinSpace(double start, double stop, int num, bool endpoint = true)
    {
        var result = new List<double>();
        if (num <= 0)
        {
            return result;
        }

        if (endpoint)
        {
            if (num == 1)
            {
                return new List<double>() { start };
            }

            var step = (stop - start) / ((double)num - 1.0d);
            result = Arange(0, num).Select(v => (v * step) + start).ToList();
        }
        else
        {
            var step = (stop - start) / (double)num;
            result = Arange(0, num).Select(v => (v * step) + start).ToList();
        }

        return result;
    }

    public static IEnumerable<double> Arange(double start, int count)
    {
        return Enumerable.Range((int)start, count).Select(v => (double)v);
    }

    public Vector3 ps2xyz(float x, float y)
    {

        float phi_c = -71;
        float a = 6378137.0f;
        float e = 0.08181919f;
        float lambda_0 = 0;

        phi_c = -phi_c * Mathf.Deg2Rad;
        lambda_0 = -lambda_0 * Mathf.Deg2Rad;
        x = -x;
        y = -y;

        float t_c_num = Mathf.Tan((Mathf.PI / 4) - (phi_c / 2));
        float t_c_den = (1 - (e * Mathf.Sin(phi_c))) / (1 + (e * Mathf.Sin(phi_c)));
        t_c_den = Mathf.Pow(t_c_den, e / 2);
        float t_c = t_c_num / t_c_den;

        float m_c_num = Mathf.Cos(phi_c);
        float m_c_den = 1 - (Mathf.Pow(e, 2) * Mathf.Pow(Mathf.Sin(phi_c), 2));
        float m_c = m_c_num / m_c_den;

        float rho = Mathf.Sqrt(Mathf.Pow(x, 2) + Mathf.Pow(y, 2));
        float t = (rho * t_c) / (a * m_c);

        float chi = (Mathf.PI / 2) - (2 * Mathf.Atan(t));
        float lat1 = ((Mathf.Pow(e, 2) / 2) + (5 * Mathf.Pow(e, 4) / 24) + (Mathf.Pow(e, 6) / 12) + (13 * Mathf.Pow(e, 8) / 360)) * Mathf.Sin(4 * chi);
        float lat2 = ((7 * Mathf.Pow(e,4) / 48) + (29 * Mathf.Pow(e,6) / 240) + (811 * Mathf.Pow(e,8) / 11520)) * Mathf.Sin(4 * chi);
        float lat3 = ((7 * Mathf.Pow(e,6) / 120) + (81 * Mathf.Pow(e,8) / 1120)) * Mathf.Sin(6*chi);
        float lat4 = (4279 * Mathf.Pow(e,8) / 161280) * Mathf.Sin(8 * chi);
        float lat = chi + lat1 + lat2 + lat3 + lat4;

        float lon = lambda_0 + Mathf.Atan2(x, -y);

        lat = -lat;
        lon = -lon;
        lon = ((lon + Mathf.PI) % (2 * Mathf.PI)) - Mathf.PI;


        float rad = 1;
        float cosLat = Mathf.Cos(lat);
        float sinLat = Mathf.Sin(lat);
        float cosLon = Mathf.Cos(lon);
        float sinLon = Mathf.Sin(lon);
        Vector3 vertexXYZ = new Vector3(rad * cosLat * cosLon, rad * sinLat, rad * cosLat * sinLon);

        

        return vertexXYZ;
    }

    public void RetextureTiles(string instrument, string imageDate, string resolution, string imageType)
    {
        AntarcticTileTexture[] gos = this.GetComponentsInChildren<AntarcticTileTexture>();

        if (instrument == "SSMIS_Sea_Ice_Concentration_Snow_Extent")
        {
            imageDate = DateTime.Now.AddDays(-1).ToString("yyyy-MM-dd");
            print(imageDate);
        }

        if (gos.Length == 0)
        {
            if (overlay)
            {
                GenerateTiles(instrument, imageDate, resolution, imageType, true);
            }
            else
            {
                GenerateTiles(instrument, imageDate, resolution, imageType, false);
            }
        }

        foreach (var go in gos)
        {
            if (overlay)
            {
                StartCoroutine(go.AddTexture(go.zoomLevel, go.iValue, go.jValue, instrument, imageDate, resolution, imageType, false, true));
            }
            else
            {
                StartCoroutine(go.AddTexture(go.zoomLevel, go.iValue, go.jValue, instrument, imageDate, resolution, imageType, false, false));
            }
            
        }
    }
}
