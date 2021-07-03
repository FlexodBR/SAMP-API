/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CEntity.h"

SAMPAPI_BEGIN_V037R4

CEntity::CEntity() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9C290))(this);
}

CEntity::~CEntity() {
}

void CEntity::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CEntity*, CMatrix*))GetAddress(0x9EB40))(this, pMatrix);
}

void CEntity::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CEntity*, CMatrix))GetAddress(0x9EBF0))(this, matrix);
}

void CEntity::GetSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9ED10))(this, pVec);
}

void CEntity::SetSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9ED40))(this, vec);
}

void CEntity::GetTurnSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9EE60))(this, pVec);
}

void CEntity::SetTurnSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9EE90))(this, vec);
}

void CEntity::ApplyTurnSpeed() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9EEC0))(this);
}

float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9EEE0))(this);
}

void CEntity::GetBoundCentre(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9EF20))(this, pVec);
}

void CEntity::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CEntity*, int))GetAddress(0x9EF80))(this, nModel);
}

int CEntity::GetModelIndex() {
    return ((int(__thiscall*)(CEntity*))GetAddress(0x9F060))(this);
}

void CEntity::Teleport(CVector position) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9F070))(this, position);
}

float CEntity::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9F0F0))(this);
}

float CEntity::GetDistanceToCamera() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9F1C0))(this);
}

float CEntity::GetDistanceToPoint(CVector position) {
    return ((float(__thiscall*)(CEntity*, CVector))GetAddress(0x9F2E0))(this, position);
}

BOOL CEntity::DoesExist() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F400))(this);
}

BOOL CEntity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9F450))(this, fPX, fZX, fPY, fNY);
}

BOOL CEntity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9F5F0))(this, fPX, fZX, fPY, fNY);
}

void CEntity::GetEulerInverted(float* x, float* y, float* z) {
    ((void(__thiscall*)(CEntity*, float*, float*, float*))GetAddress(0x9F920))(this, x, y, z);
}

BOOL CEntity::IsIgnored() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9FD10))(this);
}

BOOL CEntity::IsStationary() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9FE10))(this);
}

BOOL CEntity::GetCollisionFlag() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F690))(this);
}

void CEntity::SetCollisionFlag(BOOL bEnable) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9F660))(this, bEnable);
}

RwObject* CEntity::GetRwObject() {
    return ((::RwObject * (__thiscall*)(CEntity*)) GetAddress(0x9FA90))(this);
}

void CEntity::DeleteRwObject() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9FBE0))(this);
}

void CEntity::UpdateRwFrame() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9ECB0))(this);
}

float CEntity::GetDistanceToLocalPlayerNoHeight() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9F220))(this);
}

void CEntity::SetCollisionProcessed(BOOL bProcessed) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9F6B0))(this, bProcessed);
}

SAMPAPI_END
