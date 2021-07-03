/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CObjectSelection.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CObjectSelection*& RefObjectSelection() {
    return *(CObjectSelection**)GetAddress(0x26E9DC);
}

CObjectSelection::CObjectSelection() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D9C0))(this);
}

ID CObjectSelection::DefineObject() {
    return ((ID(__thiscall*)(CObjectSelection*))GetAddress(0x6D9D0))(this);
}

void CObjectSelection::DrawLabels() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6DA20))(this);
}

void CObjectSelection::Enable(BOOL bEnable) {
    ((void(__thiscall*)(CObjectSelection*, BOOL))GetAddress(0x6DB40))(this, bEnable);
}

void CObjectSelection::Draw() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6DBC0))(this);
}

void CObjectSelection::SendNotification() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6DC90))(this);
}

BOOL CObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CObjectSelection*, int, int, int))GetAddress(0x6DE00))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
