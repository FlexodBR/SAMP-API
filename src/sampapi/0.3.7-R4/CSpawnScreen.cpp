/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CSpawnScreen.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CSpawnScreen*& RefSpawnScreen() {
    return *(CSpawnScreen**)GetAddress(0x26EA08);
}

CSpawnScreen::CSpawnScreen(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSpawnScreen*, IDirect3DDevice9*))GetAddress(0x70F20))(this, pDevice);
}

CSpawnScreen::~CSpawnScreen() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70F60))(this);
}

void CSpawnScreen::SetText(const char* szString) {
    ((void(__thiscall*)(CSpawnScreen*, const char*))GetAddress(0x70BC0))(this, szString);
}

void CSpawnScreen::OnResetDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70C20))(this);
}

void CSpawnScreen::OnLostDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70ED0))(this);
}

void CSpawnScreen::Draw() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70FC0))(this);
}

SAMPAPI_END
