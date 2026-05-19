#pragma once
#include <Windows.h>
#include "Utils/ProcessManager.hpp"
#include <client_dll.hpp>
#include <offsets.hpp>

namespace Offset
{

namespace Signatures
{
// Старые сигнатуры отключены, так как они вызывают краш после обновления игры
const std::string GlobalVars = "";
const std::string ViewMatrix = "";
const std::string ClientInput = "";
const size_t ClientInput_ViewAngle = 0x688;
const std::string EntityList = "";
const std::string LocalPlayerController = "";
const std::string ForceJump = "";
}

// Прямое назначение актуальных адресов из твоего свежего дампера a2x
const DWORD EntityList = 38847920; // dwEntityList из offsets.json
const DWORD Matrix = 37143280; // dwViewMatrix из offsets.json
const DWORD ViewAngle = 37207096; // dwViewAngles из offsets.json
const DWORD LocalPlayerController = 36986192; // dwLocalPlayerController из offsets.json
const DWORD LocalPlayerPawn = 34146432; // dwLocalPlayerPawn из offsets.json
inline DWORD ForceJump = 34119712; // jump из buttons.json
const DWORD GlobalVars = 34101128; // dwGlobalVars из offsets.json
const DWORD Sensitivity = 37109912; // dwSensitivity из offsets.json
const DWORD Sensitivity_Value = 88; // dwSensitivity_sensitivity из offsets.json

struct
{
DWORD m_iHealth = cs2_dumper::schemas::client_dll::C_BaseEntity::m_iHealth;
DWORD m_iMaxHealth = cs2_dumper::schemas::client_dll::C_BaseEntity::m_iMaxHealth;
DWORD m_iTeamNum = cs2_dumper::schemas::client_dll::C_BaseEntity::m_iTeamNum;
DWORD m_bPawnIsAlive = cs2_dumper::schemas::client_dll::CCSPlayerController::m_bPawnIsAlive;
DWORD m_hPlayerPawn = cs2_dumper::schemas::client_dll::CCSPlayerController::m_hPlayerPawn;
DWORD m_iszPlayerName = cs2_dumper::schemas::client_dll::CBasePlayerController::m_iszPlayerName;
DWORD m_bGlow = cs2_dumper::schemas::client_dll::C_BaseModelEntity::m_Glow + cs2_dumper::schemas::client_dll::CGlowProperty::m_bGlowing;
DWORD m_glowColorOverride = cs2_dumper::schemas::client_dll::C_BaseModelEntity::m_Glow + cs2_dumper::schemas::client_dll::CGlowProperty::m_glowColorOverride;
}Entity;

struct
{
DWORD m_vOldOrigin = cs2_dumper::schemas::client_dll::C_BasePlayerPawn::m_vOldOrigin;
DWORD m_pGameSceneNode = cs2_dumper::schemas::client_dll::C_BaseEntity::m_pGameSceneNode;
DWORD BoneArray = cs2_dumper::schemas::client_dll::CSkeletonInstance::m_modelState + 0x80;
DWORD m_angEyeAngles = cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_angEyeAngles;
DWORD m_pWeaponServices = cs2_dumper::schemas::client_dll::C_BasePlayerPawn::m_pWeaponServices;
DWORD m_iShotsFired = cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_iShotsFired;
DWORD m_flFlashDuration = cs2_dumper::schemas::client_dll::C_CSPlayerPawnBase::m_flFlashDuration;
DWORD m_iIDEntIndex = cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_iIDEntIndex;
DWORD m_pCameraServices = cs2_dumper::schemas::client_dll::C_BasePlayerPawn::m_pCameraServices;
DWORD m_flFOVSensitivityAdjust = cs2_dumper::schemas::client_dll::C_BasePlayerPawn::m_flFOVSensitivityAdjust;
DWORD m_iFovStart = cs2_dumper::schemas::client_dll::CCSPlayerBase_CameraServices::m_iFOVStart;
DWORD m_fFlags = cs2_dumper::schemas::client_dll::C_BaseEntity::m_fFlags;
DWORD m_bSpotted = cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_entitySpottedState + cs2_dumper::schemas::client_dll::EntitySpottedState_t::m_bSpotted;
DWORD m_bSpottedByMask = cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_entitySpottedState + cs2_dumper::schemas::client_dll::EntitySpottedState_t::m_bSpottedByMask;
}Pawn;

struct
{
DWORD m_hActiveWeapon = cs2_dumper::schemas::client_dll::CPlayer_WeaponServices::m_hActiveWeapon;
DWORD m_nSubclassID = cs2_dumper::schemas::client_dll::C_BaseEntity::m_nSubclassID;
DWORD m_szName = cs2_dumper::schemas::client_dll::CCSWeaponBaseVData::m_szName;
}Weapon;

struct
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

bool UpdateOffsets() { return true; }
}
