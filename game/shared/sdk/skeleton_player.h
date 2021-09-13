#include "cbase.h"
#include "predicted_viewmodel.h"

#ifdef CLIENT_DLL
	#define CSkeletonPlayer C_SkeletonPlayer
#endif

class CSkeletonPlayer : public CBasePlayer
{
public:
	DECLARE_CLASS( CSkeletonPlayer, CBasePlayer );

	virtual void Spawn();

#ifdef GAME_DLL
	// Create a predicted viewmodel
	void CreateViewModel( int index );

	// Lag compensate when firing bullets
	void FireBullets ( const FireBulletsInfo_t &info );
#endif
};