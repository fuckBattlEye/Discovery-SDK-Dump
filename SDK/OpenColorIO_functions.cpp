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

// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FOpenColorIOColorConversionSettings ConversionSettings             (ConstParm, Parm, OutParm, ReferenceParm)
// class UTexture*                InputTexture                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  OutputRenderTarget             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenColorIOBlueprintLibrary::STATIC_ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform"));

	UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ConversionSettings = ConversionSettings;
	params.InputTexture = InputTexture;
	params.OutputRenderTarget = OutputRenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions"));

	UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params params;
	params.IsActiveFunctions = IsActiveFunctions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSceneViewExtensionIsActiveFunctor IsActiveFunction               (ConstParm, Parm, OutParm, ReferenceParm)

void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction"));

	UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params params;
	params.IsActiveFunction = IsActiveFunction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfiguration InDisplayConfiguration         (Parm)

void UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration"));

	UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params params;
	params.InDisplayConfiguration = InDisplayConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
// (Final, Native, Public, BlueprintCallable)

void UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension"));

	UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfiguration InDisplayConfiguration         (Parm)
// struct FSceneViewExtensionIsActiveFunctor IsActiveFunction               (ConstParm, Parm, OutParm, ReferenceParm)
// class UOpenColorIODisplayExtensionWrapper* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::STATIC_CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension"));

	UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params params;
	params.InDisplayConfiguration = InDisplayConfiguration;
	params.IsActiveFunction = IsActiveFunction;

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
