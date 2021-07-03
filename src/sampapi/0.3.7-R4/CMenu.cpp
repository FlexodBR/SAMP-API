/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CMenu.h"

SAMPAPI_BEGIN_V037R4

CMenu::CMenu(const char* szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction* pInteraction) {
    ((void(__thiscall*)(CMenu*, const char*, float, float, char, float, float, const Interaction*))GetAddress(0xA7430))(this, szTitle, fX, fY, nColumns, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

void CMenu::AddItem(NUMBER nColumn, NUMBER nRow, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, NUMBER, const char*))GetAddress(0xA7590))(this, nColumn, nRow, szText);
}

void CMenu::SetColumnTitle(NUMBER nColumn, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, const char*))GetAddress(0xA7610))(this, nColumn, szText);
}

void CMenu::Hide() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA7680))(this);
}

char* CMenu::GetItem(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA76A0))(this, nColumn, nRow);
}

char* CMenu::GetTitle() {
    return ((char*(__thiscall*)(CMenu*))GetAddress(0xA76C0))(this);
}

char* CMenu::MS(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA76F0))(this, nColumn, nRow);
}

char CMenu::GetActiveRow() {
    return ((char(__thiscall*)(CMenu*))GetAddress(0xA7720))(this);
}

void CMenu::Show() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA7750))(this);
}

SAMPAPI_END
