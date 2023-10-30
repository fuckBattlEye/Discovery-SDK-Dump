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

// Function EmbarkTrace.EmbarkTrace.QueryTraceHits
// (Final, Native, Static, Private, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InTraceHandle                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// bool                           bAppendHits                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkTrace::STATIC_QueryTraceHits(class UObject* WorldContextObject, uint64_t InTraceHandle, bool bAppendHits, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkTrace.QueryTraceHits"));

	UEmbarkTrace_QueryTraceHits_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InTraceHandle = InTraceHandle;
	params.bAppendHits = bAppendHits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkTrace.CapsuleTraceSingle
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkTrace::STATIC_CapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, const struct FRotator& Orientation, struct FHitResult* OutHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkTrace.CapsuleTraceSingle"));

	UEmbarkTrace_CapsuleTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkTrace.BatchLineTraceSingleByProfile
// (Final, Native, Static, Private, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEmbarkTraceLineSeg> LineSegs                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   ProfileName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// uint64_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint64_t UEmbarkTrace::STATIC_BatchLineTraceSingleByProfile(class UObject* WorldContextObject, TArray<struct FEmbarkTraceLineSeg> LineSegs, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkTrace.BatchLineTraceSingleByProfile"));

	UEmbarkTrace_BatchLineTraceSingleByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LineSegs = LineSegs;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkTrace.AsyncSphereTraceSingle
// (Final, Native, Static, Private, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint64_t UEmbarkTrace::STATIC_AsyncSphereTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkTrace.AsyncSphereTraceSingle"));

	UEmbarkTrace_AsyncSphereTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkTrace.AsyncLineTraceSingle
// (Final, Native, Static, Private, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint64_t UEmbarkTrace::STATIC_AsyncLineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkTrace.AsyncLineTraceSingle"));

	UEmbarkTrace_AsyncLineTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkTrace.AsyncCapsuleTraceSingle
