/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CSrvNetStats.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CSrvNetStats*& RefServerNetStatistics() {
    return *(CSrvNetStats**)GetAddress(0x26E9E8);
}

CSrvNetStats::CSrvNetStats(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSrvNetStats*, IDirect3DDevice9*))GetAddress(0x71250))(this, pDevice);
}

void CSrvNetStats::Draw() {
    ((void(__thiscall*)(CSrvNetStats*))GetAddress(0x71290))(this);
}

SAMPAPI_END
