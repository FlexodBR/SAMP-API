/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CPickupPool.h"

SAMPAPI_BEGIN_V037R4

CPickupPool::CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x8490))(this);
}

CPickupPool::~CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x133E0))(this);
}

void CPickupPool::Create(Pickup* pData, ID nId) {
    ((void(__thiscall*)(CPickupPool*, Pickup*, ID))GetAddress(0x13240))(this, pData, nId);
}

void CPickupPool::CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, int, CVector, int, ID))GetAddress(0x13150))(this, nModel, position, nAmmo, nExOwner);
}

void CPickupPool::Delete(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x132F0))(this, nId);
}

void CPickupPool::DeleteWeapon(ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, ID))GetAddress(0x13350))(this, nExOwner);
}

int CPickupPool::GetIndex(int nId) {
    return ((int(__thiscall*)(CPickupPool*, int))GetAddress(0x133B0))(this, nId);
}

void CPickupPool::SendNotification(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x13410))(this, nId);
}

void CPickupPool::Process() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x134F0))(this);
}

SAMPAPI_END
