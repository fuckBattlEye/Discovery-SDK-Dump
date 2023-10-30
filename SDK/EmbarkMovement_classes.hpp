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

// Class EmbarkMovement.EmbarkCharacterMovementComponentBase
// 0x0030 (0x0F30 - 0x0F00)
class UEmbarkCharacterMovementComponentBase : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0F00(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkCharacterMovementComponentBase"));
		return ptr;
	}


	void SetOverrideCapsuleSize(bool bOverrideCapsuleRadius, float NewRadiusOverride, bool bOverrideCapsuleHeight, float NewHeightOverride);//Offset:Discovery.exe+0x1D09A60
	float GetCapsuleRadiusOverride();//Offset:Discovery.exe+0x1D09A10
	float GetCapsuleHeightOverride();//Offset:Discovery.exe+0x1D099C0
};


// Class EmbarkMovement.EmbarkCharacterMovementComponent
// 0x06C0 (0x15F0 - 0x0F30)
class UEmbarkCharacterMovementComponent : public UEmbarkCharacterMovementComponentBase
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0F30(0x02D0) MISSED OFFSET
	bool                                               bOwnerOrientMeshToLookAtYaw;                              // 0x1200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1201(0x0007) MISSED OFFSET
	struct FReplicatedTransform                        ReplicatedTransform;                                      // 0x1208(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	unsigned char                                      ReplicatedServerProcessedLatestInputFrame;                // 0x1270(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FEmbarkCustomMovementFlags                  CustomMovementFlags;                                      // 0x1271(0x0001) (BlueprintVisible, Net)
	unsigned char                                      UnknownData02[0xE];                                       // 0x1272(0x000E) MISSED OFFSET
	float                                              RootMotionEvalServerTime;                                 // 0x1280(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RootMotionEvalServerTime_ClientInterpData;                // 0x1284(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD8];                                      // 0x1288(0x00D8) MISSED OFFSET
	struct FEmbarkRootWarpSpace                        RootWarpSpace;                                            // 0x1360(0x0140) (Net)
	unsigned char                                      UnknownData04[0x150];                                     // 0x14A0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkCharacterMovementComponent"));
		return ptr;
	}


	void OnRep_ReplicatedTransform();//Offset:Discovery.exe+0x1D08C60
	bool IsCheatFlying();//Offset:Discovery.exe+0x1D08FA0
	struct FEmbarkRootWarpSpace GetRootWarpSpace();//Offset:Discovery.exe+0x1D08DD0
	struct FEmbarkRootMotionInputScale GetRootMotionInputScale();//Offset:Discovery.exe+0x1D08EE0
	struct FEmbarkCharacterMovementBaseState GetReplicatedBaseState();//Offset:Discovery.exe+0x1D08D20
	struct FEmbarkCharacterMovementBaseState GetMutableReplicatedBaseState();//Offset:Discovery.exe+0x1D08CB0
	struct FVector GetGroundNormal();//Offset:Discovery.exe+0x1D08F30
	class UEmbarkCharacterMovementStateInterpolatorDataBase* GetEmbarkCharacterMovementStateInterpData();//Offset:Discovery.exe+0x1D08C80
	void ClearRootMotionSources();//Offset:Discovery.exe+0x1D08F70
};


// Class EmbarkMovement.EmbarkCharacterMovementGlobalActorBase
// 0x0008 (0x02D8 - 0x02D0)
class AEmbarkCharacterMovementGlobalActorBase : public AEmbarkGlobalActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkCharacterMovementGlobalActorBase"));
		return ptr;
	}


	void UpdateDynamicMovementParams(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x1D0A2E0
	void GenerateStaticMovementParams(class ACharacter* Character, const struct FVector& InputVector, bool bWantsToJump, bool bWantsToCrouch, float OverrideDeltaSeconds, struct FEmbarkMovementParamsStatic* OutResult);//Offset:Discovery.exe+0x1D0AA00
	struct FEmbarkMovementParamsDynamic GenerateDynamicMovementParams(const struct FEmbarkMovementParamsStatic& Statics, const struct FEmbarkCharacterMovementBaseState& BaseState);//Offset:Discovery.exe+0x1D0A6C0
	void BlueprintModifyInputVector(class ACharacter* Character, struct FVector* CurrentInputVector);//Offset:Discovery.exe+0x327F8B0
	float BlueprintGetMaxSpeedModifier(class ACharacter* Character);//Offset:Discovery.exe+0x327F8B0
	float BlueprintGetMaxSpeed(const struct FEmbarkMovementParamsStatic& Statics, const struct FEmbarkMovementParamsDynamic& Dynamics);//Offset:Discovery.exe+0x1D09F00
	float BlueprintGetGravityScaleModifier(class ACharacter* Character);//Offset:Discovery.exe+0x327F8B0
	float BlueprintGetAirControlModifier(class ACharacter* Character);//Offset:Discovery.exe+0x327F8B0
	void BlueprintGenerateStaticMovementParams(class ACharacter* Character, struct FEmbarkMovementParamsStatic* OutStatics);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkMovement.EmbarkPawnMovementComponent
// 0x0068 (0x01D0 - 0x0168)
class UEmbarkPawnMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	int                                                AvoidanceUID;                                             // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceRadius;                                          // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceHalfHeight;                                      // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x018C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0190(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x0194(0x0001) (Transient)
	unsigned char                                      UnknownData02[0x3B];                                      // 0x0195(0x003B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkPawnMovementComponent"));
		return ptr;
	}


	void SetAvoidanceEnabled(bool bEnable);//Offset:Discovery.exe+0x1D0DA40
	struct FVector GetAvoidanceVelocity();//Offset:Discovery.exe+0x1D0D9E0
};


