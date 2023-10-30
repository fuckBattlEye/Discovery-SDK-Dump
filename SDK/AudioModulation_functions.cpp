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

// Function AudioModulation.AudioModulationStatics.UpdateModulator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundModulatorBase*     Modulator                      (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.UpdateModulator"));

	UAudioModulationStatics_UpdateModulator_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.UpdateMixFromObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     Mix                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.UpdateMixFromObject"));

	UAudioModulationStatics_UpdateMixFromObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mix = Mix;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.UpdateMixByFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     Mix                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AddressFilter                  (Parm, ZeroConstructor)
// class UClass*                  ParamClassFilter               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundModulationParameter* ParamFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const struct FString& AddressFilter, class UClass* ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.UpdateMixByFilter"));

	UAudioModulationStatics_UpdateMixByFilter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mix = Mix;
	params.AddressFilter = AddressFilter;
	params.ParamClassFilter = ParamClassFilter;
	params.ParamFilter = ParamFilter;
	params.Value = Value;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.UpdateMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     Mix                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundControlBusMixStage> Stages                         (Parm, ZeroConstructor)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, TArray<struct FSoundControlBusMixStage> Stages, float FadeTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.UpdateMix"));

	UAudioModulationStatics_UpdateMix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mix = Mix;
	params.Stages = Stages;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBus*        Bus                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue"));

	UAudioModulationStatics_SetGlobalBusMixValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Bus = Bus;
	params.Value = Value;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.SaveMixToProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     Mix                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ProfileIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int ProfileIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.SaveMixToProfile"));

	UAudioModulationStatics_SaveMixToProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mix = Mix;
	params.ProfileIndex = ProfileIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.LoadMixFromProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     Mix                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActivate                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ProfileIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundControlBusMixStage> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundControlBusMixStage> UAudioModulationStatics::STATIC_LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int ProfileIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.LoadMixFromProfile"));

	UAudioModulationStatics_LoadMixFromProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mix = Mix;
	params.bActivate = bActivate;
	params.ProfileIndex = ProfileIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStatics.DeactivateGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundModulationGenerator* Generator                      (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.DeactivateGenerator"));

	UAudioModulationStatics_DeactivateGenerator_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.DeactivateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     Mix                            (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.DeactivateBusMix"));

	UAudioModulationStatics_DeactivateBusMix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mix = Mix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.DeactivateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBus*        Bus                            (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.DeactivateBus"));

	UAudioModulationStatics_DeactivateBus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Bus = Bus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.CreateBusMixStage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBus*        Bus                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          AttackTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReleaseTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSoundControlBusMixStage ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSoundControlBusMixStage UAudioModulationStatics::STATIC_CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.CreateBusMixStage"));

	UAudioModulationStatics_CreateBusMixStage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Bus = Bus;
	params.Value = Value;
	params.AttackTime = AttackTime;
	params.ReleaseTime = ReleaseTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStatics.CreateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundControlBusMixStage> Stages                         (Parm, ZeroConstructor)
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundControlBusMix* UAudioModulationStatics::STATIC_CreateBusMix(class UObject* WorldContextObject, const struct FName& Name, TArray<struct FSoundControlBusMixStage> Stages, bool Activate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.CreateBusMix"));

	UAudioModulationStatics_CreateBusMix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Name = Name;
	params.Stages = Stages;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStatics.CreateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class USoundModulationParameter* Parameter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBus*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundControlBus* UAudioModulationStatics::STATIC_CreateBus(class UObject* WorldContextObject, const struct FName& Name, class USoundModulationParameter* Parameter, bool Activate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.CreateBus"));

	UAudioModulationStatics_CreateBus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Name = Name;
	params.Parameter = Parameter;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBus*        Bus                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue"));

	UAudioModulationStatics_ClearGlobalBusMixValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Bus = Bus;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues"));

	UAudioModulationStatics_ClearAllGlobalBusMixValues_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.ActivateGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundModulationGenerator* Generator                      (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.ActivateGenerator"));

	UAudioModulationStatics_ActivateGenerator_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.ActivateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBusMix*     Mix                            (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.ActivateBusMix"));

	UAudioModulationStatics_ActivateBusMix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mix = Mix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStatics.ActivateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundControlBus*        Bus                            (Parm, ZeroConstructor, IsPlainOldData)

void UAudioModulationStatics::STATIC_ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStatics.ActivateBus"));

	UAudioModulationStatics_ActivateBus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Bus = Bus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.AudioModulationStyle.GetPatchColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UAudioModulationStyle::STATIC_GetPatchColor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStyle.GetPatchColor"));

	UAudioModulationStyle_GetPatchColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStyle.GetParameterColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UAudioModulationStyle::STATIC_GetParameterColor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStyle.GetParameterColor"));

	UAudioModulationStyle_GetParameterColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UAudioModulationStyle::STATIC_GetModulationGeneratorColor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor"));

	UAudioModulationStyle_GetModulationGeneratorColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStyle.GetControlBusMixColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UAudioModulationStyle::STATIC_GetControlBusMixColor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStyle.GetControlBusMixColor"));

	UAudioModulationStyle_GetControlBusMixColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.AudioModulationStyle.GetControlBusColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UAudioModulationStyle::STATIC_GetControlBusColor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.AudioModulationStyle.GetControlBusColor"));

	UAudioModulationStyle_GetControlBusColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioModulation.SoundControlBusMix.SoloMix
// (Final, Native, Protected)

void USoundControlBusMix::SoloMix()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.SoundControlBusMix.SoloMix"));

	USoundControlBusMix_SoloMix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.SoundControlBusMix.SaveMixToProfile
// (Final, Native, Protected)

void USoundControlBusMix::SaveMixToProfile()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.SoundControlBusMix.SaveMixToProfile"));

	USoundControlBusMix_SaveMixToProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.SoundControlBusMix.LoadMixFromProfile
// (Final, Native, Protected)

void USoundControlBusMix::LoadMixFromProfile()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.SoundControlBusMix.LoadMixFromProfile"));

	USoundControlBusMix_LoadMixFromProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.SoundControlBusMix.DeactivateMix
// (Final, Native, Protected)

void USoundControlBusMix::DeactivateMix()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.SoundControlBusMix.DeactivateMix"));

	USoundControlBusMix_DeactivateMix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.SoundControlBusMix.DeactivateAllMixes
// (Final, Native, Protected)

void USoundControlBusMix::DeactivateAllMixes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.SoundControlBusMix.DeactivateAllMixes"));

	USoundControlBusMix_DeactivateAllMixes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioModulation.SoundControlBusMix.ActivateMix
// (Final, Native, Protected)

void USoundControlBusMix::ActivateMix()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioModulation.SoundControlBusMix.ActivateMix"));

	USoundControlBusMix_ActivateMix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
