/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CDialog.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CDialog*& RefDialog() {
    return *(CDialog**)GetAddress(0x26E9C8);
}

CDialog::CDialog(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CDialog*, IDirect3DDevice9*))GetAddress(0x6F450))(this, pDevice);
}

void CDialog::GetScreenRect(CRect* pRect) {
    ((void(__thiscall*)(CDialog*, CRect*))GetAddress(0x6F680))(this, pRect);
}

int CDialog::GetTextScreenLength(const char* szString) {
    return ((int(__thiscall*)(CDialog*, const char*))GetAddress(0x6F6B0))(this, szString);
}

void CDialog::Hide() {
    ((void(__thiscall*)(CDialog*))GetAddress(0x6F830))(this);
}

void CDialog::ResetDialogControls(CDXUTDialog* pDialog) {
    ((void(__thiscall*)(CDialog*, CDXUTDialog*))GetAddress(0x6F9F0))(this, pDialog);
}

void CDialog::Show(int nId, int nType, const char* szCaption, const char* szText, const char* szLeftButton, const char* szRightButton, BOOL bServerside) {
    ((void(__thiscall*)(CDialog*, int, int, const char*, const char*, const char*, const char*, BOOL))GetAddress(0x6FFE0))(this, nId, nType, szCaption, szText, szLeftButton, szRightButton, bServerside);
}

void CDialog::Close(char nProcessButton) {
    ((void(__thiscall*)(CDialog*, char))GetAddress(0x70660))(this, nProcessButton);
}

void CDialog::Draw() {
    ((void(__thiscall*)(CDialog*))GetAddress(0x6F860))(this);
}

SAMPAPI_END
