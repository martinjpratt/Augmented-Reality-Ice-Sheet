using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using Accord.Math;


public class Build3DSheet : MonoBehaviour {

	public float J = 40;
	public float dtyears = 20.0f;
	public float L = 1200e3f;
	public float t1 = 200;
	public float t2 = 20000;
	public float secpera = 31556926;
    public double[,] Mnew = new double[41,41];

    double[,] Hinit;
    double[,] a;
    int[] j = new int[39];
    int[] k = new int[39];
    int[] nk = new int[39];
    int[] sk = new int[39];
    int[] ej = new int[39];
    int[] wj = new int[39];
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
    float t = 0;
    float g = 9.81f;
    float rho = 910.0f;
    float rhow = 1028.0f;

    private UnityEngine.Vector3[] vertices;
    Mesh mesh;

	// Use this for initialization
	void Start () {
		float dx = 2 * L / J;

		float[] x_temp = new float[(int)(2 * L / dx) + 1];
		float[] y_temp = new float[(int)(2 * L / dx) + 1];
		for (int i = 0; i < x_temp.Length; i++) {
			x_temp [i] = -L + (i * dx);
			y_temp [i] = -L + (i * dx);
		}

		var M = Matrix.MeshGrid (x_temp, y_temp);


        double[,] H1 = halfar (t1 * secpera, M.Item1, M.Item2);

        GetComponent<MeshFilter>().mesh = mesh = new Mesh();
        mesh.name = "Procedural Grid";
        
        Generate(H1);

        Hinit = Elementwise.Multiply(H1, 0.5f);
        a = Matrix.Zeros(41, 41);


    }

