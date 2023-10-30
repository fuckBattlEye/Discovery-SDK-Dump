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

// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCameraAnimationHandle  Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraAnimationCameraModifier::StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation"));

	UCameraAnimationCameraModifier_StopCameraAnimation_Params params;
	params.Handle = Handle;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence* Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf"));

	UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params params;
	params.Sequence = Sequence;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations"));

	UCameraAnimationCameraModifier_StopAllCameraAnimations_Params params;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence* Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FCameraAnimationParams  Params                         (Parm)
// struct FCameraAnimationHandle  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation"));

	UCameraAnimationCameraModifier_PlayCameraAnimation_Params params;
	params.Sequence = Sequence;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCameraAnimationHandle  Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCameraAnimationCameraModifier::IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive"));

	UCameraAnimationCameraModifier_IsCameraAnimationActive_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraAnimationCameraModifier* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController"));

	UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraAnimationCameraModifier* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int ControllerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID"));

	UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraAnimationCameraModifier* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int PlayerIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier"));

	UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*    PlayerCameraManager            (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ShakeClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraShakeSourceComponent* SourceComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class ECameraShakePlaySpace PlaySpace                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                UserPlaySpaceRot               (Parm, ZeroConstructor, IsPlainOldData)
// class UMatineeCameraShake*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMatineeCameraShake* UMatineeCameraShake::STATIC_StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource"));

	UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params params;
	params.PlayerCameraManager = PlayerCameraManager;
	params.ShakeClass = ShakeClass;
	params.SourceComponent = SourceComponent;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*    PlayerCameraManager            (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ShakeClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class ECameraShakePlaySpace PlaySpace                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                UserPlaySpaceRot               (Parm, ZeroConstructor, IsPlainOldData)
// class UMatineeCameraShake*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMatineeCameraShake* UMatineeCameraShake::STATIC_StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake"));

	UMatineeCameraShake_StartMatineeCameraShake_Params params;
	params.PlayerCameraManager = PlayerCameraManager;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)

void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.MatineeCameraShake.ReceiveStopShake"));

	UMatineeCameraShake_ReceiveStopShake_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UMatineeCameraShake::ReceivePlayShake(float Scale)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.MatineeCameraShake.ReceivePlayShake"));

	UMatineeCameraShake_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatineeCameraShake::ReceiveIsFinished()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished"));

	UMatineeCameraShake_ReceiveIsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMinimalViewInfo        POV                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMinimalViewInfo        ModifiedPOV                    (Parm, OutParm)

void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake"));

	UMatineeCameraShake_BlueprintUpdateCameraShake_Params params;
	params.DeltaTime = DeltaTime;
	params.Alpha = Alpha;
	params.POV = POV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = params.ModifiedPOV;
}


// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*        CameraShake                    (Parm, ZeroConstructor, IsPlainOldData)
// class UMatineeCameraShake*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::STATIC_Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake"));

	UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params params;
	params.CameraShake = CameraShake;

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
