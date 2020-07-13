//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using HoloToolkit.Examples.InteractiveElements;
//using System;

//public class GIBSMenuSearch : MonoBehaviour {

//    public GameObject subMenuPrefab;


//    public void CreatIcons()
//    {
//        float menuPos = -0.08f;

//        TextAsset metadata = Resources.Load("NASA_GIBS_metadata") as TextAsset;
//        var iconList = metadata.text.Split("\n"[0]);
//        for (int i = 0; i < iconList.Length; i++)
//        {
//            var dataList = iconList[i].Split("\t"[0]);
//            if (dataList[0] == this.GetComponent<LabelTheme>().Default)
//            {
//                GameObject newSubMenuPrefab = Instantiate(subMenuPrefab);
//                newSubMenuPrefab.transform.parent = this.transform;
//                newSubMenuPrefab.transform.localPosition = new Vector3(0, menuPos, 0);

//                newSubMenuPrefab.GetComponent<LabelTheme>().Default = dataList[1] + " " + dataList[2] + "\n" + dataList[3];
//                newSubMenuPrefab.GetComponentInChildren<TextMesh>().transform.localScale = new Vector3(0.007f, 0.007f, 0.007f);
//                newSubMenuPrefab.GetComponent<GIBSRetextureGlobe>().instrument = dataList[4];
//                newSubMenuPrefab.GetComponent<GIBSRetextureGlobe>().resolution = dataList[5];
//                newSubMenuPrefab.GetComponent<GIBSRetextureGlobe>().imageType = dataList[7];

//                string dataDate = "";
//                try
//                {
//                    DateTime dt = DateTime.Parse(dataList[10]);
//                    dataDate = dt.ToString("yyyy-MM-dd");
//                }
//                catch
//                {

//                    if (dataList[10].Contains("Present"))
//                    {
//                        dataDate = DateTime.Now.AddDays(-1).ToString("yyyy-MM-dd");

//                        if (dataList[10].Contains("Monthly"))
//                        {
//                            dataDate = DateTime.Now.AddMonths(-1).ToString("yyyy-MM-dd");
//                        }
//                        if (dataList[10].Contains("28 days"))
//                        {
//                            dataDate = DateTime.Now.AddDays(-29).ToString("yyyy-MM-dd");
//                        }
//                        if (dataList[10].Contains("7 days"))
//                        {
//                            dataDate = DateTime.Now.AddDays(-8).ToString("yyyy-MM-dd");
//                        }

//                    }
//                    if (dataList[9].Contains(","))
//                    {
//                        var listDates = dataList[9].Split(","[0]);
//                        Debug.Log(listDates[listDates.Length - 1]);
//                        DateTime dt1 = DateTime.Parse(listDates[listDates.Length - 1]);
//                        dataDate = dt1.ToString("yyyy-MM-dd");
//                    }
//                }
//                if (dataDate.Length < 1)
//                {
//                    Debug.Log(dataDate.Length);
//                    dataDate = ("2008-12-01");
//                }
//                newSubMenuPrefab.GetComponent<GIBSRetextureGlobe>().imageDate = dataDate;

//                if (dataList[8].Contains("Polar") | dataList[8].Contains("Arctic") | dataList[8].Contains("Antarctic") && !(dataList[8].Contains("Geographic")))
//                {
//                    newSubMenuPrefab.GetComponent<GIBSRetextureGlobe>().projection = dataList[8];
//                }
//                else
//                {
//                    newSubMenuPrefab.GetComponent<GIBSRetextureGlobe>().projection = "Geographic";
//                }

//                menuPos -= 0.08f;
//            }
//        }
//    }

//    public void DestroyIcons()
//    {
//        GameObject[] subMenuButton = GameObject.FindGameObjectsWithTag("SubMenuPrefab");
//        foreach (var go in subMenuButton)
//        {
//            Destroy(go);
//        }
//        GameObject[] menuButton = GameObject.FindGameObjectsWithTag("MenuPrefab");
//        foreach (var go in menuButton)
//        {
//            go.GetComponent<InteractiveToggle>().HasSelection = false;
//        }
//    }

//	// Use this for initialization
//	void Start () {
        
//    }
	
//	// Update is called once per frame
//	void Update () {
		
//	}
//}
