/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CGangZonePool.h"

SAMPAPI_BEGIN_V037R4

CGangZonePool::CGangZonePool() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2120))(this);
}

CGangZonePool::~CGangZonePool() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2150))(this);
}

void CGangZonePool::Create(ID nId, float left, float top, float right, float bottom, D3DCOLOR color) {
    ((void(__thiscall*)(CGangZonePool*, ID, float, float, float, float, D3DCOLOR))GetAddress(0x2180))(this, nId, left, top, right, bottom, color);
}

void CGangZonePool::StartFlashing(ID nId, D3DCOLOR color) {
    ((void(__thiscall*)(CGangZonePool*, ID, D3DCOLOR))GetAddress(0x2200))(this, nId, color);
}

void CGangZonePool::StopFlashing(ID nId) {
    ((void(__thiscall*)(CGangZonePool*, ID))GetAddress(0x2220))(this, nId);
}

void CGangZonePool::Delete(ID nId) {
    ((void(__thiscall*)(CGangZonePool*, ID))GetAddress(0x2240))(this, nId);
}

void CGangZonePool::Draw() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2270))(this);
}

SAMPAPI_END
