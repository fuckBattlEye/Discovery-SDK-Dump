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

// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         InOutUnrealURLParams           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         InOutCommandLineArgs           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         InOutDeviceProfileCvars        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         InOutExecCmds                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMoviePipelineSetting::BuildNewProcessCommandLineArgs(TArray<struct FString>* InOutUnrealURLParams, TArray<struct FString>* InOutCommandLineArgs, TArray<struct FString>* InOutDeviceProfileCvars, TArray<struct FString>* InOutExecCmds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs"));

	UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutUnrealURLParams != nullptr)
		*InOutUnrealURLParams = params.InOutUnrealURLParams;
	if (InOutCommandLineArgs != nullptr)
		*InOutCommandLineArgs = params.InOutCommandLineArgs;
	if (InOutDeviceProfileCvars != nullptr)
		*InOutDeviceProfileCvars = params.InOutDeviceProfileCvars;
	if (InOutExecCmds != nullptr)
		*InOutExecCmds = params.InOutExecCmds;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 InOutUnrealURLParams           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 InOutCommandLineArgs           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMoviePipelineSetting::BuildNewProcessCommandLine(struct FString* InOutUnrealURLParams, struct FString* InOutCommandLineArgs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine"));

	UMoviePipelineSetting_BuildNewProcessCommandLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutUnrealURLParams != nullptr)
		*InOutUnrealURLParams = params.InOutUnrealURLParams;
	if (InOutCommandLineArgs != nullptr)
		*InOutCommandLineArgs = params.InOutCommandLineArgs;
}


