#include "cbase.h"
#include "skeleton_player.h"

LINK_ENTITY_TO_CLASS( player, CSkeletonPlayer );

void CSkeletonPlayer::Spawn()
{
	// Dying without a player model crashes the client
	SetModel("models/player.mdl");

	BaseClass::Spawn();
}

// Delete this block (and its accompanying declarations) if your project is single-player.
#ifdef GAME_DLL

void CSkeletonPlayer::CreateViewModel( int index )
{
	Assert( index >= 0 && index < MAX_VIEWMODELS );

	if ( GetViewModel(index) )
		return;

	CPredictedViewModel* vm = (CPredictedViewModel*)CreateEntityByName( "predicted_viewmodel" );
	if ( vm )
	{
		vm->SetAbsOrigin( GetAbsOrigin() );
		vm->SetOwner( this );
		vm->SetIndex( index );
		DispatchSpawn( vm );
		vm->FollowEntity( this, false );
		m_hViewModel.Set( index, vm );
	}
}

#include "..\server\ilagcompensationmanager.h"

void CSkeletonPlayer::FireBullets ( const FireBulletsInfo_t &info )
{
	lagcompensation->StartLagCompensation( this, this->GetCurrentCommand() );

	BaseClass::FireBullets(info);

	lagcompensation->FinishLagCompensation( this );
}
#endif