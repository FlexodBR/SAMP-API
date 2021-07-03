/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/Settings.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR Settings& RefSettings() {
    return *(Settings*)GetAddress(0x26DE60);
}

void Settings::Initialize() {
    ((void(__cdecl*)())GetAddress(0xC45D0))();
}

void Settings::GetFromCommandLine(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC3ED0))(szLine, szBuffer);
}

void Settings::GetFromQuotes(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC3F20))(szLine, szBuffer);
}

SAMPAPI_END
