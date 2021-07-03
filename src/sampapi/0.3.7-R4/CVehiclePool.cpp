/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CVehiclePool.h"

SAMPAPI_BEGIN_V037R4

CVehiclePool::CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E9C0))(this);
}

CVehiclePool::~CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1F010))(this);
}

void CVehiclePool::UpdateCount() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E960))(this);
}

BOOL CVehiclePool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1EA30))(this, nId);
}

void CVehiclePool::ChangeInterior(ID nId, int nInteriorId) {
    ((void(__thiscall*)(CVehiclePool*, ID, int))GetAddress(0x1EAB0))(this, nId, nInteriorId);
}

void CVehiclePool::SetParams(ID nId, bool bIsObjective, bool bIsLocked) {
    ((void(__thiscall*)(CVehiclePool*, ID, bool, bool))GetAddress(0x1EAE0))(this, nId, bIsObjective, bIsLocked);
}

ID CVehiclePool::Find(::CVehicle* pGameObject) {
    return ((ID(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1EB40))(this, pGameObject);
}

GTAREF CVehiclePool::GetRef(int nId) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, int))GetAddress(0x1EB70))(this, nId);
}

GTAREF CVehiclePool::GetRef(::CVehicle* pGameObject) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1EB90))(this, pGameObject);
}

ID CVehiclePool::GetNearest() {
    return ((ID(__thiscall*)(CVehiclePool*))GetAddress(0x1EBB0))(this);
}

ID CVehiclePool::GetNearest(CVector point) {
    return ((ID(__thiscall*)(CVehiclePool*, CVector))GetAddress(0x1EC20))(this, point);
}

void CVehiclePool::AddToWaitingList(const VehicleInfo* pInfo) {
    ((void(__thiscall*)(CVehiclePool*, const VehicleInfo*))GetAddress(0x1ECC0))(this, pInfo);
}

void CVehiclePool::ConstructLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1ED20))(this);
}

void CVehiclePool::ShutdownLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1ED90))(this);
}

BOOL CVehiclePool::Create(VehicleInfo* pInfo) {
    return ((BOOL(__thiscall*)(CVehiclePool*, VehicleInfo*))GetAddress(0x1F030))(this, pInfo);
}

void CVehiclePool::SendDestroyNotification(ID nId) {
    ((void(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1F1E0))(this, nId);
}

void CVehiclePool::ProcessWaitingList() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1F2B0))(this);
}

void CVehiclePool::Process() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1F370))(this);
}

CVehicle* CVehiclePool::Get(ID nId) {
    return ((CVehicle * (__thiscall*)(CVehiclePool*, ID)) GetAddress(0x1120))(this, nId);
}

BOOL CVehiclePool::DoesExist(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1150))(this, nId);
}

SAMPAPI_END
