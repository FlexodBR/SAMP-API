/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CActor.h"

SAMPAPI_BEGIN_V037R4

CActor::CActor(int nModel, CVector position, float fRotation) {
    ((void(__thiscall*)(CActor*, int, CVector, float))GetAddress(0x9C2E0))(this, nModel, position, fRotation);
}

CActor::~CActor() {
}

void CActor::Destroy() {
    ((void(__thiscall*)(CActor*))GetAddress(0x9C430))(this);
}

void CActor::PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {
    ((void(__thiscall*)(CActor*, const char*, const char*, float, int, int, int, int, int))GetAddress(0x9C490))(this, szAnim, szIFP, fFramedelta, bLockA, bLockX, bLockY, bLockF, nTime);
}

void CActor::SetRotation(float fAngle) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x9C5A0))(this, fAngle);
}

float CActor::GetHealth() {
    return ((float(__thiscall*)(CActor*))GetAddress(0x9C640))(this);
}

void CActor::SetHealth(float fValue) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x9C600))(this, fValue);
}

void CActor::SetInvulnerable(bool bEnable) {
    ((void(__thiscall*)(CActor*, bool))GetAddress(0x9C730))(this, bEnable);
}

SAMPAPI_END
