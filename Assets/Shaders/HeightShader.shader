// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/HeightShader" 
	{
	Properties
		{
		_MainTex("Color (RGB) Alpha (A)", 2D) = "white" {}
		_HeightMin("Height Min", Float) = -1
		_HeightMax("Height Max", Float) = 1
		_ColorMin("Tint Color At Min", Color) = (0,0,0,0)
		_ColorMax("Tint Color At Max", Color) = (1,1,1,1)
	    _ProjectionHeight("Projection Height", Float) = 1
		_ProjectionRange("Projection Padding", Float) = 0.05
		}

	SubShader
		{
			Tags { "Queue" = "Transparent" "RenderType" = "Transparent" }
			LOD 200

			CGPROGRAM
			#pragma surface surf Lambert alpha

			#pragma target 3.0

			sampler2D _MainTex;
			fixed4 _ColorMin;
			fixed4 _ColorMax;
			float _HeightMin;
			float _HeightMax;
			half _ProjectionRange;
			half _ProjectionHeight;

			struct Input
			{
				float2 uv_MainTex;
				float3 worldPos;
			};

			void surf(Input IN, inout SurfaceOutput o)
			{
				half4 c = tex2D(_MainTex, IN.uv_MainTex);
				float h = (_HeightMax - IN.worldPos.y) / (_HeightMax - _HeightMin);
				fixed4 tintColor = lerp(_ColorMax.rgba, _ColorMin.rgba, h);
				
				//float height = tex2D(_MainTex, IN.uv_MainTex).r * _ProjectionHeight;
				//float heightDist = height - IN.worldPos.y;
				//clip(_ProjectionRange - abs(heightDist));

				
				o.Albedo = c.rgb * tintColor.rgb;
				o.Alpha = c.a * tintColor.a;
			}
			ENDCG
		}
		Fallback "Diffuse"
	}
