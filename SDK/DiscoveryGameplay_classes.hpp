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

// Class DiscoveryGameplay.DiscoveryAnimationSignificanceSystemBase
// 0x0118 (0x03E8 - 0x02D0)
class ADiscoveryAnimationSignificanceSystemBase : public AEmbarkGlobalActor
{
public:
	float                                              RenderedSignificanceAdd;                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<struct FDiscoveryAnimationSignificanceDistance> DistanceRanges;                                           // 0x02D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              LookAtSignificanceAdd;                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FVector2D                                   LookAtRangeDeg;                                           // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OwningSignificanceAdd;                                    // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TMap<class AActor*, float>                         CachedSignificancePerActor;                               // 0x0308(0x0050)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0358(0x0050) UNKNOWN PROPERTY: CalculatePrerequisitedLookup
	unsigned char                                      UnknownData04[0x40];                                      // 0x03A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryAnimationSignificanceSystemBase"));
		return ptr;
	}


	void ReceiveTickDebug(float DeltaSeconds);//Offset:Discovery.exe+0x327F8B0
};


// Class DiscoveryGameplay.DiscoveryCharacterBase
// 0x0020 (0x0700 - 0x06E0)
class ADiscoveryCharacterBase : public AEmbarkCharacterBase
{
public:
	class UEmbarkCharacterMovementSettings*            CharacterMovementSettings;                                // 0x06E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x06E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryCharacterBase"));
		return ptr;
	}


	void BlueprintSimulatePhysWalking(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x327F8B0
	void BlueprintSimulatePhysFlying(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x327F8B0
	void BlueprintSimulatePhysFalling(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x327F8B0
	bool BlueprintSimulatePhysCustom(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x327F8B0
	void BlueprintRecalculateBaseEyeHeight();//Offset:Discovery.exe+0x327F8B0
	float BlueprintGetStandingCapsuleHalfHeight();//Offset:Discovery.exe+0x327F8B0
	void BlueprintGetDeltaMoveFromMovingFloor(const struct FVector& ProposedMoveDelta, float DeltaSeconds, struct FVector* SafeMoveDelta);//Offset:Discovery.exe+0x327F8B0
	float BlueprintGetCrouchingCapsuleHalfHeight();//Offset:Discovery.exe+0x327F8B0
	bool BlueprintCanUnCrouch(float StandingCapsuleHalfHeight, float* OutHeightAdjustment);//Offset:Discovery.exe+0x327F8B0
	bool BlueprintCanCrouch(float CrouchCapsuleHalfHeight, float* OutHeightAdjustment);//Offset:Discovery.exe+0x327F8B0
};


// Class DiscoveryGameplay.DiscoveryCharacterMovementComponent
// 0x0140 (0x1730 - 0x15F0)
class UDiscoveryCharacterMovementComponent : public UEmbarkCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x15F0(0x0018) MISSED OFFSET
	class UPrimitiveComponent*                         CachedFloorComponentStartPhysics;                         // 0x1608(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x1610(0x0028) MISSED OFFSET
	struct FDiscoCharMovementStartPhysicsTickFunction  DiscoMovementStartPhysicsTickFunction_Server;             // 0x1638(0x0030)
	struct FDiscoCharMovementPostPhysicsTickFunction   DiscoMovementPostPhysicsTickFunction_Server;              // 0x1668(0x0030)
	class UPrimitiveComponent*                         FloorComponent;                                           // 0x1698(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       FloorBoneName;                                            // 0x16A0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FEmbarkCharacterMovementBaseState           ReplicatedMovementBaseState;                              // 0x16A8(0x0068) (Net)
	class UPhysicalMaterial*                           FloorPhysMaterial;                                        // 0x1710(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ADiscoveryCharacterBase*                     DiscoveryCharacterOwner;                                  // 0x1718(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkCharacterMovementSettings*            MovementSettings;                                         // 0x1720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1728(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryCharacterMovementComponent"));
		return ptr;
	}


	void SetNewFloor(const struct FFindFloorResult& NewFloor);//Offset:Discovery.exe+0x2C770
	void OnRep_ReplicatedMovementBaseState(const struct FEmbarkCharacterMovementBaseState& PrevState);//Offset:Discovery.exe+0x2C2D0
	bool IsJumping();//Offset:Discovery.exe+0x2C900
	struct FTransform GetFloorTransform();//Offset:Discovery.exe+0x2C5F0
	class UPhysicalMaterial* GetFloorPhysMaterial();//Offset:Discovery.exe+0x2C680
	class UPrimitiveComponent* GetFloorComponent();//Offset:Discovery.exe+0x2C6B0
	struct FName GetFloorBoneName();//Offset:Discovery.exe+0x2C6E0
	bool CanUnCrouch(float StandingCapsuleHalfHeight, float* OutCapsuleHalfHeight);//Offset:Discovery.exe+0x2C4F0
	bool CanCrouch(float CrouchingCapsuleHalfHeight, float* OutCapsuleHalfHeight);//Offset:Discovery.exe+0x2C3F0
	float BlueprintGetMinAnalogSpeed();//Offset:Discovery.exe+0x2C710
	float BlueprintGetMaxSpeed();//Offset:Discovery.exe+0x2C740
};


// Class DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase
// 0x00A8 (0x0380 - 0x02D8)
class ADiscoveryCharacterMovementGlobalActorBase : public AEmbarkCharacterMovementGlobalActorBase
{
public:
	struct FScriptMulticastDelegate                    PreUpdateEvent;                                           // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PostUpdateEvent;                                          // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      JumpAbilityClassServer;                                   // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CrouchAbilityClassServer;                                 // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CrouchAbilityClassClient;                                 // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TagsThatCountAsGrounded;                                  // 0x0310(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      StaticCallerClass;                                        // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET
	class UEmbarkCharacterMovementStaticCallerBase*    StaticCallerInstance;                                     // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase"));
		return ptr;
	}


	void UpdateExternalCrouchState(class AEmbarkCharacterBase* Character, const struct FEmbarkMovementParamsDynamic& Dynamics, const struct FEmbarkMovementParamsStatic& Statics);//Offset:Discovery.exe+0x2D500
	void UpdateAbilityStatesFromDynamics_Client(class ACharacter* Character, const struct FEmbarkMovementParamsDynamic& Dynamics);//Offset:Discovery.exe+0x2D930
	void StopCrouchingImmediately(class ACharacter* Character);//Offset:Discovery.exe+0x2E260
	void StopCrouching(class ACharacter* Character);//Offset:Discovery.exe+0x2E260
	void StartCrouchingImmediately(class ACharacter* Character);//Offset:Discovery.exe+0x2E300
	void StartCrouching(class ACharacter* Character);//Offset:Discovery.exe+0x2E300
	void SetCustomTimeSinceGrounded_Server(class ACharacter* Character, float TimeSinceGrounded);//Offset:Discovery.exe+0x2E440
	void ReceivePostControlledCharacterUnregistered(class AEmbarkCharacterBase* Character);//Offset:Discovery.exe+0x327F8B0
	void ReceivePostControlledCharacterRegistered(class AEmbarkCharacterBase* Character);//Offset:Discovery.exe+0x327F8B0
	bool ReceiveGetUnCrouchHeightAdjustment(class ADiscoveryCharacterBase* Character, float StandingCapsuleHalfHeight, float* OutHeightAdjustment);//Offset:Discovery.exe+0x327F8B0
	bool ReceiveGetCrouchHeightAdjustment(class ADiscoveryCharacterBase* Character, float CrouchCapsuleHalfHeight, float* OutHeightAdjustment);//Offset:Discovery.exe+0x327F8B0
	bool ReceiveCanMoveWithFloor(class ACharacter* Character, const struct FFindFloorResult& NewFloor);//Offset:Discovery.exe+0x2D310
	void JumpImmediately(class ACharacter* Character);//Offset:Discovery.exe+0x2E3A0
	void Jump(class ACharacter* Character);//Offset:Discovery.exe+0x2E3A0
	bool IsCharacterRegisteredAsControlled(class ACharacter* Character);//Offset:Discovery.exe+0x2E520
	TArray<class AEmbarkCharacterBase*> GetRegisteredSimulatedProxyCharacters_Client();//Offset:Discovery.exe+0x2E630
	TArray<class AEmbarkCharacterBase*> GetRegisteredControlledCharacters();//Offset:Discovery.exe+0x2E6C0
	bool GetMaxSpeed_Server(class ACharacter* Character, float* OutMaxSpeed);//Offset:Discovery.exe+0x2DB80
	bool GetLatestJumpState(class ACharacter* Character, struct FEmbarkJumpState* JumpState);//Offset:Discovery.exe+0x2E150
	bool GetLatestDynamics(class ACharacter* Character, struct FEmbarkMovementParamsDynamic* OutLatestDynamics);//Offset:Discovery.exe+0x2DC80
	void CacheSlideJumpState(class ACharacter* Character, const struct FVector& SlideJumpVelocity, float Timestamp);//Offset:Discovery.exe+0x2DED0
	void CacheJumpState_Client(class ACharacter* Character, const struct FVector& JumpStartCharacterLocation, float JumpStartTime);//Offset:Discovery.exe+0x2E010
};


