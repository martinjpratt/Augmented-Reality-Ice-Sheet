using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GIBSRetextureGlobe : MonoBehaviour
{

    public string instrument;
    public string resolution;
    public string imageType;
    public string imageDate;
    public string projection;

    public void RetextureGlobe()
    {
        if (projection == "Arctic")
        {
            GameObject[] activeMenuButtons = GameObject.FindGameObjectsWithTag("SubMenuPrefab");
            //foreach (var go in activeMenuButtons)
            //{
            //    go.GetComponent<InteractiveToggle>().HasSelection = false;
            //}

            GameObject earthObject = GameObject.FindGameObjectWithTag("GIBSEarth");
            earthObject.GetComponent<BuildGlobePolar>().GeneratePolar(projection, instrument, resolution, imageType, imageDate, true);
        }
        if (projection == "Antarctic")
        {
            GameObject[] activeMenuButtons = GameObject.FindGameObjectsWithTag("SubMenuPrefab");
            //foreach (var go in activeMenuButtons)
            //{
            //    go.GetComponent<InteractiveToggle>().HasSelection = false;
            //}

            GameObject earthObject = GameObject.FindGameObjectWithTag("GIBSEarth");
            earthObject.GetComponent<BuildGlobePolar>().GeneratePolar(projection, instrument, resolution, imageType, imageDate, false);
        }
        if (projection == "Polar")
        {
            GameObject[] activeMenuButtons = GameObject.FindGameObjectsWithTag("SubMenuPrefab");
            //foreach (var go in activeMenuButtons)
            //{
            //    go.GetComponent<InteractiveToggle>().HasSelection = false;
            //}

            GameObject earthObject = GameObject.FindGameObjectWithTag("GIBSEarth");

            earthObject.GetComponent<BuildGlobePolar>().GeneratePolar(projection, instrument, resolution, imageType, imageDate, true);
            earthObject.GetComponent<BuildGlobePolar>().GeneratePolar(projection, instrument, resolution, imageType, imageDate, false);
        }

    }

    public void DestroyCoastlines()
    {
        GameObject[] gos = GameObject.FindGameObjectsWithTag("Coastlines");
        foreach (var go in gos)
        {
            Destroy(go);
        }
    }

    public void DestroyTiles()
    {
        if (projection == "Geographic")
        {
            GameObject[] gos = GameObject.FindGameObjectsWithTag("TilePlane");
            foreach (var go in gos)
            {
                Destroy(go);
            }
        }
        if (projection != "Geographic")
        {
            GameObject[] gos = GameObject.FindGameObjectsWithTag("PolarTilePlane");
            foreach (var go in gos)
            {
                Destroy(go);
            }
        }

    }
}