// (Final, Native, Static, Private, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint64_t UEmbarkTrace::STATIC_AsyncCapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FRotator& Orientation, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkTrace.AsyncCapsuleTraceSingle"));

	UEmbarkTrace_AsyncCapsuleTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Orientation = Orientation;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkTrace.ActorLineTraceSingle
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  AgainstActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkTrace::STATIC_ActorLineTraceSingle(class AActor* AgainstActor, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* OutHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkTrace.ActorLineTraceSingle"));

	UEmbarkTrace_ActorLineTraceSingle_Params params;
	params.AgainstActor = AgainstActor;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkRayQueryBuffer.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkRayQueryBuffer::Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkRayQueryBuffer.Tick"));

	UEmbarkRayQueryBuffer_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTrace.EmbarkRayQueryBuffer.SetNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkRayQueryBuffer::SetNum(int Size)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkRayQueryBuffer.SetNum"));

	UEmbarkRayQueryBuffer_SetNum_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTrace.EmbarkRayQueryBuffer.HasCompleted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkRayQueryBuffer::HasCompleted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkRayQueryBuffer.HasCompleted"));

	UEmbarkRayQueryBuffer_HasCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkRayQueryBuffer.Execute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FrameDelay                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkRayQueryBuffer::Execute(int FrameDelay)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkRayQueryBuffer.Execute"));

	UEmbarkRayQueryBuffer_Execute_Params params;
	params.FrameDelay = FrameDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.Update
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Orientation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LinearVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkGridQueryBuffer::Update(const struct FVector& Location, float Orientation, const struct FVector& LinearVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.Update"));

	UEmbarkGridQueryBuffer_Update_Params params;
	params.Location = Location;
	params.Orientation = Orientation;
	params.LinearVelocity = LinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGridQueryBuffer::Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.Tick"));

	UEmbarkGridQueryBuffer_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SamplePointsX                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            SamplePointsY                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          InternalResolutionRatio        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          RayLength                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          CacheScale                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGridQueryBuffer::SetSize(int SamplePointsX, int SamplePointsY, float InternalResolutionRatio, float Width, float RayLength, float CacheScale)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.SetSize"));

	UEmbarkGridQueryBuffer_SetSize_Params params;
	params.SamplePointsX = SamplePointsX;
	params.SamplePointsY = SamplePointsY;
	params.InternalResolutionRatio = InternalResolutionRatio;
	params.Width = Width;
	params.RayLength = RayLength;
	params.CacheScale = CacheScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.SampleToBuffer
// (Final, Native, Public, BlueprintCallable)

void UEmbarkGridQueryBuffer::SampleToBuffer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.SampleToBuffer"));

	UEmbarkGridQueryBuffer_SampleToBuffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.ProjectToSampledGrid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UEmbarkGridQueryBuffer::ProjectToSampledGrid(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.ProjectToSampledGrid"));

	UEmbarkGridQueryBuffer_ProjectToSampledGrid_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetSamplePointsY
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkGridQueryBuffer::GetSamplePointsY()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetSamplePointsY"));

	UEmbarkGridQueryBuffer_GetSamplePointsY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetSamplePointsX
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkGridQueryBuffer::GetSamplePointsX()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetSamplePointsX"));

	UEmbarkGridQueryBuffer_GetSamplePointsX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetSampleCellSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkGridQueryBuffer::GetSampleCellSize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetSampleCellSize"));

	UEmbarkGridQueryBuffer_GetSampleCellSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetResults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRayHitSimple>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FRayHitSimple> UEmbarkGridQueryBuffer::GetResults()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetResults"));

	UEmbarkGridQueryBuffer_GetResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentSamplingLocations
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StepSide                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StepRow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmbarkGridQueryBuffer::GetCurrentSamplingLocations(struct FVector* Origin, struct FVector* StepSide, struct FVector* StepRow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentSamplingLocations"));

	UEmbarkGridQueryBuffer_GetCurrentSamplingLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (StepSide != nullptr)
		*StepSide = params.StepSide;
	if (StepRow != nullptr)
		*StepRow = params.StepRow;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkGridQueryBuffer::GetCurrentOrientation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentOrientation"));

	UEmbarkGridQueryBuffer_GetCurrentOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UEmbarkGridQueryBuffer::GetCurrentLocation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentLocation"));

	UEmbarkGridQueryBuffer_GetCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCellSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkGridQueryBuffer::GetCellSize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetCellSize"));

	UEmbarkGridQueryBuffer_GetCellSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.GetAverageHeightsAboveGrid
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         DesiredPoints                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  QueryRadii                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  OutHeights                     (Parm, OutParm, ZeroConstructor)
// TArray<TEnumAsByte<EQueryResult>> Status                         (Parm, OutParm, ZeroConstructor)
// bool                           bAverageNormals                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutNormals                     (Parm, OutParm, ZeroConstructor)
// bool                           bVisualize                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGridQueryBuffer::GetAverageHeightsAboveGrid(TArray<struct FVector> DesiredPoints, TArray<float> QueryRadii, bool bAverageNormals, bool bVisualize, TArray<float>* OutHeights, TArray<TEnumAsByte<EQueryResult>>* Status, TArray<struct FVector>* OutNormals)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.GetAverageHeightsAboveGrid"));

	UEmbarkGridQueryBuffer_GetAverageHeightsAboveGrid_Params params;
	params.DesiredPoints = DesiredPoints;
	params.QueryRadii = QueryRadii;
	params.bAverageNormals = bAverageNormals;
	params.bVisualize = bVisualize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHeights != nullptr)
		*OutHeights = params.OutHeights;
	if (Status != nullptr)
		*Status = params.Status;
	if (OutNormals != nullptr)
		*OutNormals = params.OutNormals;

	return params.ReturnValue;
}


// Function EmbarkTrace.EmbarkGridQueryBuffer.CustomSampleToBuffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         SamplePoints                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkGridQueryBuffer::CustomSampleToBuffer(TArray<struct FVector> SamplePoints)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTrace.EmbarkGridQueryBuffer.CustomSampleToBuffer"));

	UEmbarkGridQueryBuffer_CustomSampleToBuffer_Params params;
	params.SamplePoints = SamplePoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
