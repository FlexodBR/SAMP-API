/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CGame.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR char*& CGame::RefGameTextMessage() {
    return *(char**)GetAddress(0x1501AC);
}

SAMPAPI_VAR bool* CGame::ArrayUsedPlayerSlots() {
    return (bool*)GetAddress(0x1501B8);
}

SAMPAPI_VAR CGame*& RefGame() {
    return *(CGame**)GetAddress(0x26EA24);
}

CGame::CGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9FFB0))(this);
}

CPed* CGame::GetPlayerPed() {
    return ((CPed * (__thiscall*)(CGame*)) GetAddress(0x1010))(this);
}

float CGame::FindGroundZ(CVector vPoint) {
    return ((float(__thiscall*)(CGame*, CVector))GetAddress(0xA0430))(this, vPoint);
}

void CGame::SetCursorMode(int nMode, BOOL bImmediatelyHideCursor) {
    ((void(__thiscall*)(CGame*, int, BOOL))GetAddress(0xA0720))(this, nMode, bImmediatelyHideCursor);
}

void CGame::InitGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA08C0))(this);
}

void CGame::StartGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0910))(this);
}

BOOL CGame::IsMenuVisible() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0xA0950))(this);
}

BOOL CGame::IsStarted() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0xA0960))(this);
}

void CGame::RequestModel(int nModel, int nLoadingStream) {
    ((void(__thiscall*)(CGame*, int, int))GetAddress(0xA0970))(this, nModel, nLoadingStream);
}

void CGame::LoadRequestedModels() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0990))(this);
}

BOOL CGame::IsModelAvailable(int nModel) {
    return ((BOOL(__thiscall*)(CGame*, int))GetAddress(0xA09A0))(this, nModel);
}

void CGame::ReleaseModel(int nModel, bool bGameFunc) {
    ((void(__thiscall*)(CGame*, int, bool))GetAddress(0xA09D0))(this, nModel, bGameFunc);
}

void CGame::SetWorldTime(char nHour, char nMinute) {
    ((void(__thiscall*)(CGame*, char, char))GetAddress(0xA0AE0))(this, nHour, nMinute);
}

void CGame::GetWorldTime(char* nHour, char* nMinute) {
    ((void(__thiscall*)(CGame*, char*, char*))GetAddress(0xA0B10))(this, nHour, nMinute);
}

void CGame::LetTimeGo(bool bLet) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA0B30))(this, bLet);
}

void CGame::SetWorldWeather(char nWeather) {
    ((void(__thiscall*)(CGame*, char))GetAddress(0xA0B70))(this, nWeather);
}

void CGame::SetFrameLimiter(int nValue) {
    ((void(__thiscall*)(CGame*, int))GetAddress(0xA0BE0))(this, nValue);
}

void CGame::SetMaxStats() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0C10))(this);
}

void CGame::DisableTrainTraffic() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0C40))(this);
}

void CGame::RefreshRenderer(float fX, float fY) {
    ((void(__thiscall*)(CGame*, float, float))GetAddress(0xA0C50))(this, fX, fY);
}

void CGame::RequestAnimation(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA0C80))(this, szFile);
}

BOOL CGame::IsAnimationLoaded(const char* szFile) {
    return ((BOOL(__thiscall*)(CGame*, const char*))GetAddress(0xA0CA0))(this, szFile);
}

void CGame::ReleaseAnimation(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA0CC0))(this, szFile);
}

void CGame::DisplayGameText(const char* szText, int nTime, int nSize) {
    ((void(__thiscall*)(CGame*, const char*, int, int))GetAddress(0xA0D10))(this, szText, nTime, nSize);
}

void CGame::DeleteRacingCheckpoint() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0D70))(this);
}

GTAREF CGame::CreateMarker(int nIcon, CVector vPosition, int nColor, int nType) {
    return ((GTAREF(__thiscall*)(CGame*, int, CVector, int, int))GetAddress(0xA0DA0))(this, nIcon, vPosition, nColor, nType);
}

void CGame::DeleteMarker(GTAREF handle) {
    ((void(__thiscall*)(CGame*, GTAREF))GetAddress(0xA0ED0))(this, handle);
}

char CGame::GetCurrentInterior() {
    return ((char(__thiscall*)(CGame*))GetAddress(0xA0EF0))(this);
}

void CGame::UpdateFarClippingPlane() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0F10))(this);
}

void CGame::IncreasePlayerMoney(int nInc) {
    ((void(__thiscall*)(CGame*, int))GetAddress(0xA0F80))(this, nInc);
}

int CGame::GetPlayerMoney() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA0FA0))(this);
}

const char* CGame::GetWeaponName(int nWeapon) {
    return ((const char*(__thiscall*)(CGame*, int))GetAddress(0xA0FB0))(this, nWeapon);
}

void CGame::CreatePickup(int nModel, int nType, CVector vPosition, GTAREF* handle) {
    ((void(__thiscall*)(CGame*, int, int, CVector, GTAREF*))GetAddress(0xA1200))(this, nModel, nType, vPosition, handle);
}

GTAREF CGame::CreateWeaponPickup(int nModel, int nAmmo, CVector vPosition) {
    return ((GTAREF(__thiscall*)(CGame*, int, int, CVector))GetAddress(0xA12E0))(this, nModel, nAmmo, vPosition);
}

