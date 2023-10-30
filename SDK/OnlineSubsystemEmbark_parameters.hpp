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

// Function OnlineSubsystemEmbark.RegionSetting.GetCurrentRegionIdentifier
struct URegionSetting_GetCurrentRegionIdentifier_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionOnlineName
struct UEmbarkRegionSubsystem_GetCurrentRegionOnlineName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionIdentifier
struct UEmbarkRegionSubsystem_GetCurrentRegionIdentifier_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionDisplayName
struct UEmbarkRegionSubsystem_GetCurrentRegionDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
