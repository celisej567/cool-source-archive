//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $Header: $
// $NoKeywords: $
//===========================================================================//

#include "BaseVSShader.h"

#include "fxctmp9/unlitgeneric_ps40.inc"
#include "fxctmp9/unlitgeneric_vs40.inc"

//extern ConVar r_flashlight_version2;

// HACKHACK
DEFINE_FALLBACK_SHADER(Vertexlitgeneric, UnlitGeneric)
DEFINE_FALLBACK_SHADER(Lightmappedgeneric, UnlitGeneric)
DEFINE_FALLBACK_SHADER(WorldVertexTransition, UnlitGeneric)

BEGIN_VS_SHADER( UnlitGeneric, "Help for UnlitGeneric" )

	BEGIN_SHADER_PARAMS
		SHADER_PARAM( ALBEDO, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "albedo (Base texture with no baked lighting)" )
		SHADER_PARAM( DETAIL, SHADER_PARAM_TYPE_TEXTURE, "shadertest/detail", "detail texture" )
		SHADER_PARAM( DETAILFRAME, SHADER_PARAM_TYPE_INTEGER, "0", "frame number for $detail" )
		SHADER_PARAM( DETAILSCALE, SHADER_PARAM_TYPE_FLOAT, "4", "scale of the detail texture" )
		SHADER_PARAM( ENVMAP, SHADER_PARAM_TYPE_TEXTURE, "shadertest/shadertest_env", "envmap" )
		SHADER_PARAM( ENVMAPFRAME, SHADER_PARAM_TYPE_INTEGER, "", "envmap frame number" )
		SHADER_PARAM( ENVMAPMASK, SHADER_PARAM_TYPE_TEXTURE, "shadertest/shadertest_envmask", "envmap mask" )
		SHADER_PARAM( ENVMAPMASKFRAME, SHADER_PARAM_TYPE_INTEGER, "0", "" )
		SHADER_PARAM( ENVMAPMASKTRANSFORM, SHADER_PARAM_TYPE_MATRIX, "center .5 .5 scale 1 1 rotate 0 translate 0 0", "$envmapmask texcoord transform" )
		SHADER_PARAM( ENVMAPTINT, SHADER_PARAM_TYPE_COLOR, "[1 1 1]", "envmap tint" )
		SHADER_PARAM( ENVMAPCONTRAST, SHADER_PARAM_TYPE_FLOAT, "0.0", "contrast 0 == normal 1 == color*color" )
		SHADER_PARAM( ENVMAPSATURATION, SHADER_PARAM_TYPE_FLOAT, "1.0", "saturation 0 == greyscale 1 == normal" )
		SHADER_PARAM( ALPHATESTREFERENCE, SHADER_PARAM_TYPE_FLOAT, "0.7", "" )	
		SHADER_PARAM( VERTEXALPHATEST, SHADER_PARAM_TYPE_INTEGER, "0", "" )	
		SHADER_PARAM( HDRCOLORSCALE, SHADER_PARAM_TYPE_FLOAT, "1.0", "hdr color scale" )
		SHADER_PARAM( PHONGEXPONENT, SHADER_PARAM_TYPE_FLOAT, "5.0", "Phong exponent for local specular lights" )
		SHADER_PARAM( PHONGTINT, SHADER_PARAM_TYPE_VEC3, "5.0", "Phong tint for local specular lights" )
		SHADER_PARAM( PHONGALBEDOTINT, SHADER_PARAM_TYPE_BOOL, "1.0", "Apply tint by albedo (controlled by spec exponent texture" )
		SHADER_PARAM( LIGHTWARPTEXTURE, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "1D ramp texture for tinting scalar diffuse term" )
		SHADER_PARAM( PHONGWARPTEXTURE, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "2D map for warping specular" )
		SHADER_PARAM( PHONGFRESNELRANGES, SHADER_PARAM_TYPE_VEC3, "[0  0.5  1]", "Parameters for remapping fresnel output" )
		SHADER_PARAM( PHONGBOOST, SHADER_PARAM_TYPE_FLOAT, "1.0", "Phong overbrightening factor (specular mask channel should be authored to account for this)" )
		SHADER_PARAM( PHONGEXPONENTTEXTURE, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "Phong Exponent map" )
		SHADER_PARAM( PHONG, SHADER_PARAM_TYPE_BOOL, "0", "enables phong lighting" )
		SHADER_PARAM( DETAILBLENDMODE, SHADER_PARAM_TYPE_INTEGER, "0", "mode for combining detail texture with base. 0=normal, 1= additive, 2=alpha blend detail over base, 3=crossfade" )
		SHADER_PARAM( DETAILBLENDFACTOR, SHADER_PARAM_TYPE_FLOAT, "1", "blend amount for detail texture." )

		SHADER_PARAM( SELFILLUMMASK, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "If we bind a texture here, it overrides base alpha (if any) for self illum" )

		SHADER_PARAM( DISTANCEALPHA, SHADER_PARAM_TYPE_BOOL, "0", "Use distance-coded alpha generated from hi-res texture by vtex.")
		SHADER_PARAM( DISTANCEALPHAFROMDETAIL, SHADER_PARAM_TYPE_BOOL, "0", "Take the distance-coded alpha mask from the detail texture.")

		SHADER_PARAM( SOFTEDGES, SHADER_PARAM_TYPE_BOOL, "0", "Enable soft edges to distance coded textures.")
		SHADER_PARAM( SCALEEDGESOFTNESSBASEDONSCREENRES, SHADER_PARAM_TYPE_BOOL, "0", "Scale the size of the soft edges based upon resolution. 1024x768 = nominal.")
	    SHADER_PARAM( EDGESOFTNESSSTART, SHADER_PARAM_TYPE_FLOAT, "0.6", "Start value for soft edges for distancealpha.");
		SHADER_PARAM( EDGESOFTNESSEND, SHADER_PARAM_TYPE_FLOAT, "0.5", "End value for soft edges for distancealpha.");

		SHADER_PARAM( GLOW, SHADER_PARAM_TYPE_BOOL, "0", "Enable glow/shadow for distance coded textures.")
		SHADER_PARAM( GLOWCOLOR, SHADER_PARAM_TYPE_COLOR, "[1 1 1]", "color of outter glow for distance coded line art." )
		SHADER_PARAM( GLOWALPHA, SHADER_PARAM_TYPE_FLOAT, "1", "Base glow alpha amount for glows/shadows with distance alpha." )
		SHADER_PARAM( GLOWSTART, SHADER_PARAM_TYPE_FLOAT, "0.7", "start value for glow/shadow")
		SHADER_PARAM( GLOWEND, SHADER_PARAM_TYPE_FLOAT, "0.5", "end value for glow/shadow")
		SHADER_PARAM( GLOWX, SHADER_PARAM_TYPE_FLOAT, "0", "texture offset x for glow mask.")
		SHADER_PARAM( GLOWY, SHADER_PARAM_TYPE_FLOAT, "0", "texture offset y for glow mask.")

		SHADER_PARAM( OUTLINE, SHADER_PARAM_TYPE_BOOL, "0", "Enable outline for distance coded textures.")
		SHADER_PARAM( OUTLINECOLOR, SHADER_PARAM_TYPE_COLOR, "[1 1 1]", "color of outline for distance coded images." )
		SHADER_PARAM( OUTLINEALPHA, SHADER_PARAM_TYPE_FLOAT, "0.0", "alpha value for outline")
		SHADER_PARAM( OUTLINESTART0, SHADER_PARAM_TYPE_FLOAT, "0.0", "outer start value for outline")
		SHADER_PARAM( OUTLINESTART1, SHADER_PARAM_TYPE_FLOAT, "0.0", "inner start value for outline")
		SHADER_PARAM( OUTLINEEND0, SHADER_PARAM_TYPE_FLOAT, "0.0", "inner end value for outline")
		SHADER_PARAM( OUTLINEEND1, SHADER_PARAM_TYPE_FLOAT, "0.0", "outer end value for outline")
		SHADER_PARAM( SCALEOUTLINESOFTNESSBASEDONSCREENRES, SHADER_PARAM_TYPE_BOOL, "0", "Scale the size of the soft part of the outline based upon resolution. 1024x768 = nominal.")

		SHADER_PARAM( SEPARATEDETAILUVS, SHADER_PARAM_TYPE_BOOL, "0", "Use texcoord1 for detail texture" )

		SHADER_PARAM( GAMMACOLORREAD, SHADER_PARAM_TYPE_INTEGER, "0", "Disables SRGB conversion of color texture read." )
		SHADER_PARAM( LINEARWRITE, SHADER_PARAM_TYPE_INTEGER, "0", "Disables SRGB conversion of shader results." )

		SHADER_PARAM( DEPTHBLEND, SHADER_PARAM_TYPE_INTEGER, "0", "fade at intersection boundaries" )
		SHADER_PARAM( DEPTHBLENDSCALE, SHADER_PARAM_TYPE_FLOAT, "50.0", "Amplify or reduce DEPTHBLEND fading. Lower values make harder edges." )
		SHADER_PARAM( RECEIVEFLASHLIGHT, SHADER_PARAM_TYPE_INTEGER, "0", "Forces this material to receive flashlights." )

	END_SHADER_PARAMS

	SHADER_INIT_PARAMS()
	{
	}

	SHADER_FALLBACK
	{
		if( g_pHardwareConfig->GetDXSupportLevel() < 90 )
		{
			return "Wireframe";
		}
		return 0;
	}

	SHADER_INIT
	{
		if (params[BASETEXTURE]->IsDefined())
		{
			LoadTexture(BASETEXTURE);
		}
	}

		SHADER_DRAW
	{
		bool bDrawStandardPass = true;

		bool bHasVertexColor = IS_FLAG_SET(MATERIAL_VAR_VERTEXCOLOR);
		bool bHasVertexAlpha = IS_FLAG_SET(MATERIAL_VAR_VERTEXALPHA);

		if (bDrawStandardPass)
		{
			BlendType_t nBlendType = EvaluateBlendRequirements(BASETEXTURE, true);
			bool bFullyOpaque = (nBlendType != BT_BLENDADD) && (nBlendType != BT_BLEND) && !IS_FLAG_SET(MATERIAL_VAR_ALPHATEST); //dest alpha is free for special use

			SHADOW_STATE
			{
				// Either we've got a constant modulation
				bool isTranslucent = IsAlphaModulating();

			// Or we've got a texture alpha on either texture
			isTranslucent = isTranslucent || TextureIsTranslucent(BASETEXTURE, true);

			if (isTranslucent)
			{
				if (IS_FLAG_SET(MATERIAL_VAR_ADDITIVE))
				{
					EnableAlphaBlending(SHADER_BLEND_SRC_ALPHA, SHADER_BLEND_ONE);
				}
				else
				{
					EnableAlphaBlending(SHADER_BLEND_SRC_ALPHA, SHADER_BLEND_ONE_MINUS_SRC_ALPHA);
				}
			}
			else
			{
				if (IS_FLAG_SET(MATERIAL_VAR_ADDITIVE))
				{
					EnableAlphaBlending(SHADER_BLEND_ONE, SHADER_BLEND_ONE);
				}
				else
				{
					DisableAlphaBlending();
				}
			}


			// Set stream format (note that this shader supports compression)
			unsigned int flags = VERTEX_POSITION | VERTEX_NORMAL | VERTEX_FORMAT_COMPRESSED;
			if (bHasVertexColor || bHasVertexAlpha)
			{
				flags |= VERTEX_COLOR;
			}
			int nTexCoordCount = 1;
			int userDataSize = 0;
			if (IS_FLAG_SET(MATERIAL_VAR_VERTEXCOLOR))
			{
				flags |= VERTEX_COLOR;
			}
			int pTexCoordDim[1] = { 4 };
			pShaderShadow->VertexShaderVertexFormat(flags, nTexCoordCount, pTexCoordDim, userDataSize);

			SetVertexShaderConstantBuffer(0, SHADER_CONSTANTBUFFER_SKINNING);
			SetVertexShaderConstantBuffer(1, SHADER_CONSTANTBUFFER_PERFRAME);
			SetVertexShaderConstantBuffer(2, SHADER_CONSTANTBUFFER_PERSCENE);

			SetPixelShaderConstantBuffer(0, SHADER_CONSTANTBUFFER_PERFRAME);
			SetPixelShaderConstantBuffer(1, SHADER_CONSTANTBUFFER_PERSCENE);

			DECLARE_STATIC_VERTEX_SHADER(unlitgeneric_vs40);
			SET_STATIC_VERTEX_SHADER_COMBO(VERTEXCOLOR, bHasVertexColor || bHasVertexAlpha);
			SET_STATIC_VERTEX_SHADER_COMBO(MODEL, 1);
			SET_STATIC_VERTEX_SHADER(unlitgeneric_vs40);

			DECLARE_STATIC_PIXEL_SHADER(unlitgeneric_ps40);
			SET_STATIC_PIXEL_SHADER(unlitgeneric_ps40);

			DefaultFog();

			pShaderShadow->EnableAlphaWrites(bFullyOpaque);
		}
		DYNAMIC_STATE
		{
			BindTexture(SHADER_SAMPLER0, BASETEXTURE, FRAME);

			//pShaderAPI->GetFogParamsAndColor(consts.FogParams.Base(), consts.FogColor.Base());

			//StoreVertexShaderTextureTransform(consts.BaseTextureTransform, BASETEXTURETRANSFORM);
			//StoreVertexShaderTextureTransform(consts.BaseTexture2Transform, TEXTURE2TRANSFORM);

			//SetModulationDynamicState_LinearColorSpace(consts.ModulationColor);

			//UPDATE_CONSTANT_BUFFER(UnlitTwoTexture, consts);

			//MaterialFogMode_t fogType = pShaderAPI->GetSceneFogMode();
			//int fogIndex = (fogType == MATERIAL_FOG_LINEAR_BELOW_FOG_Z) ? 1 : 0;
			//int numBones = pShaderAPI->GetCurrentNumBones();

			DECLARE_DYNAMIC_VERTEX_SHADER(unlitgeneric_vs40);
			SET_DYNAMIC_VERTEX_SHADER(unlitgeneric_vs40);

			DECLARE_DYNAMIC_PIXEL_SHADER(unlitgeneric_ps40);
			SET_DYNAMIC_PIXEL_SHADER(unlitgeneric_ps40);
		}
		Draw();
	}
	else
	{
			// Skip this pass!
			Draw(false);
		}
	}
END_SHADER