IDirect3DDevice9* CGame::GetDevice() {
    return ((IDirect3DDevice9 * (__thiscall*)(CGame*)) GetAddress(0xA1380))(this);
}

void CGame::Restart() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA13C0))(this);
}

CWeaponInfo* CGame::GetWeaponInfo(int nWeapon, int nSkill) {
    return ((CWeaponInfo * (__thiscall*)(CGame*, int, int)) GetAddress(0xA13F0))(this, nWeapon, nSkill);
}

void CGame::SetWorldGravity(float fValue) {
    ((void(__thiscall*)(CGame*, float))GetAddress(0xA1410))(this, fValue);
}

void CGame::SetWantedLevel(char nLevel) {
    ((void(__thiscall*)(CGame*, char))GetAddress(0xA1430))(this, nLevel);
}

void CGame::SetNumberOfIntroTextLinesThisFrame(unsigned short nValue) {
    ((void(__thiscall*)(CGame*, unsigned short))GetAddress(0xA1440))(this, nValue);
}

void CGame::DrawGangZone(float* pPos, char nColor) {
    ((void(__thiscall*)(CGame*, float*, char))GetAddress(0xA1450))(this, pPos, nColor);
}

void CGame::EnableZoneDisplaying(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA1530))(this, bEnable);
}

void CGame::EnableStuntBonus(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA1550))(this, bEnable);
}

void CGame::LoadScene(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA15C0))(this, szFile);
}

int CGame::GetUsedMemory() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA15E0))(this);
}

int CGame::GetStreamingMemory() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA15F0))(this);
}

void CGame::SetRequiredVehicleModels(unsigned char* pModelCount) {
    ((void(__thiscall*)(CGame*, unsigned char*))GetAddress(0xA1620))(this, pModelCount);
}

int CGame::GetTimer() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA1780))(this);
}

void CGame::LoadAnimationsAndModels() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA18B0))(this);
}

void CGame::LoadCollisionFile(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA1B90))(this, szFile);
}

void CGame::LoadCullZone(const char* szLine) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA1BB0))(this, szLine);
}

BOOL CGame::UsingGamepad() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0xA1BD0))(this);
}

void CGame::DisableAutoAiming() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA1BE0))(this);
}

void CGame::EnableHUD(BOOL bEnable) {
    ((void(__thiscall*)(CGame*, BOOL))GetAddress(0xA1DC0))(this, bEnable);
}

void CGame::SetCheckpoint(CVector* pPos, CVector* pSize) {
    ((void(__thiscall*)(CGame*, CVector*, CVector*))GetAddress(0xA1DF0))(this, pPos, pSize);
}

void CGame::CreateRacingCheckpoint() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA1EB0))(this);
}

void CGame::ProcessCheckpoints() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA1F30))(this);
}

void CGame::ResetMoney() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA20D0))(this);
}

void CGame::SetRacingCheckpoint(int nType, CVector* pCurrentPos, CVector* pNextPos, float fSize) {
    ((void(__thiscall*)(CGame*, int, CVector*, CVector*, float))GetAddress(0xA2110))(this, nType, pCurrentPos, pNextPos, fSize);
}

void CGame::EnableRadar(BOOL bEnable) {
    ((void(__thiscall*)(CGame*, BOOL))GetAddress(0xA0CF0))(this, bEnable);
}

void* CGame::GetWindowHandle() {
    return ((void*(__thiscall*)(CGame*))GetAddress(0x2D10))(this);
}

CAudio* CGame::GetAudio() {
    return ((CAudio * (__thiscall*)(CGame*)) GetAddress(0x2D20))(this);
}

CCamera* CGame::GetCamera() {
    return ((CCamera * (__thiscall*)(CGame*)) GetAddress(0x2D30))(this);
}

BOOL CGame::DoesHeadMoves() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0x2D40))(this);
}

void CGame::EnableClock(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA1470))(this, bEnable);
}

void CGame::Sleep(int elapsed, int fpsLimit) {
    ((void(__thiscall*)(CGame*, int, int))GetAddress(0xA00C0))(this, elapsed, fpsLimit);
}

CPed* CGame::CreatePed(int nModel, CVector position, float fRotation, int a6, int a7) {
    return ((CPed * (__thiscall*)(CGame*, int, CVector, float, int, int)) GetAddress(0xA0140))(this, nModel, position, fRotation, a6, a7);
}

BOOL CGame::RemovePed(CPed* pPed) {
    return ((BOOL(__thiscall*)(CGame*, CPed*))GetAddress(0xA0240))(this, pPed);
}

CVehicle* CGame::CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren) {
    return ((CVehicle * (__thiscall*)(CGame*, int, CVector, float, BOOL)) GetAddress(0xA0280))(this, nModel, position, fRotation, bHasSiren);
}

CObject* CGame::CreateObject(int nModel, CVector position, CVector rotation, float fDrawDistance, char a11, char a12) {
    return ((CObject * (__thiscall*)(CGame*, int, CVector, CVector, float, char, char)) GetAddress(0xA0360))(this, nModel, position, rotation, fDrawDistance, a11, a12);
}

void CGame::ProcessInputEnabling() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0600))(this);
}

void CGame::ProcessFrameLimiter() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA1C20))(this);
}

SAMPAPI_END
