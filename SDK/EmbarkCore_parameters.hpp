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

// Function EmbarkCore.FFeatureFlagLockMixinLibrary.IsFeatureEnabled
struct UFFeatureFlagLockMixinLibrary_IsFeatureEnabled_Params
{
	struct FFeatureFlagLock                            FeatureFlagLock;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCore.EmbarkFeatureFlag.ToCommandLine
struct UEmbarkFeatureFlag_ToCommandLine_Params
{
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkCore.EmbarkFeatureFlag.RawIsEnabled
struct UEmbarkFeatureFlag_RawIsEnabled_Params
{
	struct FString                                     FeatureFlagName;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCore.EmbarkFeatureFlag.IsEnabled
struct UEmbarkFeatureFlag_IsEnabled_Params
{
	struct FFeatureFlag                                Flag;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCore.EmbarkFeatureFlag.IsDeclared
struct UEmbarkFeatureFlag_IsDeclared_Params
{
	struct FString                                     FeatureFlagName;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCore.UEmbarkFeatureFlagStatics.ApplyFromAgonesLabel
struct UUEmbarkFeatureFlagStatics_ApplyFromAgonesLabel_Params
{
	struct FString                                     AgonesLabel;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkCore.FVersionInfoStatics.TryGetGlobalVersionInfo
struct UFVersionInfoStatics_TryGetGlobalVersionInfo_Params
{
	struct FVersionInfo                                OutVersionInfo;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
