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

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneParameterSection::RemoveVectorParameter(const struct FName& InParameterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter"));

	UMovieSceneParameterSection_RemoveVectorParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneParameterSection::RemoveVector2DParameter(const struct FName& InParameterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter"));

	UMovieSceneParameterSection_RemoveVector2DParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneParameterSection::RemoveTransformParameter(const struct FName& InParameterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter"));

	UMovieSceneParameterSection_RemoveTransformParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneParameterSection::RemoveScalarParameter(const struct FName& InParameterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter"));

	UMovieSceneParameterSection_RemoveScalarParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneParameterSection::RemoveColorParameter(const struct FName& InParameterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter"));

	UMovieSceneParameterSection_RemoveColorParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneParameterSection::RemoveBoolParameter(const struct FName& InParameterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter"));

	UMovieSceneParameterSection_RemoveBoolParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UMovieSceneParameterSection::GetParameterNames()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames"));

	UMovieSceneParameterSection_GetParameterNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InTime                         (Parm)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneParameterSection::AddVectorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey"));

	UMovieSceneParameterSection_AddVectorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InTime                         (Parm)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneParameterSection::AddVector2DParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey"));

	UMovieSceneParameterSection_AddVector2DParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InTime                         (Parm)
// struct FTransform              InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMovieSceneParameterSection::AddTransformParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey"));

	UMovieSceneParameterSection_AddTransformParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InTime                         (Parm)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneParameterSection::AddScalarParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey"));

	UMovieSceneParameterSection_AddScalarParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InTime                         (Parm)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneParameterSection::AddColorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey"));

	UMovieSceneParameterSection_AddColorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InTime                         (Parm)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneParameterSection::AddBoolParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, bool InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey"));

	UMovieSceneParameterSection_AddBoolParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin"));

	UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InConstraintBindingID          (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID"));

	UMovieScene3DConstraintSection_SetConstraintBindingID_Params params;
	params.InConstraintBindingID = InConstraintBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID"));

	UMovieScene3DConstraintSection_GetConstraintBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InStartOffset                  (Parm)

void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset"));

	UMovieSceneAudioSection_SetStartOffset_Params params;
	params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              InSound                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAudioSection.SetSound"));

	UMovieSceneAudioSection_SetSound_Params params;
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset"));

	UMovieSceneAudioSection_GetStartOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAudioSection.GetSound"));

	UMovieSceneAudioSection_GetSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InCameraBindingID              (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID"));

	UMovieSceneCameraCutSection_SetCameraBindingID_Params params;
	params.InCameraBindingID = InCameraBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID"));

	UMovieSceneCameraCutSection_GetCameraBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InShotDisplayName              (Parm, ZeroConstructor)

void UMovieSceneCinematicShotSection::SetShotDisplayName(const struct FString& InShotDisplayName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName"));

	UMovieSceneCinematicShotSection_SetShotDisplayName_Params params;
	params.InShotDisplayName = InShotDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName"));

	UMovieSceneCinematicShotSection_GetShotDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InString                       (Parm, ZeroConstructor)

void UMovieSceneCVarSection::SetFromString(const struct FString& InString)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneCVarSection.SetFromString"));

	UMovieSceneCVarSection_SetFromString_Params params;
	params.InString = InString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneCVarSection.GetString
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneCVarSection::GetString()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneCVarSection.GetString"));

	UMovieSceneCVarSection_GetString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDataLayerRuntimeState InPrerollState                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneDataLayerSection::SetPrerollState(enum class EDataLayerRuntimeState InPrerollState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState"));

	UMovieSceneDataLayerSection_SetPrerollState_Params params;
	params.InPrerollState = InPrerollState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFlushOnUnload                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneDataLayerSection::SetFlushOnUnload(bool bFlushOnUnload)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload"));

	UMovieSceneDataLayerSection_SetFlushOnUnload_Params params;
	params.bFlushOnUnload = bFlushOnUnload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDataLayerRuntimeState InDesiredState                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneDataLayerSection::SetDesiredState(enum class EDataLayerRuntimeState InDesiredState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState"));

	UMovieSceneDataLayerSection_SetDesiredState_Params params;
	params.InDesiredState = InDesiredState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FActorDataLayer> InDataLayers                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMovieSceneDataLayerSection::SetDataLayers(TArray<struct FActorDataLayer> InDataLayers)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers"));

	UMovieSceneDataLayerSection_SetDataLayers_Params params;
	params.InDataLayers = InDataLayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDataLayerRuntimeState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EDataLayerRuntimeState UMovieSceneDataLayerSection::GetPrerollState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState"));

	UMovieSceneDataLayerSection_GetPrerollState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneDataLayerSection::GetFlushOnUnload()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload"));

	UMovieSceneDataLayerSection_GetFlushOnUnload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDataLayerRuntimeState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EDataLayerRuntimeState UMovieSceneDataLayerSection::GetDesiredState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState"));

	UMovieSceneDataLayerSection_GetDesiredState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FActorDataLayer> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FActorDataLayer> UMovieSceneDataLayerSection::GetDataLayers()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers"));

	UMovieSceneDataLayerSection_GetDataLayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELevelVisibility    InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneLevelVisibilitySection::SetVisibility(enum class ELevelVisibility InVisibility)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility"));

	UMovieSceneLevelVisibilitySection_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           InLevelNames                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<struct FName> InLevelNames)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames"));

	UMovieSceneLevelVisibilitySection_SetLevelNames_Params params;
	params.InLevelNames = InLevelNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELevelVisibility    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility"));

	UMovieSceneLevelVisibilitySection_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames"));

	UMovieSceneLevelVisibilitySection_GetLevelNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer* Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneAsyncAction_SequencePrediction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::STATIC_PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime"));

	UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Params params;
	params.Player = Player;
	params.TargetComponent = TargetComponent;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer* Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFrameTime              FrameTime                      (Parm)
// class UMovieSceneAsyncAction_SequencePrediction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::STATIC_PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame"));

	UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Params params;
	params.Player = Player;
	params.TargetComponent = TargetComponent;
	params.FrameTime = FrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer* Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneAsyncAction_SequencePrediction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::STATIC_PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime"));

	UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Params params;
	params.Player = Player;
	params.TargetComponent = TargetComponent;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer* Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFrameTime              FrameTime                      (Parm)
// class UMovieSceneAsyncAction_SequencePrediction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::STATIC_PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame"));

	UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Params params;
	params.Player = Player;
	params.TargetComponent = TargetComponent;
	params.FrameTime = FrameTime;

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
