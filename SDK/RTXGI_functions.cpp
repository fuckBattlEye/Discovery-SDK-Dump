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

// Function RTXGI.DDGIVolumeComponent.ToggleVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsVolumeEnabled                (Parm, ZeroConstructor, IsPlainOldData)

void UDDGIVolumeComponent::ToggleVolume(bool IsVolumeEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.ToggleVolume"));

	UDDGIVolumeComponent_ToggleVolume_Params params;
	params.IsVolumeEnabled = IsVolumeEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTXGI.DDGIVolumeComponent.SetLightMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewLightMultiplier             (Parm, ZeroConstructor, IsPlainOldData)

void UDDGIVolumeComponent::SetLightMultiplier(float NewLightMultiplier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.SetLightMultiplier"));

	UDDGIVolumeComponent_SetLightMultiplier_Params params;
	params.NewLightMultiplier = NewLightMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewIrradianceScalar            (Parm, ZeroConstructor, IsPlainOldData)

void UDDGIVolumeComponent::SetIrradianceScalar(float NewIrradianceScalar)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar"));

	UDDGIVolumeComponent_SetIrradianceScalar_Params params;
	params.NewIrradianceScalar = NewIrradianceScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewEmissiveMultiplier          (Parm, ZeroConstructor, IsPlainOldData)

void UDDGIVolumeComponent::SetEmissiveMultiplier(float NewEmissiveMultiplier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier"));

	UDDGIVolumeComponent_SetEmissiveMultiplier_Params params;
	params.NewEmissiveMultiplier = NewEmissiveMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTXGI.DDGIVolumeComponent.GetLightMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDDGIVolumeComponent::GetLightMultiplier()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.GetLightMultiplier"));

	UDDGIVolumeComponent_GetLightMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDDGIVolumeComponent::GetIrradianceScalar()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar"));

	UDDGIVolumeComponent_GetIrradianceScalar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDDGIVolumeComponent::GetEmissiveMultiplier()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier"));

	UDDGIVolumeComponent_GetEmissiveMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
// (Final, Exec, Native, Public)

void UDDGIVolumeComponent::DDGIClearVolumes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes"));

	UDDGIVolumeComponent_DDGIClearVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTXGI.DDGIVolumeComponent.ClearProbeData
// (Final, Native, Public, BlueprintCallable)

void UDDGIVolumeComponent::ClearProbeData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RTXGI.DDGIVolumeComponent.ClearProbeData"));

	UDDGIVolumeComponent_ClearProbeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
