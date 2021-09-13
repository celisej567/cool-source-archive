#include "cbase.h"
#include "clientmode_shared.h"
#include "ivmodemanager.h"
#include "c_weapon__stubs.h"

ConVar default_fov( "default_fov", "90", FCVAR_CHEAT );

STUB_WEAPON_CLASS( cycler_weapon, WeaponCycler, C_BaseCombatWeapon );

class ClientModeSkeleton : public ClientModeShared
{
	DECLARE_CLASS( ClientModeSkeleton, ClientModeShared );
public:
	void InitViewport()
	{
		m_pViewport = new CBaseViewport;
		m_pViewport->Start( gameuifuncs, gameeventmanager );
		m_pViewport->SetPaintBackgroundEnabled(false);
		m_pViewport->SetName( "Skeleton viewport" );
		m_pViewport->SetBounds( 0, 0, ScreenWidth(), ScreenHeight() );
	}
};

IClientMode* g_pClientMode = new ClientModeSkeleton;
IClientMode* GetClientModeNormal() { return g_pClientMode; }

class SkeletonModeManager : public IVModeManager
{
	void	Init() {}
	void	SwitchMode( bool commander, bool force ) {}
	void	LevelInit( const char* newmap ) { g_pClientMode->LevelInit(newmap); }
	void	LevelShutdown() { g_pClientMode->LevelShutdown(); }
};

IVModeManager* modemanager = (IVModeManager*)new SkeletonModeManager;