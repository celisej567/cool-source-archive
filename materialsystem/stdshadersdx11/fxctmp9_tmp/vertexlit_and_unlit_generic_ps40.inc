#include "shaderlib/cshader.h"
class vertexlit_and_unlit_generic_ps40_Static_Index
{
private:
	int m_nDETAILTEXTURE;
#ifdef _DEBUG
	bool m_bDETAILTEXTURE;
#endif
public:
	void SetDETAILTEXTURE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDETAILTEXTURE = i;
#ifdef _DEBUG
		m_bDETAILTEXTURE = true;
#endif
	}
	void SetDETAILTEXTURE( bool i )
	{
		m_nDETAILTEXTURE = i ? 1 : 0;
#ifdef _DEBUG
		m_bDETAILTEXTURE = true;
#endif
	}
private:
	int m_nBUMPMAP;
#ifdef _DEBUG
	bool m_bBUMPMAP;
#endif
public:
	void SetBUMPMAP( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nBUMPMAP = i;
#ifdef _DEBUG
		m_bBUMPMAP = true;
#endif
	}
	void SetBUMPMAP( bool i )
	{
		m_nBUMPMAP = i ? 1 : 0;
#ifdef _DEBUG
		m_bBUMPMAP = true;
#endif
	}
private:
	int m_nCUBEMAP;
#ifdef _DEBUG
	bool m_bCUBEMAP;
#endif
public:
	void SetCUBEMAP( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nCUBEMAP = i;
#ifdef _DEBUG
		m_bCUBEMAP = true;
#endif
	}
	void SetCUBEMAP( bool i )
	{
		m_nCUBEMAP = i ? 1 : 0;
#ifdef _DEBUG
		m_bCUBEMAP = true;
#endif
	}
private:
	int m_nDIFFUSELIGHTING;
#ifdef _DEBUG
	bool m_bDIFFUSELIGHTING;
#endif
public:
	void SetDIFFUSELIGHTING( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDIFFUSELIGHTING = i;
#ifdef _DEBUG
		m_bDIFFUSELIGHTING = true;
#endif
	}
	void SetDIFFUSELIGHTING( bool i )
	{
		m_nDIFFUSELIGHTING = i ? 1 : 0;
#ifdef _DEBUG
		m_bDIFFUSELIGHTING = true;
#endif
	}
private:
	int m_nENVMAPMASK;
#ifdef _DEBUG
	bool m_bENVMAPMASK;
#endif
public:
	void SetENVMAPMASK( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nENVMAPMASK = i;
#ifdef _DEBUG
		m_bENVMAPMASK = true;
#endif
	}
	void SetENVMAPMASK( bool i )
	{
		m_nENVMAPMASK = i ? 1 : 0;
#ifdef _DEBUG
		m_bENVMAPMASK = true;
#endif
	}
private:
	int m_nBASEALPHAENVMAPMASK;
#ifdef _DEBUG
	bool m_bBASEALPHAENVMAPMASK;
#endif
public:
	void SetBASEALPHAENVMAPMASK( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nBASEALPHAENVMAPMASK = i;
#ifdef _DEBUG
		m_bBASEALPHAENVMAPMASK = true;
#endif
	}
	void SetBASEALPHAENVMAPMASK( bool i )
	{
		m_nBASEALPHAENVMAPMASK = i ? 1 : 0;
#ifdef _DEBUG
		m_bBASEALPHAENVMAPMASK = true;
#endif
	}
private:
	int m_nSELFILLUM;
#ifdef _DEBUG
	bool m_bSELFILLUM;
#endif
public:
	void SetSELFILLUM( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSELFILLUM = i;
#ifdef _DEBUG
		m_bSELFILLUM = true;
#endif
	}
	void SetSELFILLUM( bool i )
	{
		m_nSELFILLUM = i ? 1 : 0;
#ifdef _DEBUG
		m_bSELFILLUM = true;
#endif
	}
private:
	int m_nSELFILLUMMASK;
