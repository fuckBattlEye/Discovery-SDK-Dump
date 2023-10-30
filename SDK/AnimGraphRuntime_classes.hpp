#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AnimGraphRuntime.BoneWeightsBlendArrayAssetBase
// 0x0000 (0x0030 - 0x0030)
class UBoneWeightsBlendArrayAssetBase : public UPrimaryDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.BoneWeightsBlendArrayAssetBase"));
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimationStateMachineLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.AnimationStateMachineLibrary"));
		return ptr;
	}


	bool STATIC_IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);//Offset:Discovery.exe+0x48EB950
	bool STATIC_IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);//Offset:Discovery.exe+0x48EBA70
	void STATIC_ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, bool* Result);//Offset:Discovery.exe+0x48EBB90
	void STATIC_ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, enum class EAnimNodeReferenceConversionResult* Result);//Offset:Discovery.exe+0x48EBD30
};


// Class AnimGraphRuntime.AnimExecutionContextLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.AnimExecutionContextLibrary"));
		return ptr;
	}


	float STATIC_GetDeltaTime(const struct FAnimUpdateContext& Context);//Offset:Discovery.exe+0x48EC620
	float STATIC_GetCurrentWeight(const struct FAnimUpdateContext& Context);//Offset:Discovery.exe+0x48EC560
	struct FAnimNodeReference STATIC_GetAnimNodeReference(class UAnimInstance* Instance, int Index);//Offset:Discovery.exe+0x48EC9C0
	class UAnimInstance* STATIC_GetAnimInstance(const struct FAnimExecutionContext& Context);//Offset:Discovery.exe+0x48ECAB0
	struct FAnimUpdateContext STATIC_ConvertToUpdateContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);//Offset:Discovery.exe+0x48EC6E0
	struct FAnimPoseContext STATIC_ConvertToPoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);//Offset:Discovery.exe+0x48EC3F0
	struct FAnimInitializationContext STATIC_ConvertToInitializationContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);//Offset:Discovery.exe+0x48EC850
	struct FAnimComponentSpacePoseContext STATIC_ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);//Offset:Discovery.exe+0x48EC280
};


// Class AnimGraphRuntime.BoneWeightsAsset
// 0x00C8 (0x00F8 - 0x0030)
class UBoneWeightsAsset : public UDataAsset
{
public:
	class USkeleton*                                   Skeleton;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultWeight;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          BoneWeights;                                              // 0x0040(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	TMap<struct FName, bool>                           BonesWithExplicitlySetWeights;                            // 0x00A8(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.BoneWeightsAsset"));
		return ptr;
	}


	void OnTargetSkeletonHierarchyChanged();//Offset:Discovery.exe+0x48F0ED0
};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify"));
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow"));
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0010 (0x0360 - 0x0350)
class UAnimSequencerInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.AnimSequencerInstance"));
		return ptr;
	}

};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.KismetAnimationLibrary"));
		return ptr;
	}


	void STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos);//Offset:Discovery.exe+0x48FEC10
	void STATIC_K2_StartProfilingTimer();//Offset:Discovery.exe+0x48FD740
	struct FVector STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);//Offset:Discovery.exe+0x48FE060
	float STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);//Offset:Discovery.exe+0x48FDF30
	struct FTransform STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);//Offset:Discovery.exe+0x48FE8E0
	float STATIC_K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix);//Offset:Discovery.exe+0x48FD640
	float STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);//Offset:Discovery.exe+0x48FE560
	struct FVector STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo);//Offset:Discovery.exe+0x48FE420
	float STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, int NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve, struct FPositionHistory* History);//Offset:Discovery.exe+0x48FD760
	float STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, int NumberOfSamples, float VelocityMin, float VelocityMax, struct FPositionHistory* History);//Offset:Discovery.exe+0x48FDC90
	float STATIC_CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);//Offset:Discovery.exe+0x48FD550
};


// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// 0x0000 (0x0028 - 0x0028)
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.LinkedAnimGraphLibrary"));
		return ptr;
	}


	bool STATIC_HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node);//Offset:Discovery.exe+0x48FF980
	class UAnimInstance* STATIC_GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node);//Offset:Discovery.exe+0x48FF8D0
	void STATIC_ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result);//Offset:Discovery.exe+0x48FFA20
	struct FLinkedAnimGraphReference STATIC_ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);//Offset:Discovery.exe+0x48FFBF0
};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.PlayMontageCallbackProxy"));
		return ptr;
	}


	void OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);//Offset:Discovery.exe+0x4900140
	void OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);//Offset:Discovery.exe+0x4900240
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);//Offset:Discovery.exe+0x4900340
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);//Offset:Discovery.exe+0x4900430
	class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);//Offset:Discovery.exe+0x4900520
};


// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// 0x0000 (0x0028 - 0x0028)
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.SequenceEvaluatorLibrary"));
		return ptr;
	}


	struct FSequenceEvaluatorReference STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime);//Offset:Discovery.exe+0x49010C0
	struct FSequenceEvaluatorReference STATIC_SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence);//Offset:Discovery.exe+0x4901290
	struct FSequenceEvaluatorReference STATIC_SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time);//Offset:Discovery.exe+0x4901510
	class UAnimSequenceBase* STATIC_GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator);//Offset:Discovery.exe+0x4900F60
	float STATIC_GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator);//Offset:Discovery.exe+0x4901010
	void STATIC_ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result);//Offset:Discovery.exe+0x4901610
	struct FSequenceEvaluatorReference STATIC_ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);//Offset:Discovery.exe+0x49017E0
	struct FSequenceEvaluatorReference STATIC_AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate);//Offset:Discovery.exe+0x4901390
};


// Class AnimGraphRuntime.SequencePlayerLibrary
// 0x0000 (0x0028 - 0x0028)
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.SequencePlayerLibrary"));
		return ptr;
	}


	struct FSequencePlayerReference STATIC_SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition);//Offset:Discovery.exe+0x49027D0
	struct FSequencePlayerReference STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime);//Offset:Discovery.exe+0x4902400
	struct FSequencePlayerReference STATIC_SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence);//Offset:Discovery.exe+0x49025D0
	struct FSequencePlayerReference STATIC_SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate);//Offset:Discovery.exe+0x49026D0
	struct FSequencePlayerReference STATIC_SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time);//Offset:Discovery.exe+0x49028D0
	float STATIC_GetStartPosition(const struct FSequencePlayerReference& SequencePlayer);//Offset:Discovery.exe+0x49020E0
	class UAnimSequenceBase* STATIC_GetSequencePure(const struct FSequencePlayerReference& SequencePlayer);//Offset:Discovery.exe+0x4902240
	struct FSequencePlayerReference STATIC_GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase);//Offset:Discovery.exe+0x49022F0
	float STATIC_GetPlayRate(const struct FSequencePlayerReference& SequencePlayer);//Offset:Discovery.exe+0x4902030
	bool STATIC_GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer);//Offset:Discovery.exe+0x4901F90
	float STATIC_GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer);//Offset:Discovery.exe+0x4902190
	void STATIC_ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, struct FSequencePlayerReference* SequencePlayer, bool* Result);//Offset:Discovery.exe+0x49029D0
	struct FSequencePlayerReference STATIC_ConvertToSequencePlayer(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);//Offset:Discovery.exe+0x4902BA0
};


// Class AnimGraphRuntime.SequencerAnimationSupport
// 0x0000 (0x0028 - 0x0028)
class USequencerAnimationSupport : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.SequencerAnimationSupport"));
		return ptr;
	}

};


// Class AnimGraphRuntime.SkeletalControlLibrary
// 0x0000 (0x0028 - 0x0028)
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimGraphRuntime.SkeletalControlLibrary"));
		return ptr;
	}


	struct FSkeletalControlReference STATIC_SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha);//Offset:Discovery.exe+0x4904460
	float STATIC_GetAlpha(const struct FSkeletalControlReference& SkeletalControl);//Offset:Discovery.exe+0x49043B0
	void STATIC_ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl, bool* Result);//Offset:Discovery.exe+0x4904560
	struct FSkeletalControlReference STATIC_ConvertToSkeletalControl(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);//Offset:Discovery.exe+0x4904730
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
