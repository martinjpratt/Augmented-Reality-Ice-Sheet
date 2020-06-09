using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using Accord.Math;
using UnityEngine.UI;

public class Build3DSheet : MonoBehaviour
{

    //Public variables some of which can be set in Unity
    public TextAsset AntarcticSurface;      //Text file of Antarctic ice surface heights from Bedmap2
    public Build3DBed bedSurface;           //Bed surface mesh, this is defined first using the spatial mapper for the HoloLens.

    public float J = 40;
    public float dtyears = 20.0f;
    public float L = 1200e3f;
    public float t1 = 200;
    public float t2 = 20000;
    public float secpera = 31556926;
    public double[,] Mnew = new double[41, 41];
    public bool runModel = false;
    public float gammaDenumerator = 5;
    public float dt0Mulitplier = 0.25f;
    public Text timeDisplay;
    public GameObject modelUIobject;
    public Color minColor;
    public Color maxColor;


    //Private variables, mostly to allocate memory
    double[,] Hinit;
    double[,] a;
    int[] j = new int[39];      //interior indices in Update (siagneral.m)
    int[] k = new int[39];
    int[] nk = new int[39];     //north
    int[] sk = new int[39];     //south
    int[] ej = new int[39];     //east
    int[] wj = new int[39];     //west
    double[,] HTemp0;
    double[,] HTemp1;
    double[,] HTemp2;
    double[,] hTemp0;
    double[,] hTemp1;
    double[,] hTemp2;
    double[,] hTemp3;
    double[,] hTemp4;
    double[,] hTemp5;
    double[,] H = null;
    float modelt = 0;
    float g = 9.81f;
    float rho = 910.0f;
    float rhow = 1028.0f;
    int xSize = 40;
    int zSize = 40;
    double[,] newBed;
    Texture2D surfaceTexture;
    Color[] colorArray;
    float maxH;

    private UnityEngine.Vector3[] vertices;
    private Vector2[] uv;
    private int[] triangles;
    List<UnityEngine.Vector3> vertexBuffer;
    List<int> trisBuffer;

    Mesh mesh;

    MeshCollider meshCollider;
    MeshFilter meshFilter;

    int GCcounter = 0;

    //UI Section
    public void selectRunModel()
    {
        runModel = true;
    }

    public void deselectRunModel()
    {
        runModel = false;
        Resources.UnloadUnusedAssets();
    }


    // Use this for initialization, gets some Unity components and assigns them to variables that we want to use for rendering
    void Start()
    {
        meshCollider = this.GetComponent<MeshCollider>();
        meshFilter = this.GetComponent<MeshFilter>();
        vertexBuffer = new List<UnityEngine.Vector3>((xSize + 1) * (zSize + 1));
        triangles = new int[xSize * zSize * 6];
        uv = new Vector2[(1 + xSize) * (1 + zSize)];

        surfaceTexture = new Texture2D(41, 41);
        colorArray = new Color[1681];
        this.GetComponent<Renderer>().material.mainTexture = surfaceTexture;
        //InitiateModel();
    }


    //This creates a generic surface using the halfar method (like in the Matlab version)
    public void InitiateModel()
    {
        timeDisplay.text = "Time Scale";
        newBed = bedSurface.bed;
        //Generate a matrix of points
        float dx = 2 * L / J;
        float[] x_temp = new float[(int)(2 * L / dx) + 1];
        float[] y_temp = new float[(int)(2 * L / dx) + 1];
        for (int i = 0; i < x_temp.Length; i++)
        {
            x_temp[i] = -L + (i * dx);
            y_temp[i] = -L + (i * dx);
        }
        Tuple<float[,], float[,]> M = Matrix.MeshGrid(x_temp, y_temp);

        double[,] H1 = halfar(t1 * secpera, M.Item1, M.Item2);    //Line 10 in RunSIAGeneral.m

        mesh = new Mesh();
        mesh.name = "Generic Ice Sheet Surface";

        initTriangles();
        initUVs();

        //Build the intial condition
        Generate(H1);

        Hinit = Elementwise.Multiply(H1, 0.5f);
        a = Matrix.Zeros(41, 41);
        H = null;

        modelt = 0;
        modelUIobject.SetActive(true);
    }