#ifdef _DEBUG
	bool m_bSELFILLUMMASK;
#endif
public:
	void SetSELFILLUMMASK( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSELFILLUMMASK = i;
#ifdef _DEBUG
		m_bSELFILLUMMASK = true;
#endif
	}
	void SetSELFILLUMMASK( bool i )
	{
		m_nSELFILLUMMASK = i ? 1 : 0;
#ifdef _DEBUG
		m_bSELFILLUMMASK = true;
#endif
	}
private:
	int m_nSELFILLUMFRESNEL;
#ifdef _DEBUG
	bool m_bSELFILLUMFRESNEL;
#endif
public:
	void SetSELFILLUMFRESNEL( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSELFILLUMFRESNEL = i;
#ifdef _DEBUG
		m_bSELFILLUMFRESNEL = true;
#endif
	}
	void SetSELFILLUMFRESNEL( bool i )
	{
		m_nSELFILLUMFRESNEL = i ? 1 : 0;
#ifdef _DEBUG
		m_bSELFILLUMFRESNEL = true;
#endif
	}
private:
	int m_nNORMALMAPALPHAENVMAPMASK;
#ifdef _DEBUG
	bool m_bNORMALMAPALPHAENVMAPMASK;
#endif
public:
	void SetNORMALMAPALPHAENVMAPMASK( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nNORMALMAPALPHAENVMAPMASK = i;
#ifdef _DEBUG
		m_bNORMALMAPALPHAENVMAPMASK = true;
#endif
	}
	void SetNORMALMAPALPHAENVMAPMASK( bool i )
	{
		m_nNORMALMAPALPHAENVMAPMASK = i ? 1 : 0;
#ifdef _DEBUG
		m_bNORMALMAPALPHAENVMAPMASK = true;
#endif
	}
private:
	int m_nHALFLAMBERT;
#ifdef _DEBUG
	bool m_bHALFLAMBERT;
#endif
public:
	void SetHALFLAMBERT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nHALFLAMBERT = i;
#ifdef _DEBUG
		m_bHALFLAMBERT = true;
#endif
	}
	void SetHALFLAMBERT( bool i )
	{
		m_nHALFLAMBERT = i ? 1 : 0;
#ifdef _DEBUG
		m_bHALFLAMBERT = true;
#endif
	}
private:
	int m_nLIGHTWARPTEXTURE;
#ifdef _DEBUG
	bool m_bLIGHTWARPTEXTURE;
#endif
public:
	void SetLIGHTWARPTEXTURE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nLIGHTWARPTEXTURE = i;
#ifdef _DEBUG
		m_bLIGHTWARPTEXTURE = true;
#endif
	}
	void SetLIGHTWARPTEXTURE( bool i )
	{
		m_nLIGHTWARPTEXTURE = i ? 1 : 0;
#ifdef _DEBUG
		m_bLIGHTWARPTEXTURE = true;
#endif
	}
private:
	int m_nVERTEXCOLOR;
#ifdef _DEBUG
	bool m_bVERTEXCOLOR;
#endif
public:
	void SetVERTEXCOLOR( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nVERTEXCOLOR = i;
#ifdef _DEBUG
		m_bVERTEXCOLOR = true;
#endif
	}
	void SetVERTEXCOLOR( bool i )
	{
		m_nVERTEXCOLOR = i ? 1 : 0;
#ifdef _DEBUG
		m_bVERTEXCOLOR = true;
#endif
	}
private:
	int m_nSELFILLUM_ENVMAPMASK_ALPHA;
#ifdef _DEBUG
	bool m_bSELFILLUM_ENVMAPMASK_ALPHA;
#endif
public:
	void SetSELFILLUM_ENVMAPMASK_ALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSELFILLUM_ENVMAPMASK_ALPHA = i;
#ifdef _DEBUG
		m_bSELFILLUM_ENVMAPMASK_ALPHA = true;
#endif
	}
	void SetSELFILLUM_ENVMAPMASK_ALPHA( bool i )
	{
		m_nSELFILLUM_ENVMAPMASK_ALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bSELFILLUM_ENVMAPMASK_ALPHA = true;
#endif
	}
