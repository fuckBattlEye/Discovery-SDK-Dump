//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EmbarkAchievements.AchievementSubsystem.SetAchievementProgress
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            TriggerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ProgressToWrite                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAchievementSubsystem::SetAchievementProgress(const struct FGameplayTag& TriggerEvent, int ProgressToWrite)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAchievements.AchievementSubsystem.SetAchievementProgress"));

	UAchievementSubsystem_SetAchievementProgress_Params params;
	params.TriggerEvent = TriggerEvent;
	params.ProgressToWrite = ProgressToWrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAchievements.AchievementSubsystem.GetAchievementProgress
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag            TriggerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAchievementSubsystem::GetAchievementProgress(const struct FGameplayTag& TriggerEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAchievements.AchievementSubsystem.GetAchievementProgress"));

	UAchievementSubsystem_GetAchievementProgress_Params params;
	params.TriggerEvent = TriggerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAchievements.AchievementSubsystem.AddAchievementProgress
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            TriggerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            TimesToTrigger                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAchievementSubsystem::AddAchievementProgress(const struct FGameplayTag& TriggerEvent, int TimesToTrigger)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAchievements.AchievementSubsystem.AddAchievementProgress"));

	UAchievementSubsystem_AddAchievementProgress_Params params;
	params.TriggerEvent = TriggerEvent;
	params.TimesToTrigger = TimesToTrigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
