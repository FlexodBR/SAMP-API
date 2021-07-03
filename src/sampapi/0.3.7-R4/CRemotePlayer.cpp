/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CRemotePlayer.h"

SAMPAPI_BEGIN_V037R4

CRemotePlayer::CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x16590))(this);
}

CRemotePlayer::~CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x16610))(this);
}

void CRemotePlayer::ProcessHead() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14350))(this);
}

void CRemotePlayer::SetMarkerState(BOOL bState) {
    ((void(__thiscall*)(CRemotePlayer*, BOOL))GetAddress(0x144B0))(this, bState);
}

void CRemotePlayer::SetMarkerPosition(int x, int y, int z) {
    ((void(__thiscall*)(CRemotePlayer*, int, int, int))GetAddress(0x144F0))(this, x, y, z);
}

BOOL CRemotePlayer::SurfingOnVehicle() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x145A0))(this);
}

BOOL CRemotePlayer::SurfingOnObject() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x145D0))(this);
}

void CRemotePlayer::ProcessSurfing() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14600))(this);
}

void CRemotePlayer::OnEnterVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x147B0))(this);
}

void CRemotePlayer::OnExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x148A0))(this);
}

void CRemotePlayer::ProcessSpecialAction() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14900))(this);
}

void CRemotePlayer::UpdateOnfootSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14BF0))(this);
}

void CRemotePlayer::UpdateOnfootRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14FA0))(this);
}

void CRemotePlayer::SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CVector*, CVector*))GetAddress(0x15080))(this, pPosition, pSpeed);
}

void CRemotePlayer::UpdateIncarSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x150F0))(this);
}

void CRemotePlayer::UpdateIncarRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x15410))(this);
}

void CRemotePlayer::SetIncarTargetSpeedAndPosition(CMatrix* pMatrix, CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, CVector*))GetAddress(0x15590))(this, pMatrix, pPosition, pSpeed);
}

void CRemotePlayer::UpdateTrain(CMatrix* pMatrix, CVector* pSpeed, float fSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, float))GetAddress(0x15600))(this, pMatrix, pSpeed, fSpeed);
}

void CRemotePlayer::Update(Synchronization::AimData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::AimData*))GetAddress(0x15710))(this, pData);
}

void CRemotePlayer::Update(Synchronization::UnoccupiedData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::UnoccupiedData*))GetAddress(0x15880))(this, pData);
}

void CRemotePlayer::Update(Synchronization::TrailerData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::TrailerData*))GetAddress(0x15C40))(this, pData);
}

void CRemotePlayer::ResetData() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x15F50))(this);
}

float CRemotePlayer::GetDistanceToPlayer(CRemotePlayer* pPlayer) {
    return ((float(__thiscall*)(CRemotePlayer*, CRemotePlayer*))GetAddress(0x16050))(this, pPlayer);
}

float CRemotePlayer::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CRemotePlayer*))GetAddress(0x160D0))(this);
}

void CRemotePlayer::SetColor(D3DCOLOR color) {
    ((void(__thiscall*)(CRemotePlayer*, D3DCOLOR))GetAddress(0x16100))(this, color);
}

D3DCOLOR CRemotePlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x16120))(this);
}

D3DCOLOR CRemotePlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x16130))(this);
}

void CRemotePlayer::EnterVehicle(ID nId, BOOL bPassenger) {
    ((void(__thiscall*)(CRemotePlayer*, ID, BOOL))GetAddress(0x16150))(this, nId, bPassenger);
}

void CRemotePlayer::ExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x161E0))(this);
}

void CRemotePlayer::ChangeState(char nOld, char nNew) {
    ((void(__thiscall*)(CRemotePlayer*, char, char))GetAddress(0x16220))(this, nOld, nNew);
}

int CRemotePlayer::GetStatus() {
    return ((int(__thiscall*)(CRemotePlayer*))GetAddress(0x162E0))(this);
}

void CRemotePlayer::Update(Synchronization::BulletData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::BulletData*))GetAddress(0x16320))(this, pData);
}

void CRemotePlayer::Process() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x16660))(this);
}

BOOL CRemotePlayer::Spawn(int a2, int nModel, int a4, CVector* pPosition, float fRotation, D3DCOLOR color, char nFightingStyle) {
    return ((BOOL(__thiscall*)(CRemotePlayer*, int, int, int, CVector*, float, D3DCOLOR, char))GetAddress(0x170E0))(this, a2, nModel, a4, pPosition, fRotation, color, nFightingStyle);
}

void CRemotePlayer::Update(Synchronization::OnfootData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::OnfootData*, TICK))GetAddress(0x17210))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::IncarData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::IncarData*, TICK))GetAddress(0x172F0))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::PassengerData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::PassengerData*, TICK))GetAddress(0x173F0))(this, pData, timestamp);
}

void CRemotePlayer::Remove() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x174E0))(this);
}

void CRemotePlayer::Kill() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x17520))(this);
}

void CRemotePlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CRemotePlayer*, const char*))GetAddress(0x175C0))(this, szText);
}

BOOL CRemotePlayer::DoesExist() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x1080))(this);
}

SAMPAPI_END
