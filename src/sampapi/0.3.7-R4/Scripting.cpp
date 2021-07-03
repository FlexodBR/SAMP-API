/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/Scripting.h"

SAMPAPI_BEGIN_V037R4

SAMPAPI_VAR CRunningScript*& Scripting::RefThread() {
    return *(CRunningScript**)GetAddress(0x26B3D0);
}

SAMPAPI_VAR unsigned char* Scripting::ArrayBuffer() {
    return (unsigned char*)GetAddress(0x26B2D0);
}

SAMPAPI_VAR unsigned long& Scripting::RefLastUsedOpcode() {
    return *(unsigned long*)GetAddress(0x26B3D4);
}

SAMPAPI_VAR unsigned long** Scripting::ArrayThreadLocals() {
    return (unsigned long**)GetAddress(0x26B288);
}

SAMPAPI_VAR Scripting::ProcessOneCommandFn& Scripting::RefProcessOneCommand() {
    return *(Scripting::ProcessOneCommandFn*)GetAddress(0x1173B8);
}

SAMPAPI_VAR BOOL& Scripting::RefLocalDebug() {
    return *(BOOL*)GetAddress(0x26B3D8);
}

void Scripting::Initialize() {
    ((void(__cdecl*)())GetAddress(0xB2560))();
}

int Scripting::ExecBuffer() {
    return ((int(__cdecl*)())GetAddress(0xB22E0))();
}

int(__cdecl* Scripting::FunctionProcessCommand())(const Scripting::OpcodeInfo*, ...) {
    return (int(__cdecl*)(const OpcodeInfo*, ...))GetAddress(0xB2320);
}

SAMPAPI_END