    //This creates a custom surface such as that from Bedmap2
    public void InitiateAntarctica()
    {
        //bedSurface.InitiateAntacticBed();

        timeDisplay.text = "Time Scale";
        newBed = bedSurface.bed;
        double[,] H1 = new double[41, 41];
        string[] lineData = AntarcticSurface.text.Split("\n"[0]);

        for (int i = 0; i < lineData.Length; i++)
        {
            string[] elementData = lineData[i].Split(","[0]);
            for (int j = 0; j < elementData.Length; j++)
            {
                H1[i, j] = double.Parse(elementData[j]);

            }
        }


        mesh = new Mesh();
        mesh.name = "Antarctica Ice Sheet Surface";

        initTriangles();
        initUVs();

        //Build the intial condition
        Generate(H1);

        Hinit = Elementwise.Multiply(H1, 0.5f);
        a = Matrix.Zeros(41, 41);
        H = null;

        modelt = 0;
        modelUIobject.SetActive(true);
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

    private void initUVs()
    {
        for (int i = 0, y = 0; y <= xSize; y++)
        {
            for (int x = 0; x <= xSize; x++, i++)
            {
                uv[i] = new Vector2((float)x / xSize, (float)y / xSize);
            }
        }
    }


    //This makes the surface of the mesh. We do this procedurally so we can create custom surfaces
    private void Generate(double[,] h)
    {
        vertexBuffer.Clear();

        maxH = (float)h.Cast<double>().Max();

        for (int i = 0, y = 0; y <= zSize; y++)
        {
            for (int x = 0; x <= xSize; x++, i++)
            {
                if (h[x, y] < 0)
                {
                    h[x, y] = 0;

                }
                colorArray[i] = Color.Lerp(minColor, maxColor, (float)h[x, y] / maxH);
                vertexBuffer.Add(new UnityEngine.Vector3(x, (float)h[x, y], y));
            }
        }

        surfaceTexture.SetPixels(0, 0, 41, 41, colorArray);
        surfaceTexture.Apply();
        this.GetComponent<Renderer>().material.mainTexture = surfaceTexture;

        mesh.Clear();
        mesh.SetVertices(vertexBuffer);
        mesh.triangles = triangles;
        mesh.uv = uv;

        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        meshFilter.sharedMesh = mesh;
        meshCollider.sharedMesh = mesh;
        GCcounter++;
        if (GCcounter == 200)
        {
            Resources.UnloadUnusedAssets();
            GCcounter = 0;
        }
    }



    //This generates the initial condition. This is the same as halfar.m
    double[,] halfar(float t, float[,] x, float[,] y)
    {

        float g = 9.81f;        //Constants in SI units
        float rho = 910.0f;
        float n = 3;
        float A = 1.0e-16f / secpera;
        float Gamma = 2 * A * Mathf.Pow(rho * g, 3) / 5;    //see Bueler et al (2005)

        float H0 = 3600;
        float R0 = 750e3f;
        float alpha = 1f / 9f;
        float beta = 1f / 18f;
        //for t0, see equation (9) in Bueler et al (2005); result is 422.45 a:
        float t0 = (beta / Gamma) * Mathf.Pow(7f / 4f, 3) * (Mathf.Pow(R0, 4) / Mathf.Pow(H0, 7));

        float[,] xPow = x.Pow(2);
        float[,] yPow = y.Pow(2);

        float[,] zPow = xPow.Add(yPow);
        double[,] r = zPow.Sqrt();

        r = r.Divide(R0);
        t = t / t0;

        float dPow = (n + 1) / n;


        float tBeta = Mathf.Pow(t, beta);
        r = r.Divide(tBeta);
        r = r.Pow(dPow);
        r = r.Subtract(1);
        r = Elementwise.Multiply(r, -1);

        double[,] inside = r;

        for (int i = 0; i < 41; i++)
        {
            for (int j = 0; j < 41; j++)
            {
                if (inside[i, j] < 0)
                {
                    inside[i, j] = 0;
                }
            }
        }


        float tAlpha = Mathf.Pow(t, alpha);
        float ePow = n / (2f * n + 1f);


        inside = inside.Pow(ePow);

        inside = inside.Divide(tAlpha);
        double[,] H1 = Elementwise.Multiply(H0, inside);



        return H1;
    }



    // Update is called once per frame. Instead of running a FOR loop, we run this indefinitely where each increment is added every frame.
    void Update()
    {
        if (runModel)  //Is the model running?
        {
            RunModel();
        }
    }


    //This essentially does all the work in siageneral.m
    public void RunModel()
    {
        //These veriables could be added to the method input, but this way works as well.
        float Lx = L;  //Half lengths of the rectangle in x,y directions
        float Ly = L;
        float K = J;  //Number of subintervals in the x,y directions
        double[,] H0 = Hinit;    //Initial thickness
        float deltat = dtyears * secpera;    //major time step
        float tf = 10e4f * secpera;       //final time

        double[,] M0 = a;         //mass balance
        float A = 1e-15f / secpera;   //ice softness


        float Gamma = 2 * A * Mathf.Pow(rho * g, 3) / gammaDenumerator;   //see Bueler et al (2005)
        float f1 = rho / rhow;                //fraction of floating ice below surface

        float dx = 2f * Lx / J;
        float dy = 2f * Ly / K;
        float N = Mathf.Ceil(tf / deltat);
        deltat = tf / N;


        for (int i = 0; i < 39; i++)
        {
            j[i] = i + 1;
            k[i] = i + 1;
            nk[i] = i + 2;
            ej[i] = i + 2;
            sk[i] = i;
            wj[i] = i;
        }

        if (H == null)
        {
            H = H0;
        }


        //staggered grid thicknesses
        HTemp0 = H.Get(j, nk);
        HTemp1 = H.Get(j, k);
        HTemp2 = HTemp0.Add(HTemp1);   //adds matrix of HTemp1 to Htemp0
        double[,] Hup = Elementwise.Multiply(HTemp2, 0.5);   //Elementwise.Multiply is the same as .* in Matlab    up
        HTemp0 = H.Get(j, k);
        HTemp1 = H.Get(j, sk);
        HTemp2 = HTemp0.Add(HTemp1);
        double[,] Hdn = Elementwise.Multiply(HTemp2, 0.5);   //down
        HTemp0 = H.Get(ej, k);
        HTemp1 = H.Get(j, k);
        HTemp2 = HTemp0.Add(HTemp1);
        double[,] Hrt = Elementwise.Multiply(HTemp2, 0.5);  //right
        HTemp0 = H.Get(j, k);
        HTemp1 = H.Get(wj, k);
        HTemp2 = HTemp0.Add(HTemp1);
        double[,] Hlt = Elementwise.Multiply(HTemp2, 0.5);  //left


        double[,] h = H.Add(newBed);   //update surface plus bed. TODO: need to include sea level?

        //staggered grid values of [grad h]^2 = "alpha^2"
        float denom1 = Mathf.Pow(4 * dx, 2);
        float denom2 = Mathf.Pow(4 * dy, 2);
        float denom3 = Mathf.Pow(dx, 2);
        float denom4 = Mathf.Pow(dy, 2);

        hTemp0 = h.Get(ej, nk);
        hTemp1 = h.Get(ej, k);
        hTemp2 = h.Get(wj, nk);
        hTemp3 = h.Get(wj, k);
        hTemp4 = h.Get(j, nk);
        hTemp5 = h.Get(j, k);
        double[,] a2temp1 = hTemp0.Add(hTemp1).Subtract(hTemp2).Subtract(hTemp3).Pow(2);
        a2temp1 = a2temp1.Divide(denom1);    //divide a2temp1 by denom1
        double[,] a2temp2 = hTemp4.Subtract(hTemp5).Pow(2);
        a2temp2 = a2temp2.Divide(denom4);
        double[,] a2up = a2temp1.Add(a2temp2);

        hTemp0 = h.Get(ej, k);
        hTemp1 = h.Get(ej, sk);
        hTemp2 = h.Get(wj, k);
        hTemp3 = h.Get(wj, sk);
        hTemp4 = h.Get(j, k);
        hTemp5 = h.Get(j, sk);
        a2temp1 = hTemp0.Add(hTemp1).Subtract(hTemp2).Subtract(hTemp3).Pow(2);
        a2temp1 = a2temp1.Divide(denom1);
        a2temp2 = hTemp4.Subtract(hTemp5).Pow(2);
        a2temp2 = a2temp2.Divide(denom4);
        double[,] a2dn = a2temp1.Add(a2temp2);

        hTemp0 = h.Get(ej, nk);
        hTemp1 = h.Get(j, nk);
        hTemp2 = h.Get(ej, sk);
        hTemp3 = h.Get(j, sk);
        hTemp4 = h.Get(ej, k);
        hTemp5 = h.Get(j, k);
        a2temp1 = hTemp0.Add(hTemp1).Subtract(hTemp2).Subtract(hTemp3).Pow(2);
        a2temp1 = a2temp1.Divide(denom2);
        a2temp2 = hTemp4.Subtract(hTemp5).Pow(2);
        a2temp2 = a2temp2.Divide(denom3);
        double[,] a2rt = a2temp1.Add(a2temp2);

        hTemp0 = h.Get(wj, nk);
        hTemp1 = h.Get(j, nk);
        hTemp2 = h.Get(wj, sk);
        hTemp3 = h.Get(j, sk);
        hTemp4 = h.Get(j, k);
        hTemp5 = h.Get(wj, k);
        a2temp1 = hTemp0.Add(hTemp1).Subtract(hTemp2).Subtract(hTemp3).Pow(2);
        a2temp1 = a2temp1.Divide(denom2);
        a2temp2 = hTemp4.Subtract(hTemp5).Pow(2);
        a2temp2 = a2temp2.Divide(denom3);
        double[,] a2lt = a2temp1.Add(a2temp2);


        //Mahaffy's staggered grid diffusivity: D = Gamma H (n+2) |grad h|^n-1
        double[,] tempDup = Elementwise.Multiply(Hup.Pow(5), a2up);
        double[,] Dup = Elementwise.Multiply(Gamma, tempDup);
        double[,] tempDdn = Elementwise.Multiply(Hdn.Pow(5), a2dn);
        double[,] Ddn = Elementwise.Multiply(Gamma, tempDdn);
        double[,] tempDrt = Elementwise.Multiply(Hrt.Pow(5), a2rt);
        double[,] Drt = Elementwise.Multiply(Gamma, tempDrt);
        double[,] tempDlt = Elementwise.Multiply(Hlt.Pow(5), a2lt);
        double[,] Dlt = Elementwise.Multiply(Gamma, tempDlt);

        //call *adaptive* diffusion() to time step H

        //Now run the diffusion to produce the next set of grid points
        H = diffusion2(Lx, Ly, J, K, Dup, Ddn, Drt, Dlt, H, deltat, Mnew, newBed);   //Line 84 in siageneral.m

        //TODO add calving for edge improvements??

        //There's a bunch of code in siageneral.m that deals with the plotting, I've ignored as we're doing a whole different visualization.

        //values to change for next loop
        modelt = modelt + deltat;
        timeDisplay.text = (modelt / secpera).ToString("F0") + " years";
        Mnew = new double[41, 41];
    }



    //Diffusion function
    private double[,] diffusion2(float Lx, float Ly, float J, float K, double[,] Dup, double[,] Ddown, double[,] Dright, double[,] Dleft, double[,] T0, float tf, double[,] F, double[,] b)
    {
        //spatial grid and intial condition
        float dx = 2 * (Lx / J);
        float dy = 2 * (Ly / K);
        double dt;
        float t = 0.0f;
        //int count = 0;
        double[,] T = T0;

        double maxDup = 0;
        double maxDdn = 0;
        double maxDrt = 0;
        double maxDlt = 0;
        double maxD = 0;
        //while (t < tf)
        //{

        //double[] DmaxArray = new double[4];
        //DmaxArray[0] = Dup.Cast<double>().Max();
        //DmaxArray[0] = Ddown.Cast<double>().Max();
        //DmaxArray[0] = Dright.Cast<double>().Max();
        //DmaxArray[0] = Dleft.Cast<double>().Max();
        //maxD = DmaxArray.Cast<double>().Max();


        for (int m = 0; m < 39; m++)
        {

            //stability condition gives time-step restriction
            for (int n = 0; n < 39; n++)
            {
                if (Dup[m, n] > maxDup)
                {
                    maxDup = Dup[m, n];
                }
                if (Ddown[m, n] > maxDdn)
                {
                    maxDdn = Ddown[m, n];
                }
                if (Dright[m, n] > maxDrt)
                {
                    maxDrt = Dright[m, n];
                }
                if (Dleft[m, n] > maxDlt)
                {
                    maxDlt = Dleft[m, n];
                }
            }
        }

        //scalar maximum of D
        if (maxDup > maxD)
        {
            maxD = maxDup;
        }
        if (maxDdn > maxD)
        {
            maxD = maxDdn;
        }
        if (maxDrt > maxD)
        {
            maxD = maxDrt;
        }
        if (maxDlt > maxD)
        {
            maxD = maxDlt;
        }


        if (maxD <= 0.0f)  //e/g/ happens with zero thickness ice sheets
        {
            dt = tf - t;
        }
        else
        {
            double dt0 = dt0Mulitplier * (Mathf.Pow(dx, 2) / maxD);
            dt = Math.Min(dt0, tf - t);   //do not go past tf. Not sure why?
        }

        double mu_x = dt / (dx * dx);
        double mu_y = dt / (dy * dy);


        double[,] Tb = T.Add(b);
        //print("Tb: " + Tb[20, 20] + " b: " + b[20, 20] + " T: " + T[20,20]);

        double[,] d1 = Elementwise.Multiply(mu_y, Dup);
        double[,] d2 = Elementwise.Multiply(mu_y, Ddown);
        double[,] d3 = Elementwise.Multiply(mu_x, Dright);
        double[,] d4 = Elementwise.Multiply(mu_x, Dleft);



        for (int i = 1; i < J; i++)
        {
            for (int j = 1; j < K; j++)
            {
                T[i, j] = T[i, j] + (d1[i - 1, j - 1] * (Tb[i, j + 1] - Tb[i, j])) -
                                    (d2[i - 1, j - 1] * (Tb[i, j] - Tb[i, j - 1])) +
                                    (d3[i - 1, j - 1] * (Tb[i + 1, j] - Tb[i, j])) -
                                    (d4[i - 1, j - 1] * (Tb[i, j] - Tb[i - 1, j]));
            }
        }
        //print(T.Length);
        t = t + (float)dt;


        T = T.Add(Elementwise.Multiply(F, dt));




        Generate(T);

        return T;
        //}
    }

}