private:
	int m_nSEAMLESS_BASE;
#ifdef _DEBUG
	bool m_bSEAMLESS_BASE;
#endif
public:
	void SetSEAMLESS_BASE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSEAMLESS_BASE = i;
#ifdef _DEBUG
		m_bSEAMLESS_BASE = true;
#endif
	}
	void SetSEAMLESS_BASE( bool i )
	{
		m_nSEAMLESS_BASE = i ? 1 : 0;
#ifdef _DEBUG
		m_bSEAMLESS_BASE = true;
#endif
	}
private:
	int m_nSEAMLESS_DETAIL;
#ifdef _DEBUG
	bool m_bSEAMLESS_DETAIL;
#endif
public:
	void SetSEAMLESS_DETAIL( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSEAMLESS_DETAIL = i;
#ifdef _DEBUG
		m_bSEAMLESS_DETAIL = true;
#endif
	}
	void SetSEAMLESS_DETAIL( bool i )
	{
		m_nSEAMLESS_DETAIL = i ? 1 : 0;
#ifdef _DEBUG
		m_bSEAMLESS_DETAIL = true;
#endif
	}
private:
	int m_nDISTANCEALPHA;
#ifdef _DEBUG
	bool m_bDISTANCEALPHA;
#endif
public:
	void SetDISTANCEALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDISTANCEALPHA = i;
#ifdef _DEBUG
		m_bDISTANCEALPHA = true;
#endif
	}
	void SetDISTANCEALPHA( bool i )
	{
		m_nDISTANCEALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bDISTANCEALPHA = true;
#endif
	}
private:
	int m_nDISTANCEALPHAFROMDETAIL;
#ifdef _DEBUG
	bool m_bDISTANCEALPHAFROMDETAIL;
#endif
public:
	void SetDISTANCEALPHAFROMDETAIL( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDISTANCEALPHAFROMDETAIL = i;
#ifdef _DEBUG
		m_bDISTANCEALPHAFROMDETAIL = true;
#endif
	}
	void SetDISTANCEALPHAFROMDETAIL( bool i )
	{
		m_nDISTANCEALPHAFROMDETAIL = i ? 1 : 0;
#ifdef _DEBUG
		m_bDISTANCEALPHAFROMDETAIL = true;
#endif
	}
private:
	int m_nSOFT_MASK;
#ifdef _DEBUG
	bool m_bSOFT_MASK;
#endif
public:
	void SetSOFT_MASK( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSOFT_MASK = i;
#ifdef _DEBUG
		m_bSOFT_MASK = true;
#endif
	}
	void SetSOFT_MASK( bool i )
	{
		m_nSOFT_MASK = i ? 1 : 0;
#ifdef _DEBUG
		m_bSOFT_MASK = true;
#endif
	}
private:
	int m_nOUTLINE;
#ifdef _DEBUG
	bool m_bOUTLINE;
#endif
public:
	void SetOUTLINE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nOUTLINE = i;
#ifdef _DEBUG
		m_bOUTLINE = true;
#endif
	}
	void SetOUTLINE( bool i )
	{
		m_nOUTLINE = i ? 1 : 0;
#ifdef _DEBUG
		m_bOUTLINE = true;
#endif
	}
private:
	int m_nOUTER_GLOW;
#ifdef _DEBUG
	bool m_bOUTER_GLOW;
#endif
public:
	void SetOUTER_GLOW( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nOUTER_GLOW = i;
#ifdef _DEBUG
		m_bOUTER_GLOW = true;
#endif
	}
	void SetOUTER_GLOW( bool i )
	{
		m_nOUTER_GLOW = i ? 1 : 0;
#ifdef _DEBUG
		m_bOUTER_GLOW = true;
#endif
	}
private:
	int m_nDEPTHBLEND;
#ifdef _DEBUG
	bool m_bDEPTHBLEND;
