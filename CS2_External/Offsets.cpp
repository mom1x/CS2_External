#include "Offsets.h"

namespace Offset
{
    // Отключаем сломанный поиск сигнатур, чтобы не было краша
    bool UpdateOffsets()
    {
        return true; 
    }

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

    // Жестко прописываем твои новые оффсеты из дампера a2x
    const DWORD EntityList = 38847920;             
    const DWORD Matrix = 37143280;                 
    const DWORD ViewAngle = 37207096;              
    const DWORD LocalPlayerController = 36986192;   
    const DWORD LocalPlayerPawn = 34146432;         
    inline DWORD ForceJump = 34119712;             
    const DWORD GlobalVars = 34101128;              
    const DWORD Sensitivity = 37109912;             
    const DWORD Sensitivity_Value = 88;             

    // Базовые структуры смещений
    struct EntityOffsets Entity = {
        .m_iHealth = 0x334,
        .m_iMaxHealth = 0x338,
        .m_iTeamNum = 0x3BF,
        .m_bPawnIsAlive = 0x7EC,
        .m_hPlayerPawn = 0x7E4,
        .m_iszPlayerName = 0x630,
        .m_bGlow = 0xBA0,
        .m_glowColorOverride = 0xBA4
    };

    struct PawnOffsets Pawn = {
        .m_vOldOrigin = 0x127C,
        .m_pGameSceneNode = 0x310,
        .BoneArray = 0x1F0,
        .m_angEyeAngles = 0x1578,
        .m_pWeaponServices = 0x11A0,
        .m_iShotsFired = 0x1420,
        .m_flFlashDuration = 0x1478,
        .m_iIDEntIndex = 0x15A4,
        .m_pCameraServices = 0x1138,
        .m_flFOVSensitivityAdjust = 0x14C8,
        .m_iFovStart = 0x214,
        .m_fFlags = 0x3D4,
        .m_bSpotted = 0x238,
        .m_bSpottedByMask = 0x240
    };

    struct WeaponOffsets Weapon = {
        .m_hActiveWeapon = 0x58,
        .m_nSubclassID = 0x368,
        .m_szName = 0xC20
    };

    struct GlobalVarOffsets GlobalVar = {
        .RealTime = 0x00,
        .FrameCount = 0x04,
        .MaxClients = 0x10,
        .IntervalPerTick = 0x14,
        .CurrentTime = 0x30,
        .TickCount = 0x44,
        .IntervalPerTick2 = 0x44,
        .CurrentMapName = 0x58
    };
}
