/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CPed.h"

SAMPAPI_BEGIN_V037R4

CPed::CPed() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABA80))(this);
}

CPed::CPed(int nPlayerNumber, int nModel, CVector position, float fRotation) {
    ((void(__thiscall*)(CPed*, int, int, CVector, float))GetAddress(0xABA80))(this, nPlayerNumber, nModel, position, fRotation);
}

CPed::~CPed() {
}

void CPed::ResetPointers() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABBC0))(this);
}

void CPed::SetInitialState() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABBE0))(this);
}

AimStuff::Aim* CPed::GetAim() {
    return ((AimStuff::Aim * (__thiscall*)(CPed*)) GetAddress(0xABC30))(this);
}

void CPed::SetAim(const AimStuff::Aim* pAim) {
    ((void(__thiscall*)(CPed*, const AimStuff::Aim*))GetAddress(0xABC40))(this, pAim);
}

char CPed::GetCurrentWeapon() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xABC60))(this);
}

GTAREF CPed::GetVehicleRef() {
    return ((GTAREF(__thiscall*)(CPed*))GetAddress(0xABCA0))(this);
}

void CPed::DeleteArrow() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABCC0))(this);
}

BOOL CPed::IsOnScreen() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xABCF0))(this);
}

void CPed::SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP) {
    ((void(__thiscall*)(CPed*, BOOL, BOOL, BOOL, BOOL, BOOL))GetAddress(0xABD10))(this, BP, FP, EP, CP, MP);
}

float CPed::GetHealth() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xABD60))(this);
}

void CPed::SetHealth(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABD80))(this, fValue);
}

float CPed::GetArmour() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xABDA0))(this);
}

void CPed::SetArmour(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABDC0))(this, fValue);
}

int CPed::GetFlags() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xABDE0))(this);
}

void CPed::SetFlags(int nValue) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xABE00))(this, nValue);
}

BOOL CPed::IsDead() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xABE20))(this);
}

char CPed::GetState() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xABE50))(this);
}

void CPed::SetState(char nValue) {
    ((void(__thiscall*)(CPed*, char))GetAddress(0xABE60))(this, nValue);
}

float CPed::GetRotation() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xABEA0))(this);
}

void CPed::ForceRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABF20))(this, fValue);
}

void CPed::SetRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABF70))(this, fValue);
}

BOOL CPed::IsPassenger() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xABFD0))(this);
}

::CVehicle* CPed::GetVehicle() {
    return ((::CVehicle * (__thiscall*)(CPed*)) GetAddress(0xAC010))(this);
}

void CPed::ClearWeapons() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC020))(this);
}

void CPed::SetArmedWeapon(int nWeapon, bool bGameFunc) {
    ((void(__thiscall*)(CPed*, int, bool))GetAddress(0xAC070))(this, nWeapon, bGameFunc);
}

void CPed::RemoveWeaponWhenEnteringVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC120))(this);
}

::CWeapon* CPed::GetCurrentWeaponSlot() {
    return ((::CWeapon * (__thiscall*)(CPed*)) GetAddress(0xAC150))(this);
}

BOOL CPed::CurrentWeaponHasAmmo() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAC170))(this);
}

float CPed::GetDistanceToEntity(const CEntity* pEntity) {
    return ((float(__thiscall*)(CPed*, const CEntity*))GetAddress(0xAC1B0))(this, pEntity);
}

int CPed::GetVehicleSeatIndex() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAC210))(this);
}

void CPed::PutIntoVehicle(GTAREF vehicle, int nSeat) {
    ((void(__thiscall*)(CPed*, GTAREF, int))GetAddress(0xAC2A0))(this, vehicle, nSeat);
}

void CPed::EnterVehicle(GTAREF vehicle, BOOL bAsPassenger) {
    ((void(__thiscall*)(CPed*, GTAREF, BOOL))GetAddress(0xAC420))(this, vehicle, bAsPassenger);
}

void CPed::ExitVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC4F0))(this);
}

