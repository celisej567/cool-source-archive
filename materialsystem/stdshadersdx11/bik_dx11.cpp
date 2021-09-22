#if 1
//========= Copyright © 1996-2006, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $Header: $
// $NoKeywords: $
//=============================================================================//

#include "BaseVSShader.h"

#include "bik_ps40.inc"
#include "bik_vs40.inc"

BEGIN_VS_SHADER( Bik, "Help for Bik" )
	BEGIN_SHADER_PARAMS
		SHADER_PARAM( YTEXTURE, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "Y Bink Texture" )
		SHADER_PARAM( CRTEXTURE, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "Cr Bink Texture" )
		SHADER_PARAM( CBTEXTURE, SHADER_PARAM_TYPE_TEXTURE, "shadertest/BaseTexture", "Cb Bink Texture" )
	END_SHADER_PARAMS

	SHADER_INIT_PARAMS()
	{
	}

	SHADER_FALLBACK
	{
		return 0;
	}

	DECLARE_CONSTANT_BUFFER(BikTest)

	SHADER_INIT
	{
		if ( params[YTEXTURE]->IsDefined() )
		{
			LoadTexture( YTEXTURE );
		}
			if ( params[CRTEXTURE]->IsDefined() )
			{
				LoadTexture( CRTEXTURE );
			}
			if ( params[CBTEXTURE]->IsDefined() )
			{
				LoadTexture( CBTEXTURE );
			}
	}

	SHADER_DRAW
	{
		SHADOW_STATE
		{
			pShaderShadow->EnableTexture( SHADER_SAMPLER0, true );
			pShaderShadow->EnableTexture( SHADER_SAMPLER1, true );
			pShaderShadow->EnableTexture( SHADER_SAMPLER2, true );

			unsigned int flags = VERTEX_POSITION;
			int numTexCoords = 1;
			pShaderShadow->VertexShaderVertexFormat( flags, numTexCoords, 0, 0 );

			SetVertexShaderConstantBuffer(1, SHADER_CONSTANTBUFFER_PERFRAME);
			SetVertexShaderConstantBuffer(2, SHADER_CONSTANTBUFFER_PERSCENE);

			DECLARE_STATIC_VERTEX_SHADER( bik_vs40 );
			SET_STATIC_VERTEX_SHADER( bik_vs40 );

			DECLARE_STATIC_PIXEL_SHADER(bik_ps40);
			SET_STATIC_PIXEL_SHADER(bik_ps40);

			pShaderShadow->EnableSRGBWrite( false );

		}
		DYNAMIC_STATE
		{
			BindTexture( SHADER_SAMPLER0, YTEXTURE, FRAME );
			BindTexture( SHADER_SAMPLER1, CRTEXTURE, FRAME );
			BindTexture( SHADER_SAMPLER2, CBTEXTURE, FRAME );

			DECLARE_DYNAMIC_VERTEX_SHADER( bik_vs40 );
			SET_DYNAMIC_VERTEX_SHADER_COMBO( DOWATERFOG,  0 );
			SET_DYNAMIC_VERTEX_SHADER( bik_vs40 );

			DECLARE_DYNAMIC_PIXEL_SHADER( bik_ps40 );
			SET_DYNAMIC_PIXEL_SHADER_COMBO( PIXELFOGTYPE, 0 );
			SET_DYNAMIC_PIXEL_SHADER( bik_ps40 );
		}
		Draw();
	}
END_SHADER
#endif