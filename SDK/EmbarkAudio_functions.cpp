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

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.StopListeningForAudioDeviceDestroyed
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_StopListeningForAudioDeviceDestroyed(class UObject* InObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.StopListeningForAudioDeviceDestroyed"));

	UEmbarkAudioFunctionLibrary_StopListeningForAudioDeviceDestroyed_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.StopListeningForAudioDeviceCreated
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_StopListeningForAudioDeviceCreated(class UObject* InObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.StopListeningForAudioDeviceCreated"));

	UEmbarkAudioFunctionLibrary_StopListeningForAudioDeviceCreated_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.SetSubmixOutputVolumeForAudioDevice
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            InSoundSubmix                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          InOutputVolume                 (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_SetSubmixOutputVolumeForAudioDevice(uint32_t ID, class USoundSubmix* InSoundSubmix, float InOutputVolume)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.SetSubmixOutputVolumeForAudioDevice"));

	UEmbarkAudioFunctionLibrary_SetSubmixOutputVolumeForAudioDevice_Params params;
	params.ID = ID;
	params.InSoundSubmix = InSoundSubmix;
	params.InOutputVolume = InOutputVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.SetSoundMixClassOverrideForAudioDevice
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundMix*               InSoundMixModifier             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundClass*             InSoundClass                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInTime                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bApplyToChildren               (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_SetSoundMixClassOverrideForAudioDevice(uint32_t ID, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.SetSoundMixClassOverrideForAudioDevice"));

	UEmbarkAudioFunctionLibrary_SetSoundMixClassOverrideForAudioDevice_Params params;
	params.ID = ID;
	params.InSoundMixModifier = InSoundMixModifier;
	params.InSoundClass = InSoundClass;
	params.Volume = Volume;
	params.Pitch = Pitch;
	params.FadeInTime = FadeInTime;
	params.bApplyToChildren = bApplyToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.PushSoundMixModifierForAudioDevice
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundMix*               InSoundMixModifier             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_PushSoundMixModifierForAudioDevice(uint32_t ID, class USoundMix* InSoundMixModifier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.PushSoundMixModifierForAudioDevice"));

	UEmbarkAudioFunctionLibrary_PushSoundMixModifierForAudioDevice_Params params;
	params.ID = ID;
	params.InSoundMixModifier = InSoundMixModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.PopSoundMixModifierForAudioDevice
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundMix*               InSoundMixModifier             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_PopSoundMixModifierForAudioDevice(uint32_t ID, class USoundMix* InSoundMixModifier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.PopSoundMixModifierForAudioDevice"));

	UEmbarkAudioFunctionLibrary_PopSoundMixModifierForAudioDevice_Params params;
	params.ID = ID;
	params.InSoundMixModifier = InSoundMixModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.ListenForAudioDeviceDestroyed
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InFunctionName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_ListenForAudioDeviceDestroyed(class UObject* InObject, const struct FName& InFunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.ListenForAudioDeviceDestroyed"));

	UEmbarkAudioFunctionLibrary_ListenForAudioDeviceDestroyed_Params params;
	params.InObject = InObject;
	params.InFunctionName = InFunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.ListenForAudioDeviceCreated
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InFunctionName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_ListenForAudioDeviceCreated(class UObject* InObject, const struct FName& InFunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.ListenForAudioDeviceCreated"));

	UEmbarkAudioFunctionLibrary_ListenForAudioDeviceCreated_Params params;
	params.InObject = InObject;
	params.InFunctionName = InFunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.IsWorldAudioMuted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAudioFunctionLibrary::STATIC_IsWorldAudioMuted(class UWorld* World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.IsWorldAudioMuted"));

	UEmbarkAudioFunctionLibrary_IsWorldAudioMuted_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMaxDistance
// (Final, Native, Static, Public)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkAudioFunctionLibrary::STATIC_GetMaxDistance(class USoundBase* Sound)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMaxDistance"));

	UEmbarkAudioFunctionLibrary_GetMaxDistance_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMaxChannelsForAudioDvice
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkAudioFunctionLibrary::STATIC_GetMaxChannelsForAudioDvice(uint32_t ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMaxChannelsForAudioDvice"));

	UEmbarkAudioFunctionLibrary_GetMaxChannelsForAudioDvice_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMappedRangeClampedCurve
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InRange                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMapRangeCurve      Curve                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInvertCurve                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkAudioFunctionLibrary::STATIC_GetMappedRangeClampedCurve(const struct FVector2D& InRange, const struct FVector2D& OutRange, float Value, enum class EMapRangeCurve Curve, bool bInvertCurve)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMappedRangeClampedCurve"));

	UEmbarkAudioFunctionLibrary_GetMappedRangeClampedCurve_Params params;
	params.InRange = InRange;
	params.OutRange = OutRange;
	params.Value = Value;
	params.Curve = Curve;
	params.bInvertCurve = bInvertCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetFirstListenerTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkAudioFunctionLibrary::STATIC_GetFirstListenerTransform(class UWorld* World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetFirstListenerTransform"));

	UEmbarkAudioFunctionLibrary_GetFirstListenerTransform_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetFirstListenerPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkAudioFunctionLibrary::STATIC_GetFirstListenerPosition(class UWorld* World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetFirstListenerPosition"));

	UEmbarkAudioFunctionLibrary_GetFirstListenerPosition_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetDistanceToNearestListener
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkAudioFunctionLibrary::STATIC_GetDistanceToNearestListener(class UWorld* World, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetDistanceToNearestListener"));

	UEmbarkAudioFunctionLibrary_GetDistanceToNearestListener_Params params;
	params.World = World;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetAudioVolume
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AAudioVolume*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAudioVolume* UEmbarkAudioFunctionLibrary::STATIC_GetAudioVolume(class UWorld* World, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetAudioVolume"));

	UEmbarkAudioFunctionLibrary_GetAudioVolume_Params params;
	params.World = World;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetAudioDeviceIDs
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<uint32_t>               OutAudioDeviceIDs              (Parm, OutParm, ZeroConstructor)

void UEmbarkAudioFunctionLibrary::STATIC_GetAudioDeviceIDs(TArray<uint32_t>* OutAudioDeviceIDs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetAudioDeviceIDs"));

	UEmbarkAudioFunctionLibrary_GetAudioDeviceIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAudioDeviceIDs != nullptr)
		*OutAudioDeviceIDs = params.OutAudioDeviceIDs;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetActorDistanceToNearestListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkAudioFunctionLibrary::STATIC_GetActorDistanceToNearestListener(class AActor* InActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetActorDistanceToNearestListener"));

	UEmbarkAudioFunctionLibrary_GetActorDistanceToNearestListener_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.ClearSoundMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class USoundMix*               SoundMix                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_ClearSoundMix(class UWorld* World, class USoundMix* SoundMix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.ClearSoundMix"));

	UEmbarkAudioFunctionLibrary_ClearSoundMix_Params params;
	params.World = World;
	params.SoundMix = SoundMix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioFunctionLibrary.BindToOnQueueSubtitles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioFunctionLibrary::STATIC_BindToOnQueueSubtitles(class UAudioComponent* AudioComponent, class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioFunctionLibrary.BindToOnQueueSubtitles"));

	UEmbarkAudioFunctionLibrary_BindToOnQueueSubtitles_Params params;
	params.AudioComponent = AudioComponent;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddTrigger
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddTrigger(const struct FName& InName, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddTrigger"));

	UFEmbarkAudioParametersMixinLibrary_AddTrigger_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddStringArray
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddStringArray(const struct FName& InName, TArray<struct FString> InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddStringArray"));

	UFEmbarkAudioParametersMixinLibrary_AddStringArray_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddString(const struct FName& InName, const struct FString& InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddString"));

	UFEmbarkAudioParametersMixinLibrary_AddString_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddObjectArray
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddObjectArray(const struct FName& InName, TArray<class UObject*> InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddObjectArray"));

	UFEmbarkAudioParametersMixinLibrary_AddObjectArray_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddObject
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddObject(const struct FName& InName, class UObject* InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddObject"));

	UFEmbarkAudioParametersMixinLibrary_AddObject_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddIntArray
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddIntArray(const struct FName& InName, TArray<int> InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddIntArray"));

	UFEmbarkAudioParametersMixinLibrary_AddIntArray_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddInt
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddInt(const struct FName& InName, int InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddInt"));

	UFEmbarkAudioParametersMixinLibrary_AddInt_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddFloatArray
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddFloatArray(const struct FName& InName, TArray<float> InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddFloatArray"));

	UFEmbarkAudioParametersMixinLibrary_AddFloatArray_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddFloat
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddFloat(const struct FName& InName, float InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddFloat"));

	UFEmbarkAudioParametersMixinLibrary_AddFloat_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddBoolArray
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddBoolArray(const struct FName& InName, TArray<bool> InValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddBoolArray"));

	UFEmbarkAudioParametersMixinLibrary_AddBoolArray_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddBool
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAudioParameters  Parameters                     (Parm, OutParm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UFEmbarkAudioParametersMixinLibrary::STATIC_AddBool(const struct FName& InName, bool bInValue, struct FEmbarkAudioParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddBool"));

	UFEmbarkAudioParametersMixinLibrary_AddBool_Params params;
	params.InName = InName;
	params.bInValue = bInValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetTriggerParameter
// (Final, Native, Static, Public)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetTriggerParameter(class UAudioComponent* AudioComponent, const struct FName& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetTriggerParameter"));

	UEmbarkAudioComponentMixinLibrary_SetTriggerParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetStringParameter
// (Final, Native, Static, Public)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetStringParameter(class UAudioComponent* AudioComponent, const struct FName& InName, const struct FString& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetStringParameter"));

	UEmbarkAudioComponentMixinLibrary_SetStringParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetStringArrayParameter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetStringArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<struct FString> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetStringArrayParameter"));

	UEmbarkAudioComponentMixinLibrary_SetStringArrayParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetParameters
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEmbarkAudioParameters  InParameters                   (Parm, OutParm)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetParameters(class UAudioComponent* AudioComponent, struct FEmbarkAudioParameters* InParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetParameters"));

	UEmbarkAudioComponentMixinLibrary_SetParameters_Params params;
	params.AudioComponent = AudioComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InParameters != nullptr)
		*InParameters = params.InParameters;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetObjectParameter
// (Final, Native, Static, Public)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetObjectParameter(class UAudioComponent* AudioComponent, const struct FName& InName, class UObject* InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetObjectParameter"));

	UEmbarkAudioComponentMixinLibrary_SetObjectParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetObjectArrayParameter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetObjectArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<class UObject*> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetObjectArrayParameter"));

	UEmbarkAudioComponentMixinLibrary_SetObjectArrayParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetIntArrayParameter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetIntArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<int> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetIntArrayParameter"));

	UEmbarkAudioComponentMixinLibrary_SetIntArrayParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetFloatArrayParameter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetFloatArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<float> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetFloatArrayParameter"));

	UEmbarkAudioComponentMixinLibrary_SetFloatArrayParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetBoolArrayParameter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkAudioComponentMixinLibrary::STATIC_SetBoolArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<bool> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetBoolArrayParameter"));

	UEmbarkAudioComponentMixinLibrary_SetBoolArrayParameter_Params params;
	params.AudioComponent = AudioComponent;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.EmbarkAudioTickableObject.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAudioTickableObject::OnTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.EmbarkAudioTickableObject.OnTick"));

	UEmbarkAudioTickableObject_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWaveCollection.RegisterCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FuncName                       (Parm, ZeroConstructor, IsPlainOldData)

void USoundWaveCollection::RegisterCallback(class UObject* Object, const struct FName& FuncName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWaveCollection.RegisterCallback"));

	USoundWaveCollection_RegisterCallback_Params params;
	params.Object = Object;
	params.FuncName = FuncName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWaveCollection.GetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            RequestedIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// class USoundWave*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundWave* USoundWaveCollection::GetSoundWave(int RequestedIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWaveCollection.GetSoundWave"));

	USoundWaveCollection_GetSoundWave_Params params;
	params.RequestedIndex = RequestedIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.StopFiring
// (Final, Native, Public, BlueprintCallable)

void USoundWeaponSynthComponent::StopFiring()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.StopFiring"));

	USoundWeaponSynthComponent_StopFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.StartFiring
// (Final, Native, Public, BlueprintCallable)

void USoundWeaponSynthComponent::StartFiring()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.StartFiring"));

	USoundWeaponSynthComponent_StartFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.SetStayActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSetStayActive                 (Parm, ZeroConstructor, IsPlainOldData)

void USoundWeaponSynthComponent::SetStayActive(bool bSetStayActive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.SetStayActive"));

	USoundWeaponSynthComponent_SetStayActive_Params params;
	params.bSetStayActive = bSetStayActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerSounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SoundLayerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// class USoundWaveCollection*    Sounds                         (Parm, ZeroConstructor, IsPlainOldData)

void USoundWeaponSynthComponent::SetSoundLayerSounds(int SoundLayerIndex, class USoundWaveCollection* Sounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerSounds"));

	USoundWeaponSynthComponent_SetSoundLayerSounds_Params params;
	params.SoundLayerIndex = SoundLayerIndex;
	params.Sounds = Sounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SoundLayerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// enum class EWeaponSynthSoundLayerType LayerType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlignWithEndOfShot            (Parm, ZeroConstructor, IsPlainOldData)

void USoundWeaponSynthComponent::SetSoundLayerParameters(int SoundLayerIndex, enum class EWeaponSynthSoundLayerType LayerType, float Amplitude, float Pitch, int Offset, bool bAlignWithEndOfShot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerParameters"));

	USoundWeaponSynthComponent_SetSoundLayerParameters_Params params;
	params.SoundLayerIndex = SoundLayerIndex;
	params.LayerType = LayerType;
	params.Amplitude = Amplitude;
	params.Pitch = Pitch;
	params.Offset = Offset;
	params.bAlignWithEndOfShot = bAlignWithEndOfShot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerBurstEnvelope
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SoundLayerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          AttackGain                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DecayTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USoundWeaponSynthComponent::SetSoundLayerBurstEnvelope(int SoundLayerIndex, float AttackGain, float DecayTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerBurstEnvelope"));

	USoundWeaponSynthComponent_SetSoundLayerBurstEnvelope_Params params;
	params.SoundLayerIndex = SoundLayerIndex;
	params.AttackGain = AttackGain;
	params.DecayTime = DecayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.PrepareSoundLayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumSoundLayers                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AssetDebugName                 (Parm, ZeroConstructor, IsPlainOldData)

void USoundWeaponSynthComponent::PrepareSoundLayers(int NumSoundLayers, const struct FName& AssetDebugName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.PrepareSoundLayers"));

	USoundWeaponSynthComponent_PrepareSoundLayers_Params params;
	params.NumSoundLayers = NumSoundLayers;
	params.AssetDebugName = AssetDebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.IsSilent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundWeaponSynthComponent::IsSilent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.IsSilent"));

	USoundWeaponSynthComponent_IsSilent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.IncrementShotsFiredExternal
// (Final, Native, Public, BlueprintCallable)

void USoundWeaponSynthComponent::IncrementShotsFiredExternal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.IncrementShotsFiredExternal"));

	USoundWeaponSynthComponent_IncrementShotsFiredExternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAudio.SoundWeaponSynthComponent.GetDistanceToListener
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundWeaponSynthComponent::GetDistanceToListener()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAudio.SoundWeaponSynthComponent.GetDistanceToListener"));

	USoundWeaponSynthComponent_GetDistanceToListener_Params params;

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