// Class DiscoveryGameplay.EmbarkCharacterMovementPrediction
// 0x0000 (0x0028 - 0x0028)
class UEmbarkCharacterMovementPrediction : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.EmbarkCharacterMovementPrediction"));
		return ptr;
	}


	void STATIC_PredictionPreMoveLogic(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x2FA20
	void STATIC_PredictionPostMoveLogic(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics);//Offset:Discovery.exe+0x2F650
};


// Class DiscoveryGameplay.MockDiscoveryCharacterMovementGlobalActorBase
// 0x0000 (0x0380 - 0x0380)
class AMockDiscoveryCharacterMovementGlobalActorBase : public ADiscoveryCharacterMovementGlobalActorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.MockDiscoveryCharacterMovementGlobalActorBase"));
		return ptr;
	}

};


// Class DiscoveryGameplay.DiscoveryCheatManagerBase
// 0x0000 (0x00F0 - 0x00F0)
class UDiscoveryCheatManagerBase : public UEmbarkCheatManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryCheatManagerBase"));
		return ptr;
	}


	void ServerWalk();//Offset:Discovery.exe+0x306E0
	void ServerTeleport();//Offset:Discovery.exe+0x307C0
	void ServerSummon(const struct FString& ClassName);//Offset:Discovery.exe+0x30290
	void ServerSlomo(float NewTimeDilation);//Offset:Discovery.exe+0x30600
	void ServerGod();//Offset:Discovery.exe+0x306A0
	void ServerGhost();//Offset:Discovery.exe+0x306C0
	void ServerFly();//Offset:Discovery.exe+0x30700
	void ServerDestroyTarget();//Offset:Discovery.exe+0x304A0
	void ServerDestroyPawns(class UClass* aClass);//Offset:Discovery.exe+0x30340
	void ServerDestroyAllPawnsExceptTarget();//Offset:Discovery.exe+0x303E0
	void ServerDestroyAll(class UClass* aClass);//Offset:Discovery.exe+0x30400
	void ServerDamageTarget(float DamageAmount);//Offset:Discovery.exe+0x304C0
	void ServerChangeSize(float F);//Offset:Discovery.exe+0x30720
	void MulticastSlomo(float NewTimeDilation);//Offset:Discovery.exe+0x30560
};