#endif
public:
	void SetDEPTHBLEND( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDEPTHBLEND = i;
#ifdef _DEBUG
		m_bDEPTHBLEND = true;
#endif
	}
	void SetDEPTHBLEND( bool i )
	{
		m_nDEPTHBLEND = i ? 1 : 0;
#ifdef _DEBUG
		m_bDEPTHBLEND = true;
#endif
	}
private:
	int m_nALPHATEST;
#ifdef _DEBUG
	bool m_bALPHATEST;
#endif
public:
	void SetALPHATEST( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nALPHATEST = i;
#ifdef _DEBUG
		m_bALPHATEST = true;
#endif
	}
	void SetALPHATEST( bool i )
	{
		m_nALPHATEST = i ? 1 : 0;
#ifdef _DEBUG
		m_bALPHATEST = true;
#endif
	}
private:
	int m_nBLENDTINTBYBASEALPHA;
#ifdef _DEBUG
	bool m_bBLENDTINTBYBASEALPHA;
#endif
public:
	void SetBLENDTINTBYBASEALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nBLENDTINTBYBASEALPHA = i;
#ifdef _DEBUG
		m_bBLENDTINTBYBASEALPHA = true;
#endif
	}
	void SetBLENDTINTBYBASEALPHA( bool i )
	{
		m_nBLENDTINTBYBASEALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bBLENDTINTBYBASEALPHA = true;
#endif
	}
