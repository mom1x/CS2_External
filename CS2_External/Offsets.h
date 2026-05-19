#pragma once
#include <Windows.h>

namespace Offset
{
    namespace Signatures
    {
        const std::string GlobalVars = "";
        const std::string ViewMatrix = "";
        const std::string ClientInput = "";
        const size_t ClientInput_ViewAngle = 0x688;
        const std::string EntityList = "";
        const std::string LocalPlayerController = "";
        const std::string ForceJump = "";
    }

    // Твои актуальные оффсеты из offsets.json
    const DWORD EntityList = 38847920; // dwEntityList
    const DWORD Matrix = 37143280; // dwViewMatrix
    const DWORD ViewAngle = 37207096; // dwViewAngles
    const DWORD LocalPlayerController = 36986192; // dwLocalPlayerController
    const DWORD LocalPlayerPawn = 34146432; // dwLocalPlayerPawn
    inline DWORD ForceJump = 34119712; // jump из buttons.json
    const DWORD GlobalVars = 34101128; // dwGlobalVars
    const DWORD Sensitivity = 37109912; // dwSensitivity
    const DWORD Sensitivity_Value = 88; // dwSensitivity_sensitivity

    // Структуры смещений (схемы) автоматически подтянутся из дампера,
    // но базовые адреса мы зафиксировали выше.
    inline struct
    {
        DWORD m_iHealth = 0x334;
        DWORD m_iMaxHealth = 0x338;
        DWORD m_iTeamNum = 0x3BF;
        DWORD m_bPawnIsAlive = 0x7EC;
        DWORD m_hPlayerPawn = 0x7E4;
        DWORD m_iszPlayerName = 0x630;
        DWORD m_bGlow = 0xBA0;
        DWORD m_glowColorOverride = 0xBA4;
    } Entity;

    inline struct
    {
        DWORD m_vOldOrigin = 0x127C;
        DWORD m_pGameSceneNode = 0x310;
        DWORD BoneArray = 0x1F0;
        DWORD m_angEyeAngles = 0x1578;
        DWORD m_pWeaponServices = 0x11A0;
        DWORD m_iShotsFired = 0x1420;
        DWORD m_flFlashDuration = 0x1478;
        DWORD m_iIDEntIndex = 0x15A4;
        DWORD m_pCameraServices = 0x1138;
        DWORD m_flFOVSensitivityAdjust = 0x14C8;
        DWORD m_iFovStart = 0x214;
        DWORD m_fFlags = 0x3D4;
        DWORD m_bSpotted = 0x238;
        DWORD m_bSpottedByMask = 0x240;
    } Pawn;

    inline struct
    {
        DWORD m_hActiveWeapon = 0x58;
        DWORD m_nSubclassID = 0x368;
        DWORD m_szName = 0xC20;
    } Weapon;

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

    inline bool UpdateOffsets() { return true; }
}
