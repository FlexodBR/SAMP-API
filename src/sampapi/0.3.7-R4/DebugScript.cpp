/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/DebugScript.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CObjectPool*& DebugScript::RefPrivateObjectPool() {
    return *(CObjectPool**)GetAddress(0x14FE24);
}

SAMPAPI_VAR unsigned short& DebugScript::RefObjectCount() {
    return *(unsigned short*)GetAddress(0x14FE28);
}

SAMPAPI_VAR CVector& DebugScript::RefNewCameraPos() {
    return *(CVector*)GetAddress(0x14FE18);
}

void DebugScript::Initialize(const char* szFile) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E9E0))(szFile);
}

void DebugScript::ProcessLine(const char* szLine) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E8D0))(szLine);
}

char* DebugScript::GetCommandParams(char* szLine) {
    return ((char*(__cdecl*)(char*))GetAddress(0x9E4E0))(szLine);
}

void DebugScript::CreateVehicle(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E640))(szParams);
}

void DebugScript::CreateObject(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E530))(szParams);
}

SAMPAPI_END
