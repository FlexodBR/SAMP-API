/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CAudioStream.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR int& CAudioStream::RefStream() {
    return *(int*)GetAddress(0x12E7B4);
}

SAMPAPI_VAR bool& CAudioStream::RefIsPlaying() {
    return *(bool*)GetAddress(0x12E7B8);
}

SAMPAPI_VAR CVector& CAudioStream::RefPosition() {
    return *(CVector*)GetAddress(0x12E7BC);
}

SAMPAPI_VAR bool& CAudioStream::RefIs3d() {
    return *(bool*)GetAddress(0x12E7C8);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyUrl() {
    return (char*)GetAddress(0x12E6B0);
}

SAMPAPI_VAR char* CAudioStream::ArrayInfo() {
    return (char*)GetAddress(0x12E5A8);
}

SAMPAPI_VAR char* CAudioStream::ArrayUrl() {
    return (char*)GetAddress(0x12E4A0);
}

SAMPAPI_VAR bool& CAudioStream::RefNeedsToDestroy() {
    return *(bool*)GetAddress(0x1027D2);
}

SAMPAPI_VAR float& CAudioStream::RefRadius() {
    return *(float*)GetAddress(0x1027D4);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyName() {
    return (char*)GetAddress(0x12E398);
}

SAMPAPI_VAR CAudioStream*& RefAudioStream() {
    return *(CAudioStream**)GetAddress(0x26EA04);
}

BOOL CAudioStream::Reset() {
    return ((BOOL(__thiscall*)(CAudioStream*))GetAddress(0x66440))(this);
}

BOOL CAudioStream::Stop(bool bWait) {
    return ((BOOL(__thiscall*)(CAudioStream*, bool))GetAddress(0x66520))(this, bWait);
}

BOOL CAudioStream::Play(const char* szUrl, CVector position, float fRadius, bool bIs3d) {
    return ((BOOL(__thiscall*)(CAudioStream*, const char*, CVector, float, bool))GetAddress(0x66920))(this, szUrl, position, fRadius, bIs3d);
}

void CAudioStream::ControlGameRadio() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66A40))(this);
}

void CAudioStream::DrawInfo() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66A70))(this);
}

void CAudioStream::ConstructInfo() {
    ((void(__cdecl*)())GetAddress(0x66580))();
}

void CAudioStream::SyncProc(int handle, int channel, int data, void* user) {
    ((void(__stdcall*)(int, int, int, void*))GetAddress(0x666B0))(handle, channel, data, user);
}

void CAudioStream::Process(void* arglist) {
    ((void(__cdecl*)(void*))GetAddress(0x666C0))(arglist);
}

SAMPAPI_END
