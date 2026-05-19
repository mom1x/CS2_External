#include "Offsets.h"

// Пустая функция-заглушка, чтобы проект не ругался
DWORD64 SearchOffsets(std::string Signature, DWORD64 ModuleAddress)
{
    return 0;
}

bool Offset::UpdateOffsets()
{
    DWORD64 ClientDLL = reinterpret_cast<DWORD64>(ProcessMgr.GetProcessModuleHandle("client.dll"));
    if (ClientDLL == 0)
        return false;

    // Прописываем только те переменные, которые 100% созданы автором в оригинальном коде:
    Offset::EntityList = 38847920; // dwEntityList
    Offset::LocalPlayerController = 36986192; // dwLocalPlayerController
    Offset::Matrix = 37143280; // dwViewMatrix
    Offset::GlobalVars = 34101128; // dwGlobalVars
    Offset::LocalPlayerPawn = 34146432; // dwLocalPlayerPawn
    Offset::ForceJump = 34119712; // jump

    return true;
}
