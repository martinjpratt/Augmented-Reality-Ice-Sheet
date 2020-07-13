// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Unlit/DataShader"
{
Properties {
		_HeatTex ("Texture", 2D) = "white" {}
        _CenterHeight ("Center Height", Float) = 0.0
        _MaxVariance ("Maximum Variance", Float) = 3.0
        _HighColor ("High Color", Color) = (1.0, 1.0, 1.0, 1.0)
        _LowColor ("Low Color", Color) = (0.0, 0.0, 0.0, 1.0)
	}
	SubShader {
		Tags {"Queue"="Transparent"}
		Blend SrcAlpha OneMinusSrcAlpha // Alpha blend

		Pass {
			CGPROGRAM
			#pragma vertex vert             
			#pragma fragment frag

			struct vertInput {
				float4 pos : POSITION;
			};  

			struct vertOutput {
				float4 pos : POSITION;
				fixed3 worldPos : TEXCOORD1;
			};

			vertOutput vert(vertInput input) {
				vertOutput o;
				o.pos = UnityObjectToClipPos(input.pos);
				o.worldPos = mul(unity_ObjectToWorld, input.pos).xyz;
				return o;
			}

			uniform int _Points_Length = 0;
			uniform float3 _Points [20];		// (x, y, z) = position
			uniform float2 _Properties [20];	// x = radius, y = intensity
            float _CenterHeight;
            float _MaxVariance;
            float4 _HighColor;
            float4 _LowColor;
            uniform float _DataArray[1681];


			sampler2D _HeatTex;

			half4 frag(vertOutput output) : COLOR {
				// Loops over all the points
				half h = 0;
				for (int i = 0; i < 1681; i ++)
				{
					// Calculates the contribution of each point
					//half di = distance(output.worldPos, _Points[i].xyz);

					//half ri = _Properties[i].x;
					//half hi = 1 - saturate(di / ri);
                    float diff = _DataArray[i] - _CenterHeight;
                    float cFactor = saturate(diff/(2*_MaxVariance) + 0.5);
					h += lerp(_LowColor, _HighColor, cFactor);
				}

				// Converts (0-1) according to the heat texture
				h = saturate(h);
				half4 color = tex2D(_HeatTex, fixed2(h, 0.5));
				return color;
			}
			ENDCG
		}
	} 
	Fallback "Diffuse"
}