// Function MovieRenderPipelineCore.MoviePipeline.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bError                         (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipeline::Shutdown(bool bError)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.Shutdown"));

	UMoviePipeline_Shutdown_Params params;
	params.bError = bError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime               InDateTime                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMoviePipeline::SetInitializationTime(const struct FDateTime& InDateTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime"));

	UMoviePipeline_SetInitializationTime_Params params;
	params.InDateTime = InDateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsError                       (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipeline::RequestShutdown(bool bIsError)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown"));

	UMoviePipeline_RequestShutdown_Params params;
	params.bIsError = bIsError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
// (Native, Protected, BlueprintCallable)

void UMoviePipeline::OnMoviePipelineFinishedImpl()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl"));

	UMoviePipeline_OnMoviePipelineFinishedImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipeline::IsShutdownRequested()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested"));

	UMoviePipeline_IsShutdownRequested_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipeline.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob* InJob                          (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipeline::Initialize(class UMoviePipelineExecutorJob* InJob)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.Initialize"));

	UMoviePipeline_Initialize_Params params;
	params.InJob = InJob;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UMoviePipeline::GetPreviewTexture()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture"));

	UMoviePipeline_GetPreviewTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineMasterConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineMasterConfig* UMoviePipeline::GetPipelineMasterConfig()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig"));

	UMoviePipeline_GetPipelineMasterConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UMoviePipeline::GetInitializationTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime"));

	UMoviePipeline_GetInitializationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorJob* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineExecutorJob* UMoviePipeline::GetCurrentJob()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob"));

	UMoviePipeline_GetCurrentJob_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineExecutorJob* InJob                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShotsChanged                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineBlueprintLibrary::STATIC_UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence"));

	UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params params;
	params.InSequence = InSequence;
	params.InJob = InJob;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShotsChanged != nullptr)
		*bShotsChanged = params.bShotsChanged;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMoviePipelineFilenameResolveParams InParams                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMoviePipelineBlueprintLibrary::STATIC_ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber"));

	UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params params;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InFormatString                 (Parm, ZeroConstructor)
// struct FMoviePipelineFilenameResolveParams InParams                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 OutFinalPath                   (Parm, OutParm, ZeroConstructor)
// struct FMoviePipelineFormatArgs OutMergedFormatArgs            (Parm, OutParm)

void UMoviePipelineBlueprintLibrary::STATIC_ResolveFilenameFormatArguments(const struct FString& InFormatString, const struct FMoviePipelineFilenameResolveParams& InParams, struct FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments"));

	UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params params;
	params.InFormatString = InFormatString;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFinalPath != nullptr)
		*OutFinalPath = params.OutFinalPath;
	if (OutMergedFormatArgs != nullptr)
		*OutMergedFormatArgs = params.OutMergedFormatArgs;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InManifestFilePath             (Parm, ZeroConstructor)
// class UMoviePipelineQueue*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineQueue* UMoviePipelineBlueprintLibrary::STATIC_LoadManifestFileFromString(const struct FString& InManifestFilePath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString"));

	UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params params;
	params.InManifestFilePath = InManifestFilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InPipeline                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EMovieRenderPipelineState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::STATIC_GetPipelineState(class UMoviePipeline* InPipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState"));

	UMoviePipelineBlueprintLibrary_GetPipelineState_Params params;
	params.InPipeline = InPipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutCurrentIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutTotalCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineBlueprintLibrary::STATIC_GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int* OutCurrentIndex, int* OutTotalCount)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts"));

	UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentIndex != nullptr)
		*OutCurrentIndex = params.OutCurrentIndex;
	if (OutTotalCount != nullptr)
		*OutTotalCount = params.OutTotalCount;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutCurrentIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutTotalCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineBlueprintLibrary::STATIC_GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int* OutCurrentIndex, int* OutTotalCount)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames"));

	UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentIndex != nullptr)
		*OutCurrentIndex = params.OutCurrentIndex;
	if (OutTotalCount != nullptr)
		*OutTotalCount = params.OutTotalCount;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMoviePipelineBlueprintLibrary::STATIC_GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel"));

	UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimecode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FTimecode UMoviePipelineBlueprintLibrary::STATIC_GetMasterTimecode(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode"));

	UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UMoviePipelineBlueprintLibrary::STATIC_GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber"));

	UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipelineExecutorJob* InJob                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMoviePipelineBlueprintLibrary::STATIC_GetMapPackageName(class UMoviePipelineExecutorJob* InJob)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName"));

	UMoviePipelineBlueprintLibrary_GetMapPackageName_Params params;
	params.InJob = InJob;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMoviePipelineBlueprintLibrary::STATIC_GetJobName(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName"));

	UMoviePipelineBlueprintLibrary_GetJobName_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UMoviePipelineBlueprintLibrary::STATIC_GetJobInitializationTime(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime"));

	UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMoviePipelineBlueprintLibrary::STATIC_GetJobAuthor(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor"));

	UMoviePipelineBlueprintLibrary_GetJobAuthor_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InPipeline                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan               OutEstimate                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineBlueprintLibrary::STATIC_GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining"));

	UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params params;
	params.InPipeline = InPipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEstimate != nullptr)
		*OutEstimate = params.OutEstimate;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMoviePipelineMasterConfig* InMasterConfig                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineExecutorShot* InPipelineExecutorShot         (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UMoviePipelineBlueprintLibrary::STATIC_GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution"));

	UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params params;
	params.InMasterConfig = InMasterConfig;
	params.InPipelineExecutorShot = InPipelineExecutorShot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimecode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FTimecode UMoviePipelineBlueprintLibrary::STATIC_GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode"));

	UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UMoviePipelineBlueprintLibrary::STATIC_GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber"));

	UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence* UMoviePipelineBlueprintLibrary::STATIC_GetCurrentSequence(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence"));

	UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMoviePipelineSegmentWorkMetrics ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::STATIC_GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics"));

	UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMovieRenderShotState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EMovieRenderShotState UMoviePipelineBlueprintLibrary::STATIC_GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState"));

	UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutOuterName                   (Parm, OutParm)
// struct FText                   OutInnerName                   (Parm, OutParm)

void UMoviePipelineBlueprintLibrary::STATIC_GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, struct FText* OutOuterName, struct FText* OutInnerName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName"));

	UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOuterName != nullptr)
		*OutOuterName = params.OutOuterName;
	if (OutInnerName != nullptr)
		*OutInnerName = params.OutInnerName;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMoviePipelineBlueprintLibrary::STATIC_GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance"));

	UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMoviePipelineBlueprintLibrary::STATIC_GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength"));

	UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineExecutorShot* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineExecutorShot* UMoviePipelineBlueprintLibrary::STATIC_GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot"));

	UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InMoviePipeline                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMoviePipelineBlueprintLibrary::STATIC_GetCurrentAperture(class UMoviePipeline* InMoviePipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture"));

	UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params params;
	params.InMoviePipeline = InMoviePipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*          InPipeline                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMoviePipelineBlueprintLibrary::STATIC_GetCompletionPercentage(class UMoviePipeline* InPipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage"));

	UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params params;
	params.InPipeline = InPipeline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InSettingType                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineMasterConfig* InMasterConfig                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineExecutorShot* InShot                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineSetting*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineSetting* UMoviePipelineBlueprintLibrary::STATIC_FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InShot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot"));

	UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params params;
	params.InSettingType = InSettingType;
	params.InMasterConfig = InMasterConfig;
	params.InShot = InShot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneSequence*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneSequence* UMoviePipelineBlueprintLibrary::STATIC_DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence"));

	UMoviePipelineBlueprintLibrary_DuplicateSequence_Params params;
	params.Outer = Outer;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineSetting*   InSetting                      (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineConfigBase::RemoveSetting(class UMoviePipelineSetting* InSetting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting"));

	UMoviePipelineConfigBase_RemoveSetting_Params params;
	params.InSetting = InSetting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::GetUserSettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings"));

	UMoviePipelineConfigBase_GetUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDisabledSettings       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMoviePipelineSetting*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass"));

	UMoviePipelineConfigBase_FindSettingsByClass_Params params;
	params.InClass = InClass;
	params.bIncludeDisabledSettings = bIncludeDisabledSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDisabledSettings       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineSetting*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineSetting* UMoviePipelineConfigBase::FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass"));

	UMoviePipelineConfigBase_FindSettingByClass_Params params;
	params.InClass = InClass;
	params.bIncludeDisabledSettings = bIncludeDisabledSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDisabledSettings       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineSetting*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineSetting* UMoviePipelineConfigBase::FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass"));

	UMoviePipelineConfigBase_FindOrAddSettingByClass_Params params;
	params.InClass = InClass;
	params.bIncludeDisabledSettings = bIncludeDisabledSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineConfigBase* InConfig                       (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineConfigBase::CopyFrom(class UMoviePipelineConfigBase* InConfig)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom"));

	UMoviePipelineConfigBase_CopyFrom_Params params;
	params.InConfig = InConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InProgress                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorBase::SetStatusProgress(float InProgress)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress"));

	UMoviePipelineExecutorBase_SetStatusProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InStatus                       (Parm, ZeroConstructor)

void UMoviePipelineExecutorBase::SetStatusMessage(const struct FString& InStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage"));

	UMoviePipelineExecutorBase_SetStatusMessage_Params params;
	params.InStatus = InStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InPipelineClass                (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorBase::SetMoviePipelineClass(class UClass* InPipelineClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass"));

	UMoviePipelineExecutorBase_SetMoviePipelineClass_Params params;
	params.InPipelineClass = InPipelineClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 InMessage                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineExecutorBase::SendSocketMessage(const struct FString& InMessage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage"));

	UMoviePipelineExecutorBase_SendSocketMessage_Params params;
	params.InMessage = InMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InURL                          (Parm, ZeroConstructor)
// struct FString                 InVerb                         (Parm, ZeroConstructor)
// struct FString                 InMessage                      (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> InHeaders                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMoviePipelineExecutorBase::SendHTTPRequest(const struct FString& InURL, const struct FString& InVerb, const struct FString& InMessage, TMap<struct FString, struct FString> InHeaders)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest"));

	UMoviePipelineExecutorBase_SendHTTPRequest_Params params;
	params.InURL = InURL;
	params.InVerb = InVerb;
	params.InMessage = InMessage;
	params.InHeaders = InHeaders;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
// (Native, Protected, BlueprintCallable)

void UMoviePipelineExecutorBase::OnExecutorFinishedImpl()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl"));

	UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
// (Native, Protected, BlueprintCallable)
// Parameters:
// class UMoviePipeline*          ErroredPipeline                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFatal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorReason                    (Parm)

void UMoviePipelineExecutorBase::OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, const struct FText& ErrorReason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl"));

	UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params params;
	params.ErroredPipeline = ErroredPipeline;
	params.bFatal = bFatal;
	params.ErrorReason = ErrorReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
// (Native, Event, Public, BlueprintEvent)

void UMoviePipelineExecutorBase::OnBeginFrame()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame"));

	UMoviePipelineExecutorBase_OnBeginFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineExecutorBase::IsSocketConnected()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected"));

	UMoviePipelineExecutorBase_IsSocketConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineExecutorBase::IsRendering()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering"));

	UMoviePipelineExecutorBase_IsRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMoviePipelineExecutorBase::GetStatusProgress()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress"));

	UMoviePipelineExecutorBase_GetStatusProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMoviePipelineExecutorBase::GetStatusMessage()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage"));

	UMoviePipelineExecutorBase_GetStatusMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*     InPipelineQueue                (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorBase::Execute(class UMoviePipelineQueue* InPipelineQueue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute"));

	UMoviePipelineExecutorBase_Execute_Params params;
	params.InPipelineQueue = InPipelineQueue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
// (Final, Native, Protected, BlueprintCallable)

void UMoviePipelineExecutorBase::DisconnectSocket()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket"));

	UMoviePipelineExecutorBase_DisconnectSocket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 InHostName                     (Parm, ZeroConstructor)
// int                            InPort                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineExecutorBase::ConnectSocket(const struct FString& InHostName, int InPort)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket"));

	UMoviePipelineExecutorBase_ConnectSocket_Params params;
	params.InHostName = InHostName;
	params.InPort = InPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UMoviePipelineExecutorBase::CancelCurrentJob()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob"));

	UMoviePipelineExecutorBase_CancelCurrentJob_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UMoviePipelineExecutorBase::CancelAllJobs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs"));

	UMoviePipelineExecutorBase_CancelAllJobs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
// (Final, Native, Public, BlueprintCallable)

void UMoviePipelineMasterConfig::InitializeTransientSettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings"));

	UMoviePipelineMasterConfig_InitializeTransientSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetTransientSettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings"));

	UMoviePipelineMasterConfig_GetTransientSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          InSequence                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FFrameRate UMoviePipelineMasterConfig::GetEffectiveFrameRate(class ULevelSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate"));

	UMoviePipelineMasterConfig_GetEffectiveFrameRate_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeDisabledSettings       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeTransientSettings      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMoviePipelineSetting*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings"));

	UMoviePipelineMasterConfig_GetAllSettings_Params params;
	params.bIncludeDisabledSettings = bIncludeDisabledSettings;
	params.bIncludeTransientSettings = bIncludeTransientSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelinePythonHostExecutor::OnMapLoad(class UWorld* InWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad"));

	UMoviePipelinePythonHostExecutor_OnMapLoad_Params params;
	params.InWorld = InWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UMoviePipelinePythonHostExecutor::GetLastLoadedWorld()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld"));

	UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*     InPipelineQueue                (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelinePythonHostExecutor::ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed"));

	UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params params;
	params.InPipelineQueue = InPipelineQueue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineExecutorShot::ShouldRender()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender"));

	UMoviePipelineExecutorShot_ShouldRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InProgress                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorShot::SetStatusProgress(float InProgress)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress"));

	UMoviePipelineExecutorShot_SetStatusProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InStatus                       (Parm, ZeroConstructor)

void UMoviePipelineExecutorShot::SetStatusMessage(const struct FString& InStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage"));

	UMoviePipelineExecutorShot_SetStatusMessage_Params params;
	params.InStatus = InStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig* InPreset                       (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorShot::SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin"));

	UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params params;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig* InPreset                       (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorShot::SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration"));

	UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params params;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMoviePipelineExecutorShot::GetStatusProgress()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress"));

	UMoviePipelineExecutorShot_GetStatusProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMoviePipelineExecutorShot::GetStatusMessage()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage"));

	UMoviePipelineExecutorShot_GetStatusMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverridePresetOrigin()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin"));

	UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverrideConfiguration()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration"));

	UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InConfigType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineShotConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig(class UClass* InConfigType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig"));

	UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params params;
	params.InConfigType = InConfigType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InProgress                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorJob::SetStatusProgress(float InProgress)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress"));

	UMoviePipelineExecutorJob_SetStatusProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InStatus                       (Parm, ZeroConstructor)

void UMoviePipelineExecutorJob::SetStatusMessage(const struct FString& InStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage"));

	UMoviePipelineExecutorJob_SetStatusMessage_Params params;
	params.InStatus = InStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath         InSequence                     (Parm, ZeroConstructor)

void UMoviePipelineExecutorJob::SetSequence(const struct FSoftObjectPath& InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence"));

	UMoviePipelineExecutorJob_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineMasterConfig* InPreset                       (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorJob::SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin"));

	UMoviePipelineExecutorJob_SetPresetOrigin_Params params;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInConsumed                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorJob::SetConsumed(bool bInConsumed)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed"));

	UMoviePipelineExecutorJob_SetConsumed_Params params;
	params.bInConsumed = bInConsumed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineMasterConfig* InPreset                       (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineExecutorJob::SetConfiguration(class UMoviePipelineMasterConfig* InPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration"));

	UMoviePipelineExecutorJob_SetConfiguration_Params params;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UMoviePipelineExecutorJob::OnDuplicated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated"));

	UMoviePipelineExecutorJob_OnDuplicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineExecutorJob::IsConsumed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed"));

	UMoviePipelineExecutorJob_IsConsumed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMoviePipelineExecutorJob::GetStatusProgress()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress"));

	UMoviePipelineExecutorJob_GetStatusProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMoviePipelineExecutorJob::GetStatusMessage()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage"));

	UMoviePipelineExecutorJob_GetStatusMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineMasterConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetPresetOrigin()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin"));

	UMoviePipelineExecutorJob_GetPresetOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineMasterConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetConfiguration()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration"));

	UMoviePipelineExecutorJob_GetConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob* InJob                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineQueue::SetJobIndex(class UMoviePipelineExecutorJob* InJob, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex"));

	UMoviePipelineQueue_SetJobIndex_Params params;
	params.InJob = InJob;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineExecutorJob*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs"));

	UMoviePipelineQueue_GetJobs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob* InJob                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineExecutorJob* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(class UMoviePipelineExecutorJob* InJob)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob"));

	UMoviePipelineQueue_DuplicateJob_Params params;
	params.InJob = InJob;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob* InJob                          (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineQueue::DeleteJob(class UMoviePipelineExecutorJob* InJob)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob"));

	UMoviePipelineQueue_DeleteJob_Params params;
	params.InJob = InJob;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
// (Final, Native, Public, BlueprintCallable)

void UMoviePipelineQueue::DeleteAllJobs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs"));

	UMoviePipelineQueue_DeleteAllJobs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineQueue*     InQueue                        (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineQueue::CopyFrom(class UMoviePipelineQueue* InQueue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom"));

	UMoviePipelineQueue_CopyFrom_Params params;
	params.InQueue = InQueue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InJobType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineExecutorJob* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(class UClass* InJobType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob"));

	UMoviePipelineQueue_AllocateNewJob_Params params;
	params.InJobType = InJobType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorBase* InExecutor                     (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance"));

	UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params params;
	params.InExecutor = InExecutor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InExecutorType                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMoviePipelineExecutorBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(class UClass* InExecutorType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor"));

	UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params params;
	params.InExecutorType = InExecutorType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMoviePipelineQueueEngineSubsystem::IsRendering()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering"));

	UMoviePipelineQueueEngineSubsystem_IsRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineQueue*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineQueue* UMoviePipelineQueueEngineSubsystem::GetQueue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue"));

	UMoviePipelineQueueEngineSubsystem_GetQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::GetActiveExecutor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor"));

	UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*          InPipeline                     (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineSetting_BlueprintBase::ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl"));

	UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params params;
	params.InPipeline = InPipeline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*          InPipeline                     (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineSetting_BlueprintBase::ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl"));

	UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params params;
	params.InPipeline = InPipeline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FMoviePipelineFormatArgs InOutFormatArgs                (Parm, OutParm, ReferenceParm)
// struct FMoviePipelineFormatArgs ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMoviePipelineFormatArgs UMoviePipelineSetting_BlueprintBase::ReceiveGetFormatArguments(struct FMoviePipelineFormatArgs* InOutFormatArgs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments"));

	UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutFormatArgs != nullptr)
		*InOutFormatArgs = params.InOutFormatArgs;

	return params.ReturnValue;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
// (Event, Public, BlueprintEvent)

void UMoviePipelineSetting_BlueprintBase::OnEngineTickBeginFrame()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame"));

	UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*          ForPipeline                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieRenderDebugWidget::OnInitializedForPipeline(class UMoviePipeline* ForPipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline"));

	UMovieRenderDebugWidget_OnInitializedForPipeline_Params params;
	params.ForPipeline = ForPipeline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
