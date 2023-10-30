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

// Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
struct UAudioLinkBlueprintInterface_StopLink_Params
{
};

// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
struct UAudioLinkBlueprintInterface_SetLinkSound_Params
{
	class USoundBase*                                  NewSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
struct UAudioLinkBlueprintInterface_PlayLink_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
struct UAudioLinkBlueprintInterface_IsLinkPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
