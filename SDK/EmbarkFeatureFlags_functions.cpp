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

// Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.UseKneeHeightMovement
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFeatureFlagNativeFunctionLibrary::STATIC_UseKneeHeightMovement()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.UseKneeHeightMovement"));

	UFeatureFlagNativeFunctionLibrary_UseKneeHeightMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.IsLocalPlaytest
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFeatureFlagNativeFunctionLibrary::STATIC_IsLocalPlaytest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.IsLocalPlaytest"));

	UFeatureFlagNativeFunctionLibrary_IsLocalPlaytest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.IsDevMode
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFeatureFlagNativeFunctionLibrary::STATIC_IsDevMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.IsDevMode"));

	UFeatureFlagNativeFunctionLibrary_IsDevMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.IsAutoTestHappypath
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFeatureFlagNativeFunctionLibrary::STATIC_IsAutoTestHappypath()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary.IsAutoTestHappypath"));

	UFeatureFlagNativeFunctionLibrary_IsAutoTestHappypath_Params params;

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