// Class DiscoveryGameplay.EmbarkFastReplicatorBucketBreak
// 0x0130 (0x0468 - 0x0338)
class AEmbarkFastReplicatorBucketBreak : public AEmbarkFastReplicatorBucketFastArray
{
public:
	struct FDiscoveryFastArrayBreak                    BreakArray;                                               // 0x0338(0x0130) (Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.EmbarkFastReplicatorBucketBreak"));
		return ptr;
	}

};


// Class DiscoveryGameplay.DiscoveryFastReplicatorBreak
// 0x0000 (0x04F0 - 0x04F0)
class ADiscoveryFastReplicatorBreak : public AEmbarkFastReplicatorCallback
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryFastReplicatorBreak"));
		return ptr;
	}


	void RegisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FScriptDelegate& Callback);//Offset:Discovery.exe+0x31980
};


// Class DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UDiscoveryReplicatedDamageDataScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary"));
		return ptr;
	}


	void STATIC_SetTime(float Time, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x32090
	void STATIC_SetOrigin(const struct FVector& InOrigin, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x328E0
	void STATIC_SetImpactPoint(const struct FVector& InImpactPoint, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x32A30
	void STATIC_SetHealth(float InMaxHealth, float InNewHealth, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x32600
	void STATIC_SetDirection(const struct FVector& InDirection, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x32790
	void STATIC_SetDamageValue(float InDamage, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x32310
	void STATIC_SetDamageType(TEnumAsByte<EDSMDamageType> InDamageType, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x321D0
	void STATIC_SetDamage(float InDamage, TEnumAsByte<EDSMDamageType> InDamageType, struct FDiscoveryReplicatedDamageData* DamageData);//Offset:Discovery.exe+0x32450
	bool STATIC_IsRecentTime(const struct FDiscoveryReplicatedDamageData& DamageData, float CurrentTime);//Offset:Discovery.exe+0x31F20
};


// Class DiscoveryGameplay.EmbarkFastReplicatorBucketDamage
// 0x0130 (0x0468 - 0x0338)
class AEmbarkFastReplicatorBucketDamage : public AEmbarkFastReplicatorBucketFastArray
{
public:
	struct FDiscoveryFastArrayDamage                   Damages;                                                  // 0x0338(0x0130) (Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.EmbarkFastReplicatorBucketDamage"));
		return ptr;
	}

};


// Class DiscoveryGameplay.DiscoveryFastReplicatorDamage
// 0x0000 (0x04F0 - 0x04F0)
class ADiscoveryFastReplicatorDamage : public AEmbarkFastReplicatorCallback
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryFastReplicatorDamage"));
		return ptr;
	}


	void UpdateData_Server(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FDiscoveryReplicatedDamageData& NewDamage);//Offset:Discovery.exe+0x33610
	void RegisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FScriptDelegate& Callback);//Offset:Discovery.exe+0x31980
};


// Class DiscoveryGameplay.DiscoveryGameplayUtils
// 0x0000 (0x0028 - 0x0028)
class UDiscoveryGameplayUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryGameplayUtils"));
		return ptr;
	}


	void STATIC_UnloadStreamLevelDebug(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo, bool bShouldBlockOnUnload);//Offset:Discovery.exe+0x33C00
	void STATIC_StopReplay(class UWorld* _World);//Offset:Discovery.exe+0x34320
	void STATIC_StartRecordingReplay(class UWorld* _World, const struct FString& ReplayName);//Offset:Discovery.exe+0x34450
	void STATIC_LoadStreamLevelDebug(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo);//Offset:Discovery.exe+0x33D90
	bool STATIC_IsReplayRunningAndDone(class UWorld* _World);//Offset:Discovery.exe+0x343B0
	bool STATIC_IsReplayRunning(class UWorld* _World);//Offset:Discovery.exe+0x34580
	int STATIC_GetNumberOfNonSpectators(class UObject* WorldContextObject);//Offset:Discovery.exe+0x341A0
	struct FName STATIC_GetBoneNameFromBodyIndex(class UPrimitiveComponent* InPrimitiveComponent, int InIndex);//Offset:Discovery.exe+0x340B0
	bool STATIC_CanOnlyBeSpectator(class UObject* WorldContextObject, class APlayerState* PlayerState);//Offset:Discovery.exe+0x34240
	void STATIC_ApplyDamageToDestructible(TArray<struct FBoneDamage> DamagedBones, class UActorComponent* TargetDestructible);//Offset:Discovery.exe+0x33F80
};