public:
	vertexlit_and_unlit_generic_ps40_Static_Index( )
	{
#ifdef _DEBUG
		m_bDETAILTEXTURE = false;
#endif // _DEBUG
		m_nDETAILTEXTURE = 0;
#ifdef _DEBUG
		m_bBUMPMAP = false;
#endif // _DEBUG
		m_nBUMPMAP = 0;
#ifdef _DEBUG
		m_bCUBEMAP = false;
#endif // _DEBUG
		m_nCUBEMAP = 0;
#ifdef _DEBUG
		m_bDIFFUSELIGHTING = false;
#endif // _DEBUG
		m_nDIFFUSELIGHTING = 0;
#ifdef _DEBUG
		m_bENVMAPMASK = false;
#endif // _DEBUG
		m_nENVMAPMASK = 0;
#ifdef _DEBUG
		m_bBASEALPHAENVMAPMASK = false;
#endif // _DEBUG
		m_nBASEALPHAENVMAPMASK = 0;
#ifdef _DEBUG
		m_bSELFILLUM = false;
#endif // _DEBUG
		m_nSELFILLUM = 0;
#ifdef _DEBUG
		m_bSELFILLUMMASK = false;
#endif // _DEBUG
		m_nSELFILLUMMASK = 0;
#ifdef _DEBUG
		m_bSELFILLUMFRESNEL = false;
#endif // _DEBUG
		m_nSELFILLUMFRESNEL = 0;
#ifdef _DEBUG
		m_bNORMALMAPALPHAENVMAPMASK = false;
#endif // _DEBUG
		m_nNORMALMAPALPHAENVMAPMASK = 0;
#ifdef _DEBUG
		m_bHALFLAMBERT = false;
#endif // _DEBUG
		m_nHALFLAMBERT = 0;
#ifdef _DEBUG
		m_bLIGHTWARPTEXTURE = false;
#endif // _DEBUG
		m_nLIGHTWARPTEXTURE = 0;
#ifdef _DEBUG
		m_bVERTEXCOLOR = false;
#endif // _DEBUG
		m_nVERTEXCOLOR = 0;
#ifdef _DEBUG
		m_bSELFILLUM_ENVMAPMASK_ALPHA = false;
#endif // _DEBUG
		m_nSELFILLUM_ENVMAPMASK_ALPHA = 0;
#ifdef _DEBUG
		m_bSEAMLESS_BASE = false;
#endif // _DEBUG
		m_nSEAMLESS_BASE = 0;
#ifdef _DEBUG
		m_bSEAMLESS_DETAIL = false;
#endif // _DEBUG
		m_nSEAMLESS_DETAIL = 0;
#ifdef _DEBUG
		m_bDISTANCEALPHA = false;
#endif // _DEBUG
		m_nDISTANCEALPHA = 0;
#ifdef _DEBUG
		m_bDISTANCEALPHAFROMDETAIL = false;
#endif // _DEBUG
		m_nDISTANCEALPHAFROMDETAIL = 0;
#ifdef _DEBUG
		m_bSOFT_MASK = false;
#endif // _DEBUG
		m_nSOFT_MASK = 0;
#ifdef _DEBUG
		m_bOUTLINE = false;
#endif // _DEBUG
		m_nOUTLINE = 0;
#ifdef _DEBUG
		m_bOUTER_GLOW = false;
#endif // _DEBUG
		m_nOUTER_GLOW = 0;
#ifdef _DEBUG
		m_bDEPTHBLEND = false;
#endif // _DEBUG
		m_nDEPTHBLEND = 0;
#ifdef _DEBUG
		m_bALPHATEST = false;
#endif // _DEBUG
		m_nALPHATEST = 0;
#ifdef _DEBUG
		m_bBLENDTINTBYBASEALPHA = false;
#endif // _DEBUG
		m_nBLENDTINTBYBASEALPHA = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bDETAILTEXTURE && m_bBUMPMAP && m_bCUBEMAP && m_bDIFFUSELIGHTING && m_bENVMAPMASK && m_bBASEALPHAENVMAPMASK && m_bSELFILLUM && m_bSELFILLUMMASK && m_bSELFILLUMFRESNEL && m_bNORMALMAPALPHAENVMAPMASK && m_bHALFLAMBERT && m_bLIGHTWARPTEXTURE && m_bVERTEXCOLOR && m_bSELFILLUM_ENVMAPMASK_ALPHA && m_bSEAMLESS_BASE && m_bSEAMLESS_DETAIL && m_bDISTANCEALPHA && m_bDISTANCEALPHAFROMDETAIL && m_bSOFT_MASK && m_bOUTLINE && m_bOUTER_GLOW && m_bDEPTHBLEND && m_bALPHATEST && m_bBLENDTINTBYBASEALPHA;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 384 * m_nDETAILTEXTURE ) + ( 768 * m_nBUMPMAP ) + ( 1536 * m_nCUBEMAP ) + ( 3072 * m_nDIFFUSELIGHTING ) + ( 6144 * m_nENVMAPMASK ) + ( 12288 * m_nBASEALPHAENVMAPMASK ) + ( 24576 * m_nSELFILLUM ) + ( 49152 * m_nSELFILLUMMASK ) + ( 98304 * m_nSELFILLUMFRESNEL ) + ( 196608 * m_nNORMALMAPALPHAENVMAPMASK ) + ( 393216 * m_nHALFLAMBERT ) + ( 786432 * m_nLIGHTWARPTEXTURE ) + ( 1572864 * m_nVERTEXCOLOR ) + ( 3145728 * m_nSELFILLUM_ENVMAPMASK_ALPHA ) + ( 6291456 * m_nSEAMLESS_BASE ) + ( 12582912 * m_nSEAMLESS_DETAIL ) + ( 25165824 * m_nDISTANCEALPHA ) + ( 50331648 * m_nDISTANCEALPHAFROMDETAIL ) + ( 100663296 * m_nSOFT_MASK ) + ( 201326592 * m_nOUTLINE ) + ( 402653184 * m_nOUTER_GLOW ) + ( 805306368 * m_nDEPTHBLEND ) + ( 1610612736 * m_nALPHATEST ) + ( 3221225472 * m_nBLENDTINTBYBASEALPHA ) + 0;
	}
};
#define shaderStaticTest_vertexlit_and_unlit_generic_ps40 psh_forgot_to_set_static_DETAILTEXTURE + psh_forgot_to_set_static_BUMPMAP + psh_forgot_to_set_static_CUBEMAP + psh_forgot_to_set_static_DIFFUSELIGHTING + psh_forgot_to_set_static_ENVMAPMASK + psh_forgot_to_set_static_BASEALPHAENVMAPMASK + psh_forgot_to_set_static_SELFILLUM + psh_forgot_to_set_static_SELFILLUMMASK + psh_forgot_to_set_static_SELFILLUMFRESNEL + psh_forgot_to_set_static_NORMALMAPALPHAENVMAPMASK + psh_forgot_to_set_static_HALFLAMBERT + psh_forgot_to_set_static_LIGHTWARPTEXTURE + psh_forgot_to_set_static_VERTEXCOLOR + psh_forgot_to_set_static_SELFILLUM_ENVMAPMASK_ALPHA + psh_forgot_to_set_static_SEAMLESS_BASE + psh_forgot_to_set_static_SEAMLESS_DETAIL + psh_forgot_to_set_static_DISTANCEALPHA + psh_forgot_to_set_static_DISTANCEALPHAFROMDETAIL + psh_forgot_to_set_static_SOFT_MASK + psh_forgot_to_set_static_OUTLINE + psh_forgot_to_set_static_OUTER_GLOW + psh_forgot_to_set_static_DEPTHBLEND + psh_forgot_to_set_static_ALPHATEST + psh_forgot_to_set_static_BLENDTINTBYBASEALPHA + 0
class vertexlit_and_unlit_generic_ps40_Dynamic_Index
{
private:
	int m_nFLASHLIGHT;
#ifdef _DEBUG
	bool m_bFLASHLIGHT;
#endif
public:
	void SetFLASHLIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFLASHLIGHT = i;
#ifdef _DEBUG
		m_bFLASHLIGHT = true;
#endif
	}
	void SetFLASHLIGHT( bool i )
	{
		m_nFLASHLIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHT = true;
#endif
	}
