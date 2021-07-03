/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CScoreboard.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CScoreboard*& RefScoreboard() {
    return *(CScoreboard**)GetAddress(0x26E9C4);
}

CScoreboard::CScoreboard(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CScoreboard*, IDirect3DDevice9*))GetAddress(0x6E9F0))(this, pDevice);
}

void CScoreboard::Recalc() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E8F0))(this);
}

void CScoreboard::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CScoreboard*, CRect*))GetAddress(0x6E950))(this, pRect);
}

void CScoreboard::Close(bool bHideCursor) {
    ((void(__thiscall*)(CScoreboard*, bool))GetAddress(0x6E9A0))(this, bHideCursor);
}

void CScoreboard::ResetDialogControls(CDXUTDialog* pDialog) {
    ((void(__thiscall*)(CScoreboard*, CDXUTDialog*))GetAddress(0x6EA70))(this, pDialog);
}

void CScoreboard::SendNotification() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6EBD0))(this);
}

void CScoreboard::UpdateList() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6ECF0))(this);
}

void CScoreboard::Draw() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6F080))(this);
}

void CScoreboard::Enable() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6F3A0))(this);
}

SAMPAPI_END
