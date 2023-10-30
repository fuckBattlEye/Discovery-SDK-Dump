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

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneCaptureProtocolBase::IsCapturing()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing"));

	UMovieSceneCaptureProtocolBase_IsCapturing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieSceneCaptureProtocolState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState"));

	UMovieSceneCaptureProtocolBase_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ProtocolType                   (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneCapture::SetImageCaptureProtocolType(class UClass* ProtocolType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType"));

	UMovieSceneCapture_SetImageCaptureProtocolType_Params params;
	params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ProtocolType                   (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneCapture::SetAudioCaptureProtocolType(class UClass* ProtocolType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType"));

	UMovieSceneCapture_SetAudioCaptureProtocolType_Params params;
	params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol"));

	UMovieSceneCapture_GetImageCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol"));

	UMovieSceneCapture_GetAudioCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneCaptureEnvironment::STATIC_IsCaptureInProgress()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress"));

	UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneCaptureEnvironment::STATIC_GetCaptureFrameNumber()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber"));

	UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneCaptureEnvironment::STATIC_GetCaptureElapsedTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime"));

	UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneImageCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::STATIC_FindImageCaptureProtocol()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol"));

	UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneAudioCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::STATIC_FindAudioCaptureProtocol()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol"));

	UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// (Final, Native, Public, BlueprintCallable)

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels"));

	UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCapturedPixelsID       StreamID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels"));

	UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params params;
	params.StreamID = StreamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTexture*                Buffer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FCapturedPixelsID       BufferID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer"));

	UUserDefinedCaptureProtocol_ResolveBuffer_Params params;
	params.Buffer = Buffer;
	params.BufferID = BufferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp"));

	UUserDefinedCaptureProtocol_OnWarmUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnTick()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick"));

	UUserDefinedCaptureProtocol_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture"));

	UUserDefinedCaptureProtocol_OnStartCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserDefinedCaptureProtocol::OnSetup()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup"));

	UUserDefinedCaptureProtocol_OnSetup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPreTick()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick"));

	UUserDefinedCaptureProtocol_OnPreTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCapturedPixels         Pixels                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCapturedPixelsID       ID                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFrameMetrics           FrameMetrics                   (Parm)

void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived"));

	UUserDefinedCaptureProtocol_OnPixelsReceived_Params params;
	params.Pixels = Pixels;
	params.ID = ID;
	params.FrameMetrics = FrameMetrics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture"));

	UUserDefinedCaptureProtocol_OnPauseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnFinalize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize"));

	UUserDefinedCaptureProtocol_OnFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame"));

	UUserDefinedCaptureProtocol_OnCaptureFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserDefinedCaptureProtocol::OnCanFinalize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize"));

	UUserDefinedCaptureProtocol_OnCanFinalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize"));

	UUserDefinedCaptureProtocol_OnBeginFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameMetrics           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics"));

	UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameMetrics           InFrameMetrics                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename"));

	UUserDefinedCaptureProtocol_GenerateFilename_Params params;
	params.InFrameMetrics = InFrameMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCapturedPixels         PixelData                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCapturedPixelsID       StreamID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFrameMetrics           FrameMetrics                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCopyImageData                 (Parm, ZeroConstructor, IsPlainOldData)

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk"));

	UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params params;
	params.PixelData = PixelData;
	params.StreamID = StreamID;
	params.FrameMetrics = FrameMetrics;
	params.bCopyImageData = bCopyImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame"));

	UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTexture*                Buffer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FCapturedPixelsID       StreamID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer"));

	UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params params;
	params.Buffer = Buffer;
	params.StreamID = StreamID;

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
