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

// Function EmbarkUtils.EmbarkClassUtilsFunctionLibrary.GetSubclassesOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ParentClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UEmbarkClassUtilsFunctionLibrary::STATIC_GetSubclassesOf(class UClass* ParentClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkClassUtilsFunctionLibrary.GetSubclassesOf"));

	UEmbarkClassUtilsFunctionLibrary_GetSubclassesOf_Params params;
	params.ParentClass = ParentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.StopRecordingMacro
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UEmbarkConsoleCommandMacroFunctionLibrary::STATIC_StopRecordingMacro(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.StopRecordingMacro"));

	UEmbarkConsoleCommandMacroFunctionLibrary_StopRecordingMacro_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.StartRecordingMacro
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkConsoleCommandMacroFunctionLibrary::STATIC_StartRecordingMacro(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.StartRecordingMacro"));

	UEmbarkConsoleCommandMacroFunctionLibrary_StartRecordingMacro_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.PlayMacro
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Commands                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController*       SpecificPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkConsoleCommandMacroFunctionLibrary::STATIC_PlayMacro(class UObject* WorldContextObject, TArray<struct FString> Commands, class APlayerController* SpecificPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.PlayMacro"));

	UEmbarkConsoleCommandMacroFunctionLibrary_PlayMacro_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Commands = Commands;
	params.SpecificPlayer = SpecificPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkDebugUtilsFunctionLibrary.DrawDebugLine
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineStart                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDebugUtilsFunctionLibrary::STATIC_DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float DrawTime, float Thickness, const struct FLinearColor& Color)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkDebugUtilsFunctionLibrary.DrawDebugLine"));

	UEmbarkDebugUtilsFunctionLibrary_DrawDebugLine_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.DrawTime = DrawTime;
	params.Thickness = Thickness;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkDebugUtilsFunctionLibrary.DrawDebugArrow
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineStart                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDebugUtilsFunctionLibrary::STATIC_DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float DrawTime, float Thickness, const struct FLinearColor& Color)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkDebugUtilsFunctionLibrary.DrawDebugArrow"));

	UEmbarkDebugUtilsFunctionLibrary_DrawDebugArrow_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.DrawTime = DrawTime;
	params.Thickness = Thickness;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkOctreeDataHandleMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkOctreeDataHandle Handle                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOctreeDataHandleMixinLibrary::STATIC_IsValid(struct FEmbarkOctreeDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkOctreeDataHandleMixinLibrary.IsValid"));

	UEmbarkOctreeDataHandleMixinLibrary_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.UpdateNode
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// struct FEmbarkOctreeDataHandle ID                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBoxSphereBounds        NewBounds                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGenericOctreeMixinLibrary::STATIC_UpdateNode(const struct FEmbarkOctreeDataHandle& ID, const struct FBoxSphereBounds& NewBounds, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.UpdateNode"));

	UEmbarkGenericOctreeMixinLibrary_UpdateNode_Params params;
	params.ID = ID;
	params.NewBounds = NewBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.RemoveNode
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// struct FEmbarkOctreeDataHandle ID                             (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGenericOctreeMixinLibrary::STATIC_RemoveNode(const struct FEmbarkOctreeDataHandle& ID, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.RemoveNode"));

	UEmbarkGenericOctreeMixinLibrary_RemoveNode_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.IsInitialized
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGenericOctreeMixinLibrary::STATIC_IsInitialized(struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.IsInitialized"));

	UEmbarkGenericOctreeMixinLibrary_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.Initialize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// struct FBox                    Bounds                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkGenericOctreeMixinLibrary::STATIC_Initialize(const struct FBox& Bounds, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.Initialize"));

	UEmbarkGenericOctreeMixinLibrary_Initialize_Params params;
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindNearbyElements
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         IterateBoundsFunc              (Parm, ZeroConstructor)

void UEmbarkGenericOctreeMixinLibrary::STATIC_FindNearbyElements(const struct FVector& Position, const struct FScriptDelegate& IterateBoundsFunc, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindNearbyElements"));

	UEmbarkGenericOctreeMixinLibrary_FindNearbyElements_Params params;
	params.Position = Position;
	params.IterateBoundsFunc = IterateBoundsFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindFirstElementWithBoundsTest
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// struct FBox                    BoxBounds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         IterateBoundsFunc              (Parm, ZeroConstructor)

void UEmbarkGenericOctreeMixinLibrary::STATIC_FindFirstElementWithBoundsTest(const struct FBox& BoxBounds, const struct FScriptDelegate& IterateBoundsFunc, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindFirstElementWithBoundsTest"));

	UEmbarkGenericOctreeMixinLibrary_FindFirstElementWithBoundsTest_Params params;
	params.BoxBounds = BoxBounds;
	params.IterateBoundsFunc = IterateBoundsFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindElementsWithBoundsTest
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// struct FBox                    BoxBounds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         IterateBoundsFunc              (Parm, ZeroConstructor)

void UEmbarkGenericOctreeMixinLibrary::STATIC_FindElementsWithBoundsTest(const struct FBox& BoxBounds, const struct FScriptDelegate& IterateBoundsFunc, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindElementsWithBoundsTest"));

	UEmbarkGenericOctreeMixinLibrary_FindElementsWithBoundsTest_Params params;
	params.BoxBounds = BoxBounds;
	params.IterateBoundsFunc = IterateBoundsFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindElements
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// struct FBox                    BoxBounds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FEmbarkOctreeDataHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FEmbarkOctreeDataHandle> UEmbarkGenericOctreeMixinLibrary::STATIC_FindElements(const struct FBox& BoxBounds, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindElements"));

	UEmbarkGenericOctreeMixinLibrary_FindElements_Params params;
	params.BoxBounds = BoxBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.DebugDrawOctree
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkGenericOctree    Octree                         (Parm, OutParm)
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGenericOctreeMixinLibrary::STATIC_DebugDrawOctree(class UWorld* World, struct FEmbarkGenericOctree* Octree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.DebugDrawOctree"));

	UEmbarkGenericOctreeMixinLibrary_DebugDrawOctree_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Octree != nullptr)
		*Octree = params.Octree;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.TraceBallisticPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkBallisticTraceInput InputData                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         OutTracedPath                  (Parm, OutParm, ZeroConstructor)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFMathUtilsFunctionLibrary::STATIC_TraceBallisticPath(class UObject* WorldContextObject, const struct FEmbarkBallisticTraceInput& InputData, TArray<struct FVector>* OutTracedPath, struct FHitResult* OutHitResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.TraceBallisticPath"));

	UFMathUtilsFunctionLibrary_TraceBallisticPath_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InputData = InputData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTracedPath != nullptr)
		*OutTracedPath = params.OutTracedPath;
	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.SampleProbabilityDensityFunction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCurveFloat*             ProbabilityDensityFunction     (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMathUtilsFunctionLibrary::STATIC_SampleProbabilityDensityFunction(class UCurveFloat* ProbabilityDensityFunction, int NumberOfSamples)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.SampleProbabilityDensityFunction"));

	UFMathUtilsFunctionLibrary_SampleProbabilityDensityFunction_Params params;
	params.ProbabilityDensityFunction = ProbabilityDensityFunction;
	params.NumberOfSamples = NumberOfSamples;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.ProjectVectorOnPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Vec                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 GroundNormal                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 UpVector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UFMathUtilsFunctionLibrary::STATIC_ProjectVectorOnPlane(const struct FVector& Vec, const struct FVector& GroundNormal, const struct FVector& UpVector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.ProjectVectorOnPlane"));

	UFMathUtilsFunctionLibrary_ProjectVectorOnPlane_Params params;
	params.Vec = Vec;
	params.GroundNormal = GroundNormal;
	params.UpVector = UpVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.ProjectOrientedBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FOrientedBox            Box                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ProjectionAxis                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFMathUtilsFunctionLibrary::STATIC_ProjectOrientedBox(const struct FOrientedBox& Box, const struct FVector& ProjectionAxis, float* Min, float* Max)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.ProjectOrientedBox"));

	UFMathUtilsFunctionLibrary_ProjectOrientedBox_Params params;
	params.Box = Box;
	params.ProjectionAxis = ProjectionAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Simple
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkBallisticPredictionInput InputData                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkBallisticPredictionOutput OutputData                     (Parm, OutParm)

void UFMathUtilsFunctionLibrary::STATIC_PredictBallistics_SpeedToDirection_Simple(const struct FEmbarkBallisticPredictionInput& InputData, struct FEmbarkBallisticPredictionOutput* OutputData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Simple"));

	UFMathUtilsFunctionLibrary_PredictBallistics_SpeedToDirection_Simple_Params params;
	params.InputData = InputData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputData != nullptr)
		*OutputData = params.OutputData;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Complex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkBallisticPredictionInput InputData                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FEmbarkBallisticPredictionOutput> Results                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFMathUtilsFunctionLibrary::STATIC_PredictBallistics_SpeedToDirection_Complex(const struct FEmbarkBallisticPredictionInput& InputData, TArray<struct FEmbarkBallisticPredictionOutput>* Results)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Complex"));

	UFMathUtilsFunctionLibrary_PredictBallistics_SpeedToDirection_Complex_Params params;
	params.InputData = InputData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Basic
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkBallisticPredictionInput InputData                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FEmbarkBallisticPredictionOutput> Results                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFMathUtilsFunctionLibrary::STATIC_PredictBallistics_SpeedToDirection_Basic(const struct FEmbarkBallisticPredictionInput& InputData, TArray<struct FEmbarkBallisticPredictionOutput>* Results)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Basic"));

	UFMathUtilsFunctionLibrary_PredictBallistics_SpeedToDirection_Basic_Params params;
	params.InputData = InputData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.MinimumJerkTrajectory
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// double                         CurrentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         CurrentSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         CurrentAcc                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TargetValue                    (Parm, ZeroConstructor, IsPlainOldData)
// double                         TargetSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// double                         TargetAcc                      (Parm, ZeroConstructor, IsPlainOldData)
// double                         TimeLeft                       (Parm, ZeroConstructor, IsPlainOldData)
// double                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UFMathUtilsFunctionLibrary::STATIC_MinimumJerkTrajectory(double TargetValue, double TargetSpeed, double TargetAcc, double TimeLeft, double DeltaTime, double* CurrentValue, double* CurrentSpeed, double* CurrentAcc)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.MinimumJerkTrajectory"));

	UFMathUtilsFunctionLibrary_MinimumJerkTrajectory_Params params;
	params.TargetValue = TargetValue;
	params.TargetSpeed = TargetSpeed;
	params.TargetAcc = TargetAcc;
	params.TimeLeft = TimeLeft;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (CurrentSpeed != nullptr)
		*CurrentSpeed = params.CurrentSpeed;
	if (CurrentAcc != nullptr)
		*CurrentAcc = params.CurrentAcc;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.LineLineIntersect
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector2D               L1Start                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               L1End                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               L2Start                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               L2End                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               OutIntersect                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFMathUtilsFunctionLibrary::STATIC_LineLineIntersect(const struct FVector2D& L1Start, const struct FVector2D& L1End, const struct FVector2D& L2Start, const struct FVector2D& L2End, double Tolerance, struct FVector2D* OutIntersect)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.LineLineIntersect"));

	UFMathUtilsFunctionLibrary_LineLineIntersect_Params params;
	params.L1Start = L1Start;
	params.L1End = L1End;
	params.L2Start = L2Start;
	params.L2End = L2End;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIntersect != nullptr)
		*OutIntersect = params.OutIntersect;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.GetLinearVelocityAtPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 SpaceLoc                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SpaceLinVel                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SpaceAngVel                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UFMathUtilsFunctionLibrary::STATIC_GetLinearVelocityAtPoint(const struct FVector& SpaceLoc, const struct FVector& SpaceLinVel, const struct FVector& SpaceAngVel, const struct FVector& Point)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.GetLinearVelocityAtPoint"));

	UFMathUtilsFunctionLibrary_GetLinearVelocityAtPoint_Params params;
	params.SpaceLoc = SpaceLoc;
	params.SpaceLinVel = SpaceLinVel;
	params.SpaceAngVel = SpaceAngVel;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.GetClosestPointsBetweenSegmentedLines
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Start1                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 End1                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Start2                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 End2                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPoint1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutPoint2                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFMathUtilsFunctionLibrary::STATIC_GetClosestPointsBetweenSegmentedLines(const struct FVector& Start1, const struct FVector& End1, const struct FVector& Start2, const struct FVector& End2, struct FVector* OutPoint1, struct FVector* OutPoint2)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.GetClosestPointsBetweenSegmentedLines"));

	UFMathUtilsFunctionLibrary_GetClosestPointsBetweenSegmentedLines_Params params;
	params.Start1 = Start1;
	params.End1 = End1;
	params.Start2 = Start2;
	params.End2 = End2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPoint1 != nullptr)
		*OutPoint1 = params.OutPoint1;
	if (OutPoint2 != nullptr)
		*OutPoint2 = params.OutPoint2;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.GetClosestPointInList
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         PointList                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UFMathUtilsFunctionLibrary::STATIC_GetClosestPointInList(TArray<struct FVector> PointList, const struct FVector& Point)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.GetClosestPointInList"));

	UFMathUtilsFunctionLibrary_GetClosestPointInList_Params params;
	params.PointList = PointList;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin3
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMathUtilsFunctionLibrary::STATIC_FastSin3(float X)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin3"));

	UFMathUtilsFunctionLibrary_FastSin3_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMathUtilsFunctionLibrary::STATIC_FastSin2(float X)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin2"));

	UFMathUtilsFunctionLibrary_FastSin2_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMathUtilsFunctionLibrary::STATIC_FastSin(float X)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin"));

	UFMathUtilsFunctionLibrary_FastSin_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.CalculateWindingNumber2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<struct FVector>         Polygon                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFMathUtilsFunctionLibrary::STATIC_CalculateWindingNumber2D(TArray<struct FVector> Polygon, const struct FVector& Point)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.CalculateWindingNumber2D"));

	UFMathUtilsFunctionLibrary_CalculateWindingNumber2D_Params params;
	params.Polygon = Polygon;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.FMathUtilsFunctionLibrary.AlphaToBlendOption
// (Final, Native, Static, Public)
// Parameters:
// float                          InAlpha                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EAlphaBlendOption   InBlendOption                  (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             InCustomCurve                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMathUtilsFunctionLibrary::STATIC_AlphaToBlendOption(float InAlpha, enum class EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomCurve)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.FMathUtilsFunctionLibrary.AlphaToBlendOption"));

	UFMathUtilsFunctionLibrary_AlphaToBlendOption_Params params;
	params.InAlpha = InAlpha;
	params.InBlendOption = InBlendOption;
	params.InCustomCurve = InCustomCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkMeshMergeFunctionLibrary.MergeMeshes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeleton*               Skeleton                       (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           RootMesh                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USkeletalMesh*>   MeshesToMerge                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FEmbarkAttachedStaticMeshDesc> AttachedStaticMeshes           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           MorphTargetsToMerge            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MaxNumLODsToMerge              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWaitUntilComplete             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackFunction               (Parm, ZeroConstructor, IsPlainOldData)
// int                            CallbackUserData               (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UEmbarkMeshMergeFunctionLibrary::STATIC_MergeMeshes(class USkeleton* Skeleton, class USkeletalMesh* RootMesh, TArray<class USkeletalMesh*> MeshesToMerge, TArray<struct FEmbarkAttachedStaticMeshDesc> AttachedStaticMeshes, TArray<struct FName> MorphTargetsToMerge, int MaxNumLODsToMerge, bool bWaitUntilComplete, class UObject* CallbackObject, const struct FName& CallbackFunction, int CallbackUserData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkMeshMergeFunctionLibrary.MergeMeshes"));

	UEmbarkMeshMergeFunctionLibrary_MergeMeshes_Params params;
	params.Skeleton = Skeleton;
	params.RootMesh = RootMesh;
	params.MeshesToMerge = MeshesToMerge;
	params.AttachedStaticMeshes = AttachedStaticMeshes;
	params.MorphTargetsToMerge = MorphTargetsToMerge;
	params.MaxNumLODsToMerge = MaxNumLODsToMerge;
	params.bWaitUntilComplete = bWaitUntilComplete;
	params.CallbackObject = CallbackObject;
	params.CallbackFunction = CallbackFunction;
	params.CallbackUserData = CallbackUserData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkMeshMergeFunctionLibrary.MergeAttachedStaticMeshes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           RootMesh                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEmbarkAttachedStaticMeshDesc> AttachedStaticMeshes           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           MorphTargetsToMerge            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MaxNumLODsToMerge              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWaitUntilComplete             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackFunction               (Parm, ZeroConstructor, IsPlainOldData)
// int                            CallbackUserData               (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UEmbarkMeshMergeFunctionLibrary::STATIC_MergeAttachedStaticMeshes(class USkeletalMesh* RootMesh, TArray<struct FEmbarkAttachedStaticMeshDesc> AttachedStaticMeshes, TArray<struct FName> MorphTargetsToMerge, int MaxNumLODsToMerge, bool bWaitUntilComplete, class UObject* CallbackObject, const struct FName& CallbackFunction, int CallbackUserData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkMeshMergeFunctionLibrary.MergeAttachedStaticMeshes"));

	UEmbarkMeshMergeFunctionLibrary_MergeAttachedStaticMeshes_Params params;
	params.RootMesh = RootMesh;
	params.AttachedStaticMeshes = AttachedStaticMeshes;
	params.MorphTargetsToMerge = MorphTargetsToMerge;
	params.MaxNumLODsToMerge = MaxNumLODsToMerge;
	params.bWaitUntilComplete = bWaitUntilComplete;
	params.CallbackObject = CallbackObject;
	params.CallbackFunction = CallbackFunction;
	params.CallbackUserData = CallbackUserData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkPawnComponent.ReceiveOnUnpossessedBy
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             UnpossessedBy                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkPawnComponent::ReceiveOnUnpossessedBy(class AController* UnpossessedBy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPawnComponent.ReceiveOnUnpossessedBy"));

	UEmbarkPawnComponent_ReceiveOnUnpossessedBy_Params params;
	params.UnpossessedBy = UnpossessedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkPawnComponent.ReceiveOnPossessedBy
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             PossessedBy                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkPawnComponent::ReceiveOnPossessedBy(class AController* PossessedBy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPawnComponent.ReceiveOnPossessedBy"));

	UEmbarkPawnComponent_ReceiveOnPossessedBy_Params params;
	params.PossessedBy = PossessedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkPerformanceRecorderComponent.StopRecording
// (Final, Native, Public, BlueprintCallable)

void UEmbarkPerformanceRecorderComponent::StopRecording()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPerformanceRecorderComponent.StopRecording"));

	UEmbarkPerformanceRecorderComponent_StopRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkPerformanceRecorderComponent.StartRecording
// (Final, Native, Public, BlueprintCallable)

void UEmbarkPerformanceRecorderComponent::StartRecording()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPerformanceRecorderComponent.StartRecording"));

	UEmbarkPerformanceRecorderComponent_StartRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkPerformanceRecorderComponent.SendServerPerformanceTelemetryEvent
// (Final, Native, Public, BlueprintCallable)

void UEmbarkPerformanceRecorderComponent::SendServerPerformanceTelemetryEvent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPerformanceRecorderComponent.SendServerPerformanceTelemetryEvent"));

	UEmbarkPerformanceRecorderComponent_SendServerPerformanceTelemetryEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.SetBodyTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FBodyInstance           Instance                       (Parm, OutParm)
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// enum class ETeleportType       Teleport                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoWake                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkPhysicsUtil::STATIC_SetBodyTransform(const struct FTransform& NewTransform, enum class ETeleportType Teleport, bool bAutoWake, struct FBodyInstance* Instance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.SetBodyTransform"));

	UEmbarkPhysicsUtil_SetBodyTransform_Params params;
	params.NewTransform = NewTransform;
	params.Teleport = Teleport;
	params.bAutoWake = bAutoWake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instance != nullptr)
		*Instance = params.Instance;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.IsInstanceSimulating
// (Final, Native, Static, Public)
// Parameters:
// class UPrimitiveComponent*     Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkPhysicsUtil::STATIC_IsInstanceSimulating(class UPrimitiveComponent* Component, const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.IsInstanceSimulating"));

	UEmbarkPhysicsUtil_IsInstanceSimulating_Params params;
	params.Component = Component;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.IsInScene
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBodyInstance           Body                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkPhysicsUtil::STATIC_IsInScene(struct FBodyInstance* Body)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.IsInScene"));

	UEmbarkPhysicsUtil_IsInScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.GetSimulatingParent
// (Final, Native, Static, Public)
// Parameters:
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UEmbarkPhysicsUtil::STATIC_GetSimulatingParent(class USceneComponent* SceneComponent, const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.GetSimulatingParent"));

	UEmbarkPhysicsUtil_GetSimulatingParent_Params params;
	params.SceneComponent = SceneComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.GetKinematicTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FBodyInstance           Body                           (Parm, OutParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkPhysicsUtil::STATIC_GetKinematicTarget(struct FBodyInstance* Body)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.GetKinematicTarget"));

	UEmbarkPhysicsUtil_GetKinematicTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.GetBodyInstanceMass
// (Final, Native, Static, Public)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkPhysicsUtil::STATIC_GetBodyInstanceMass(class UPrimitiveComponent* PrimitiveComponent, const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.GetBodyInstanceMass"));

	UEmbarkPhysicsUtil_GetBodyInstanceMass_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.EnhancedSphereOverlap
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpherePos                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ComponentClassFilter           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FOverlapResult>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FOverlapResult> UEmbarkPhysicsUtil::STATIC_EnhancedSphereOverlap(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.EnhancedSphereOverlap"));

	UEmbarkPhysicsUtil_EnhancedSphereOverlap_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpherePos = SpherePos;
	params.SphereRadius = SphereRadius;
	params.ObjectTypes = ObjectTypes;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkPhysicsUtil.EnhancedBoxOverlap
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxPos                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                BoxRotation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ComponentClassFilter           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FOverlapResult>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FOverlapResult> UEmbarkPhysicsUtil::STATIC_EnhancedBoxOverlap(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FRotator& BoxRotation, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkPhysicsUtil.EnhancedBoxOverlap"));

	UEmbarkPhysicsUtil_EnhancedBoxOverlap_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxRotation = BoxRotation;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.RootMotionAnimMatchingUtils.GetTimeAtClosestPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<struct FRootMotionAnimMatching_PointAtTime> PointAtTimes                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector3f               Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MaxTimeToQuery                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URootMotionAnimMatchingUtils::STATIC_GetTimeAtClosestPoint(TArray<struct FRootMotionAnimMatching_PointAtTime> PointAtTimes, const struct FVector3f& Point, float MaxTimeToQuery)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.RootMotionAnimMatchingUtils.GetTimeAtClosestPoint"));

	URootMotionAnimMatchingUtils_GetTimeAtClosestPoint_Params params;
	params.PointAtTimes = PointAtTimes;
	params.Point = Point;
	params.MaxTimeToQuery = MaxTimeToQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkRootMotionUtils.GetWarpCurvesFromSeqAtTime
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FWarpCurvesDefinition   WarpCurveDefinitions           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FWarpCurvesValue        ValuesIfCurvesDoNotExists      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FWarpCurvesValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWarpCurvesValue UEmbarkRootMotionUtils::STATIC_GetWarpCurvesFromSeqAtTime(class UAnimSequence* Sequence, float Time, const struct FWarpCurvesDefinition& WarpCurveDefinitions, const struct FWarpCurvesValue& ValuesIfCurvesDoNotExists)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkRootMotionUtils.GetWarpCurvesFromSeqAtTime"));

	UEmbarkRootMotionUtils_GetWarpCurvesFromSeqAtTime_Params params;
	params.Sequence = Sequence;
	params.Time = Time;
	params.WarpCurveDefinitions = WarpCurveDefinitions;
	params.ValuesIfCurvesDoNotExists = ValuesIfCurvesDoNotExists;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkRootMotionUtils.GetInterpolatedWarpWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              AuxRootTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FWarpCurvesValue        WarpCurves                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              WarpTargetWorldTransform       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              WarpStartTransform             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          CapsuleHeight                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkRootMotionUtils::STATIC_GetInterpolatedWarpWorldTransform(const struct FTransform& AuxRootTransform, const struct FWarpCurvesValue& WarpCurves, const struct FTransform& WarpTargetWorldTransform, const struct FTransform& WarpStartTransform, float CapsuleHeight)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkRootMotionUtils.GetInterpolatedWarpWorldTransform"));

	UEmbarkRootMotionUtils_GetInterpolatedWarpWorldTransform_Params params;
	params.AuxRootTransform = AuxRootTransform;
	params.WarpCurves = WarpCurves;
	params.WarpTargetWorldTransform = WarpTargetWorldTransform;
	params.WarpStartTransform = WarpStartTransform;
	params.CapsuleHeight = CapsuleHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkRootMotionUtils.AdjustWarpCurvesForPhasedEntry
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// float                          CurrentClipTime                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTimeOffset                (Parm, ZeroConstructor, IsPlainOldData)
// float                          RateScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FWarpCurvesValue        OutWarpCurves                  (Parm, OutParm)

void UEmbarkRootMotionUtils::STATIC_AdjustWarpCurvesForPhasedEntry(float CurrentClipTime, float StartTimeOffset, float RateScale, struct FWarpCurvesValue* OutWarpCurves)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkRootMotionUtils.AdjustWarpCurvesForPhasedEntry"));

	UEmbarkRootMotionUtils_AdjustWarpCurvesForPhasedEntry_Params params;
	params.CurrentClipTime = CurrentClipTime;
	params.StartTimeOffset = StartTimeOffset;
	params.RateScale = RateScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWarpCurves != nullptr)
		*OutWarpCurves = params.OutWarpCurves;
}


// Function EmbarkUtils.EmbarkUtils.UnbindOnReceiveEmbarkPlayerController
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_UnbindOnReceiveEmbarkPlayerController(class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.UnbindOnReceiveEmbarkPlayerController"));

	UEmbarkUtils_UnbindOnReceiveEmbarkPlayerController_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.TeleportActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DestLocation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                DestRotation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bIsATest                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoCheck                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_TeleportActor(class AActor* Actor, const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIsATest, bool bNoCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.TeleportActor"));

	UEmbarkUtils_TeleportActor_Params params;
	params.Actor = Actor;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.bIsATest = bIsATest;
	params.bNoCheck = bNoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.StringToEnumIdx
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 EnumName                       (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkUtils::STATIC_StringToEnumIdx(const struct FString& EnumName, const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.StringToEnumIdx"));

	UEmbarkUtils_StringToEnumIdx_Params params;
	params.EnumName = EnumName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.StopPerfTimer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPerfTimerData          Data                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkUtils::STATIC_StopPerfTimer(struct FPerfTimerData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.StopPerfTimer"));

	UEmbarkUtils_StopPerfTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.StartPerfTimer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPerfTimerData          Data                           (Parm, OutParm)

void UEmbarkUtils::STATIC_StartPerfTimer(struct FPerfTimerData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.StartPerfTimer"));

	UEmbarkUtils_StartPerfTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function EmbarkUtils.EmbarkUtils.SphereOverlapByChannel
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpherePos                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SphereRadius                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FOverlapResult>  OutOverlaps                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_SphereOverlapByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> ActorsToIgnore, TArray<struct FOverlapResult>* OutOverlaps)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SphereOverlapByChannel"));

	UEmbarkUtils_SphereOverlapByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpherePos = SpherePos;
	params.SphereRadius = SphereRadius;
	params.CollisionChannel = CollisionChannel;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlaps != nullptr)
		*OutOverlaps = params.OutOverlaps;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.SortLocationsByDistance2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    OutIndices                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkUtils::STATIC_SortLocationsByDistance2D(const struct FVector& Origin, TArray<struct FVector> Locations, TArray<int>* OutIndices)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SortLocationsByDistance2D"));

	UEmbarkUtils_SortLocationsByDistance2D_Params params;
	params.Origin = Origin;
	params.Locations = Locations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndices != nullptr)
		*OutIndices = params.OutIndices;
}


// Function EmbarkUtils.EmbarkUtils.SortLocationsByDistance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    OutIndices                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkUtils::STATIC_SortLocationsByDistance(const struct FVector& Origin, TArray<struct FVector> Locations, TArray<int>* OutIndices)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SortLocationsByDistance"));

	UEmbarkUtils_SortLocationsByDistance_Params params;
	params.Origin = Origin;
	params.Locations = Locations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndices != nullptr)
		*OutIndices = params.OutIndices;
}


// Function EmbarkUtils.EmbarkUtils.SortActorsByDistance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkUtils::STATIC_SortActorsByDistance(const struct FVector& Location, TArray<class AActor*>* Actors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SortActorsByDistance"));

	UEmbarkUtils_SortActorsByDistance_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function EmbarkUtils.EmbarkUtils.SimulateTicksOnActorComponent
// (Final, Native, Static, Public)
// Parameters:
// class UActorComponent*         ActorComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          TotalTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeStepTarget                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SimulateTicksOnActorComponent(class UActorComponent* ActorComponent, float TotalTime, float TimeStepTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateTicksOnActorComponent"));

	UEmbarkUtils_SimulateTicksOnActorComponent_Params params;
	params.ActorComponent = ActorComponent;
	params.TotalTime = TotalTime;
	params.TimeStepTarget = TimeStepTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateTicksOnActor
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeStepTarget                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SimulateTicksOnActor(class AActor* Actor, float TotalTime, float TimeStepTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateTicksOnActor"));

	UEmbarkUtils_SimulateTicksOnActor_Params params;
	params.Actor = Actor;
	params.TotalTime = TotalTime;
	params.TimeStepTarget = TimeStepTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateMouseRMBUp
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkUtils::STATIC_SimulateMouseRMBUp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateMouseRMBUp"));

	UEmbarkUtils_SimulateMouseRMBUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateMouseRMBDown
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkUtils::STATIC_SimulateMouseRMBDown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateMouseRMBDown"));

	UEmbarkUtils_SimulateMouseRMBDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateMouseMoved
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActuallyMoveCursor            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SimulateMouseMoved(int X, int Y, bool bActuallyMoveCursor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateMouseMoved"));

	UEmbarkUtils_SimulateMouseMoved_Params params;
	params.X = X;
	params.Y = Y;
	params.bActuallyMoveCursor = bActuallyMoveCursor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateMouseLMBUp
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkUtils::STATIC_SimulateMouseLMBUp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateMouseLMBUp"));

	UEmbarkUtils_SimulateMouseLMBUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateMouseLMBDown
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkUtils::STATIC_SimulateMouseLMBDown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateMouseLMBDown"));

	UEmbarkUtils_SimulateMouseLMBDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateMouseClick
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKey                    MouseButton                    (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SimulateMouseClick(const struct FKey& MouseButton, TEnumAsByte<EInputEvent> InputEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateMouseClick"));

	UEmbarkUtils_SimulateMouseClick_Params params;
	params.MouseButton = MouseButton;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SimulateKeyInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SimulateKeyInput(const struct FKey& Key, TEnumAsByte<EInputEvent> InputEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SimulateKeyInput"));

	UEmbarkUtils_SimulateKeyInput_Params params;
	params.Key = Key;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetVectorPropertyByName
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkUtils::STATIC_SetVectorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FVector& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetVectorPropertyByName"));

	UEmbarkUtils_SetVectorPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetTransformPropertyByName
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FTransform              Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UEmbarkUtils::STATIC_SetTransformPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FTransform& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetTransformPropertyByName"));

	UEmbarkUtils_SetTransformPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetTimerDelegateForNextTickByFunctionName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimerHandle            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimerHandle UEmbarkUtils::STATIC_SetTimerDelegateForNextTickByFunctionName(class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetTimerDelegateForNextTickByFunctionName"));

	UEmbarkUtils_SetTimerDelegateForNextTickByFunctionName_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.SetTimerDelegateForNextTick
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTimerHandle            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimerHandle UEmbarkUtils::STATIC_SetTimerDelegateForNextTick(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetTimerDelegateForNextTick"));

	UEmbarkUtils_SetTimerDelegateForNextTick_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.SetTimer
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLooping                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          InitialStartDelay              (Parm, ZeroConstructor, IsPlainOldData)
// float                          InitialStartDelayVariance      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimerHandle            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimerHandle UEmbarkUtils::STATIC_SetTimer(class UObject* Object, const struct FName& FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetTimer"));

	UEmbarkUtils_SetTimer_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;
	params.Time = Time;
	params.bLooping = bLooping;
	params.InitialStartDelay = InitialStartDelay;
	params.InitialStartDelayVariance = InitialStartDelayVariance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.SetTickOrderForComponent
// (Final, Native, Static, Public)
// Parameters:
// class UActorComponent*         ActorComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// uint64_t                       TickOrder                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetTickOrderForComponent(class UActorComponent* ActorComponent, uint64_t TickOrder)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetTickOrderForComponent"));

	UEmbarkUtils_SetTickOrderForComponent_Params params;
	params.ActorComponent = ActorComponent;
	params.TickOrder = TickOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetTextPropertyByName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkUtils::STATIC_SetTextPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FText& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetTextPropertyByName"));

	UEmbarkUtils_SetTextPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetStringPropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UEmbarkUtils::STATIC_SetStringPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetStringPropertyByName"));

	UEmbarkUtils_SetStringPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetSoftObjectPropertyByName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)

void UEmbarkUtils::STATIC_SetSoftObjectPropertyByName(class UObject* Object, const struct FString& PropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetSoftObjectPropertyByName"));

	UEmbarkUtils_SetSoftObjectPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetSoftClassPropertyByName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)

void UEmbarkUtils::STATIC_SetSoftClassPropertyByName(class UObject* Object, const struct FString& PropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetSoftClassPropertyByName"));

	UEmbarkUtils_SetSoftClassPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetRotatorPropertyByName
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FRotator                Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkUtils::STATIC_SetRotatorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FRotator& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetRotatorPropertyByName"));

	UEmbarkUtils_SetRotatorPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetObjectPropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetObjectPropertyByName(class UObject* Object, const struct FString& PropertyName, class UObject* Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetObjectPropertyByName"));

	UEmbarkUtils_SetObjectPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetNamePropertyByName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FName                   Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkUtils::STATIC_SetNamePropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FName& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetNamePropertyByName"));

	UEmbarkUtils_SetNamePropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetLinearColorPropertyByName
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FLinearColor            Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkUtils::STATIC_SetLinearColorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FLinearColor& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetLinearColorPropertyByName"));

	UEmbarkUtils_SetLinearColorPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetIntPropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetIntPropertyByName(class UObject* Object, const struct FString& PropertyName, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetIntPropertyByName"));

	UEmbarkUtils_SetIntPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetInt64PropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetInt64PropertyByName(class UObject* Object, const struct FString& PropertyName, int64_t Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetInt64PropertyByName"));

	UEmbarkUtils_SetInt64PropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetHighTickPrioForComponent
// (Final, Native, Static, Public)
// Parameters:
// class UActorComponent*         ActorComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkUtils::STATIC_SetHighTickPrioForComponent(class UActorComponent* ActorComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetHighTickPrioForComponent"));

	UEmbarkUtils_SetHighTickPrioForComponent_Params params;
	params.ActorComponent = ActorComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetGameplayTagPropertyByName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FGameplayTag            Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkUtils::STATIC_SetGameplayTagPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FGameplayTag& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetGameplayTagPropertyByName"));

	UEmbarkUtils_SetGameplayTagPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetFloatPropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// double                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetFloatPropertyByName(class UObject* Object, const struct FString& PropertyName, double Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetFloatPropertyByName"));

	UEmbarkUtils_SetFloatPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetColorPropertyByName
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FColor                  Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkUtils::STATIC_SetColorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FColor& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetColorPropertyByName"));

	UEmbarkUtils_SetColorPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetClassPropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetClassPropertyByName(class UObject* Object, const struct FString& PropertyName, class UClass* Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetClassPropertyByName"));

	UEmbarkUtils_SetClassPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetBytePropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetBytePropertyByName(class UObject* Object, const struct FString& PropertyName, unsigned char Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetBytePropertyByName"));

	UEmbarkUtils_SetBytePropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SetBoolPropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SetBoolPropertyByName(class UObject* Object, const struct FString& PropertyName, bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SetBoolPropertyByName"));

	UEmbarkUtils_SetBoolPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SegmentCapsuleOverlapActors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CapsuleStart                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CapsuleEnd                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_SegmentCapsuleOverlapActors(class UObject* WorldContextObject, const struct FVector& CapsuleStart, const struct FVector& CapsuleEnd, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SegmentCapsuleOverlapActors"));

	UEmbarkUtils_SegmentCapsuleOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CapsuleStart = CapsuleStart;
	params.CapsuleEnd = CapsuleEnd;
	params.Radius = Radius;
	params.CollisionChannel = CollisionChannel;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.SaveDeveloperStringSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)
// struct FString                 Setting                        (Parm, ZeroConstructor)

void UEmbarkUtils::STATIC_SaveDeveloperStringSetting(const struct FString& SectionName, const struct FString& SettingsKey, const struct FString& Setting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SaveDeveloperStringSetting"));

	UEmbarkUtils_SaveDeveloperStringSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SaveDeveloperIntSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)
// int                            Setting                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SaveDeveloperIntSetting(const struct FString& SectionName, const struct FString& SettingsKey, int Setting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SaveDeveloperIntSetting"));

	UEmbarkUtils_SaveDeveloperIntSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SaveDeveloperFloatSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)
// float                          Setting                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_SaveDeveloperFloatSetting(const struct FString& SectionName, const struct FString& SettingsKey, float Setting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SaveDeveloperFloatSetting"));

	UEmbarkUtils_SaveDeveloperFloatSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.SaveAutoExec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewAutoExec                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_SaveAutoExec(const struct FString& NewAutoExec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.SaveAutoExec"));

	UEmbarkUtils_SaveAutoExec_Params params;
	params.NewAutoExec = NewAutoExec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.ResolveClassFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ClassPath                      (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEmbarkUtils::STATIC_ResolveClassFromString(const struct FString& ClassPath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.ResolveClassFromString"));

	UEmbarkUtils_ResolveClassFromString_Params params;
	params.ClassPath = ClassPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.ResetObjectPropertyToCDO
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_ResetObjectPropertyToCDO(class UObject* Object, const struct FString& PropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.ResetObjectPropertyToCDO"));

	UEmbarkUtils_ResetObjectPropertyToCDO_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.ResetObjectPropertiesToCDO
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_ResetObjectPropertiesToCDO(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.ResetObjectPropertiesToCDO"));

	UEmbarkUtils_ResetObjectPropertiesToCDO_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.RemoveWorldPIEPrefix
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 WorldPackagePath               (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_RemoveWorldPIEPrefix(const struct FString& WorldPackagePath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.RemoveWorldPIEPrefix"));

	UEmbarkUtils_RemoveWorldPIEPrefix_Params params;
	params.WorldPackagePath = WorldPackagePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.RemoveSCSNodeFromBlueprint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         RemoveNodeMatchingThisComponentTemplate (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkUtils::STATIC_RemoveSCSNodeFromBlueprint(class UClass* Class, class UActorComponent* RemoveNodeMatchingThisComponentTemplate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.RemoveSCSNodeFromBlueprint"));

	UEmbarkUtils_RemoveSCSNodeFromBlueprint_Params params;
	params.Class = Class;
	params.RemoveNodeMatchingThisComponentTemplate = RemoveNodeMatchingThisComponentTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.ReinitSkeletalMeshComponentAnim
// (Final, Native, Static, Public)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkUtils::STATIC_ReinitSkeletalMeshComponentAnim(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.ReinitSkeletalMeshComponentAnim"));

	UEmbarkUtils_ReinitSkeletalMeshComponentAnim_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.ReinitializeProperties
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_ReinitializeProperties(class UObject* Source, class UObject* Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.ReinitializeProperties"));

	UEmbarkUtils_ReinitializeProperties_Params params;
	params.Source = Source;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.RegisterComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ComponentToRegister            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkUtils::STATIC_RegisterComponent(class UActorComponent* ComponentToRegister)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.RegisterComponent"));

	UEmbarkUtils_RegisterComponent_Params params;
	params.ComponentToRegister = ComponentToRegister;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.OverrideClientRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxClientRate                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxInternetClientRate          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_OverrideClientRate(class UWorld* World, int MaxClientRate, int MaxInternetClientRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.OverrideClientRate"));

	UEmbarkUtils_OverrideClientRate_Params params;
	params.World = World;
	params.MaxClientRate = MaxClientRate;
	params.MaxInternetClientRate = MaxInternetClientRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.MakeUniqueObjectName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InBaseName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkUtils::STATIC_MakeUniqueObjectName(class UObject* Parent, class UClass* Class, const struct FName& InBaseName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.MakeUniqueObjectName"));

	UEmbarkUtils_MakeUniqueObjectName_Params params;
	params.Parent = Parent;
	params.Class = Class;
	params.InBaseName = InBaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadFloatConsoleVariable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ConsoleVariableName            (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkUtils::STATIC_LoadFloatConsoleVariable(const struct FString& ConsoleVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadFloatConsoleVariable"));

	UEmbarkUtils_LoadFloatConsoleVariable_Params params;
	params.ConsoleVariableName = ConsoleVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadEngineStringSetting
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)
// struct FString                 OutSetting                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_LoadEngineStringSetting(const struct FString& SectionName, const struct FString& SettingsKey, struct FString* OutSetting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadEngineStringSetting"));

	UEmbarkUtils_LoadEngineStringSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSetting != nullptr)
		*OutSetting = params.OutSetting;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadDeveloperStringSetting
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)
// struct FString                 OutSetting                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_LoadDeveloperStringSetting(const struct FString& SectionName, const struct FString& SettingsKey, struct FString* OutSetting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadDeveloperStringSetting"));

	UEmbarkUtils_LoadDeveloperStringSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSetting != nullptr)
		*OutSetting = params.OutSetting;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadDeveloperSection
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// TArray<struct FString>         OutSectionContents             (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_LoadDeveloperSection(const struct FString& SectionName, TArray<struct FString>* OutSectionContents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadDeveloperSection"));

	UEmbarkUtils_LoadDeveloperSection_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSectionContents != nullptr)
		*OutSectionContents = params.OutSectionContents;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadDeveloperIntSetting
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)
// int                            OutSetting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_LoadDeveloperIntSetting(const struct FString& SectionName, const struct FString& SettingsKey, int* OutSetting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadDeveloperIntSetting"));

	UEmbarkUtils_LoadDeveloperIntSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSetting != nullptr)
		*OutSetting = params.OutSetting;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadDeveloperFloatSetting
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)
// float                          OutSetting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_LoadDeveloperFloatSetting(const struct FString& SectionName, const struct FString& SettingsKey, float* OutSetting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadDeveloperFloatSetting"));

	UEmbarkUtils_LoadDeveloperFloatSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSetting != nullptr)
		*OutSetting = params.OutSetting;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadClassFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ClassPath                      (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEmbarkUtils::STATIC_LoadClassFromString(const struct FString& ClassPath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadClassFromString"));

	UEmbarkUtils_LoadClassFromString_Params params;
	params.ClassPath = ClassPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadAutoExec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Commands                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_LoadAutoExec(TArray<struct FString>* Commands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadAutoExec"));

	UEmbarkUtils_LoadAutoExec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Commands != nullptr)
		*Commands = params.Commands;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.LoadAssetsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSoftObjectPath> ObjectPaths                    (Parm, ZeroConstructor)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackMethodName             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_LoadAssetsAsync(TArray<struct FSoftObjectPath> ObjectPaths, class UObject* CallbackObject, const struct FName& CallbackMethodName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadAssetsAsync"));

	UEmbarkUtils_LoadAssetsAsync_Params params;
	params.ObjectPaths = ObjectPaths;
	params.CallbackObject = CallbackObject;
	params.CallbackMethodName = CallbackMethodName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.LoadAssetAsync
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath         ObjectPath                     (Parm, ZeroConstructor)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackMethodName             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_LoadAssetAsync(const struct FSoftObjectPath& ObjectPath, class UObject* CallbackObject, const struct FName& CallbackMethodName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LoadAssetAsync"));

	UEmbarkUtils_LoadAssetAsync_Params params;
	params.ObjectPath = ObjectPath;
	params.CallbackObject = CallbackObject;
	params.CallbackMethodName = CallbackMethodName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.LineTraceSingleBatched
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Start                          (ConstParm, Parm, ZeroConstructor)
// TArray<struct FVector>         End                            (ConstParm, Parm, ZeroConstructor)
// TEnumAsByte<ETraceTypeQuery>   TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_LineTraceSingleBatched(class UObject* WorldContextObject, TArray<struct FVector> Start, TArray<struct FVector> End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.LineTraceSingleBatched"));

	UEmbarkUtils_LineTraceSingleBatched_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsWorldDistanceDependentSubLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  PersistentWorld                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SubLevelPackageName            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsWorldDistanceDependentSubLevel(class UWorld* PersistentWorld, const struct FName& SubLevelPackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsWorldDistanceDependentSubLevel"));

	UEmbarkUtils_IsWorldDistanceDependentSubLevel_Params params;
	params.PersistentWorld = PersistentWorld;
	params.SubLevelPackageName = SubLevelPackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsUnattended
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsUnattended()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsUnattended"));

	UEmbarkUtils_IsUnattended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsStreamingLevelPending
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelStreaming*         LevelStreaming                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsStreamingLevelPending(class ULevelStreaming* LevelStreaming)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsStreamingLevelPending"));

	UEmbarkUtils_IsStreamingLevelPending_Params params;
	params.LevelStreaming = LevelStreaming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsStaticJITTranspiledCodeLoaded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsStaticJITTranspiledCodeLoaded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsStaticJITTranspiledCodeLoaded"));

	UEmbarkUtils_IsStaticJITTranspiledCodeLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsRepGraphNetRelevant
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDormant                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsRepGraphNetRelevant(class APawn* Pawn, class AActor* ActorToCheck, bool bIncludeDormant)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsRepGraphNetRelevant"));

	UEmbarkUtils_IsRepGraphNetRelevant_Params params;
	params.Pawn = Pawn;
	params.ActorToCheck = ActorToCheck;
	params.bIncludeDormant = bIncludeDormant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsPropertyIdentical
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 ObjA                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyNameA                  (Parm, ZeroConstructor)
// class UObject*                 ObjB                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyNameB                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsPropertyIdentical(class UObject* ObjA, const struct FString& PropertyNameA, class UObject* ObjB, const struct FString& PropertyNameB)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsPropertyIdentical"));

	UEmbarkUtils_IsPropertyIdentical_Params params;
	params.ObjA = ObjA;
	params.PropertyNameA = PropertyNameA;
	params.ObjB = ObjB;
	params.PropertyNameB = PropertyNameB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsLevelInstanceLoaded
// (Final, Native, Static, Public)
// Parameters:
// class ALevelInstance*          LevelInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsLevelInstanceLoaded(class ALevelInstance* LevelInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsLevelInstanceLoaded"));

	UEmbarkUtils_IsLevelInstanceLoaded_Params params;
	params.LevelInstance = LevelInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsAutoplay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsAutoplay()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsAutoplay"));

	UEmbarkUtils_IsAutoplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.IsAnonymousUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_IsAnonymousUser()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.IsAnonymousUser"));

	UEmbarkUtils_IsAnonymousUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetVertexColorData
// (Final, Native, Static, Public)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PaintingMeshLODIndex           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FVector, struct FColor> ReturnValue                    (Parm, OutParm, ReturnParm)

TMap<struct FVector, struct FColor> UEmbarkUtils::STATIC_GetVertexColorData(class USkeletalMesh* SkeletalMesh, uint32_t PaintingMeshLODIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetVertexColorData"));

	UEmbarkUtils_GetVertexColorData_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.PaintingMeshLODIndex = PaintingMeshLODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetUniqueId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 QueryObject                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkUtils::STATIC_GetUniqueId(class UObject* QueryObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetUniqueId"));

	UEmbarkUtils_GetUniqueId_Params params;
	params.QueryObject = QueryObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetTextPropertyByName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEmbarkUtils::STATIC_GetTextPropertyByName(class UObject* Object, const struct FString& PropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetTextPropertyByName"));

	UEmbarkUtils_GetTextPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetSocketRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutRelativeTransform           (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetSocketRelativeTransform(class UStaticMeshComponent* StaticMeshComponent, const struct FName& InSocketName, struct FTransform* OutRelativeTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetSocketRelativeTransform"));

	UEmbarkUtils_GetSocketRelativeTransform_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRelativeTransform != nullptr)
		*OutRelativeTransform = params.OutRelativeTransform;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetSkeletalMeshRefPoseTransform
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkUtils::STATIC_GetSkeletalMeshRefPoseTransform(class USkeletalMesh* SkeletalMesh, const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetSkeletalMeshRefPoseTransform"));

	UEmbarkUtils_GetSkeletalMeshRefPoseTransform_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetServerTimestampAccurate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkUtils::STATIC_GetServerTimestampAccurate(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetServerTimestampAccurate"));

	UEmbarkUtils_GetServerTimestampAccurate_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetServerTimestamp
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          OutServerTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetServerTimestamp(float* OutServerTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetServerTimestamp"));

	UEmbarkUtils_GetServerTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerTime != nullptr)
		*OutServerTime = params.OutServerTime;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetSCSNodeFromCDOComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  BPClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         CDOComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USCS_Node*               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USCS_Node* UEmbarkUtils::STATIC_GetSCSNodeFromCDOComponent(class UClass* BPClass, class USceneComponent* CDOComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetSCSNodeFromCDOComponent"));

	UEmbarkUtils_GetSCSNodeFromCDOComponent_Params params;
	params.BPClass = BPClass;
	params.CDOComponent = CDOComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetSanitizedComponentTemplateNameByObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 ComponentTemplateObject        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_GetSanitizedComponentTemplateNameByObject(class UObject* ComponentTemplateObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetSanitizedComponentTemplateNameByObject"));

	UEmbarkUtils_GetSanitizedComponentTemplateNameByObject_Params params;
	params.ComponentTemplateObject = ComponentTemplateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetSanitizedComponentTemplateName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ComponentTemplateName          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_GetSanitizedComponentTemplateName(const struct FString& ComponentTemplateName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetSanitizedComponentTemplateName"));

	UEmbarkUtils_GetSanitizedComponentTemplateName_Params params;
	params.ComponentTemplateName = ComponentTemplateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetPropertyValueAsString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FString                 OutPropertyValue               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetPropertyValueAsString(class UObject* Obj, const struct FString& PropertyName, struct FString* OutPropertyValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetPropertyValueAsString"));

	UEmbarkUtils_GetPropertyValueAsString_Params params;
	params.Obj = Obj;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPropertyValue != nullptr)
		*OutPropertyValue = params.OutPropertyValue;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetPropertyTypeNameAsString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FString                 OutPropertyTypeName            (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetPropertyTypeNameAsString(class UObject* Obj, const struct FString& PropertyName, struct FString* OutPropertyTypeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetPropertyTypeNameAsString"));

	UEmbarkUtils_GetPropertyTypeNameAsString_Params params;
	params.Obj = Obj;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPropertyTypeName != nullptr)
		*OutPropertyTypeName = params.OutPropertyTypeName;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetPropertyType
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// enum class EEmbarkPropertyTypes ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkPropertyTypes UEmbarkUtils::STATIC_GetPropertyType(class UObject* Obj, const struct FString& PropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetPropertyType"));

	UEmbarkUtils_GetPropertyType_Params params;
	params.Obj = Obj;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetPlayerControllerInWorld
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UEmbarkUtils::STATIC_GetPlayerControllerInWorld(class UObject* WorldContextObject, uint64_t PlayerIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetPlayerControllerInWorld"));

	UEmbarkUtils_GetPlayerControllerInWorld_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetPlatformUserName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bOnlyAlphaNumeric              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_GetPlatformUserName(bool bOnlyAlphaNumeric)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetPlatformUserName"));

	UEmbarkUtils_GetPlatformUserName_Params params;
	params.bOnlyAlphaNumeric = bOnlyAlphaNumeric;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetPlatformTimeMSTwoDecimals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UEmbarkUtils::STATIC_GetPlatformTimeMSTwoDecimals()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetPlatformTimeMSTwoDecimals"));

	UEmbarkUtils_GetPlatformTimeMSTwoDecimals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetPhysicalSurfaceFromName
// (Final, Native, Static, Public)
// Parameters:
// struct FName                   SurfaceName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPhysicalSurface> UEmbarkUtils::STATIC_GetPhysicalSurfaceFromName(const struct FName& SurfaceName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetPhysicalSurfaceFromName"));

	UEmbarkUtils_GetPhysicalSurfaceFromName_Params params;
	params.SurfaceName = SurfaceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetParentForCDOComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  BPClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         CDOComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UEmbarkUtils::STATIC_GetParentForCDOComponent(class UClass* BPClass, class USceneComponent* CDOComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetParentForCDOComponent"));

	UEmbarkUtils_GetParentForCDOComponent_Params params;
	params.BPClass = BPClass;
	params.CDOComponent = CDOComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetOutgoingPacketLossAverage
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkUtils::STATIC_GetOutgoingPacketLossAverage(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetOutgoingPacketLossAverage"));

	UEmbarkUtils_GetOutgoingPacketLossAverage_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetObjectFromNetGUID
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            NetGUID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkUtils::STATIC_GetObjectFromNetGUID(class UObject* WorldContextObject, int NetGUID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetObjectFromNetGUID"));

	UEmbarkUtils_GetObjectFromNetGUID_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NetGUID = NetGUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetNotifyStateStartAndEndTimes
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Type                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FVector2D>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector2D> UEmbarkUtils::STATIC_GetNotifyStateStartAndEndTimes(class UAnimSequence* Seq, class UClass* Type)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetNotifyStateStartAndEndTimes"));

	UEmbarkUtils_GetNotifyStateStartAndEndTimes_Params params;
	params.Seq = Seq;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetNotifyStartAndEndTimeFromName
// (Final, Native, Static, Public)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector2D> UEmbarkUtils::STATIC_GetNotifyStartAndEndTimeFromName(class UAnimSequence* Seq, const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetNotifyStartAndEndTimeFromName"));

	UEmbarkUtils_GetNotifyStartAndEndTimeFromName_Params params;
	params.Seq = Seq;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetNetGUIDForObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkUtils::STATIC_GetNetGUIDForObject(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetNetGUIDForObject"));

	UEmbarkUtils_GetNetGUIDForObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetNameOfPhysicalSurface
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkUtils::STATIC_GetNameOfPhysicalSurface(TEnumAsByte<EPhysicalSurface> SurfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetNameOfPhysicalSurface"));

	UEmbarkUtils_GetNameOfPhysicalSurface_Params params;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetLookAtInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutLookAtInfo                  (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetLookAtInfo(class APlayerController* PlayerController, float MaxDistance, struct FHitResult* OutLookAtInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetLookAtInfo"));

	UEmbarkUtils_GetLookAtInfo_Params params;
	params.PlayerController = PlayerController;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLookAtInfo != nullptr)
		*OutLookAtInfo = params.OutLookAtInfo;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetLookAt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetLookAt(class APlayerController* PlayerController, struct FVector* OutLocation, struct FVector* OutDirection)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetLookAt"));

	UEmbarkUtils_GetLookAt_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetLogTimestampFormat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_GetLogTimestampFormat()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetLogTimestampFormat"));

	UEmbarkUtils_GetLogTimestampFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetInvalidId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkUtils::STATIC_GetInvalidId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetInvalidId"));

	UEmbarkUtils_GetInvalidId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetInheritenceList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  StartingType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TerminationType                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ClassInheritenceList           (Parm, OutParm, ZeroConstructor)

void UEmbarkUtils::STATIC_GetInheritenceList(class UClass* StartingType, class UClass* TerminationType, TArray<class UClass*>* ClassInheritenceList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetInheritenceList"));

	UEmbarkUtils_GetInheritenceList_Params params;
	params.StartingType = StartingType;
	params.TerminationType = TerminationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClassInheritenceList != nullptr)
		*ClassInheritenceList = params.ClassInheritenceList;
}


// Function EmbarkUtils.EmbarkUtils.GetIncomingPacketLossAverage
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkUtils::STATIC_GetIncomingPacketLossAverage(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetIncomingPacketLossAverage"));

	UEmbarkUtils_GetIncomingPacketLossAverage_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetEnumValueByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 EnumName                       (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkUtils::STATIC_GetEnumValueByIndex(const struct FString& EnumName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetEnumValueByIndex"));

	UEmbarkUtils_GetEnumValueByIndex_Params params;
	params.EnumName = EnumName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetEnumCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 EnumName                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkUtils::STATIC_GetEnumCount(const struct FString& EnumName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetEnumCount"));

	UEmbarkUtils_GetEnumCount_Params params;
	params.EnumName = EnumName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetConnectionJitter
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkUtils::STATIC_GetConnectionJitter(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetConnectionJitter"));

	UEmbarkUtils_GetConnectionJitter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetComponentsByClassFromCDO
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> UEmbarkUtils::STATIC_GetComponentsByClassFromCDO(class UClass* ActorClass, class UClass* ComponentClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetComponentsByClassFromCDO"));

	UEmbarkUtils_GetComponentsByClassFromCDO_Params params;
	params.ActorClass = ActorClass;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetClosestBoxActorsToWorldLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ResultCount                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistanceToCenter            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          InBoxes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          OutBoxes                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkUtils::STATIC_GetClosestBoxActorsToWorldLocation(int ResultCount, float MaxDistanceToCenter, const struct FVector& WorldLocation, TArray<class AActor*> InBoxes, TArray<class AActor*>* OutBoxes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetClosestBoxActorsToWorldLocation"));

	UEmbarkUtils_GetClosestBoxActorsToWorldLocation_Params params;
	params.ResultCount = ResultCount;
	params.MaxDistanceToCenter = MaxDistanceToCenter;
	params.WorldLocation = WorldLocation;
	params.InBoxes = InBoxes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBoxes != nullptr)
		*OutBoxes = params.OutBoxes;
}


// Function EmbarkUtils.EmbarkUtils.GetClientRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxClientRate                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxInternetClientRate          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_GetClientRate(class UWorld* World, int* MaxClientRate, int* MaxInternetClientRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetClientRate"));

	UEmbarkUtils_GetClientRate_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxClientRate != nullptr)
		*MaxClientRate = params.MaxClientRate;
	if (MaxInternetClientRate != nullptr)
		*MaxInternetClientRate = params.MaxInternetClientRate;
}


// Function EmbarkUtils.EmbarkUtils.GetClassPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ClassToGetPathFrom             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_GetClassPath(class UClass* ClassToGetPathFrom)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetClassPath"));

	UEmbarkUtils_GetClassPath_Params params;
	params.ClassToGetPathFrom = ClassToGetPathFrom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetCDOComponentsForClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> OutCDOComponents               (Parm, OutParm, ZeroConstructor)

void UEmbarkUtils::STATIC_GetCDOComponentsForClass(class UClass* ActorClass, TArray<class UActorComponent*>* OutCDOComponents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetCDOComponentsForClass"));

	UEmbarkUtils_GetCDOComponentsForClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCDOComponents != nullptr)
		*OutCDOComponents = params.OutCDOComponents;
}


// Function EmbarkUtils.EmbarkUtils.GetCDOComponentFromClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ComponentCDOClass              (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkUtils::STATIC_GetCDOComponentFromClass(class UClass* ActorClass, class UClass* ComponentCDOClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetCDOComponentFromClass"));

	UEmbarkUtils_GetCDOComponentFromClass_Params params;
	params.ActorClass = ActorClass;
	params.ComponentCDOClass = ComponentCDOClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetBuildCL
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkUtils::STATIC_GetBuildCL()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetBuildCL"));

	UEmbarkUtils_GetBuildCL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetBlueprintInheritanceList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  StartingType                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ClassInheritanceList           (Parm, OutParm, ZeroConstructor)

void UEmbarkUtils::STATIC_GetBlueprintInheritanceList(class UClass* StartingType, TArray<class UClass*>* ClassInheritanceList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetBlueprintInheritanceList"));

	UEmbarkUtils_GetBlueprintInheritanceList_Params params;
	params.StartingType = StartingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClassInheritanceList != nullptr)
		*ClassInheritanceList = params.ClassInheritanceList;
}


// Function EmbarkUtils.EmbarkUtils.GetBlueprintGeneratedClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBlueprint*              Blueprint                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEmbarkUtils::STATIC_GetBlueprintGeneratedClass(class UBlueprint* Blueprint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetBlueprintGeneratedClass"));

	UEmbarkUtils_GetBlueprintGeneratedClass_Params params;
	params.Blueprint = Blueprint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAverageFrameTime
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkUtils::STATIC_GetAverageFrameTime(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAverageFrameTime"));

	UEmbarkUtils_GetAverageFrameTime_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceModelSpaceBoneTransformFromNameAtTime
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAnimSequence*           Seq                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Out                            (Parm, OutParm, IsPlainOldData)
// bool                           bApplyAdditiveAnimation        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetAnimSequenceModelSpaceBoneTransformFromNameAtTime(class UAnimSequence* Seq, const struct FName& BoneName, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimSequenceModelSpaceBoneTransformFromNameAtTime"));

	UEmbarkUtils_GetAnimSequenceModelSpaceBoneTransformFromNameAtTime_Params params;
	params.Seq = Seq;
	params.BoneName = BoneName;
	params.Time = Time;
	params.bApplyAdditiveAnimation = bApplyAdditiveAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceModelSpaceBoneTransformFromIndexAtTime
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAnimSequence*           Seq                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            BoneIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Out                            (Parm, OutParm, IsPlainOldData)
// bool                           bApplyAdditiveAnimation        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetAnimSequenceModelSpaceBoneTransformFromIndexAtTime(class UAnimSequence* Seq, int BoneIndex, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimSequenceModelSpaceBoneTransformFromIndexAtTime"));

	UEmbarkUtils_GetAnimSequenceModelSpaceBoneTransformFromIndexAtTime_Params params;
	params.Seq = Seq;
	params.BoneIndex = BoneIndex;
	params.Time = Time;
	params.bApplyAdditiveAnimation = bApplyAdditiveAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransformFromNameAtTime
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAnimSequence*           Seq                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Out                            (Parm, OutParm, IsPlainOldData)
// bool                           bApplyAdditiveAnimation        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetAnimSequenceBoneTransformFromNameAtTime(class UAnimSequence* Seq, const struct FName& BoneName, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransformFromNameAtTime"));

	UEmbarkUtils_GetAnimSequenceBoneTransformFromNameAtTime_Params params;
	params.Seq = Seq;
	params.BoneName = BoneName;
	params.Time = Time;
	params.bApplyAdditiveAnimation = bApplyAdditiveAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransformFromIndexAtTime
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAnimSequence*           Seq                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            BoneIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Out                            (Parm, OutParm, IsPlainOldData)
// bool                           bApplyAdditiveAnimation        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetAnimSequenceBoneTransformFromIndexAtTime(class UAnimSequence* Seq, int BoneIndex, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransformFromIndexAtTime"));

	UEmbarkUtils_GetAnimSequenceBoneTransformFromIndexAtTime_Params params;
	params.Seq = Seq;
	params.BoneIndex = BoneIndex;
	params.Time = Time;
	params.bApplyAdditiveAnimation = bApplyAdditiveAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Out                            (Parm, OutParm, IsPlainOldData)

void UEmbarkUtils::STATIC_GetAnimSequenceBoneTransform(class UAnimSequence* Seq, int TrackIndex, float Time, struct FTransform* Out)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransform"));

	UEmbarkUtils_GetAnimSequenceBoneTransform_Params params;
	params.Seq = Seq;
	params.TrackIndex = TrackIndex;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveValueFromUIDAtTime
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       CurveUID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetAnimationSequenceCurveValueFromUIDAtTime(class UAnimSequence* Seq, uint16_t CurveUID, float Time, float* Out)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveValueFromUIDAtTime"));

	UEmbarkUtils_GetAnimationSequenceCurveValueFromUIDAtTime_Params params;
	params.Seq = Seq;
	params.CurveUID = CurveUID;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveValueFromNameAtTime
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetAnimationSequenceCurveValueFromNameAtTime(class UAnimSequence* Seq, const struct FName& CurveName, float Time, float* Out)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveValueFromNameAtTime"));

	UEmbarkUtils_GetAnimationSequenceCurveValueFromNameAtTime_Params params;
	params.Seq = Seq;
	params.CurveName = CurveName;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveUIDFromName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       OutUID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetAnimationSequenceCurveUIDFromName(class UAnimSequence* Seq, const struct FName& CurveName, uint16_t* OutUID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveUIDFromName"));

	UEmbarkUtils_GetAnimationSequenceCurveUIDFromName_Params params;
	params.Seq = Seq;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUID != nullptr)
		*OutUID = params.OutUID;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAllSublevelsToLoadOnClient
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  PersistentWorld                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ULevelStreaming*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ULevelStreaming*> UEmbarkUtils::STATIC_GetAllSublevelsToLoadOnClient(class UWorld* PersistentWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAllSublevelsToLoadOnClient"));

	UEmbarkUtils_GetAllSublevelsToLoadOnClient_Params params;
	params.PersistentWorld = PersistentWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAllStreamingLevelsAssetPackageNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  PersistentWorld                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UEmbarkUtils::STATIC_GetAllStreamingLevelsAssetPackageNames(class UWorld* PersistentWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAllStreamingLevelsAssetPackageNames"));

	UEmbarkUtils_GetAllStreamingLevelsAssetPackageNames_Params params;
	params.PersistentWorld = PersistentWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAllStreamingLevels
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  PersistentWorld                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ULevelStreaming*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ULevelStreaming*> UEmbarkUtils::STATIC_GetAllStreamingLevels(class UWorld* PersistentWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAllStreamingLevels"));

	UEmbarkUtils_GetAllStreamingLevels_Params params;
	params.PersistentWorld = PersistentWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAllSoftObjectPaths
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoftObjectPath> OutPaths                       (Parm, OutParm, ZeroConstructor)
// bool                           bRecursivelySearchSubObjects   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          IgnoreSubObjectsOfClass        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkUtils::STATIC_GetAllSoftObjectPaths(class UObject* Object, bool bRecursivelySearchSubObjects, TArray<class UClass*> IgnoreSubObjectsOfClass, TArray<struct FSoftObjectPath>* OutPaths)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAllSoftObjectPaths"));

	UEmbarkUtils_GetAllSoftObjectPaths_Params params;
	params.Object = Object;
	params.bRecursivelySearchSubObjects = bRecursivelySearchSubObjects;
	params.IgnoreSubObjectsOfClass = IgnoreSubObjectsOfClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPaths != nullptr)
		*OutPaths = params.OutPaths;
}


// Function EmbarkUtils.EmbarkUtils.GetAllPropertyNames
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         OutNames                       (Parm, OutParm, ZeroConstructor)
// bool                           bRecursivelyFindProperties     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyBlueprintVisible          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDotSyntaxForNestedProperties  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeEditorProperties       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_GetAllPropertyNames(class UObject* Obj, bool bRecursivelyFindProperties, bool bOnlyBlueprintVisible, bool bDotSyntaxForNestedProperties, bool bIncludeEditorProperties, TArray<struct FString>* OutNames)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAllPropertyNames"));

	UEmbarkUtils_GetAllPropertyNames_Params params;
	params.Obj = Obj;
	params.bRecursivelyFindProperties = bRecursivelyFindProperties;
	params.bOnlyBlueprintVisible = bOnlyBlueprintVisible;
	params.bDotSyntaxForNestedProperties = bDotSyntaxForNestedProperties;
	params.bIncludeEditorProperties = bIncludeEditorProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function EmbarkUtils.EmbarkUtils.GetAllLevelInstancesToLoadOnClient
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  PersistentWorld                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ALevelInstance*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ALevelInstance*> UEmbarkUtils::STATIC_GetAllLevelInstancesToLoadOnClient(class UWorld* PersistentWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAllLevelInstancesToLoadOnClient"));

	UEmbarkUtils_GetAllLevelInstancesToLoadOnClient_Params params;
	params.PersistentWorld = PersistentWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.GetAllAttachedActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          OutAttachedActors              (Parm, OutParm, ZeroConstructor)

void UEmbarkUtils::STATIC_GetAllAttachedActors(class AActor* Actor, TArray<class AActor*>* OutAttachedActors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetAllAttachedActors"));

	UEmbarkUtils_GetAllAttachedActors_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAttachedActors != nullptr)
		*OutAttachedActors = params.OutAttachedActors;
}


// Function EmbarkUtils.EmbarkUtils.GetActorRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_GetActorRelativeTransform(class USceneComponent* SceneComponent, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.GetActorRelativeTransform"));

	UEmbarkUtils_GetActorRelativeTransform_Params params;
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.ForceUpdateOverlaps
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_ForceUpdateOverlaps(class AActor* Actor, bool bNotify)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.ForceUpdateOverlaps"));

	UEmbarkUtils_ForceUpdateOverlaps_Params params;
	params.Actor = Actor;
	params.bNotify = bNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.EnumValueToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 EnumName                       (Parm, ZeroConstructor)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_EnumValueToString(const struct FString& EnumName, int64_t Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.EnumValueToString"));

	UEmbarkUtils_EnumValueToString_Params params;
	params.EnumName = EnumName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.EnumToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 EnumName                       (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_EnumToString(const struct FString& EnumName, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.EnumToString"));

	UEmbarkUtils_EnumToString_Params params;
	params.EnumName = EnumName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.EnumIndexToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 EnumName                       (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_EnumIndexToString(const struct FString& EnumName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.EnumIndexToString"));

	UEmbarkUtils_EnumIndexToString_Params params;
	params.EnumName = EnumName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.DoesPropertyExist
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_DoesPropertyExist(class UObject* Obj, const struct FString& PropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.DoesPropertyExist"));

	UEmbarkUtils_DoesPropertyExist_Params params;
	params.Obj = Obj;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.DoesFunctionExist
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_DoesFunctionExist(class UObject* Obj, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.DoesFunctionExist"));

	UEmbarkUtils_DoesFunctionExist_Params params;
	params.Obj = Obj;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.DestroyController
// (Final, Native, Static, Public)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_DestroyController(class AController* Controller)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.DestroyController"));

	UEmbarkUtils_DestroyController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.DeleteDeveloperSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 SettingsKey                    (Parm, ZeroConstructor)

void UEmbarkUtils::STATIC_DeleteDeveloperSetting(const struct FString& SectionName, const struct FString& SettingsKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.DeleteDeveloperSetting"));

	UEmbarkUtils_DeleteDeveloperSetting_Params params;
	params.SectionName = SectionName;
	params.SettingsKey = SettingsKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.DebugGetAllObjectsOfClass
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDerivedClasses         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UEmbarkUtils::STATIC_DebugGetAllObjectsOfClass(class UClass* Class, bool bIncludeDerivedClasses)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.DebugGetAllObjectsOfClass"));

	UEmbarkUtils_DebugGetAllObjectsOfClass_Params params;
	params.Class = Class;
	params.bIncludeDerivedClasses = bIncludeDerivedClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.CreateComponentOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ComponentType                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceDisableReplication       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EComponentMobility> Opt_SceneComponentMobility     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Opt_SceneComponentParent       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Opt_SceneComponentAttachSocket (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallRegisterComponent         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetNetAddressable             (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkUtils::STATIC_CreateComponentOfType(class AActor* Owner, class UClass* ComponentType, bool bForceDisableReplication, TEnumAsByte<EComponentMobility> Opt_SceneComponentMobility, class USceneComponent* Opt_SceneComponentParent, const struct FName& Opt_SceneComponentAttachSocket, bool bCallRegisterComponent, bool bSetNetAddressable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.CreateComponentOfType"));

	UEmbarkUtils_CreateComponentOfType_Params params;
	params.Owner = Owner;
	params.ComponentType = ComponentType;
	params.bForceDisableReplication = bForceDisableReplication;
	params.Opt_SceneComponentMobility = Opt_SceneComponentMobility;
	params.Opt_SceneComponentParent = Opt_SceneComponentParent;
	params.Opt_SceneComponentAttachSocket = Opt_SceneComponentAttachSocket;
	params.bCallRegisterComponent = bCallRegisterComponent;
	params.bSetNetAddressable = bSetNetAddressable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.CopyProperty
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 FromObj                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FromPropertyName               (Parm, ZeroConstructor)
// class UObject*                 ToObj                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ToPropertyName                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_CopyProperty(class UObject* FromObj, const struct FString& FromPropertyName, class UObject* ToObj, const struct FString& ToPropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.CopyProperty"));

	UEmbarkUtils_CopyProperty_Params params;
	params.FromObj = FromObj;
	params.FromPropertyName = FromPropertyName;
	params.ToObj = ToObj;
	params.ToPropertyName = ToPropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.CopyPropertiesBetweenObjects
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 FromObj                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ToObj                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_CopyPropertiesBetweenObjects(class UObject* FromObj, class UObject* ToObj)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.CopyPropertiesBetweenObjects"));

	UEmbarkUtils_CopyPropertiesBetweenObjects_Params params;
	params.FromObj = FromObj;
	params.ToObj = ToObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.CopyCollisionResponses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     From                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     To                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkUtils::STATIC_CopyCollisionResponses(class UPrimitiveComponent* From, class UPrimitiveComponent* To)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.CopyCollisionResponses"));

	UEmbarkUtils_CopyCollisionResponses_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.Conv_StringToVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InString                       (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkUtils::STATIC_Conv_StringToVector(const struct FString& InString)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.Conv_StringToVector"));

	UEmbarkUtils_Conv_StringToVector_Params params;
	params.InString = InString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.ClearAllTimersForObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_ClearAllTimersForObject(class UObject* WorldContextObject, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.ClearAllTimersForObject"));

	UEmbarkUtils_ClearAllTimersForObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.CapsuleOverlapByChannel
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CapsulePos                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (ConstParm, Parm, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FOverlapResult>  OutOverlaps                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_CapsuleOverlapByChannel(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, const struct FQuat& Rotation, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> ActorsToIgnore, TArray<struct FOverlapResult>* OutOverlaps)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.CapsuleOverlapByChannel"));

	UEmbarkUtils_CapsuleOverlapByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CapsulePos = CapsulePos;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.CollisionChannel = CollisionChannel;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlaps != nullptr)
		*OutOverlaps = params.OutOverlaps;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.CalculateFullCDOExtent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Opt_DebugActor                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_CalculateFullCDOExtent(class UClass* ActorClass, class AActor* Opt_DebugActor, struct FBox* OutExtent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.CalculateFullCDOExtent"));

	UEmbarkUtils_CalculateFullCDOExtent_Params params;
	params.ActorClass = ActorClass;
	params.Opt_DebugActor = Opt_DebugActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutExtent != nullptr)
		*OutExtent = params.OutExtent;
}


// Function EmbarkUtils.EmbarkUtils.BindOnReceiveEmbarkPlayerController
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkUtils::STATIC_BindOnReceiveEmbarkPlayerController(class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.BindOnReceiveEmbarkPlayerController"));

	UEmbarkUtils_BindOnReceiveEmbarkPlayerController_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUtils.EmbarkUtils.AutoplayGameMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkUtils::STATIC_AutoplayGameMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.AutoplayGameMode"));

	UEmbarkUtils_AutoplayGameMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.AreObjectPropertiesIdenticalWithProperties
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectA                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectB                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           OutDifferingProperties         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_AreObjectPropertiesIdenticalWithProperties(class UObject* ObjectA, class UObject* ObjectB, TArray<struct FName>* OutDifferingProperties)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.AreObjectPropertiesIdenticalWithProperties"));

	UEmbarkUtils_AreObjectPropertiesIdenticalWithProperties_Params params;
	params.ObjectA = ObjectA;
	params.ObjectB = ObjectB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDifferingProperties != nullptr)
		*OutDifferingProperties = params.OutDifferingProperties;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.AreObjectPropertiesIdentical
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectA                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectB                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_AreObjectPropertiesIdentical(class UObject* ObjectA, class UObject* ObjectB)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.AreObjectPropertiesIdentical"));

	UEmbarkUtils_AreObjectPropertiesIdentical_Params params;
	params.ObjectA = ObjectA;
	params.ObjectB = ObjectB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.AnimSequenceGetTrackIndex
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoneIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_AnimSequenceGetTrackIndex(class UAnimSequence* Seq, int BoneIndex, int* TrackIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.AnimSequenceGetTrackIndex"));

	UEmbarkUtils_AnimSequenceGetTrackIndex_Params params;
	params.Seq = Seq;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrackIndex != nullptr)
		*TrackIndex = params.TrackIndex;

	return params.ReturnValue;
}


// Function EmbarkUtils.EmbarkUtils.AnimSequenceGetBoneIndex
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           Seq                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoneIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkUtils::STATIC_AnimSequenceGetBoneIndex(class UAnimSequence* Seq, const struct FName& BoneName, int* BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtils.EmbarkUtils.AnimSequenceGetBoneIndex"));

	UEmbarkUtils_AnimSequenceGetBoneIndex_Params params;
	params.Seq = Seq;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneIndex != nullptr)
		*BoneIndex = params.BoneIndex;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
