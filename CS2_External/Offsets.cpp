#include "Offsets.h"

// Функцию поиска оставляем пустой, так как сигнатуры больше не используются
DWORD64 SearchOffsets(std::string Signature, DWORD64 ModuleAddress)
{
    return 0;
}

bool Offset::UpdateOffsets()
{
    DWORD64 ClientDLL = reinterpret_cast<DWORD64>(ProcessMgr.GetProcessModuleHandle("client.dll"));
    if (ClientDLL == 0)
        return false;

    // Напрямую записываем актуальные адреса из твоего дампера a2x:
    Offset::EntityList = 38847920; // dwEntityList
    Offset::LocalPlayerController = 36986192; // dwLocalPlayerController
    Offset::Matrix = 37143280; // dwViewMatrix
    Offset::GlobalVars = 34101128; // dwGlobalVars
    Offset::ViewAngle = 37207096; // dwViewAngles
    Offset::LocalPlayerPawn = 34146432; // dwLocalPlayerPawn
    Offset::ForceJump = 34119712; // jump

    return true;
}
