#include "cbase.h"
#include "../EventLog.h"

CEventLog g_EventLog;

IGameSystem* GameLogSystem()
{
	return &g_EventLog;
}