private:
	int m_nFLASHLIGHTDEPTHFILTERMODE;
#ifdef _DEBUG
	bool m_bFLASHLIGHTDEPTHFILTERMODE;
#endif
public:
	void SetFLASHLIGHTDEPTHFILTERMODE( int i )
	{
		Assert( i >= 0 && i <= 2 );
		m_nFLASHLIGHTDEPTHFILTERMODE = i;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = true;
#endif
	}
	void SetFLASHLIGHTDEPTHFILTERMODE( bool i )
	{
		m_nFLASHLIGHTDEPTHFILTERMODE = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = true;
#endif
	}
private:
	int m_nFLASHLIGHTSHADOWS;
#ifdef _DEBUG
	bool m_bFLASHLIGHTSHADOWS;
#endif
public:
	void SetFLASHLIGHTSHADOWS( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFLASHLIGHTSHADOWS = i;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = true;
#endif
	}
	void SetFLASHLIGHTSHADOWS( bool i )
	{
		m_nFLASHLIGHTSHADOWS = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = true;
#endif
	}
private:
	int m_nAMBIENT_LIGHT;
#ifdef _DEBUG
	bool m_bAMBIENT_LIGHT;
#endif
public:
	void SetAMBIENT_LIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nAMBIENT_LIGHT = i;
#ifdef _DEBUG
		m_bAMBIENT_LIGHT = true;
#endif
	}
	void SetAMBIENT_LIGHT( bool i )
	{
		m_nAMBIENT_LIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bAMBIENT_LIGHT = true;
#endif
	}
private:
	int m_nPHONG;
#ifdef _DEBUG
	bool m_bPHONG;
#endif
public:
	void SetPHONG( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPHONG = i;
#ifdef _DEBUG
		m_bPHONG = true;
#endif
	}
	void SetPHONG( bool i )
	{
		m_nPHONG = i ? 1 : 0;
#ifdef _DEBUG
		m_bPHONG = true;
#endif
	}
private:
	int m_nWRINKLEMAP;
#ifdef _DEBUG
	bool m_bWRINKLEMAP;
