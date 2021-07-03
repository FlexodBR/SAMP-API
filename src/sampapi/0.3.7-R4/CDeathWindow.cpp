/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CDeathWindow.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CDeathWindow*& RefDeathWindow() {
    return *(CDeathWindow**)GetAddress(0x26EA00);
}

CDeathWindow::CDeathWindow(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CDeathWindow*, IDirect3DDevice9*))GetAddress(0x6A610))(this, pDevice);
}

CDeathWindow::~CDeathWindow() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x69B00))(this);
}

void CDeathWindow::InitializeAuxFonts() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x69B70))(this);
}

void CDeathWindow::PushBack() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x69BE0))(this);
}

void CDeathWindow::DrawText(const char* szText, CRect rect, D3DCOLOR color, int nFormat) {
    ((void(__thiscall*)(CDeathWindow*, const char*, CRect, D3DCOLOR, int))GetAddress(0x69C00))(this, szText, rect, color, nFormat);
}

void CDeathWindow::DrawWeaponSprite(const char* szSpriteId, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CDeathWindow*, const char*, CRect, D3DCOLOR))GetAddress(0x69D00))(this, szSpriteId, rect, color);
}

void CDeathWindow::GetWeaponSpriteRectSize(void* pPoint) {
    ((void(__thiscall*)(CDeathWindow*, void*))GetAddress(0x69D90))(this, pPoint);
}

const char* CDeathWindow::GetWeaponSpriteId(char nWeapon) {
    return ((const char*(__thiscall*)(CDeathWindow*, char))GetAddress(0x69E10))(this, nWeapon);
}

void CDeathWindow::ResetFonts() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x6A110))(this);
}

void CDeathWindow::Draw() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x6A2A0))(this);
}

void CDeathWindow::AddEntry(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
    ((void(__thiscall*)(CDeathWindow*, const char*, const char*, D3DCOLOR, D3DCOLOR, char))GetAddress(0x6A590))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}

void CDeathWindow::AddMessage(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
    ((void(__thiscall*)(CDeathWindow*, const char*, const char*, D3DCOLOR, D3DCOLOR, char))GetAddress(0x6A670))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}

SAMPAPI_END
