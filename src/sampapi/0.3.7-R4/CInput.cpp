/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CInput.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CInput*& RefInputBox() {
    return *(CInput**)GetAddress(0x26E9FC);
}

CInput::CInput(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CInput*, IDirect3DDevice9*))GetAddress(0x69390))(this, pDevice);
}

void CInput::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CInput*, CRect*))GetAddress(0x69400))(this, pRect);
}

void CInput::Open() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69440))(this);
}

void CInput::Close() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69540))(this);
}

void CInput::AddRecall(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x69590))(this, szString);
}

void CInput::RecallUp() {
    ((void(__thiscall*)(CInput*))GetAddress(0x695F0))(this);
}

void CInput::RecallDown() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69660))(this);
}

void CInput::EnableCursor() {
    ((void(__thiscall*)(CInput*))GetAddress(0x696B0))(this);
}

CMDPROC CInput::GetCommandHandler(const char* szName) {
    return ((CMDPROC(__thiscall*)(CInput*, const char*))GetAddress(0x696D0))(this, szName);
}

void CInput::SetDefaultCommand(CMDPROC proc) {
    ((void(__thiscall*)(CInput*, CMDPROC))GetAddress(0x69720))(this, proc);
}

void CInput::AddCommand(const char* szName, CMDPROC handler) {
    ((void(__thiscall*)(CInput*, const char*, CMDPROC))GetAddress(0x69730))(this, szName, handler);
}

BOOL CInput::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CInput*, int, int, int))GetAddress(0x69790))(this, uMsg, wParam, lParam);
}

void CInput::ResetDialogControls(CDXUTDialog* pGameUi) {
    ((void(__thiscall*)(CInput*, CDXUTDialog*))GetAddress(0x69800))(this, pGameUi);
}

void CInput::Send(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x698C0))(this, szString);
}

void CInput::ProcessInput() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69990))(this);
}

SAMPAPI_END
