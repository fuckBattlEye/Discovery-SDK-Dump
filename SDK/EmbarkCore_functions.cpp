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

// Function EmbarkCore.FFeatureFlagLockMixinLibrary.IsFeatureEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureFlagLock        FeatureFlagLock                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFFeatureFlagLockMixinLibrary::STATIC_IsFeatureEnabled(const struct FFeatureFlagLock& FeatureFlagLock)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCore.FFeatureFlagLockMixinLibrary.IsFeatureEnabled"));

	UFFeatureFlagLockMixinLibrary_IsFeatureEnabled_Params params;
	params.FeatureFlagLock = FeatureFlagLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCore.EmbarkFeatureFlag.ToCommandLine
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Prefix                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkFeatureFlag::STATIC_ToCommandLine(const struct FString& Prefix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCore.EmbarkFeatureFlag.ToCommandLine"));

	UEmbarkFeatureFlag_ToCommandLine_Params params;
	params.Prefix = Prefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCore.EmbarkFeatureFlag.RawIsEnabled
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 FeatureFlagName                (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFeatureFlag::STATIC_RawIsEnabled(const struct FString& FeatureFlagName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCore.EmbarkFeatureFlag.RawIsEnabled"));

	UEmbarkFeatureFlag_RawIsEnabled_Params params;
	params.FeatureFlagName = FeatureFlagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCore.EmbarkFeatureFlag.IsEnabled
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FFeatureFlag            Flag                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFeatureFlag::STATIC_IsEnabled(const struct FFeatureFlag& Flag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCore.EmbarkFeatureFlag.IsEnabled"));

	UEmbarkFeatureFlag_IsEnabled_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCore.EmbarkFeatureFlag.IsDeclared
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 FeatureFlagName                (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFeatureFlag::STATIC_IsDeclared(const struct FString& FeatureFlagName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCore.EmbarkFeatureFlag.IsDeclared"));

	UEmbarkFeatureFlag_IsDeclared_Params params;
	params.FeatureFlagName = FeatureFlagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCore.UEmbarkFeatureFlagStatics.ApplyFromAgonesLabel
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 AgonesLabel                    (Parm, ZeroConstructor)

void UUEmbarkFeatureFlagStatics::STATIC_ApplyFromAgonesLabel(const struct FString& AgonesLabel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCore.UEmbarkFeatureFlagStatics.ApplyFromAgonesLabel"));

	UUEmbarkFeatureFlagStatics_ApplyFromAgonesLabel_Params params;
	params.AgonesLabel = AgonesLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCore.FVersionInfoStatics.TryGetGlobalVersionInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FVersionInfo            OutVersionInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFVersionInfoStatics::STATIC_TryGetGlobalVersionInfo(struct FVersionInfo* OutVersionInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCore.FVersionInfoStatics.TryGetGlobalVersionInfo"));

	UFVersionInfoStatics_TryGetGlobalVersionInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVersionInfo != nullptr)
		*OutVersionInfo = params.OutVersionInfo;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
