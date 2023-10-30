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

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            PPIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FPostProcessSettings    OutPPSettings                  (Parm, OutParm)
// float                          OutPPBlendWeight               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USequenceCameraShakeTestUtil::STATIC_GetPostProcessBlendCache(class APlayerController* PlayerController, int PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache"));

	USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params params;
	params.PlayerController = PlayerController;
	params.PPIndex = PPIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPPSettings != nullptr)
		*OutPPSettings = params.OutPPSettings;
	if (OutPPBlendWeight != nullptr)
		*OutPPBlendWeight = params.OutPPBlendWeight;

	return params.ReturnValue;
}


// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FMinimalViewInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMinimalViewInfo USequenceCameraShakeTestUtil::STATIC_GetLastFrameCameraCachePOV(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV"));

	USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FMinimalViewInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMinimalViewInfo USequenceCameraShakeTestUtil::STATIC_GetCameraCachePOV(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV"));

	USequenceCameraShakeTestUtil_GetCameraCachePOV_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTemplateSequence*       InSequence                     (Parm, ZeroConstructor, IsPlainOldData)

void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.TemplateSequenceActor.SetSequence"));

	ATemplateSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemplateSequence.TemplateSequenceActor.SetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverridesDefault              (Parm, ZeroConstructor, IsPlainOldData)

void ATemplateSequenceActor::SetBinding(class AActor* Actor, bool bOverridesDefault)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.TemplateSequenceActor.SetBinding"));

	ATemplateSequenceActor_SetBinding_Params params;
	params.Actor = Actor;
	params.bOverridesDefault = bOverridesDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTemplateSequence* ATemplateSequenceActor::LoadSequence()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.TemplateSequenceActor.LoadSequence"));

	ATemplateSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer"));

	ATemplateSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTemplateSequence* ATemplateSequenceActor::GetSequence()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.TemplateSequenceActor.GetSequence"));

	ATemplateSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UTemplateSequence*       TemplateSequence               (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class ATemplateSequenceActor*  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTemplateSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTemplateSequencePlayer* UTemplateSequencePlayer::STATIC_CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer"));

	UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TemplateSequence = TemplateSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
