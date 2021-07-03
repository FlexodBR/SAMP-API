/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CLabel.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CLabel*& RefLabel() {
    return *(CLabel**)GetAddress(0x26E9D4);
}

CLabel::CLabel(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLabel*, IDirect3DDevice9*))GetAddress(0x6BB70))(this, pDevice);
}

CLabel::~CLabel() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6BB90))(this);
}

void CLabel::OnLostDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6BBB0))(this);
}

void CLabel::OnResetDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6BBC0))(this);
}

BOOL CLabel::HasNoObstacles(CVector position) {
    return ((BOOL(__thiscall*)(CLabel*, CVector))GetAddress(0x6BBD0))(this, position);
}

void CLabel::Begin() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6BC30))(this);
}

void CLabel::End() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6BC40))(this);
}

void CLabel::Draw(CVector* pPosition, const char* szText, D3DCOLOR color, BOOL bShadow, bool bNoObstacles) {
    ((void(__thiscall*)(CLabel*, CVector*, const char*, D3DCOLOR, BOOL, bool))GetAddress(0x6BC50))(this, pPosition, szText, color, bShadow, bNoObstacles);
}

SAMPAPI_END
