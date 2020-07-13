using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonSelectWrapper : MonoBehaviour
{
    public string instrument;
    public string imageDate;
    public string resolution;
    public string imageType;

    public void OnButtonClick(GameObject BuildPolarTiles)
    {
        BuildPolarTiles.GetComponent<AntarcticMapTiles>().RetextureTiles(instrument, imageDate, resolution, imageType);
    }
}