// Class EmbarkMovement.EmbarkAimRotationInheritanceComponent
// 0x0010 (0x00C8 - 0x00B8)
class UEmbarkAimRotationInheritanceComponent : public UActorComponent
{
public:
	bool                                               bInheritPitch;                                            // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInheritYaw;                                              // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampPitch;                                              // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampYaw;                                                // 0x00BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchDelta;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawDelta;                                              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkAimRotationInheritanceComponent"));
		return ptr;
	}

};


// Class EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkMovementBlockedFloorsContainerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsFloorBlocked(const struct FEmbarkMovementBlockedFloorsContainer& Container, class AActor* InBlockedFloorActor);//Offset:Discovery.exe+0x1D06C60
	void STATIC_FillBlockedFloors(const struct FEmbarkMovementBlockedFloorsContainer& Container, TArray<class AActor*>* InOutBlockedFloorActors);//Offset:Discovery.exe+0x1D06F80
	void STATIC_AddBlockedFloor(class AActor* InBlockedFloorActor, struct FEmbarkMovementBlockedFloorsContainer* Container);//Offset:Discovery.exe+0x1D06E20
};


// Class EmbarkMovement.EmbarkMovementParamsDynamicMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkMovementParamsDynamicMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkMovementParamsDynamicMixinLibrary"));
		return ptr;
	}


	float STATIC_GetCapsuleHalfHeight(const struct FEmbarkMovementParamsDynamic& Dynamics, const struct FEmbarkMovementParamsStatic& Statics);//Offset:Discovery.exe+0x1D076F0
};


// Class EmbarkMovement.EmbarkMovementFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkMovementFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkMovementFunctionLibrary"));
		return ptr;
	}


	void STATIC_CalcVelocity(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x1D07D50
};


// Class EmbarkMovement.EmbarkCharacterMovementStaticCallerBase
// 0x0000 (0x0028 - 0x0028)
class UEmbarkCharacterMovementStaticCallerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkCharacterMovementStaticCallerBase"));
		return ptr;
	}


	float ReceiveGetUnCrouchHeightAdjustment(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkMovement.EmbarkCharacterMovementSettings
// 0x0040 (0x00F8 - 0x00B8)
class UEmbarkCharacterMovementSettings : public UActorComponent
{
public:
	float                                              MaxWalkingAcceleration;                                   // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkingAccelerationForward;                            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkingAccelerationSideways;                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkingAccelerationBackwards;                          // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDirectionalWalkingAccelerationModel;               // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              MaxFallingAcceleration;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallingSpeedHorizontal;                                // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHorizontalDragCoefficient;                         // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHorizontalDragThresholdSpeed;                      // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingAcceleration;                                    // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaConsumptionPerJump;                            // 0x00E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaGainSpeed;                                     // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaHorizontalVelMinScale;                         // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpCoyoteTimeThreshold;                                  // 0x00EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinJumpStaminaZVelocity;                                  // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkCharacterMovementSettings"));
		return ptr;
	}

};


// Class EmbarkMovement.EmbarkCharacterMovementStateInterpolatorDataBase
// 0x0178 (0x01A0 - 0x0028)
class UEmbarkCharacterMovementStateInterpolatorDataBase : public UObject
{
public:
	struct FVector                                     CharacterMovementVelocity;                                // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	struct FEmbarkRootWarpSpace                        RootWarpSpace;                                            // 0x0050(0x0140) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              RootMotionEvalServerTime;                                 // 0x0190(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0194(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkCharacterMovementStateInterpolatorDataBase"));
		return ptr;
	}

};


