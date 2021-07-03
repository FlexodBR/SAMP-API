/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/AimStuff.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR float& AimStuff::RefLocalPlayerCameraExtZoom() {
    return *(float*)GetAddress(0x143E48);
}

SAMPAPI_VAR float& AimStuff::RefLocalPlayerAspectRatio() {
    return *(float*)GetAddress(0x146A00);
}

SAMPAPI_VAR float*& AimStuff::RefInternalCameraExtZoom() {
    return *(float**)GetAddress(0x1039D4);
}

SAMPAPI_VAR float*& AimStuff::RefInternalAspectRatio() {
    return *(float**)GetAddress(0x1039D0);
}

SAMPAPI_VAR float* AimStuff::ArrayCameraExtZoom() {
    return (float*)GetAddress(0x143F28);
}

SAMPAPI_VAR float* AimStuff::ArrayAspectRatio() {
    return (float*)GetAddress(0x146A30);
}

SAMPAPI_VAR char* AimStuff::ArrayCameraMode() {
    return (char*)GetAddress(0x143E50);
}

SAMPAPI_VAR char*& AimStuff::RefInternalCameraMode() {
    return *(char**)GetAddress(0x113974);
}

SAMPAPI_VAR AimStuff::Aim& AimStuff::RefLocalPlayerAim() {
    return *(AimStuff::Aim*)GetAddress(0x144270);
}

SAMPAPI_VAR AimStuff::Aim* AimStuff::ArrayPlayerAim() {
    return (AimStuff::Aim*)GetAddress(0x1442A0);
}

SAMPAPI_VAR AimStuff::Aim*& AimStuff::RefInternalAim() {
    return *(AimStuff::Aim**)GetAddress(0x1039C8);
}

void AimStuff::UpdateCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C7F0))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C810))();
}

void AimStuff::SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio) {
    ((void(__stdcall*)(NUMBER, float, float))GetAddress(0x9C830))(nPlayer, fCameraExtZoom, fAspectRatio);
}

float AimStuff::GetAspectRatio() {
    return ((float(__stdcall*)())GetAddress(0x9C850))();
}

float AimStuff::GetCameraExtZoom() {
    return ((float(__stdcall*)())GetAddress(0x9C860))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer) {
    ((void(__stdcall*)(NUMBER))GetAddress(0x9C880))(nPlayer);
}

void AimStuff::SetCameraMode(char nMode, NUMBER nPlayer) {
    ((void(__stdcall*)(char, NUMBER))GetAddress(0x9C8C0))(nMode, nPlayer);
}

char AimStuff::GetCameraMode(NUMBER nPlayer) {
    return ((char(__stdcall*)(NUMBER))GetAddress(0x9C8E0))(nPlayer);
}

char AimStuff::GetCameraMode() {
    return ((char(__stdcall*)())GetAddress(0x9C8F0))();
}

void AimStuff::Initialize() {
    ((void(__stdcall*)())GetAddress(0x9C900))();
}

void AimStuff::UpdateAim() {
    ((void(__stdcall*)())GetAddress(0x9C970))();
}

void AimStuff::ApplyAim() {
    ((void(__stdcall*)())GetAddress(0x9C990))();
}

AimStuff::Aim* AimStuff::GetAim() {
    return ((Aim * (__stdcall*)()) GetAddress(0x9C9B0))();
}

void AimStuff::SetAim(int nPlayer, const Aim* pAim) {
    ((void(__stdcall*)(int, const Aim*))GetAddress(0x9C9C0))(nPlayer, pAim);
}

void AimStuff::ApplyAim(int nPlayer) {
    ((void(__stdcall*)(int))GetAddress(0x9C9F0))(nPlayer);
}

AimStuff::Aim* AimStuff::GetAim(int nPlayer) {
    return ((Aim * (__stdcall*)(int)) GetAddress(0x9CA20))(nPlayer);
}

SAMPAPI_END
