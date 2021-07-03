/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/Commands.h"

SAMPAPI_BEGIN_V037R4

void Commands::Default(const char* params) {
    CMDPROC(GetAddress(0x684A0))
    (params);
}

void Commands::TestDeathWindow(const char* params) {
    CMDPROC(GetAddress(0x684C0))
    (params);
}

void Commands::ToggleCameraTargetLabels(const char* params) {
    CMDPROC(GetAddress(0x685A0))
    (params);
}

void Commands::SetChatPageSize(const char* params) {
    CMDPROC(GetAddress(0x685B0))
    (params);
}

void Commands::SetChatFontSize(const char* params) {
    CMDPROC(GetAddress(0x68630))
    (params);
}

void Commands::DrawNameTagStatus(const char* params) {
    CMDPROC(GetAddress(0x686E0))
    (params);
}

void Commands::DrawChatTimestamps(const char* params) {
    CMDPROC(GetAddress(0x686F0))
    (params);
}

void Commands::ToggleAudioStreamMessages(const char* params) {
    CMDPROC(GetAddress(0x68750))
    (params);
}

void Commands::ToggleURLMessages(const char* params) {
    CMDPROC(GetAddress(0x687C0))
    (params);
}

void Commands::ToggleHUDScaleFix(const char* params) {
    CMDPROC(GetAddress(0x68830))
    (params);
}

void Commands::PrintMemory(const char* params) {
    CMDPROC(GetAddress(0x68870))
    (params);
}

void Commands::SetFrameLimiter(const char* params) {
    CMDPROC(GetAddress(0x68890))
    (params);
}

void Commands::ToggleHeadMoves(const char* params) {
    CMDPROC(GetAddress(0x68920))
    (params);
}

void Commands::Quit(const char* params) {
    CMDPROC(GetAddress(0x689A0))
    (params);
}

void Commands::CmpStat(const char* params) {
    CMDPROC(GetAddress(0x689B0))
    (params);
}

void Commands::SavePosition(const char* params) {
    CMDPROC(GetAddress(0x689C0))
    (params);
}

void Commands::SavePositionOnly(const char* params) {
    CMDPROC(GetAddress(0x68B40))
    (params);
}

void Commands::PrintCurrentInterior(const char* params) {
    CMDPROC(GetAddress(0x68F90))
    (params);
}

void Commands::ToggleObjectsLight(const char* params) {
    CMDPROC(GetAddress(0x68FC0))
    (params);
}

void Commands::ToggleDebugLabels(const char* params) {
    CMDPROC(GetAddress(0x68FE0))
    (params);
}

void Commands::SendRconCommand(const char* params) {
    CMDPROC(GetAddress(0x68FF0))
    (params);
}

void Commands::Debug::SetPlayerSkin(const char* params) {
    CMDPROC(GetAddress(0x68CC0))
    (params);
}

void Commands::Debug::CreateVehicle(const char* params) {
    CMDPROC(GetAddress(0x68D30))
    (params);
}

void Commands::Debug::EnableVehicleSelection(const char* params) {
    CMDPROC(GetAddress(0x68E70))
    (params);
}

void Commands::Debug::SetWorldWeather(const char* params) {
    CMDPROC(GetAddress(0x68E90))
    (params);
}

void Commands::Debug::SetWorldTime(const char* params) {
    CMDPROC(GetAddress(0x68EE0))
    (params);
}

void Commands::Setup() {
    ((void(__cdecl*)())GetAddress(0x690D0))();
}

SAMPAPI_END
