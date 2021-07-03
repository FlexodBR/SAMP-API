/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CObjectPool.h"

SAMPAPI_BEGIN_V037R4

CObjectPool::CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x127D0))(this);
}

CObjectPool::~CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x13130))(this);
}

void CObjectPool::UpdateLargestId() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12770))(this);
}

int CObjectPool::GetCount() {
    return ((int(__thiscall*)(CObjectPool*))GetAddress(0x12800))(this);
}

BOOL CObjectPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID))GetAddress(0x12820))(this, nId);
}

BOOL CObjectPool::Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID, int, CVector, CVector, float))GetAddress(0x128A0))(this, nId, nModel, position, rotation, fDrawDistance);
}

CObject* CObjectPool::Find(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CObjectPool*, ::CObject*)) GetAddress(0x129A0))(this, pGameObject);
}

int CObjectPool::GetId(::CObject* pGameObject) {
    return ((int(__thiscall*)(CObjectPool*, ::CObject*))GetAddress(0x129E0))(this, pGameObject);
}

void CObjectPool::Process() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12A20))(this);
}

void CObjectPool::ConstructMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12AE0))(this);
}

void CObjectPool::ShutdownMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12B20))(this);
}

void CObjectPool::Draw() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12B60))(this);
}

void CObjectPool::DrawLast() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12680))(this);
}

CObject* CObjectPool::Get(ID nId) {
    return ((CObject * (__thiscall*)(CObjectPool*, ID)) GetAddress(0x2DE0))(this, nId);
}

SAMPAPI_END
