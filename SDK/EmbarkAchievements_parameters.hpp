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

// Function EmbarkAchievements.AchievementSubsystem.SetAchievementProgress
struct UAchievementSubsystem_SetAchievementProgress_Params
{
	struct FGameplayTag                                TriggerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ProgressToWrite;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAchievements.AchievementSubsystem.GetAchievementProgress
struct UAchievementSubsystem_GetAchievementProgress_Params
{
	struct FGameplayTag                                TriggerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAchievements.AchievementSubsystem.AddAchievementProgress
struct UAchievementSubsystem_AddAchievementProgress_Params
{
	struct FGameplayTag                                TriggerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                TimesToTrigger;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