// Class EmbarkMovement.EmbarkCharacterMovementStateInterpolatorBase
// 0x0000 (0x02D0 - 0x02D0)
class UEmbarkCharacterMovementStateInterpolatorBase : public UBPObjectInterpolator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkCharacterMovementStateInterpolatorBase"));
		return ptr;
	}

};


// Class EmbarkMovement.MockEmbarkCharacterMovementStateInterpolatorBase
// 0x0000 (0x02D0 - 0x02D0)
class UMockEmbarkCharacterMovementStateInterpolatorBase : public UEmbarkCharacterMovementStateInterpolatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.MockEmbarkCharacterMovementStateInterpolatorBase"));
		return ptr;
	}

};


// Class EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkRootWarpSpaceMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary"));
		return ptr;
	}


	void STATIC_UpdateTransforms(struct FEmbarkRootWarpSpace* RootwarpSpaceTransformData, struct FTransform* OutStartTransform, struct FTransform* OutEndTransform);//Offset:Discovery.exe+0x1D0E340
	class USceneComponent* STATIC_GetAttachedToComponent(const struct FEmbarkRootWarpSpace& RootwarpSpaceTransformData);//Offset:Discovery.exe+0x1D0E190
	struct FName STATIC_GetAttachedToBone(const struct FEmbarkRootWarpSpace& RootwarpSpaceTransformData);//Offset:Discovery.exe+0x1D0DFD0
};


// Class EmbarkMovement.EmbarkServersideReplicatedInputScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkServersideReplicatedInputScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkServersideReplicatedInputScriptMixinLibrary"));
		return ptr;
	}


	bool STATIC_GetBool(const struct FEmbarkServersideReplicatedInput& Input, const struct FName& InputName);//Offset:Discovery.exe+0x1D0EA70
};


// Class EmbarkMovement.EmbarkServersideInputReplicationComponent
// 0x03F8 (0x04B0 - 0x00B8)
class UEmbarkServersideInputReplicationComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPreInputCreationClientEvent;                            // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreInputCreationClientEvent_Synchronized;               // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	enum class ERotatorQuantization                    InputQuantizationLevel;                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSyncronizedInputModel;                                   // 0x00D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	int                                                SyncronizedInputServerBufferSize;                         // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReapplyInputMaxTime;                                      // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEmbarkMoveModifiers                        MoveModifier;                                             // 0x00E4(0x0008) (BlueprintVisible)
	struct FEmbarkMoveOverrides                        MoveOverride;                                             // 0x00EC(0x0008) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x00F4(0x004C) MISSED OFFSET
	class APlayerController*                           OwningController;                                         // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x198];                                     // 0x0148(0x0198) MISSED OFFSET
	class UDirectReplicationWrapperComponent*          DirectReplicationWrapperComp;                             // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x02E8(0x0014) MISSED OFFSET
	float                                              InputSyncInterval;                                        // 0x02FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1B0];                                     // 0x0300(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkServersideInputReplicationComponent"));
		return ptr;
	}


	void StopInputGeneration();//Offset:Discovery.exe+0x1D0F100
	void StartInputGeneration();//Offset:Discovery.exe+0x1D0F130
	void ServerInputProcessingCanBeStarted();//Offset:Discovery.exe+0x1D0F0B0
	void RecalculatePendingInput();//Offset:Discovery.exe+0x1D0F160
	bool IsInputNewer(unsigned char NewInputFrame, unsigned char BaseInputFrame);//Offset:Discovery.exe+0x1D0F210
	unsigned char GetServerLatestInputFrame_Server();//Offset:Discovery.exe+0x1D0F3E0
	TArray<struct FEmbarkServersideReplicatedInput> GetNewInputs();//Offset:Discovery.exe+0x1D0F520
	float GetLatestInputProcessingTime();//Offset:Discovery.exe+0x1D0F410
	struct FEmbarkServersideReplicatedInput GetLatestInput();//Offset:Discovery.exe+0x1D0F440
	float GetInputTimestamp();//Offset:Discovery.exe+0x1D0F340
	float GetInputSyncInterval();//Offset:Discovery.exe+0x1D0F180
	int GetInputBufferSize();//Offset:Discovery.exe+0x1D0F3B0
	void ClientInputProcessingStarted();//Offset:Discovery.exe+0x1D0F090
	void ClientInputProcessingSpeedChange(float SpeedChange);//Offset:Discovery.exe+0x1D0EFF0
};