void CPed::WarpFromVehicle(CVector putAt) {
    ((void(__thiscall*)(CPed*, CVector))GetAddress(0xAC580))(this, putAt);
}

void CPed::SetSpawnInfo(const CVector* pPosition, float fRotation) {
    ((void(__thiscall*)(CPed*, const CVector*, float))GetAddress(0xAC760))(this, pPosition, fRotation);
}

void CPed::SetControllable(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xAC7A0))(this, bEnable);
}

char CPed::GetDeathInfo(ID* pKiller) {
    return ((char(__thiscall*)(CPed*, ID*))GetAddress(0xAC860))(this, pKiller);
}

::CEntity* CPed::GetFloor() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xACA20))(this);
}

::CWeaponInfo* CPed::GetCurrentWeaponInfo() {
    return ((::CWeaponInfo * (__thiscall*)(CPed*)) GetAddress(0xACAD0))(this);
}

void CPed::HandsUp() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACB20))(this);
}

BOOL CPed::DoesHandsUp() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACB70))(this);
}

void CPed::HoldObject(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xACBD0))(this, nModel);
}

BOOL CPed::EnablePassengerDrivebyMode() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACFA0))(this);
}

void CPed::Extinguish() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD100))(this);
}

unsigned short CPed::GetCurrentWeaponAmmo() {
    return ((unsigned short(__thiscall*)(CPed*))GetAddress(0xAD160))(this);
}

void CPed::EnableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACD20))(this);
}

void CPed::DisableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACD70))(this);
}

BOOL CPed::HasJetpack() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACDD0))(this);
}

CWeapon* CPed::GetWeaponSlot(int nWeapon) {
    return ((::CWeapon * (__thiscall*)(CPed*, int)) GetAddress(0xAD1A0))(this, nWeapon);
}

void CPed::SetWalkStyle(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xAD1E0))(this, szName);
}

void CPed::PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int nLoopA, int nLockX, int nLockY, int nLockF, int nTime) {
    ((void(__thiscall*)(CPed*, const char*, const char*, float, int, int, int, int, int))GetAddress(0xAD240))(this, szName, szFile, fFramedelta, nLoopA, nLockX, nLockY, nLockF, nTime);
}

void CPed::LinkToInterior(char nId, BOOL bRefresh) {
    ((void(__thiscall*)(CPed*, char, BOOL))GetAddress(0xAD350))(this, nId, bRefresh);
}

void CPed::DestroyParachute() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD3F0))(this);
}

BOOL CPed::OpenParachute() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD4E0))(this);
}

void CPed::ProcessParachuteEvent(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xAD630))(this, szName);
}

BOOL CPed::IsOnGround() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD870))(this);
}

void CPed::ResetDamageEntity() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD890))(this);
}

void CPed::RemoveWeaponModel(int nWeapon) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAD8C0))(this, nWeapon);
}

float CPed::GetAimZ() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xAD900))(this);
}

void CPed::SetAimZ(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xAD940))(this, fValue);
}

::CEntity* CPed::GetContactEntity() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xAD9B0))(this);
}

CVehicle* CPed::GetContactVehicle() {
    return ((::CVehicle * (__thiscall*)(CPed*)) GetAddress(0xAD9C0))(this);
}

int CPed::GetStat() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAD9F0))(this);
}

BOOL CPed::PerformingCustomAnimation() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xADA10))(this);
}

void CPed::StartDancing(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xADAE0))(this, nStyle);
}

void CPed::StopDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xADB30))(this);
}

BOOL CPed::DoesDancing() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xADB70))(this);
}

const char* CPed::GetAnimationForDance(int nMove) {
    return ((const char*(__thiscall*)(CPed*, int))GetAddress(0xADB80))(this, nMove);
}

void CPed::DropStuff() {
    ((void(__thiscall*)(CPed*))GetAddress(0xADC10))(this);
}

int CPed::GetStuff() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xADCA0))(this);
}

BOOL CPed::ApplyStuff() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xADCB0))(this);
}