// Class DiscoveryGameplay.DiscoveryGameViewportClient
// 0x0008 (0x0408 - 0x0400)
class UDiscoveryGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryGameViewportClient"));
		return ptr;
	}

};


// Class DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase
// 0x0000 (0x0098 - 0x0098)
class UDiscoveryGlobalActorFactorySubsystemBase : public UEmbarkGameplayGlobalActorFactorySubsystemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase"));
		return ptr;
	}


	class AEmbarkAnimStateUpdaterSystem* GetEmbarkAnimStateUpdaterSystem();//Offset:Discovery.exe+0x34E70
	class ADiscoveryFastReplicatorDamage* GetDamageFastReplicator();//Offset:Discovery.exe+0x34ED0
	class ADiscoveryFastReplicatorBreak* GetBreakFastReplicator();//Offset:Discovery.exe+0x34EA0
};


// Class DiscoveryGameplay.DiscoveryLocalPlayer
// 0x0020 (0x02D0 - 0x02B0)
class UDiscoveryLocalPlayer : public ULocalPlayer
{
public:
	class UWorld*                                      InstantReplayWorld;                                       // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryLocalPlayer"));
		return ptr;
	}

};


// Class DiscoveryGameplay.DiscoveryPlayerControllerBase
// 0x0048 (0x08E0 - 0x0898)
class ADiscoveryPlayerControllerBase : public AEmbarkPlayerController
{
public:
	struct FScriptMulticastDelegate                    OnPlayerStateUpdated;                                     // 0x0898(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnPreProcessInput;                                        // 0x08A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnPostProcessInput;                                       // 0x08B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x08C8(0x0010) MISSED OFFSET
	class UEmbarkInputSubsystem*                       EmbarkInputSubsystem;                                     // 0x08D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryPlayerControllerBase"));
		return ptr;
	}


	void StopInstantReplay();//Offset:Discovery.exe+0x35480
	void PlayInstantReplay(class APawn* PawnToFocus, float TimeToRewind, float StartDelay);//Offset:Discovery.exe+0x354A0
	bool IsInstantReplaySupported();//Offset:Discovery.exe+0x35450
};


// Class DiscoveryGameplay.DiscoveryPlayerStateBase
// 0x0000 (0x0410 - 0x0410)
class ADiscoveryPlayerStateBase : public AEmbarkPlayerStateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryPlayerStateBase"));
		return ptr;
	}


	int GetUniqueIdHash();//Offset:Discovery.exe+0x35970
};


// Class DiscoveryGameplay.DiscoveryReplaySpectatorController
// 0x0010 (0x08F0 - 0x08E0)
class ADiscoveryReplaySpectatorController : public ADiscoveryPlayerControllerBase
{
public:
	class APlayerState*                                QueuedPlayerStateToView;                                  // 0x08E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryGameplay.DiscoveryReplaySpectatorController"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
