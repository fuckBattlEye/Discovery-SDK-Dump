#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
struct UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params
{
	bool                                               bSkipFirstPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
struct UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
struct UGameMapsSettings_GetGameMapsSettings_Params
{
	class UGameMapsSettings*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