// Class EmbarkMovement.EmbarkRootMotionSourceUtilLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkRootMotionSourceUtilLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.EmbarkRootMotionSourceUtilLibrary"));
		return ptr;
	}


	struct FName STATIC_Name_Warp_Upright();//Offset:Discovery.exe+0x1D10B00
	struct FName STATIC_Name_Warp_TranslationVertical();//Offset:Discovery.exe+0x1D10C20
	struct FName STATIC_Name_Warp_TranslationHorizontal();//Offset:Discovery.exe+0x1D10BF0
	struct FName STATIC_Name_Warp_SpeedWarp();//Offset:Discovery.exe+0x1D10AD0
	struct FName STATIC_Name_Warp_Rotation();//Offset:Discovery.exe+0x1D10BC0
	struct FName STATIC_Name_Warp_RootMotionScale();//Offset:Discovery.exe+0x1D10B90
	struct FName STATIC_Name_Warp_InputScale();//Offset:Discovery.exe+0x1D10B60
	struct FName STATIC_Name_Warp_Active();//Offset:Discovery.exe+0x1D10B30
	float STATIC_GetTotalSequenceLength(TArray<class UAnimSequence*> InSequences, float OneFrameTime);//Offset:Discovery.exe+0x1D10750
	enum class ERootMotionParseRetVal STATIC_GetCurrentPlayingSequenceData(TArray<class UAnimSequence*> InSequences, float InTime, float OneFrameTime, int* OutClipIndex, float* OutClipTime, float* OutPrevClipTime);//Offset:Discovery.exe+0x1D10860
	bool STATIC_GenerateTimeWarpCurveRuntimeFloatCurve(float DeltaTime, float SpeedScale, const struct FName& CurveName, TArray<class UAnimSequence*> Sequences, struct FRuntimeFloatCurve* OutCurve, float* OutLastTime);//Offset:Discovery.exe+0x1D10270
	bool STATIC_GenerateTimeWarpCurve(float DeltaTime, float SpeedScale, const struct FName& CurveName, TArray<class UAnimSequence*> Sequences, class UCurveFloat* OutCurve, float* OutLastTime);//Offset:Discovery.exe+0x1D10500
};


// Class EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase
// 0x0050 (0x0118 - 0x00C8)
class UAbilityTask_ApplyRootMotion_AnimSequenceBase : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdate;                                                 // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UAnimSequence*>                       Sequences;                                                // 0x00E8(0x0010) (Net, ZeroConstructor)
	float                                              Duration;                                                 // 0x00F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00FC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase"));
		return ptr;
	}


	float GetRootMotionTimeWarpedTime();//Offset:Discovery.exe+0x1D115C0
	float GetRootMotionSpeedScale();//Offset:Discovery.exe+0x1D11590
	struct FVector GetRootMotionInitialVelocity();//Offset:Discovery.exe+0x1D11530
	float GetRootMotionDuration();//Offset:Discovery.exe+0x1D11500
};


// Class EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootMotion
// 0x0020 (0x0138 - 0x0118)
class UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion : public UAbilityTask_ApplyRootMotion_AnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootMotion"));
		return ptr;
	}


	class UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion* STATIC_ApplyRootMotionAnimSequence(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TArray<class UAnimSequence*> InSequences, const struct FRotator& MovementDirectionOffset, bool bOverrideIgnoreGravity, bool bShouldSpeedWarp, float SpeedWarpMin, float SpeedWarpMax);//Offset:Discovery.exe+0x1D11B70
};


// Class EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootWarp
// 0x00F8 (0x0210 - 0x0118)
class UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp : public UAbilityTask_ApplyRootMotion_AnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FTransform                                  StartActorTransform;                                      // 0x0120(0x0060) (Net, IsPlainOldData)
	struct FTransform                                  WarpTargetTransform;                                      // 0x0180(0x0060) (Net, IsPlainOldData)
	struct FName                                       CharacterAuxBoneName;                                     // 0x01E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AlignToComponent;                                         // 0x01E8(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class ERootMotionDefaultCurveType             DefaultCurveType;                                         // 0x01F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	float                                              BlendLength;                                              // 0x01F4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01F8(0x0004) MISSED OFFSET
	struct FName                                       AlignToComponentBoneName;                                 // 0x01FC(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHeight;                                            // 0x0204(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootWarp"));
		return ptr;
	}


	class UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp* STATIC_ApplyRootMotionAnimSequence(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TArray<class UAnimSequence*> InSequences, const struct FTransform& StartActorTransform, const struct FTransform& WarpTargetTransform, class USceneComponent* AlignToComponent, const struct FName& InCharacterAuxBoneName, float CapsuleHeight, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FName& InAlignToComponentBoneName, enum class ERootMotionDefaultCurveType DefaultCurveType, float BlendLength, bool bShouldSpeedWarp, float SpeedWarpMin, float SpeedWarpMax, bool bSweepTestDuringRootWarp, float StartTimeOffset);//Offset:Discovery.exe+0x1D13740
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
