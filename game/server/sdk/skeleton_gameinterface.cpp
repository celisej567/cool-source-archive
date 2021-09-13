#include "cbase.h"
#include "gameinterface.h"

void CServerGameClients::GetPlayerLimits( int& minplayers, int& maxplayers, int &defaultMaxPlayers ) const
{
	minplayers = 2;  // Force multiplayer.
	maxplayers = MAX_PLAYERS;
	defaultMaxPlayers = 32;
}

void CServerGameDLL::LevelInit_ParseAllEntities( const char *pMapEntities )
{
}