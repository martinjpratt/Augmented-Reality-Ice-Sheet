using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AntarcticTileTexture : MonoBehaviour
{

    public int zoomLevel;
    public int iValue;
    public int jValue;

    public IEnumerator AddTexture(int zoom, int i, int j, string instrument, string imageDate, string resolution, string imageType, bool isArctic, bool isOverlay)
    {
        string url;
        if (isArctic)
        {
            url = "https://gibs.earthdata.nasa.gov/wmts/epsg3413/best/" + instrument + "/default/" + imageDate + "/" + resolution + "/" + zoom + "/" + j + "/" + i + "." + imageType;
        }
        else
        {
            url = "https://gibs.earthdata.nasa.gov/wmts/epsg3031/best/" + instrument + "/default/" + imageDate + "/" + resolution + "/" + zoom + "/" + j + "/" + i + "." + imageType;
            //url = "https://tiles.arcgis.com/tiles/8df8p0NlLFEShl0r/arcgis/rest/services/Bedmap_2_Bed_Elevation_Continuous/MapServer/tile/" + (zoom-1) + "/2" + j + "/2" + i;
            //print(url);
        }

        Texture2D tex;
        tex = new Texture2D(4, 4, TextureFormat.DXT1, false);
        using (WWW www = new WWW(url))
        {
            yield return www;
            www.LoadImageIntoTexture(tex);
            this.GetComponent<Renderer>().material.mainTexture = tex;
            if (isOverlay)
            {
                
                this.GetComponent<Renderer>().material.renderQueue = 3001;
            }
            
        }
    }
}
