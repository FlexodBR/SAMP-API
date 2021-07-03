/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CVehicle.h"

SAMPAPI_BEGIN_V037R4

CVehicle::CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
    ((void(__thiscall*)(CVehicle*, int, CVector, float, BOOL, BOOL))GetAddress(0xB83E0))(this, nModel, position, fRotation, bKeepModelLoaded, bHasSiren);
}

CVehicle::~CVehicle() {
}

void CVehicle::ChangeInterior(int nId) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB70A0))(this, nId);
}

void CVehicle::ResetPointers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB70D0))(this);
}

BOOL CVehicle::HasDriver() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB70F0))(this);
}

BOOL CVehicle::IsOccupied() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7140))(this);
}

void CVehicle::SetInvulnerable(BOOL bInv) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB71A0))(this, bInv);
}

void CVehicle::SetLocked(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB7240))(this, bLock);
}

float CVehicle::GetHealth() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB72B0))(this);
}

void CVehicle::SetHealth(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB72D0))(this, fValue);
}

void CVehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {
    ((void(__thiscall*)(CVehicle*, NUMBER, NUMBER))GetAddress(0xB72F0))(this, nPrimary, nSecondary);
}

void CVehicle::UpdateColor() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7340))(this);
}

int CVehicle::GetSubtype() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB73A0))(this);
}

BOOL CVehicle::IsSunk() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB73C0))(this);
}

BOOL CVehicle::IsWrecked() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB73E0))(this);
}

BOOL CVehicle::DriverIsPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7400))(this);
}

BOOL CVehicle::HasPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7430))(this);
}

BOOL CVehicle::IsTrainPart() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7470))(this);
}

BOOL CVehicle::HasTurret() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB74B0))(this);
}

void CVehicle::EnableSiren(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB7550))(this, bEnable);
}

BOOL CVehicle::SirenEnabled() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7570))(this);
}

void CVehicle::SetLandingGearState(BOOL bHide) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB75B0))(this, bHide);
}

BOOL CVehicle::GetLandingGearState() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7640))(this);
}

void CVehicle::SetHydraThrusters(int nDirection) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB76B0))(this, nDirection);
}

int CVehicle::GetHydraThrusters() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB76D0))(this);
}

void CVehicle::ProcessMarkers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB76F0))(this);
}

void CVehicle::Lock(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB7850))(this, bLock);
}

BOOL CVehicle::UpdateLastDrivenTime() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7880))(this);
}

float CVehicle::GetTrainSpeed() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB78F0))(this);
}

void CVehicle::SetTrainSpeed(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB7910))(this, fValue);
}

void CVehicle::SetTires(char nState) {
    ((void(__thiscall*)(CVehicle*, char))GetAddress(0xB7950))(this, nState);
}

char CVehicle::GetTires() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7A40))(this);
}

void CVehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {
    ((void(__thiscall*)(CVehicle*, int, int, char))GetAddress(0xB7AD0))(this, nPanels, nDoors, nLights);
}

int CVehicle::GetPanelsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB7B90))(this);
}

int CVehicle::GetDoorsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB7BC0))(this);
}

char CVehicle::GetLightsDamage() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7BF0))(this);
}

void CVehicle::AttachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7C20))(this);
}

void CVehicle::DetachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7C40))(this);
}

void CVehicle::SetTrailer(CVehicle* pVehicle) {
    ((void(__thiscall*)(CVehicle*, CVehicle*))GetAddress(0xB7C90))(this, pVehicle);
}

CVehicle* CVehicle::GetTrailer() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB7CA0))(this);
}

CVehicle* CVehicle::GetTractor() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB7D00))(this);
}

BOOL CVehicle::IsTrailer() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7D80))(this);
}

BOOL CVehicle::IsTowtruck() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7DE0))(this);
}

BOOL CVehicle::IsRC() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7E10))(this);
}

void CVehicle::EnableLights(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB7E60))(this, bEnable);
}

void CVehicle::RemovePassengers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7EF0))(this);
}

BOOL CVehicle::AddComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB7FD0))(this, nId);
}

BOOL CVehicle::RemoveComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB80C0))(this, nId);
}

void CVehicle::SetPaintjob(NUMBER nId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB8100))(this, nId);
}

BOOL CVehicle::DoesExist() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB8150))(this);
}

void CVehicle::SetLicensePlateText(const char* szText) {
    ((void(__thiscall*)(CVehicle*, const char*))GetAddress(0xB8160))(this, szText);
}

void CVehicle::SetRotation(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB8180))(this, fValue);
}

void CVehicle::ConstructLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB81B0))(this);
}

void CVehicle::ShutdownLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB8200))(this);
}

BOOL CVehicle::HasSiren() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB8340))(this);
}

char CVehicle::GetMaxPassengers() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB8350))(this);
}

void CVehicle::SetWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB8380))(this, nDoorId);
}

void CVehicle::ClearWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB83B0))(this, nDoorId);
}

void CVehicle::EnableEngine(BOOL bEnable) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB8A80))(this, bEnable);
}

SAMPAPI_END