    private void Generate(double[,] h)
    {
        int xSize = 40;
        int zSize = 40;
        vertices = new UnityEngine.Vector3[(xSize + 1) * (zSize + 1)];
        Vector2[] uv = new Vector2[vertices.Length];
        for (int i = 0, y = 0; y <= zSize; y++)
        {
            for (int x = 0; x <= xSize; x++, i++)
            {
                vertices[i] = new UnityEngine.Vector3(x, (float)h[x,y], y);
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

        mesh.RecalculateNormals();
        mesh.RecalculateBounds();
        GetComponent<MeshCollider>().sharedMesh = mesh;
        GetComponent<MeshFilter>().mesh = mesh;
    }




    double[,] halfar(float t, float[,] x, float[,] y){

		float g = 9.81f;
		float rho = 910.0f;
		float n = 3;
		float A = 1.0e-16f / secpera;
		float Gamma = 2 * A * Mathf.Pow(rho * g, 3) / 5;

		float H0 = 3600;
		float R0 = 750e3f;
		float alpha = 1f/9f;
		float beta = 1f/18f;
		float t0 = (beta/Gamma) * Mathf.Pow(7f/4f,3) * (Mathf.Pow(R0,4)/Mathf.Pow(H0,7));

        var xPow = x.Pow(2);
        var yPow = y.Pow(2);

        var zPow = xPow.Add(yPow);
        var r = zPow.Sqrt();

        r = r.Divide(R0);
        t = t / t0;

        float dPow = (n + 1) / n;


        float tBeta = Mathf.Pow(t, beta);
        r = r.Divide(tBeta);
        r = r.Pow(dPow);
        r = r.Subtract(1);
        r = Elementwise.Multiply(r, -1);

        var inside = r;

        for (int i = 0; i < 41; i++)
        {
            for (int j = 0; j < 41; j++)
            {
                if (inside[i,j] < 0)
                {
                    inside[i, j] = 0;
                }
            }
        }


        float tAlpha = Mathf.Pow(t, alpha);
        float ePow = n / (2f * n + 1f);


        inside = inside.Pow(ePow);

        inside = inside.Divide(tAlpha);
        var H1 = Elementwise.Multiply(H0, inside);
        return H1;
	}


    
	// Update is called once per frame
	void Update () {

        float Lx = L;
        float Ly = L;
        float K = J;
        double[,] H0 = Hinit;
        float deltat = dtyears * secpera;
        float tf = 10e4f * secpera;
        double[,] b = a;
        double[,] M0 = a;
        float A = 1e-15f/secpera;

        
        float Gamma = 2 * A * Mathf.Pow(rho * g, 3) / 5;
        float f1 = rho / rhow;

        float dx = 2f * Lx / J;
        float dy = 2f * Ly / K;
        float N = 5000f;
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

        HTemp0 = H.Get(j,nk);
        HTemp1 = H.Get(j, k);
        HTemp2 = HTemp0.Add(HTemp1);
        double[,] Hup = Elementwise.Multiply(HTemp2, 0.5);
        HTemp0 = H.Get(j, k);
        HTemp1 = H.Get(j, sk);
        HTemp2 = HTemp0.Add(HTemp1);
        double[,] Hdn = Elementwise.Multiply(HTemp2, 0.5);
        HTemp0 = H.Get(ej, k);
        HTemp1 = H.Get(j, k);
        HTemp2 = HTemp0.Add(HTemp1);
        double[,] Hrt = Elementwise.Multiply(HTemp2, 0.5);
        HTemp0 = H.Get(j, k);
        HTemp1 = H.Get(wj, k);
        HTemp2 = HTemp0.Add(HTemp1);
        double[,] Hlt = Elementwise.Multiply(HTemp2, 0.5);

        double[,] h = H;

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
        a2temp1 = a2temp1.Divide(denom1);
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


        double[,] tempDup = Elementwise.Multiply(Hup.Pow(5), a2up);
        double[,] Dup = Elementwise.Multiply(Gamma, tempDup);
        double[,] tempDdn = Elementwise.Multiply(Hup.Pow(5), a2dn);
        double[,] Ddn = Elementwise.Multiply(Gamma, tempDdn);
        double[,] tempDrt = Elementwise.Multiply(Hup.Pow(5), a2rt);
        double[,] Drt = Elementwise.Multiply(Gamma, tempDrt);
        double[,] tempDlt = Elementwise.Multiply(Hup.Pow(5), a2lt);
        double[,] Dlt = Elementwise.Multiply(Gamma, tempDlt);

        
        H = diffusion2(Lx, Ly, J, K, Dup, Ddn, Drt, Dlt, H, deltat, Mnew, b);

        t = t + deltat;
        Mnew = new double[41, 41];
    }
    
    private double[,] diffusion2(float Lx, float Ly, float J, float K, double[,] Dup, double[,] Ddown, double[,] Dright, double[,] Dleft, double[,] T0, float tf, double[,] F, double[,] b)
    {
        float dx = 2 * (Lx / J);
        float dy = 2 * (Ly / K);
        double dt;
        float t = 0.0f;
        int count = 0;
        var T = T0;

        double maxDup = 0;
        double maxDdn = 0;
        double maxDrt = 0;
        double maxDlt = 0;
        double maxD = 0;
        //while (t < tf)
        //{
            for (int m = 0; m < 39; m++)
            {
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


            if (maxD <= 0.0f)
            {
                dt = tf - t;
            }
            else
            {
                var dt0 = 0.25f * (Mathf.Pow(dx, 2) / maxD);
                dt = Math.Min(dt0, tf - t);
            }

        var mu_x = dt / (dx * dx);
        var mu_y = dt / (dy * dy);
        var Tb = T.Add(b);

        var d1 = Elementwise.Multiply(mu_y, Dup);
        var d2 = Elementwise.Multiply(mu_y, Ddown);
        var d3 = Elementwise.Multiply(mu_x, Dright);
        var d4 = Elementwise.Multiply(mu_x, Dleft);

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



        Generate(T.Add(Elementwise.Multiply(F,dt)));
        
        return T;
        //}
    }
    
}