void CPed::ProcessDrunk() {
    ((void(__thiscall*)(CPed*))GetAddress(0xADE00))(this);
}

int CPed::GetDrunkLevel() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xADFB0))(this);
}

void CPed::SetDrunkLevel(int nValue) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xADFC0))(this, nValue);
}

void CPed::ApplyCommandTask(const char* szName, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {
    ((void(__thiscall*)(CPed*, const char*, int, int, int, int, int, int, int, int, int))GetAddress(0xADFE0))(this, szName, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

void CPed::DestroyCommandTask() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAE030))(this);
}

void CPed::EnableCellphone(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xAE080))(this, bEnable);
}

BOOL CPed::UsingCellphone() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAE0B0))(this);
}

void CPed::SetFightingStyle(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAE0E0))(this, nStyle);
}

void CPed::StartUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAE110))(this);
}

void CPed::StopUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAE1F0))(this);
}

BOOL CPed::DoesUrinating() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAE270))(this);
}

const char* CPed::GetLoadedShoppingDataSubsection() {
    return ((const char*(__thiscall*)(CPed*))GetAddress(0xAE2F0))(this);
}

void CPed::LoadShoppingDataSubsection(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xAE310))(this, szName);
}

::CPed* CPed::GetAimedPed() {
    return ((::CPed * (__thiscall*)(CPed*)) GetAddress(0xAEF70))(this);
}

void CPed::SetKeys(short controllerState, short sLeftStickX, short sLeftStickY) {
    ((void(__thiscall*)(CPed*, short, short, short))GetAddress(0xAF350))(this, controllerState, sLeftStickX, sLeftStickY);
}

short CPed::GetKeys(short* pLeftStickX, short* pLeftStickY) {
    return ((short(__thiscall*)(CPed*, short*, short*))GetAddress(0xAF5E0))(this, pLeftStickX, pLeftStickY);
}

void CPed::CreateArrow(int nColor) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAF740))(this, nColor);
}

void CPed::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAFF60))(this, nModel);
}

void CPed::Kill() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAFFE0))(this);
}

void CPed::SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo) {
    ((void(__thiscall*)(CPed*, unsigned char, unsigned short))GetAddress(0xB0090))(this, nWeapon, nAmmo);
}

void CPed::ProcessDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB00C0))(this);
}

void CPed::GiveStuff(int nType) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xB02E0))(this, nType);
}

void CPed::Destroy() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB0FB0))(this);
}

void CPed::SetCameraMode(char nMode) {
    ((void(__thiscall*)(CPed*, char))GetAddress(0x142F0))(this, nMode);
}

void CPed::SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio) {
    ((void(__thiscall*)(CPed*, float, float))GetAddress(0x14310))(this, fExtZoom, fAspectRatio);
}

BOOL CPed::HasAccessory() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAEE40))(this);
}

void CPed::DeleteAccessory(int nSlot) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAEE60))(this, nSlot);
}

BOOL CPed::GetAccessoryState(int nSlot) {
    return ((BOOL(__thiscall*)(CPed*, int))GetAddress(0xAEEC0))(this, nSlot);
}

void CPed::DeleteAllAccessories() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB0AC0))(this);
}

void CPed::AddAccessory(int nSlot, const Accessory* pInfo) {
    ((void(__thiscall*)(CPed*, int, const Accessory*))GetAddress(0xB0B20))(this, nSlot, pInfo);
}

CObject* CPed::GetAccessory(int nSlot) {
    return ((CObject * (__thiscall*)(CPed*, int)) GetAddress(0x13650))(this, nSlot);
}

char CPed::GetCameraMode() {
    return ((char(__thiscall*)(CPed*))GetAddress(0x2CD0))(this);
}

void CPed::GetBonePosition(unsigned int boneId, CVector *outPosition) {
    ((void(__thiscall*)(CPed*, unsigned int, CVector*))GetAddress(0xAE490))(this, boneId, outPosition);
}

SAMPAPI_END
