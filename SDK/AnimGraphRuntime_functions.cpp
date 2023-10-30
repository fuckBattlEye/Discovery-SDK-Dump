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

// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext      UpdateContext                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAnimationStateResultReference Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationStateMachineLibrary::STATIC_IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut"));

	UAnimationStateMachineLibrary_IsStateBlendingOut_Params params;
	params.UpdateContext = UpdateContext;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext      UpdateContext                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAnimationStateResultReference Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationStateMachineLibrary::STATIC_IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn"));

	UAnimationStateMachineLibrary_IsStateBlendingIn_Params params;
	params.UpdateContext = UpdateContext;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAnimationStateResultReference AnimationState                 (Parm, OutParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, bool* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure"));

	UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationState != nullptr)
		*AnimationState = params.AnimationState;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAnimationStateResultReference AnimationState                 (Parm, OutParm)
// enum class EAnimNodeReferenceConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, enum class EAnimNodeReferenceConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult"));

	UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationState != nullptr)
		*AnimationState = params.AnimationState;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext      Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimExecutionContextLibrary::STATIC_GetDeltaTime(const struct FAnimUpdateContext& Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime"));

	UAnimExecutionContextLibrary_GetDeltaTime_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext      Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimExecutionContextLibrary::STATIC_GetCurrentWeight(const struct FAnimUpdateContext& Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight"));

	UAnimExecutionContextLibrary_GetCurrentWeight_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*           Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimNodeReference      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnimNodeReference UAnimExecutionContextLibrary::STATIC_GetAnimNodeReference(class UAnimInstance* Instance, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference"));

	UAnimExecutionContextLibrary_GetAnimNodeReference_Params params;
	params.Instance = Instance;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimExecutionContext   Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimExecutionContextLibrary::STATIC_GetAnimInstance(const struct FAnimExecutionContext& Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance"));

	UAnimExecutionContextLibrary_GetAnimInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext   Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimExecutionContextConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FAnimUpdateContext      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnimUpdateContext UAnimExecutionContextLibrary::STATIC_ConvertToUpdateContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext"));

	UAnimExecutionContextLibrary_ConvertToUpdateContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext   Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimExecutionContextConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FAnimPoseContext        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnimPoseContext UAnimExecutionContextLibrary::STATIC_ConvertToPoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext"));

	UAnimExecutionContextLibrary_ConvertToPoseContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext   Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimExecutionContextConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FAnimInitializationContext ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnimInitializationContext UAnimExecutionContextLibrary::STATIC_ConvertToInitializationContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext"));

	UAnimExecutionContextLibrary_ConvertToInitializationContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext   Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimExecutionContextConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FAnimComponentSpacePoseContext ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::STATIC_ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext"));

	UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.BoneWeightsAsset.OnTargetSkeletonHierarchyChanged
// (Final, Native, Public)

void UBoneWeightsAsset::OnTargetSkeletonHierarchyChanged()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.BoneWeightsAsset.OnTargetSkeletonHierarchyChanged"));

	UBoneWeightsAsset_OnTargetSkeletonHierarchyChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 RootPos                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 JointPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 EndPos                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 JointTarget                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Effector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutJointPos                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutEndPos                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartStretchRatio              (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxStretchScale                (Parm, ZeroConstructor, IsPlainOldData)

void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK"));

	UKismetAnimationLibrary_K2_TwoBoneIK_Params params;
	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)

void UKismetAnimationLibrary::STATIC_K2_StartProfilingTimer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer"));

	UKismetAnimationLibrary_K2_StartProfilingTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMinX                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMaxX                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMinY                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMaxY                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMinZ                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMaxZ                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap"));

	UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.RangeOutMinX = RangeOutMinX;
	params.RangeOutMaxX = RangeOutMaxX;
	params.RangeOutMinY = RangeOutMinY;
	params.RangeOutMaxY = RangeOutMaxY;
	params.RangeOutMinZ = RangeOutMinZ;
	params.RangeOutMaxZ = RangeOutMaxZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap"));

	UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params;
	params.Value = Value;
	params.RangeOutMin = RangeOutMin;
	params.RangeOutMax = RangeOutMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              CurrentTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LookAtVector                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseUpVector                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpVector                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClampConeInDegree              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UKismetAnimationLibrary::STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt"));

	UKismetAnimationLibrary_K2_LookAt_Params params;
	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.UpVector = UpVector;
	params.ClampConeInDegree = ClampConeInDegree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bLog                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LogPrefix                      (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKismetAnimationLibrary::STATIC_K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer"));

	UKismetAnimationLibrary_K2_EndProfilingTimer_Params params;
	params.bLog = bLog;
	params.LogPrefix = LogPrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketOrBoneNameA              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpaceA                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketOrBoneNameB              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpaceB                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRemapRange                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeMin                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeMax                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRangeMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRangeMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKismetAnimationLibrary::STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange"));

	UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params;
	params.Component = Component;
	params.SocketOrBoneNameA = SocketOrBoneNameA;
	params.SocketSpaceA = SocketSpaceA;
	params.SocketOrBoneNameB = SocketOrBoneNameB;
	params.SocketSpaceB = SocketSpaceB;
	params.bRemapRange = bRemapRange;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;
	params.OutRangeMin = OutRangeMin;
	params.OutRangeMax = OutRangeMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketOrBoneNameFrom           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketOrBoneNameTo             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UKismetAnimationLibrary::STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets"));

	UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params;
	params.Component = Component;
	params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	params.SocketOrBoneNameTo = SocketOrBoneNameTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketOrBoneName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReferenceSocketOrBone          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetInBoneSpace              (Parm, ZeroConstructor, IsPlainOldData)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEasingFuncType     EasingType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeFloatCurve      CustomCurve                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, int NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve, struct FPositionHistory* History)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets"));

	UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Component = Component;
	params.SocketOrBoneName = SocketOrBoneName;
	params.ReferenceSocketOrBone = ReferenceSocketOrBone;
	params.SocketSpace = SocketSpace;
	params.OffsetInBoneSpace = OffsetInBoneSpace;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;
	params.EasingType = EasingType;
	params.CustomCurve = CustomCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, int NumberOfSamples, float VelocityMin, float VelocityMax, struct FPositionHistory* History)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory"));

	UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Position = Position;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                BaseRotation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKismetAnimationLibrary::STATIC_CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection"));

	UKismetAnimationLibrary_CalculateDirection_Params params;
	params.Velocity = Velocity;
	params.BaseRotation = BaseRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkedAnimGraphLibrary::STATIC_HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance"));

	ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* ULinkedAnimGraphLibrary::STATIC_GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance"));

	ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkedAnimGraphReference LinkedAnimGraph                (Parm, OutParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULinkedAnimGraphLibrary::STATIC_ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure"));

	ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinkedAnimGraph != nullptr)
		*LinkedAnimGraph = params.LinkedAnimGraph;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimNodeReferenceConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinkedAnimGraphReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::STATIC_ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph"));

	ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived"));

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived"));

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded"));

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut"));

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartingPosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartingSection                (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage"));

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext      UpdateContext                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequenceEvaluatorReference SequenceEvaluator              (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase*       Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequenceEvaluatorReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending"));

	USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params params;
	params.UpdateContext = UpdateContext;
	params.SequenceEvaluator = SequenceEvaluator;
	params.Sequence = Sequence;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator              (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase*       Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequenceEvaluatorReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence"));

	USequenceEvaluatorLibrary_SetSequence_Params params;
	params.SequenceEvaluator = SequenceEvaluator;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequenceEvaluatorReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime"));

	USequenceEvaluatorLibrary_SetExplicitTime_Params params;
	params.SequenceEvaluator = SequenceEvaluator;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator              (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequenceBase* USequenceEvaluatorLibrary::STATIC_GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence"));

	USequenceEvaluatorLibrary_GetSequence_Params params;
	params.SequenceEvaluator = SequenceEvaluator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USequenceEvaluatorLibrary::STATIC_GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime"));

	USequenceEvaluatorLibrary_GetAccumulatedTime_Params params;
	params.SequenceEvaluator = SequenceEvaluator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequenceEvaluatorReference SequenceEvaluator              (Parm, OutParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USequenceEvaluatorLibrary::STATIC_ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure"));

	USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SequenceEvaluator != nullptr)
		*SequenceEvaluator = params.SequenceEvaluator;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimNodeReferenceConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSequenceEvaluatorReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator"));

	USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext      UpdateContext                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequenceEvaluatorReference SequenceEvaluator              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequenceEvaluatorReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime"));

	USequenceEvaluatorLibrary_AdvanceTime_Params params;
	params.UpdateContext = UpdateContext;
	params.SequenceEvaluator = SequenceEvaluator;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          StartPosition                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencePlayerReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition"));

	USequencePlayerLibrary_SetStartPosition_Params params;
	params.SequencePlayer = SequencePlayer;
	params.StartPosition = StartPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext      UpdateContext                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase*       Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencePlayerReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending"));

	USequencePlayerLibrary_SetSequenceWithInertialBlending_Params params;
	params.UpdateContext = UpdateContext;
	params.SequencePlayer = SequencePlayer;
	params.Sequence = Sequence;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase*       Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencePlayerReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence"));

	USequencePlayerLibrary_SetSequence_Params params;
	params.SequencePlayer = SequencePlayer;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencePlayerReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate"));

	USequencePlayerLibrary_SetPlayRate_Params params;
	params.SequencePlayer = SequencePlayer;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencePlayerReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime"));

	USequencePlayerLibrary_SetAccumulatedTime_Params params;
	params.SequencePlayer = SequencePlayer;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USequencePlayerLibrary::STATIC_GetStartPosition(const struct FSequencePlayerReference& SequencePlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition"));

	USequencePlayerLibrary_GetStartPosition_Params params;
	params.SequencePlayer = SequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequenceBase* USequencePlayerLibrary::STATIC_GetSequencePure(const struct FSequencePlayerReference& SequencePlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure"));

	USequencePlayerLibrary_GetSequencePure_Params params;
	params.SequencePlayer = SequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase*       SequenceBase                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSequencePlayerReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencePlayerReference USequencePlayerLibrary::STATIC_GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence"));

	USequencePlayerLibrary_GetSequence_Params params;
	params.SequencePlayer = SequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SequenceBase != nullptr)
		*SequenceBase = params.SequenceBase;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USequencePlayerLibrary::STATIC_GetPlayRate(const struct FSequencePlayerReference& SequencePlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate"));

	USequencePlayerLibrary_GetPlayRate_Params params;
	params.SequencePlayer = SequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USequencePlayerLibrary::STATIC_GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation"));

	USequencePlayerLibrary_GetLoopAnimation_Params params;
	params.SequencePlayer = SequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference SequencePlayer                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USequencePlayerLibrary::STATIC_GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime"));

	USequencePlayerLibrary_GetAccumulatedTime_Params params;
	params.SequencePlayer = SequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequencePlayerReference SequencePlayer                 (Parm, OutParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USequencePlayerLibrary::STATIC_ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, struct FSequencePlayerReference* SequencePlayer, bool* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure"));

	USequencePlayerLibrary_ConvertToSequencePlayerPure_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SequencePlayer != nullptr)
		*SequencePlayer = params.SequencePlayer;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimNodeReferenceConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSequencePlayerReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencePlayerReference USequencePlayerLibrary::STATIC_ConvertToSequencePlayer(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer"));

	USequencePlayerLibrary_ConvertToSequencePlayer_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSkeletalControlReference SkeletalControl                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSkeletalControlReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSkeletalControlReference USkeletalControlLibrary::STATIC_SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha"));

	USkeletalControlLibrary_SetAlpha_Params params;
	params.SkeletalControl = SkeletalControl;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSkeletalControlReference SkeletalControl                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USkeletalControlLibrary::STATIC_GetAlpha(const struct FSkeletalControlReference& SkeletalControl)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha"));

	USkeletalControlLibrary_GetAlpha_Params params;
	params.SkeletalControl = SkeletalControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSkeletalControlReference SkeletalControl                (Parm, OutParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkeletalControlLibrary::STATIC_ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl, bool* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure"));

	USkeletalControlLibrary_ConvertToSkeletalControlPure_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalControl != nullptr)
		*SkeletalControl = params.SkeletalControl;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference      Node                           (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAnimNodeReferenceConversionResult Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSkeletalControlReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSkeletalControlReference USkeletalControlLibrary::STATIC_ConvertToSkeletalControl(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl"));

	USkeletalControlLibrary_ConvertToSkeletalControl_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
