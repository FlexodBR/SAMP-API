/*
	This is a SAMP (0.3.7-R4) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R4/CAudio.h"

SAMPAPI_BEGIN_V037R4

int CAudio::GetRadioStation() {
    return ((int(__thiscall*)(CAudio*))GetAddress(0xA2220))(this);
}

void CAudio::StartRadio(int nStation) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA2250))(this, nStation);
}

void CAudio::StopRadio() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA2270))(this);
}

float CAudio::GetRadioVolume() {
    return ((float(__thiscall*)(CAudio*))GetAddress(0xA2290))(this);
}

void CAudio::StopOutdoorAmbienceTrack() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA22A0))(this);
}

void CAudio::SetOutdoorAmbienceTrack(int nSound) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA22B0))(this, nSound);
}

bool CAudio::IsOutdoorAmbienceTrackDisabled() {
    return ((bool(__thiscall*)(CAudio*))GetAddress(0xA23B0))(this);
}

void CAudio::Play(int nSound, CVector location) {
    ((void(__thiscall*)(CAudio*, int, CVector))GetAddress(0xA22D0))(this, nSound, location);
}

SAMPAPI_END