#endif
public:
	void SetWRINKLEMAP( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nWRINKLEMAP = i;
#ifdef _DEBUG
		m_bWRINKLEMAP = true;
#endif
	}
	void SetWRINKLEMAP( bool i )
	{
		m_nWRINKLEMAP = i ? 1 : 0;
#ifdef _DEBUG
		m_bWRINKLEMAP = true;
#endif
	}
private:
	int m_nPHONGWARPTEXTURE;
#ifdef _DEBUG
	bool m_bPHONGWARPTEXTURE;
#endif
public:
	void SetPHONGWARPTEXTURE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPHONGWARPTEXTURE = i;
#ifdef _DEBUG
		m_bPHONGWARPTEXTURE = true;
#endif
	}
	void SetPHONGWARPTEXTURE( bool i )
	{
		m_nPHONGWARPTEXTURE = i ? 1 : 0;
#ifdef _DEBUG
		m_bPHONGWARPTEXTURE = true;
#endif
	}
private:
	int m_nRIMLIGHT;
#ifdef _DEBUG
	bool m_bRIMLIGHT;
#endif
public:
	void SetRIMLIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nRIMLIGHT = i;
#ifdef _DEBUG
		m_bRIMLIGHT = true;
#endif
	}
	void SetRIMLIGHT( bool i )
	{
		m_nRIMLIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bRIMLIGHT = true;
#endif
	}
public:
	vertexlit_and_unlit_generic_ps40_Dynamic_Index()
	{
#ifdef _DEBUG
		m_bFLASHLIGHT = false;
#endif // _DEBUG
		m_nFLASHLIGHT = 0;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = false;
#endif // _DEBUG
		m_nFLASHLIGHTDEPTHFILTERMODE = 0;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = false;
#endif // _DEBUG
		m_nFLASHLIGHTSHADOWS = 0;
#ifdef _DEBUG
		m_bAMBIENT_LIGHT = false;
#endif // _DEBUG
		m_nAMBIENT_LIGHT = 0;
#ifdef _DEBUG
		m_bPHONG = false;
#endif // _DEBUG
		m_nPHONG = 0;
#ifdef _DEBUG
		m_bWRINKLEMAP = false;
#endif // _DEBUG
		m_nWRINKLEMAP = 0;
#ifdef _DEBUG
		m_bPHONGWARPTEXTURE = false;
#endif // _DEBUG
		m_nPHONGWARPTEXTURE = 0;
#ifdef _DEBUG
		m_bRIMLIGHT = false;
#endif // _DEBUG
		m_nRIMLIGHT = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllDynamicVarsDefined = m_bFLASHLIGHT && m_bFLASHLIGHTDEPTHFILTERMODE && m_bFLASHLIGHTSHADOWS && m_bAMBIENT_LIGHT && m_bPHONG && m_bWRINKLEMAP && m_bPHONGWARPTEXTURE && m_bRIMLIGHT;
		Assert( bAllDynamicVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nFLASHLIGHT ) + ( 2 * m_nFLASHLIGHTDEPTHFILTERMODE ) + ( 6 * m_nFLASHLIGHTSHADOWS ) + ( 12 * m_nAMBIENT_LIGHT ) + ( 24 * m_nPHONG ) + ( 48 * m_nWRINKLEMAP ) + ( 96 * m_nPHONGWARPTEXTURE ) + ( 192 * m_nRIMLIGHT ) + 0;
	}
};
#define shaderDynamicTest_vertexlit_and_unlit_generic_ps40 psh_forgot_to_set_dynamic_FLASHLIGHT + psh_forgot_to_set_dynamic_FLASHLIGHTDEPTHFILTERMODE + psh_forgot_to_set_dynamic_FLASHLIGHTSHADOWS + psh_forgot_to_set_dynamic_AMBIENT_LIGHT + psh_forgot_to_set_dynamic_PHONG + psh_forgot_to_set_dynamic_WRINKLEMAP + psh_forgot_to_set_dynamic_PHONGWARPTEXTURE + psh_forgot_to_set_dynamic_RIMLIGHT + 0
