#pragma once
#include <Windows.h>
#include "Utils/ProcessManager.hpp"
#include <string>

namespace Offset
{

namespace Signatures
{
const std::string GlobalVars = "48 89 15 ?? ?? ?? ?? 48 89 42";
const std::string ViewMatrix = "48 8D 0D ?? ?? ?? ?? 48 C1 E0 06";
const std::string ClientInput = "48 8B 0D ?? ?? ?? ?? 4C 8D 44 24 40 33 D2 F3 0F";
const size_t ClientInput_ViewAngle = 0x688;
const std::string EntityList = "48 8B 0D ?? ?? ?? ?? 48 89 7C 24 ?? 8B FA C1";
const std::string LocalPlayerController = "48 8B 15 ?? ?? ?? ?? 48 85 D2 74 ?? 8B 92 B4 06 00 00";
const std::string ForceJump = "48 8B 05 ?? ?? ?? ?? 48 8D 1D ?? ?? ?? ?? 48 89 45";
}

// Актуальные оффсеты напрямую из твоего файла
const DWORD EntityList = 38847920;
const DWORD Matrix = 37143280;
const DWORD ViewAngle = 37207096;
const DWORD LocalPlayerController = 36986192;
const DWORD LocalPlayerPawn = 34146432;
inline DWORD ForceJump = 34119712;
const DWORD GlobalVars = 34101128;
const DWORD Sensitivity = 37109912;
const DWORD Sensitivity_Value = 88;

inline struct
{
DWORD m_iHealth = 844;
DWORD m_iMaxHealth = 840;
DWORD m_iTeamNum = 1003;
DWORD m_bPawnIsAlive = 2324;
DWORD m_hPlayerPawn = 2316;
DWORD m_iszPlayerName = 1780;
DWORD m_bGlow = 3544 + 81; // m_Glow + m_bGlowing
DWORD m_glowColorOverride = 3544 + 64; // m_Glow + m_glowColorOverride
}Entity;

inline struct
{
DWORD m_vOldOrigin = 5008;
DWORD m_pGameSceneNode = 816;
DWORD BoneArray = 336 + 128; // m_modelState + 0x80
DWORD m_angEyeAngles = 13088;
DWORD m_pWeaponServices = 4576;
DWORD m_iShotsFired = 7268;
DWORD m_flFlashDuration = 5120;
DWORD m_iIDEntIndex = 13308;
DWORD m_pCameraServices = 4632;
DWORD m_flFOVSensitivityAdjust = 5000;
DWORD m_iFovStart = 660;
DWORD m_fFlags = 1016;
DWORD m_bSpotted = 7224 + 8; // entitySpottedState + bSpotted
DWORD m_bSpottedByMask = 7224 + 12; // entitySpottedState + bSpottedByMask
}Pawn;

inline struct
{
DWORD m_hActiveWeapon = 96;
DWORD m_nSubclassID = 896;
DWORD m_szName = 1824;
}Weapon;

inline struct
{
DWORD RealTime = 0x00;
DWORD FrameCount = 0x04;
DWORD MaxClients = 0x10;
DWORD IntervalPerTick = 0x14;
DWORD CurrentTime = 0x30;
DWORD TickCount = 0x44;
DWORD IntervalPerTick2 = 0x44;
DWORD CurrentMapName = 0x58;
} GlobalVar;

bool UpdateOffsets();
}
