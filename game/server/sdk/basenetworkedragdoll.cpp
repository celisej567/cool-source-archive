#include "cbase.h"
#include "basenetworkedragdoll.h"

LINK_ENTITY_TO_CLASS( networked_ragdoll, CBaseNetworkedRagdoll );

IMPLEMENT_SERVERCLASS_ST_NOBASE( CBaseNetworkedRagdoll, DT_BaseNetworkedRagdoll )
	SendPropVector( SENDINFO(m_vecRagdollOrigin), -1,  SPROP_COORD ),
	SendPropEHandle( SENDINFO( m_hPlayer ) ),
	SendPropModelIndex( SENDINFO( m_nModelIndex ) ),
	SendPropInt		( SENDINFO(m_nForceBone), 8, 0 ),
	SendPropVector	( SENDINFO(m_vecForce), -1, SPROP_NOSCALE ),
	SendPropVector( SENDINFO( m_vecRagdollVelocity ) )
END_SEND_TABLE()