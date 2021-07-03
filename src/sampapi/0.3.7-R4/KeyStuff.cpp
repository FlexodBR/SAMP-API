/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/KeyStuff.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CPad& KeyStuff::RefLocalPlayerKeys() {
    return *(CPad*)GetAddress(0x152640);
}

SAMPAPI_VAR CPad* KeyStuff::ArrayPlayerKeys() {
    return (CPad*)GetAddress(0x152778);
}

SAMPAPI_VAR CPad*& KeyStuff::RefInternalKeys() {
    return *(CPad**)GetAddress(0x114AE8);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByLeft() {
    return *(bool**)GetAddress(0x114AEC);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByRight() {
    return *(bool**)GetAddress(0x114AF0);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByLeft() {
    return *(bool*)GetAddress(0x162420);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByRight() {
    return *(bool*)GetAddress(0x162421);
}

void KeyStuff::Initialize() {
    ((void(__cdecl*)())GetAddress(0xA72B0))();
}

void KeyStuff::UpdateKeys() {
    ((void(__cdecl*)())GetAddress(0xA72D0))();
}

void KeyStuff::ApplyKeys() {
    ((void(__cdecl*)())GetAddress(0xA7310))();
}

void KeyStuff::SetKeys(int nPlayer, const CPad* pKeys) {
    ((void(__cdecl*)(int, const CPad*))GetAddress(0xA7350))(nPlayer, pKeys);
}

void KeyStuff::ApplyKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA7370))(nPlayer);
}

CPad* KeyStuff::GetInternalKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA73C0))();
}

CPad* KeyStuff::GetKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA73D0))();
}

CPad* KeyStuff::GetKeys(int nPlayer) {
    return ((::CPad * (__cdecl*)(int)) GetAddress(0xA73E0))(nPlayer);
}

void KeyStuff::ResetKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA73F0))(nPlayer);
}

void KeyStuff::ResetInternalKeys() {
    ((void(__cdecl*)())GetAddress(0xA7410))();
}

SAMPAPI_END
