#include "cbase.h"

class C_BaseNetworkedRagdoll : public C_BaseAnimatingOverlay
{
public:
	DECLARE_CLASS( C_BaseNetworkedRagdoll, C_BaseAnimatingOverlay );
	DECLARE_CLIENTCLASS();
	
	C_BaseNetworkedRagdoll() {}
	~C_BaseNetworkedRagdoll();

	virtual void OnDataChanged( DataUpdateType_t type );

	int GetPlayerEntIndex() const;
	C_BaseEntity* GetOwner() { return m_hPlayer.Get(); }
	IRagdoll* GetIRagdoll() const;

	void ImpactTrace( trace_t* pTrace, int iDamageType, char* pCustomImpactName );
	void UpdateOnRemove( void );
	virtual void SetupWeights( const matrix3x4_t* pBoneToWorld, int nFlexWeightCount, float* pFlexWeights, float* pFlexDelayedWeights );
	
private:
	
	C_BaseNetworkedRagdoll( const C_BaseNetworkedRagdoll & ) {}

	void Interp_Copy( C_BaseAnimatingOverlay* pDestinationEntity );
	void CreateRagdoll( void );

private:

	EHANDLE	m_hPlayer;
	CNetworkVector( m_vecRagdollVelocity );
	CNetworkVector( m_vecRagdollOrigin );
};