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

// Function OnlineSubsystemEmbark.RegionSetting.GetCurrentRegionIdentifier
// (Final, Native, Public, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayTag URegionSetting::GetCurrentRegionIdentifier()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemEmbark.RegionSetting.GetCurrentRegionIdentifier"));

	URegionSetting_GetCurrentRegionIdentifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionOnlineName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkRegionSubsystem::GetCurrentRegionOnlineName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionOnlineName"));

	UEmbarkRegionSubsystem_GetCurrentRegionOnlineName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionIdentifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayTag UEmbarkRegionSubsystem::GetCurrentRegionIdentifier()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionIdentifier"));

	UEmbarkRegionSubsystem_GetCurrentRegionIdentifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UEmbarkRegionSubsystem::GetCurrentRegionDisplayName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemEmbark.EmbarkRegionSubsystem.GetCurrentRegionDisplayName"));

	UEmbarkRegionSubsystem_GetCurrentRegionDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
