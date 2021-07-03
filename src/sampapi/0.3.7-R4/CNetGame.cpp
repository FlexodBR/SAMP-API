/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CNetGame.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CNetGame*& RefNetGame() {
    return *(CNetGame**)GetAddress(0x26EA0C);
}

SAMPAPI_VAR TICK& CNetGame::RefLastPlayersUpdateRequest() {
    return *(TICK*)GetAddress(0x118A10);
}

CNetGame::CNetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass) {
    ((void(__thiscall*)(CNetGame*, const char*, int, const char*, const char*))GetAddress(0xB920))(this, szHostAddress, nPort, szNick, szPass);
}

CNetGame::~CNetGame() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9870))(this);
}

CPickupPool* CNetGame::GetPickupPool() {
    return ((CPickupPool * (__thiscall*)(CNetGame*)) GetAddress(0x84D0))(this);
}

CMenuPool* CNetGame::GetMenuPool() {
    return ((CMenuPool * (__thiscall*)(CNetGame*)) GetAddress(0x84E0))(this);
}

void CNetGame::SetState(int nValue) {
    ((void(__thiscall*)(CNetGame*, int))GetAddress(0x84F0))(this, nValue);
}

void CNetGame::InitializePools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8530))(this);
}

void CNetGame::InitialNotification() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8750))(this);
}

void CNetGame::InitializeGameLogic() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x88E0))(this);
}

void CNetGame::Connect() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8930))(this);
}

void CNetGame::SpawnScreen() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x89A0))(this);
}

void CNetGame::Packet_RSAPublicKeyMismatch(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8D40))(this, pPacket);
}

void CNetGame::Packet_ConnectionBanned(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8D60))(this, pPacket);
}

void CNetGame::Packet_ConnectionRequestAcepted(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8D80))(this, pPacket);
}

void CNetGame::Packet_NoFreeIncomingConnections(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8DA0))(this, pPacket);
}

void CNetGame::Packet_DisconnectionNotification(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8DD0))(this, pPacket);
}

void CNetGame::Packet_InvalidPassword(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8E10))(this, pPacket);
}

void CNetGame::Packet_ConnectionAttemptFailed(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8E50))(this, pPacket);
}

void CNetGame::UpdatePlayers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8F00))(this);
}

void CNetGame::DeleteMarker(NUMBER nIndex) {
    ((void(__thiscall*)(CNetGame*, NUMBER))GetAddress(0x8FA0))(this, nIndex);
}

void CNetGame::ResetPlayerPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8FD0))(this);
}

void CNetGame::ResetVehiclePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9070))(this);
}

void CNetGame::ResetTextDrawPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9110))(this);
}

void CNetGame::ResetObjectPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x91B0))(this);
}

void CNetGame::ResetGangZonePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9250))(this);
}

void CNetGame::ResetPickupPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x92F0))(this);
}

void CNetGame::ResetMenuPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9350))(this);
}

void CNetGame::ResetLabelPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x93E0))(this);
}

void CNetGame::ResetActorPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9480))(this);
}

void CNetGame::Packet_UnoccupiedSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9A30))(this, pPacket);
}

void CNetGame::Packet_BulletSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9B30))(this, pPacket);
}

void CNetGame::Packet_AimSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9C30))(this, pPacket);
}

void CNetGame::Packet_PassengerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9D20))(this, pPacket);
}

void CNetGame::Packet_TrailerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9E10))(this, pPacket);
}

void CNetGame::Packet_MarkersSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9F00))(this, pPacket);
}

void CNetGame::Packet_AuthKey(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA0F0))(this, pPacket);
}

void CNetGame::ResetMarkers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA2B0))(this);
}

void CNetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {
    ((void(__thiscall*)(CNetGame*, NUMBER, CVector, char, int, int))GetAddress(0xA2F0))(this, nIndex, position, nIcon, nColor, nType);
}

void CNetGame::ResetPools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA4E0))(this);
}

void CNetGame::ShutdownForRestart() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA530))(this);
}

void CNetGame::Packet_PlayerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA730))(this, pPacket);
}

void CNetGame::Packet_VehicleSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xAA00))(this, pPacket);
}

void CNetGame::Packet_ConnectionLost(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xACE0))(this, pPacket);
}

void CNetGame::Packet_ConnectionSucceeded(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xAD70))(this, pPacket);
}

void CNetGame::UpdateNetwork() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xB250))(this);
}

void CNetGame::Process() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xB5A0))(this);
}

void CNetGame::ProcessGameStuff() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8B10))(this);
}

CPlayerPool* CNetGame::GetPlayerPool() {
    return ((CPlayerPool * (__thiscall*)(CNetGame*)) GetAddress(0x1170))(this);
}

CObjectPool* CNetGame::GetObjectPool() {
    return ((CObjectPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E10))(this);
}

CActorPool* CNetGame::GetActorPool() {
    return ((CActorPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E20))(this);
}

int CNetGame::GetState() {
    return ((int(__thiscall*)(CNetGame*))GetAddress(0x2E30))(this);
}

BOOL CNetGame::LanMode() {
    return ((BOOL(__thiscall*)(CNetGame*))GetAddress(0x2E40))(this);
}

CVehiclePool* CNetGame::GetVehiclePool() {
    return ((CVehiclePool * (__thiscall*)(CNetGame*)) GetAddress(0x1180))(this);
}

RakClientInterface* CNetGame::GetRakClient() {
    return ((RakClientInterface * (__thiscall*)(CNetGame*)) GetAddress(0x1A50))(this);
}

__int64 CNetGame::GetCounter() {
    return ((__int64(__thiscall*)(CNetGame*))GetAddress(0x88D0))(this);
}

SAMPAPI_END
