#include "cbase.h"
#include "ienginevgui.h"

void VGUI_CreateClientDLLRootPanel()
{
}

void VGUI_DestroyClientDLLRootPanel()
{
}

vgui::VPANEL VGui_GetClientDLLRootPanel()
{
	return enginevgui->GetPanel(PANEL_CLIENTDLL);
}