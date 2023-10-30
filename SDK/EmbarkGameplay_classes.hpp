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

// Class EmbarkGameplay.EmbarkCheatManager
// 0x0068 (0x00F0 - 0x0088)
class UEmbarkCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	struct FTransform                                  CachedDebugCameraTransform;                               // 0x0090(0x0060) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkCheatManager"));
		return ptr;
	}


	void PrintDebug_AbilitySystem();//Offset:Discovery.exe+0x19CBEA0
	void ForceCrash(TArray<struct FString> Args);//Offset:Discovery.exe+0x19CBEC0
	void ExecuteCheat_Server(TArray<struct FString> Args);//Offset:Discovery.exe+0x327F8B0
	void DeleteLocalSaveGames();//Offset:Discovery.exe+0x19CBE80
	void DebugCameraEnded();//Offset:Discovery.exe+0x327F8B0
	void AddInfImpulse();//Offset:Discovery.exe+0x19CBE60
};


// Class EmbarkGameplay.EmbarkPlayerController
// 0x0080 (0x0898 - 0x0818)
class AEmbarkPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0818(0x0008) MISSED OFFSET
	class UEmbarkServersideInputReplicationComponent*  ServersideInputReplicationComponent;                      // 0x0820(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDirectReplicationWrapperComponent*          DirectReplicationWrapperComponent;                        // 0x0828(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEmbarkInputDeviceChanged;                               // 0x0830(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bDestroyPawnWhenLeavingGame;                              // 0x0840(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomShortConnectTimeout;                            // 0x0841(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomShortConnectTimeout;                               // 0x0842(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0843(0x0005) MISSED OFFSET
	class UUserWidget*                                 WatermarkWidget;                                          // 0x0848(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerStateReplicated;                                  // 0x0850(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHasReplicatedPlayerState;                                // 0x0860(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLogClientConsoleCommandsOnServer;                        // 0x0861(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E];                                      // 0x0862(0x001E) MISSED OFFSET
	class APawn*                                       LastPossessedPawn;                                        // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEmbarkPawnComponent*>                CachedPawnComponents;                                     // 0x0888(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkPlayerController"));
		return ptr;
	}


	bool WasUsingMouse();//Offset:Discovery.exe+0x19D7610
	bool WasUsingKeyboard();//Offset:Discovery.exe+0x19D7610
	bool WasUsingGamepad();//Offset:Discovery.exe+0x19D75E0
	void TriggerInputAction(const struct FName& InputAction, TEnumAsByte<EInputEvent> InputEvent);//Offset:Discovery.exe+0x19D7230
	void SetTeam(enum class EEmbarkTeamId NewTeam);//Offset:Discovery.exe+0x19D77B0
	void SetStartSpot(class AActor* Actor);//Offset:Discovery.exe+0x19D74D0
	void ServerSetMatchId(const struct FName& InPlatformKey, const struct FString& InMatchId);//Offset:Discovery.exe+0x19D6F70
	void ServerNotifyHasReplicatedPlayerState();//Offset:Discovery.exe+0x19D7210
	void ServerLogConsoleCommandFromClient(const struct FString& Cmd);//Offset:Discovery.exe+0x19D7090
	void ReceiveSetupInputComponent(class UInputComponent* PlayerInputComponent);//Offset:Discovery.exe+0x327F8B0
	void ReceiveSeamlessTravelTo(class APlayerController* NewPC);//Offset:Discovery.exe+0x327F8B0
	void ReceiveSeamlessTravelFrom(class APlayerController* OldPC);//Offset:Discovery.exe+0x327F8B0
	void ReceivePreClientTravel(const struct FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);//Offset:Discovery.exe+0x327F8B0
	void ReceivePostSeamlessTravel();//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnSquadVoiceChannelInfoReceived(const struct FVoiceChannelInfo& VoiceChannelInfo);//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnRep_ControlledPawn();//Offset:Discovery.exe+0x327F8B0
	void ReceiveNotifyLoadedWorld(const struct FName& WorldPackageName, bool bFinalDest);//Offset:Discovery.exe+0x327F8B0
	void ReceiveGetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList);//Offset:Discovery.exe+0x327F8B0
	void OnServerKick(const struct FText& Reason);//Offset:Discovery.exe+0x327F8B0
	void OnEmbarkInputDeviceChanged__DelegateSignature(enum class EEmbarkInputDevice NewInputDevice);//Offset:Discovery.exe+0x327F8B0
	void LocalPawnChanged(class APawn* NewPawn);//Offset:Discovery.exe+0x327F8B0
	bool HasLocalPlayerSubsystem(class UClass* Subsystem);//Offset:Discovery.exe+0x19D7160
	struct FUniqueNetIdRepl GetUniqueNetId();//Offset:Discovery.exe+0x19D7680
	enum class EEmbarkTeamId GetTeam();//Offset:Discovery.exe+0x19D7780
	struct FRotator GetRotationInput();//Offset:Discovery.exe+0x19D7580
	void EnableTabNavigation();//Offset:Discovery.exe+0x19D7660
	void DisableTabNavigation();//Offset:Discovery.exe+0x19D7640
	void ClientReceiveSquadVoiceChannelInfo(const struct FVoiceChannelInfo& VoiceChannelInfo);//Offset:Discovery.exe+0x19D7310
};


// Class EmbarkGameplay.EmbarkPlayerStateBase
// 0x0030 (0x0410 - 0x03E0)
class AEmbarkPlayerStateBase : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	class AEmbarkSquad*                                Squad;                                                    // 0x03E8(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UEmbarkAbilitySystemComponent*               AbilitySystem;                                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bDestroyOriginalOnDeactivate : 1;                         // 0x03F8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSquadActorReplicated;                                   // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkPlayerStateBase"));
		return ptr;
	}


	void SetUniqueId(const struct FUniqueNetIdRepl& NetId);//Offset:Discovery.exe+0x19D8E10
	void OnRep_Squad();//Offset:Discovery.exe+0x19D8DF0
	void HandleOnReactivate();//Offset:Discovery.exe+0x327F8B0
	void HandleOnDeactivate();//Offset:Discovery.exe+0x327F8B0
	float GetReplicatedPing();//Offset:Discovery.exe+0x19D8EF0
	float GetExactPing_Server();//Offset:Discovery.exe+0x19D8F40
};


// Class EmbarkGameplay.EmbarkFovHelpers
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFovHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkFovHelpers"));
		return ptr;
	}


	struct FMatrix STATIC_GetViewProjectionMatrix(class UObject* WorldContextObject);//Offset:Discovery.exe+0x19BF340
	struct FMatrix STATIC_GetModelViewProjectionMatrix(class UObject* WorldContextObject, const struct FTransform& Transform);//Offset:Discovery.exe+0x19BF1A0
	struct FMatrix STATIC_GetMatrixFromTransform(const struct FTransform& Transform);//Offset:Discovery.exe+0x19BF540
	struct FMatrix STATIC_GetInverseMatrix(const struct FMatrix& Matrix);//Offset:Discovery.exe+0x19BF440
	struct FTransform STATIC_GetCustomFovWorldTransform(class UObject* WorldContextObject, const struct FTransform& Transform, float HorizontalFOV);//Offset:Discovery.exe+0x19BEFB0
	struct FMatrix STATIC_GetCustomFovModelViewProjectionMatrix(class UObject* WorldContextObject, const struct FMatrix& TransformMatrix, float HorizontalFOV);//Offset:Discovery.exe+0x19BEE10
};


// Class EmbarkGameplay.EmbarkActor
// 0x0068 (0x0330 - 0x02C8)
class AEmbarkActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C8(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOwnerReplicated;                                        // 0x02F0(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	bool                                               bDefaultAbilitySystemReplicates;                          // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EGameplayEffectReplicationMode          DefaultAbilitySystemReplicationMode;                      // 0x0301(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0302(0x0006) MISSED OFFSET
	class UEmbarkAbilitySystemComponent*               AbilitySystem;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              StillInWorldCheckVelocityLookAheadTime;                   // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableWhenOutOfBounds;                                  // 0x0314(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowTickInViewport;                                     // 0x0315(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0316(0x0002) MISSED OFFSET
	class AActor*                                      LastPlayerDamageInstigator;                               // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkActor"));
		return ptr;
	}


	void SetTeam(enum class EEmbarkTeamId NewTeam);//Offset:Discovery.exe+0x19BFF10
	void SetDefaultNetDormancy(TEnumAsByte<ENetDormancy> DefaultNetDormancy);//Offset:Discovery.exe+0x19BFBD0
	float ReceiveTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);//Offset:Discovery.exe+0x327F8B0
	void ReceivePreInitializeComponents();//Offset:Discovery.exe+0x327F8B0
	void ReceivePostInitializeComponents();//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnRepOwner();//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnGameplayTagUpdated(const struct FGameplayTag& Tag, bool TagExists);//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnAbilitySystemDestroyed(class UEmbarkAbilitySystemComponent* EmbarkASC);//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnAbilitySystemCreated(class UEmbarkAbilitySystemComponent* EmbarkASC);//Offset:Discovery.exe+0x327F8B0
	void OnRep_AbilitySystem();//Offset:Discovery.exe+0x19BFEC0
	void OnGameplayTagUpdated(const struct FGameplayTag& Tag, bool TagExists);//Offset:Discovery.exe+0x19BFC70
	void IntializeEmbarkActor();//Offset:Discovery.exe+0x327F8B0
	bool HasASC();//Offset:Discovery.exe+0x19BFE30
	enum class EEmbarkTeamId GetTeam();//Offset:Discovery.exe+0x19BFEE0
	class UEmbarkAbilitySystemComponent* GetOrCreateASC_Server();//Offset:Discovery.exe+0x19BFE90
	class UEmbarkAbilitySystemComponent* GetASC();//Offset:Discovery.exe+0x19BFE60
	void BP_OutsideWorldBoundsEvent();//Offset:Discovery.exe+0x19BFD70
	void BP_FellOutOfWorldEvent(class UDamageType* dmgType);//Offset:Discovery.exe+0x19BFD90
};


// Class EmbarkGameplay.EmbarkActorComponent
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkActorComponent"));
		return ptr;
	}


	void ReceiveInitializeComponent();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkGameplay.EmbarkActorTransformInterpolatorComponent
// 0x0288 (0x03E0 - 0x0158)
class UEmbarkActorTransformInterpolatorComponent : public UStateInterpolatorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	struct FReplicatedTransform                        ReplicatedRootTransform;                                  // 0x0160(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	int                                                EmbarkID;                                                 // 0x01C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6C];                                      // 0x01CC(0x006C) MISSED OFFSET
	class UTransformInterpolator*                      TransformInterpolator;                                    // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1A0];                                     // 0x0240(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkActorTransformInterpolatorComponent"));
		return ptr;
	}


	bool TryGetInterpolatedTransform(struct FTransform* OutTransform);//Offset:Discovery.exe+0x19C0F90
	bool TryGetInterpolatedLinearVelocity(struct FVector* OutLinearVelocity);//Offset:Discovery.exe+0x19C1220
	bool TryGetInterpolatedAngularVelocity(struct FVector* OutAngularVelocity);//Offset:Discovery.exe+0x19C1130
	void StopUsingPredictedTransform();//Offset:Discovery.exe+0x19C1640
	void SetShouldUpdateActorTransform(bool bEnabled);//Offset:Discovery.exe+0x19C1490
	void SetInterpolatorEnabled(bool bEnabled, bool bSkipSetTransformRightAway);//Offset:Discovery.exe+0x19C1550
	void SetEnableFastReplicationDefault(bool bInCanSimulatePhysics, bool bInStartsInSleeping);//Offset:Discovery.exe+0x19C1310
	void ResetInterpolationState();//Offset:Discovery.exe+0x19C1530
	void OnWake_Server(class UPrimitiveComponent* Component, const struct FName& bone);//Offset:Discovery.exe+0x19C0DD0
	void OnSleep_Server(class UPrimitiveComponent* Component, const struct FName& bone);//Offset:Discovery.exe+0x19C0EB0
	void OnRep_RootTransform();//Offset:Discovery.exe+0x19C0DB0
	bool IsInterpolatorEnabled();//Offset:Discovery.exe+0x19C1400
	void InterpolateFromNewTransformWithTransitionPeriod(const struct FTransform& NewTransform, float InPredictedTransformTransitionPeriod, const struct FScriptDelegate& InPredictedTransformDelegate, const struct FVector& PredictedVelocity, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, bool bEnableInterpolatorIfDisabled);//Offset:Discovery.exe+0x19C1660
	void InterpolateFromNewTransform(const struct FTransform& NewTransform, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, bool bEnableInterpolatorIfDisabled, bool bDisablePredictionIfEnabled);//Offset:Discovery.exe+0x19C19A0
};


// Class EmbarkGameplay.WidgetMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.WidgetMixinLibrary"));
		return ptr;
	}


	void STATIC_SetRenderAngle(class UWidget* Widget, float Angle);//Offset:Discovery.exe+0x19C2620
};


// Class EmbarkGameplay.ActorMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UActorMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.ActorMixinLibrary"));
		return ptr;
	}


	void STATIC_TakeDamage(class AActor* Actor, float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);//Offset:Discovery.exe+0x19C2AD0
	class AController* STATIC_GetInstigatorController(class AActor* Actor);//Offset:Discovery.exe+0x19C2970
	class APawn* STATIC_GetInstigator(class AActor* Actor);//Offset:Discovery.exe+0x19C2A20
};


// Class EmbarkGameplay.PlayerStateMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerStateMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.PlayerStateMixinLibrary"));
		return ptr;
	}


	void STATIC_SetScore(class APlayerState* PlayerState, float NewScore);//Offset:Discovery.exe+0x19C3060
};


// Class EmbarkGameplay.ActorComponentMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UActorComponentMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.ActorComponentMixinLibrary"));
		return ptr;
	}


	void STATIC_SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bValue);//Offset:Discovery.exe+0x19C33C0
	void STATIC_RegisterComponent(class UActorComponent* ComponentToRegister);//Offset:Discovery.exe+0x19C34B0
};


// Class EmbarkGameplay.InputComponentMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UInputComponentMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.InputComponentMixinLibrary"));
		return ptr;
	}


	bool STATIC_HasBindings(class UInputComponent* InputComponent);//Offset:Discovery.exe+0x19C3870
	void STATIC_ClearBindingValues(class UInputComponent* InputComponent);//Offset:Discovery.exe+0x19C3920
};


// Class EmbarkGameplay.DataTableMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UDataTableMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.DataTableMixinLibrary"));
		return ptr;
	}


	bool STATIC_FindTableCellAsString(class UDataTable* DataTable, const struct FName& RowName, const struct FName& ColumnName, struct FString* OutResultString);//Offset:Discovery.exe+0x19C3F30
	bool STATIC_FindTableCellAsFloat(class UDataTable* DataTable, const struct FName& RowName, const struct FName& ColumnName, float* OutResultFloat);//Offset:Discovery.exe+0x19C3CD0
};


// Class EmbarkGameplay.StringMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UStringMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.StringMixinLibrary"));
		return ptr;
	}


	void STATIC_RemoveAt(int StartIdx, int Count, struct FString* StringToChange);//Offset:Discovery.exe+0x19C4660
};


// Class EmbarkGameplay.SoundWaveMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class USoundWaveMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.SoundWaveMixinLibrary"));
		return ptr;
	}


	void STATIC_SetSubtitlesText(class USoundWave* SoundWave, int Index, const struct FText& Text);//Offset:Discovery.exe+0x19C4A30
	void STATIC_SetIsMature(class USoundWave* SoundWave, bool bMature);//Offset:Discovery.exe+0x19C4C90
	bool STATIC_GetIsMature(class USoundWave* SoundWave);//Offset:Discovery.exe+0x19C4DA0
};


// Class EmbarkGameplay.SubtitleCueMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class USubtitleCueMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.SubtitleCueMixinLibrary"));
		return ptr;
	}


	void STATIC_SetText(const struct FText& Text, struct FSubtitleCue* SubtitleCue);//Offset:Discovery.exe+0x19C51F0
};


// Class EmbarkGameplay.WorldMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UWorldMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.WorldMixinLibrary"));
		return ptr;
	}


	class UWorldComposition* STATIC_GetWorldComposition(class UWorld* World);//Offset:Discovery.exe+0x19C5690
	class UEnvQueryManager* STATIC_GetEnvQueryManager(class UWorld* World);//Offset:Discovery.exe+0x19C5740
};


// Class EmbarkGameplay.PawnMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UPawnMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.PawnMixinLibrary"));
		return ptr;
	}


	void STATIC_SetPlayerState(class APawn* Pawn, class APlayerState* PlayerState);//Offset:Discovery.exe+0x19C5AF0
	enum class EAutoPossessAI STATIC_GetAutoPossessAI(class APawn* Pawn);//Offset:Discovery.exe+0x19C5BE0
};


// Class EmbarkGameplay.MaterialParameterCollectionMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UMaterialParameterCollectionMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.MaterialParameterCollectionMixinLibrary"));
		return ptr;
	}


	void STATIC_SetVectorDefaultValue(class UMaterialParameterCollection* MaterialParameterCollection, int Index, const struct FLinearColor& DefaultValue);//Offset:Discovery.exe+0x19C5F90
};


// Class EmbarkGameplay.AIControllerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIControllerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.AIControllerMixinLibrary"));
		return ptr;
	}


	class UAIPerceptionComponent* STATIC_GetPerceptionComponent(class AAIController* AIController);//Offset:Discovery.exe+0x19C6360
};


// Class EmbarkGameplay.ConeConstraintMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UConeConstraintMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.ConeConstraintMixinLibrary"));
		return ptr;
	}


	void STATIC_SetIsSoftConstraint(bool bValue, struct FConeConstraint* Constraint);//Offset:Discovery.exe+0x19C66A0
};


// Class EmbarkGameplay.TwistConstraintMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UTwistConstraintMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.TwistConstraintMixinLibrary"));
		return ptr;
	}


	void STATIC_SetIsSoftConstraint(bool bValue, struct FTwistConstraint* Constraint);//Offset:Discovery.exe+0x19C6A20
};


// Class EmbarkGameplay.LinearConstraintMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class ULinearConstraintMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.LinearConstraintMixinLibrary"));
		return ptr;
	}


	void STATIC_SetIsSoftConstraint(bool bValue, struct FLinearConstraint* Constraint);//Offset:Discovery.exe+0x19C6D90
};


// Class EmbarkGameplay.ConstraintInstanceMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UConstraintInstanceMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.ConstraintInstanceMixinLibrary"));
		return ptr;
	}


	void STATIC_SetScaleLinearLimits(bool bValue, struct FConstraintInstance* ConstraintInstance);//Offset:Discovery.exe+0x19C7100
};


// Class EmbarkGameplay.ConstraintProfilePropertiesMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UConstraintProfilePropertiesMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.ConstraintProfilePropertiesMixinLibrary"));
		return ptr;
	}


	void STATIC_SetParentDominates(bool bValue, struct FConstraintProfileProperties* ConstraintProfileProperties);//Offset:Discovery.exe+0x19C7530
};


// Class EmbarkGameplay.BTServiceMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTServiceMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.BTServiceMixinLibrary"));
		return ptr;
	}


	void STATIC_SetIntervalAndRandomDeviation(class UBTService* BTService, float Interval, float RandomDeviation);//Offset:Discovery.exe+0x19C78E0
};


// Class EmbarkGameplay.AIStimulusMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIStimulusMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.AIStimulusMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsSensedBy(const struct FAIStimulus& AIStimulus, class UClass* SenseClass);//Offset:Discovery.exe+0x19C7C90
};


// Class EmbarkGameplay.AIPerceptionComponentLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIPerceptionComponentLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.AIPerceptionComponentLibrary"));
		return ptr;
	}


	struct FVector STATIC_GetActorLocation(class UAIPerceptionComponent* AIPerceptionComponent, class AActor* Actor);//Offset:Discovery.exe+0x19C8120
};


// Class EmbarkGameplay.AnimInstanceScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimInstanceScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.AnimInstanceScriptMixinLibrary"));
		return ptr;
	}


	bool STATIC_GetCurveValueDefault(class UAnimInstance* AnimInstance, const struct FName& CurveName, float* OutValue);//Offset:Discovery.exe+0x19C84B0
};


// Class EmbarkGameplay.CharacterMovementComponentScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UCharacterMovementComponentScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.CharacterMovementComponentScriptMixinLibrary"));
		return ptr;
	}


	void STATIC_ResetToDefaultMovementMode(class UCharacterMovementComponent* MovementComponent);//Offset:Discovery.exe+0x19C8870
};


// Class EmbarkGameplay.BodyInstanceMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UBodyInstanceMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.BodyInstanceMixinLibrary"));
		return ptr;
	}


	struct FVector STATIC_GetPhysicsBodyLinearVelocity(const struct FBodyInstance& BodyInstance);//Offset:Discovery.exe+0x19C8D70
	struct FBox STATIC_GetPhysicsBodyBounds(const struct FBodyInstance& BodyInstance);//Offset:Discovery.exe+0x19C8B80
	struct FVector STATIC_GetPhysicsBodyAngularVelocityRad(const struct FBodyInstance& BodyInstance);//Offset:Discovery.exe+0x19C8C80
};


// Class EmbarkGameplay.SimpleConstructionScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class USimpleConstructionScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.SimpleConstructionScriptMixinLibrary"));
		return ptr;
	}


	void STATIC_GetAllNodes(class USimpleConstructionScript* Script, TArray<class USCS_Node*>* Nodes);//Offset:Discovery.exe+0x19C91E0
};


// Class EmbarkGameplay.ClassScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UClassScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.ClassScriptMixinLibrary"));
		return ptr;
	}


	class UStruct* STATIC_GetSuperStruct(class UClass* Class);//Offset:Discovery.exe+0x19C95F0
	class USimpleConstructionScript* STATIC_GetSimpleConstructionScript(class UClass* Class);//Offset:Discovery.exe+0x19C9690
};


// Class EmbarkGameplay.SCSNodeScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class USCSNodeScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.SCSNodeScriptMixinLibrary"));
		return ptr;
	}


	class UActorComponent* STATIC_GetActualComponentTemplate(class USCS_Node* Node, class UClass* Class);//Offset:Discovery.exe+0x19C9A90
};


// Class EmbarkGameplay.FBoxScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UFBoxScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.FBoxScriptMixinLibrary"));
		return ptr;
	}


	TArray<struct FVector> STATIC_GetBoxPoints(const struct FBox& Box);//Offset:Discovery.exe+0x19C9E70
};


// Class EmbarkGameplay.QuatScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UQuatScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.QuatScriptMixinLibrary"));
		return ptr;
	}


	struct FQuat STATIC_ShortestDelta(const struct FQuat& Source, const struct FQuat& Target);//Offset:Discovery.exe+0x19CA1B0
	float STATIC_DotProduct(const struct FQuat& A, const struct FQuat& B);//Offset:Discovery.exe+0x19CA5F0
};


// Class EmbarkGameplay.CameraComponentMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UCameraComponentMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.CameraComponentMixinLibrary"));
		return ptr;
	}


	void STATIC_RemoveBlendable(class UCameraComponent* CameraComponent, class UMaterialInterface* MaterialInterface);//Offset:Discovery.exe+0x19CAA60
	void STATIC_AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInterface* MaterialInterface, float Weight);//Offset:Discovery.exe+0x19CAC90
};


// Class EmbarkGameplay.EmbarkAssetManager
// 0x0000 (0x04E8 - 0x04E8)
class UEmbarkAssetManager : public UAssetManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkAssetManager"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkAssetManagerSettings
// 0x0000 (0x0038 - 0x0038)
class UEmbarkAssetManagerSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkAssetManagerSettings"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkComponentSelectionMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkComponentSelectionMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkComponentSelectionMixinLibrary"));
		return ptr;
	}


	class UActorComponent* STATIC_GetComponent(const struct FEmbarkComponentSelection& ComponentSelection, class UObject* WorldContextObject, class AActor* Owner);//Offset:Discovery.exe+0x19CC560
};


// Class EmbarkGameplay.EmbarkConvexVolumeMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkConvexVolumeMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkConvexVolumeMixinLibrary"));
		return ptr;
	}


	void STATIC_UpdateConvexVolume(const struct FTransform& NewTransform, struct FEmbarkConvexVolume* ConvexVolume);//Offset:Discovery.exe+0x19CD090
	bool STATIC_IntersectSphere(const struct FEmbarkConvexVolume& ConvexVolume, const struct FVector& Origin, float Radius);//Offset:Discovery.exe+0x19CCCC0
	bool STATIC_IntersectLineSegment(const struct FEmbarkConvexVolume& ConvexVolume, const struct FVector& Start, const struct FVector& End);//Offset:Discovery.exe+0x19CCB00
	bool STATIC_IntersectBox(const struct FEmbarkConvexVolume& ConvexVolume, const struct FVector& Origin, const struct FVector& Translation, const struct FVector& Extent);//Offset:Discovery.exe+0x19CCE80
	TArray<struct FPlane> STATIC_GetConvexVolumePlanes(const struct FEmbarkConvexVolume& ConvexVolume);//Offset:Discovery.exe+0x19CC9C0
	struct FEmbarkConvexVolume STATIC_CreateConvexVolume(const struct FTransform& Transform, float HalfFOVX, float HalfFOVY, float MinZ, float MaxZ);//Offset:Discovery.exe+0x19CD230
};


// Class EmbarkGameplay.EmbarkEngineSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkEngineSubsystem : public UEngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkEngineSubsystem"));
		return ptr;
	}


	void OnInitialized();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitialized();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkGameplay.EmbarkFastReplicatorBucketTransformInterpolator
// 0x0130 (0x0468 - 0x0338)
class AEmbarkFastReplicatorBucketTransformInterpolator : public AEmbarkFastReplicatorBucketFastArray
{
public:
	struct FEmbarkFastArrayTransform                   Transforms;                                               // 0x0338(0x0130) (Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkFastReplicatorBucketTransformInterpolator"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkFastReplicatorTransformInterpolator
// 0x0000 (0x0450 - 0x0450)
class AEmbarkFastReplicatorTransformInterpolator : public AEmbarkFastReplicator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkFastReplicatorTransformInterpolator"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkBlackBoardFastReplicatorBucketTransformInterpolator
// 0x0040 (0x0318 - 0x02D8)
class AEmbarkBlackBoardFastReplicatorBucketTransformInterpolator : public AEmbarkFastReplicatorBucket
{
public:
	struct FBlackBoardDeltaCompressionPtr              ActorTransformCollectionPtr;                              // 0x02D8(0x0030) (Net)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0308(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkBlackBoardFastReplicatorBucketTransformInterpolator"));
		return ptr;
	}


	void OnRep_ActorTransformCollection();//Offset:Discovery.exe+0x19CE040
};


// Class EmbarkGameplay.EmbarkActorBlackBoardFastReplicatorTransformInterpolator
// 0x0000 (0x0450 - 0x0450)
class AEmbarkActorBlackBoardFastReplicatorTransformInterpolator : public AEmbarkFastReplicator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkActorBlackBoardFastReplicatorTransformInterpolator"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkGameInstance
// 0x0078 (0x0220 - 0x01A8)
class UEmbarkGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x01A8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkGameInstance"));
		return ptr;
	}


	void SetUserEncryptionKey(const struct FString& UserIdString, const struct FString& Base64Bytes);//Offset:Discovery.exe+0x19CE580
	void SetQuilkinRoutingToken(const struct FString& Base64Bytes);//Offset:Discovery.exe+0x19CE4D0
	void SetLocalEncryptionKey(const struct FString& Base64Bytes);//Offset:Discovery.exe+0x19CE680
	bool IsGameplayMap();//Offset:Discovery.exe+0x327F8B0
	void BP_ReturnToMainMenu();//Offset:Discovery.exe+0x19CE730
};


// Class EmbarkGameplay.EmbarkGameMode
// 0x0058 (0x0408 - 0x03B0)
class AEmbarkGameMode : public AGameMode
{
public:
	unsigned char                                      bKeepOriginalPlayerStateOnReconnect : 1;                  // 0x03B0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x57];                                      // 0x03B1(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkGameMode"));
		return ptr;
	}


	void ReceiveStartPlay();//Offset:Discovery.exe+0x327F8B0
	void ReceivePreRestartPlayer(class AController* NewController);//Offset:Discovery.exe+0x327F8B0
	void ReceivePreLogin(const struct FString& Options, const struct FString& Address, const struct FUniqueNetIdRepl& UniqueId, struct FString* ErrorMessage);//Offset:Discovery.exe+0x327F8B0
	void ReceivePostInitializeComponents();//Offset:Discovery.exe+0x327F8B0
	void ReceiveNotifyPendingConnectionLost(const struct FUniqueNetIdRepl& ConnectionUniqueId);//Offset:Discovery.exe+0x327F8B0
	void ReceiveInitSeamlessTravelPlayer(class AController* NewController);//Offset:Discovery.exe+0x327F8B0
	void ReceiveInitPlayer(class AController* NewController);//Offset:Discovery.exe+0x327F8B0
	void ReceiveHandleMatchIsWaitingToStart();//Offset:Discovery.exe+0x327F8B0
	void ReceiveHandleMatchHasStarted();//Offset:Discovery.exe+0x327F8B0
	void ReceiveHandleMatchHasEnded();//Offset:Discovery.exe+0x327F8B0
	void ReceiveHandleMatchAborted();//Offset:Discovery.exe+0x327F8B0
	void ReceiveHandleLeavingMap();//Offset:Discovery.exe+0x327F8B0
	void ReceiveGetSeamlessTravelActorList(bool bToTransition, TArray<class AActor*>* ActorList);//Offset:Discovery.exe+0x327F8B0
	void PreLogout(class AController* Exiting);//Offset:Discovery.exe+0x327F8B0
	bool KickPlayer(class APlayerController* KickedPlayer, const struct FText& KickReason);//Offset:Discovery.exe+0x19CECA0
	void GetInactivePlayers(TArray<class APlayerState*>* OutPlayerStates);//Offset:Discovery.exe+0x19CEBF0
};


// Class EmbarkGameplay.EmbarkGameSession
// 0x0008 (0x02E8 - 0x02E0)
class AEmbarkGameSession : public AGameSession
{
public:
	unsigned char                                      bDestroyPawnOnKick : 1;                                   // 0x02E0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkGameSession"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkGameStateBase
// 0x0068 (0x03A0 - 0x0338)
class AEmbarkGameStateBase : public AGameState
{
public:
	TArray<class AEmbarkSquad*>                        Squads;                                                   // 0x0338(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSquadsChanged;                                          // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FOnlineTweakablesContainer                  OnlineTweakablesContainer;                                // 0x0358(0x0010) (Net)
	float                                              ReplicatedRealtimeWorldTimeSeconds;                       // 0x0368(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ServerRealtimeWorldTimeSecondsDelta;                      // 0x036C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMatchIdChanged;                                         // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FMatchIdDesc>                        MatchesId;                                                // 0x0390(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkGameStateBase"));
		return ptr;
	}


	void OnSquadsChanged__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	void OnRep_Squads();//Offset:Discovery.exe+0x19CFF20
	void OnRep_ReplicatedRealtimeWorldTimeSeconds();//Offset:Discovery.exe+0x19CFF40
	void OnRep_OnlineTweakablesContainer();//Offset:Discovery.exe+0x19CFDE0
	void OnRep_MatchesId();//Offset:Discovery.exe+0x19CFDC0
	void OnOnlineTweakablesRegistered(const struct FOnlineTweakablesContainer& InOnlineTweakablesContainer);//Offset:Discovery.exe+0x19CFE00
	void OnMod_Squads();//Offset:Discovery.exe+0x19CFF00
	void OnMatchIdChanged__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	float GetRealtimeServerWorldTimeSeconds();//Offset:Discovery.exe+0x19CFF60
};


// Class EmbarkGameplay.EmbarkGameViewportClient
// 0x0048 (0x0448 - 0x0400)
class UEmbarkGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0400(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkGameViewportClient"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkItemSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkItemSubsystem : public UEmbarkGlobalSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkItemSubsystem"));
		return ptr;
	}


	void OnAssetsReady();//Offset:Discovery.exe+0x327F8B0
	void OnAssetsChanged(const struct FAssetData& AssetData);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkGameplay.LevelInstanceSubsystemMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class ULevelInstanceSubsystemMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.LevelInstanceSubsystemMixinLibrary"));
		return ptr;
	}


	class ULevel* STATIC_GetLevelInstanceLevel(class ULevelInstanceSubsystem* LevelInstanceSubsystem, class ALevelInstance* LevelInstanceActor);//Offset:Discovery.exe+0x19D0A80
};


// Class EmbarkGameplay.EmbarkLocalPlayer
// 0x0000 (0x02B0 - 0x02B0)
class UEmbarkLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkLocalPlayer"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkLocalPlayerSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkLocalPlayerSubsystem"));
		return ptr;
	}


	bool OnShouldCreateSubsystem(class UObject* Outer);//Offset:Discovery.exe+0x19D0FA0
	void OnInitialized();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitialized();//Offset:Discovery.exe+0x327F8B0
	void GetDependencies(TArray<class UClass*>* Dependencies);//Offset:Discovery.exe+0x19D0EE0
};


// Class EmbarkGameplay.EmbarkNiagaraComponent
// 0x0000 (0x0820 - 0x0820)
class UEmbarkNiagaraComponent : public UNiagaraComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkNiagaraComponent"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkNiagaraDebugComponent
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkNiagaraDebugComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkNiagaraDebugComponent"));
		return ptr;
	}


	void DisplayDebugDataFor(class UNiagaraComponent* Comp);//Offset:Discovery.exe+0x19D16D0
};


// Class EmbarkGameplay.EmbarkOptimizedTickObject
// 0x0040 (0x0068 - 0x0028)
class UEmbarkOptimizedTickObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	class UObject*                                     TickObject;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UASFunction_DoubleArg*                       TickFunction;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkOptimizedTickObject"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkOptimizedTickMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkOptimizedTickMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkOptimizedTickMixinLibrary"));
		return ptr;
	}


	void STATIC_TeardownOptimizedTick(class UObject* WorldContextObject, struct FEmbarkOptimizedTick* OptimizedTick);//Offset:Discovery.exe+0x19D1E30
	void STATIC_SetupOptimizedTick(class UObject* WorldContextObject, class UObject* TickObject, const struct FName& FunctionName, struct FEmbarkOptimizedTick* OptimizedTick);//Offset:Discovery.exe+0x19D1F40
	void STATIC_SetTickEnabled(bool bValue, struct FEmbarkOptimizedTick* OptimizedTick);//Offset:Discovery.exe+0x19D1D20
	bool STATIC_HasTickOptimizedObject(const struct FEmbarkOptimizedTick& OptimizedTick);//Offset:Discovery.exe+0x19D1C60
	void STATIC_AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent, struct FEmbarkOptimizedTick* OptimizedTick);//Offset:Discovery.exe+0x19D2300
	void STATIC_AddTickPrerequisiteActor(class AActor* PrerequisiteActor, struct FEmbarkOptimizedTick* OptimizedTick);//Offset:Discovery.exe+0x19D2410
	void STATIC_AddAsTickPrerequisiteForComponent(class UActorComponent* Component, struct FEmbarkOptimizedTick* OptimizedTick);//Offset:Discovery.exe+0x19D20E0
	void STATIC_AddAsTickPrerequisiteForActor(class AActor* Actor, struct FEmbarkOptimizedTick* OptimizedTick);//Offset:Discovery.exe+0x19D21F0
};


// Class EmbarkGameplay.EmbarkOptimizedTickObjectPoolSubSystem
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkOptimizedTickObjectPoolSubSystem : public UEmbarkObjectPoolSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkOptimizedTickObjectPoolSubSystem"));
		return ptr;
	}

};


// Class EmbarkGameplay.ParallelUpdateBaseClass
// 0x0038 (0x0060 - 0x0028)
class UParallelUpdateBaseClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.ParallelUpdateBaseClass"));
		return ptr;
	}


	void InitComponent(class UActorComponent* ActorComp, TEnumAsByte<ETickingGroup> TickGroup, bool InNeedsSyncPre, bool InNeedsPreTickGameThread, bool InNeedsTickAnyThread, bool InNeedsPostTickGameThread, bool InNeedsSyncPost);//Offset:Discovery.exe+0x19D5D40
	void InitActor(class AActor* Actor, TEnumAsByte<ETickingGroup> TickGroup, bool InNeedsSyncPre, bool InNeedsPreTickGameThread, bool InNeedsTickAnyThread, bool InNeedsPostTickGameThread, bool InNeedsSyncPost);//Offset:Discovery.exe+0x19D5AB0
	void Deinit();//Offset:Discovery.exe+0x19D5A90
};


// Class EmbarkGameplay.EmbarkParallelActorUpdaterSubsystemActor
// 0x0028 (0x02F0 - 0x02C8)
class AEmbarkParallelActorUpdaterSubsystemActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkParallelActorUpdaterSubsystemActor"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkParallelActorUpdaterSubsystem
// 0x0048 (0x0078 - 0x0030)
class UEmbarkParallelActorUpdaterSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkParallelActorUpdaterSubsystem"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkPawn
// 0x0058 (0x03A0 - 0x0348)
class AEmbarkPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0348(0x0018) MISSED OFFSET
	class UEmbarkAbilitySystemComponent*               AbilitySystem;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FBlackBoardDeltaCompressionPtr              BlackBoardReplicationPtr;                                 // 0x0368(0x0030) (Net)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkPawn"));
		return ptr;
	}


	void SetTeam(enum class EEmbarkTeamId NewTeam);//Offset:Discovery.exe+0x19D67C0
	class UObject* RegisterClassToBlackBoard(class UClass* Clazz);//Offset:Discovery.exe+0x19D66F0
	void ReceiveSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);//Offset:Discovery.exe+0x327F8B0
	void ReceiveRestart();//Offset:Discovery.exe+0x327F8B0
	void ReceivePostInitializeComponents();//Offset:Discovery.exe+0x327F8B0
	enum class EEmbarkTeamId GetTeam();//Offset:Discovery.exe+0x19D6790
	class UObject* GetFirstStateOfTypeFromBlackBoard(class UClass* Clazz);//Offset:Discovery.exe+0x19D6650
	class UObject* EditFirstStateOfTypeFromBlackBoard(class UClass* Clazz);//Offset:Discovery.exe+0x19D65B0
};


// Class EmbarkGameplay.EmbarkProxyComponent
// 0x0000 (0x02D0 - 0x02D0)
class UEmbarkProxyComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkProxyComponent"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkProxyTransformMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkProxyTransformMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkProxyTransformMixinLibrary"));
		return ptr;
	}


	struct FTransform STATIC_GetRelativeTransform(const struct FEmbarkProxyTransform& ProxyTransform);//Offset:Discovery.exe+0x19D98A0
	struct FQuat STATIC_GetRelativeRotationQuat(const struct FEmbarkProxyTransform& ProxyTransform);//Offset:Discovery.exe+0x19D99A0
	struct FRotator STATIC_GetRelativeRotation(const struct FEmbarkProxyTransform& ProxyTransform);//Offset:Discovery.exe+0x19D9A70
	struct FVector STATIC_GetRelativeLocation(const struct FEmbarkProxyTransform& ProxyTransform);//Offset:Discovery.exe+0x19D9B40
	struct FName STATIC_GetComponentName(const struct FEmbarkProxyTransform& ProxyTransform);//Offset:Discovery.exe+0x19D97E0
	struct FName STATIC_GetComponentDisplayName(const struct FEmbarkProxyTransform& ProxyTransform);//Offset:Discovery.exe+0x19D9720
};


// Class EmbarkGameplay.EmbarkScreenFadeProxy
// 0x0048 (0x0078 - 0x0030)
class UEmbarkScreenFadeProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkScreenFadeProxy"));
		return ptr;
	}


	class UEmbarkScreenFadeProxy* STATIC_FadeScreenToColor(class UObject* WorldContextObject, const struct FLinearColor& Color, float Duration);//Offset:Discovery.exe+0x19DA1E0
	class UEmbarkScreenFadeProxy* STATIC_FadeScreenFromAndToColor(class UObject* WorldContextObject, const struct FLinearColor& FromColor, const struct FLinearColor& ToColor, float Duration);//Offset:Discovery.exe+0x19DA310
	void STATIC_ClearScreenFade(class UObject* WorldContextObject);//Offset:Discovery.exe+0x19DA150
};


// Class EmbarkGameplay.EmbarkNetScriptStruct_Test
// 0x0058 (0x0320 - 0x02C8)
class AEmbarkNetScriptStruct_Test : public AActor
{
public:
	class USceneComponent*                             RootComp;                                                 // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TMap<class UScriptStruct*, class UASFunction*>     ScriptStructFunctions;                                    // 0x02D0(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkNetScriptStruct_Test"));
		return ptr;
	}


	void Multicast_TestRPCWithScriptStruct(const struct FEmbarkScriptStruct& ScriptStruct);//Offset:Discovery.exe+0x19DA980
	void Multicast_ScriptStruct(const struct FEmbarkScriptStruct& ScriptStruct);//Offset:Discovery.exe+0x19DA8D0
};


// Class EmbarkGameplay.EmbarkStructObject_Test
// 0x0020 (0x0048 - 0x0028)
class UEmbarkStructObject_Test : public UObject
{
public:
	struct FEmbarkScriptStruct                         ThisStruct;                                               // 0x0028(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkStructObject_Test"));
		return ptr;
	}


	void StructOut(int* __ANY_STRUCT_REF);//Offset:Discovery.exe+0x327F8B0
	void StructInit(int* __ANY_STRUCT_REF);//Offset:Discovery.exe+0x327F8B0
	void ProcessStructOut();//Offset:Discovery.exe+0x19DAD40
	void Init();//Offset:Discovery.exe+0x19DAD60
};


// Class EmbarkGameplay.EmbarkSkeletalMeshComponent
// 0x00F0 (0x1070 - 0x0F80)
class UEmbarkSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0F80(0x0010) MISSED OFFSET
	bool                                               bCanTickAnimationOnServer;                                // 0x0F90(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xDF];                                      // 0x0F91(0x00DF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkSkeletalMeshComponent"));
		return ptr;
	}


	void SuspendNewStyleUpdate(bool bSuspend);//Offset:Discovery.exe+0x19DB300
	void SetRenderUpdateEnabled(bool bEnabled);//Offset:Discovery.exe+0x19DB440
	void SetAnimStateUpdaterComponent(class UEmbarkAnimStateUpdaterComponent* InAnimStateUpdaterComponent);//Offset:Discovery.exe+0x19DB100
	void RegisterParentUpdate(class UEmbarkSkeletalMeshComponent* Comp);//Offset:Discovery.exe+0x19DB3A0
	void RefreshClothingRelationships();//Offset:Discovery.exe+0x19DB1B0
	class UEmbarkSkeletalMeshComponent* STATIC_CreateNewComponent(class AActor* Owner, const struct FName& UniqueMeshName, bool ShouldAutoRegisterWithBudgetAllocator);//Offset:Discovery.exe+0x19DB1D0
};


// Class EmbarkGameplay.EmbarkSMInstance
// 0x0040 (0x0738 - 0x06F8)
class UEmbarkSMInstance : public USMInstance
{
public:
	bool                                               bAllowTransitions;                                        // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x06F9(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkSMInstance"));
		return ptr;
	}


	void UpdateStateFromStateData(const struct FEmbarkSMActiveStateData& NewActiveStateData);//Offset:Discovery.exe+0x19DE060
	bool GetActiveStateData(struct FEmbarkSMActiveStateData* ActiveStateData);//Offset:Discovery.exe+0x19DE110
};


// Class EmbarkGameplay.EmbarkSMStateMachineComponent
// 0x0090 (0x0148 - 0x00B8)
class UEmbarkSMStateMachineComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnStateMachineInitializedEvent;                           // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStartedEvent;                               // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineUpdatedEvent;                               // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStoppedEvent;                               // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineTransitionTakenEvent;                       // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStateChangedEvent;                          // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      StateMachineClass;                                        // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitializeOnBeginPlay;                                   // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartOnBeginPlay;                                        // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowForLocalTransitions;                                // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	float                                              ServerTickInterval;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientTickInterval;                                       // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FEmbarkSMActiveStateData                    ActiveStateData;                                          // 0x0130(0x0010) (Net, Transient)
	class USMStateMachineComponent*                    SMComponent;                                              // 0x0140(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkSMStateMachineComponent"));
		return ptr;
	}


	void Update(float DeltaSeconds);//Offset:Discovery.exe+0x19DF0D0
	void Stop();//Offset:Discovery.exe+0x19DF0B0
	void Start();//Offset:Discovery.exe+0x19DF170
	void Shutdown();//Offset:Discovery.exe+0x19DF090
	void OnRep_ActiveStateData();//Offset:Discovery.exe+0x19DE500
	void Internal_OnStateMachineUpdated(class USMInstance* SMInstance, float DeltaSeconds);//Offset:Discovery.exe+0x19DEE70
	void Internal_OnStateMachineTransitionTaken(class USMInstance* SMInstance, const struct FSMTransitionInfo& Transition);//Offset:Discovery.exe+0x19DEBC0
	void Internal_OnStateMachineStopped(class USMInstance* SMInstance);//Offset:Discovery.exe+0x19DEDD0
	void Internal_OnStateMachineStateChanged(class USMInstance* SMInstance, const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState);//Offset:Discovery.exe+0x19DE520
	void Internal_OnStateMachineStarted(class USMInstance* SMInstance);//Offset:Discovery.exe+0x19DEF50
	void Internal_OnStateMachineInitializedEvent(class USMInstance* Instance);//Offset:Discovery.exe+0x19DEFF0
};


// Class EmbarkGameplay.EmbarkSpringArmComponent
// 0x0010 (0x03E0 - 0x03D0)
class UEmbarkSpringArmComponent : public USpringArmComponent
{
public:
	TArray<class AActor*>                              IgnoreCollisionActors;                                    // 0x03D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkSpringArmComponent"));
		return ptr;
	}


	void SetIgnoreCollisionActors(TArray<class AActor*> InActors);//Offset:Discovery.exe+0x19DFB90
	void RemoveActorFromIgnoreCollisionActors(class AActor* InActor);//Offset:Discovery.exe+0x19DFA40
	void GetIgnoreCollisionActors(TArray<class AActor*>* OutActors);//Offset:Discovery.exe+0x19DFAE0
};


// Class EmbarkGameplay.EmbarkSquadMember
// 0x0048 (0x00A0 - 0x0058)
class UEmbarkSquadMember : public UReplicatedSubobject
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0058(0x0030) (BlueprintVisible, Net)
	class APlayerState*                                PlayerState;                                              // 0x0088(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkSquadMember"));
		return ptr;
	}


	void OnRep_UniqueId();//Offset:Discovery.exe+0x19E0010
	void OnRep_PlayerState();//Offset:Discovery.exe+0x19E0010
};


// Class EmbarkGameplay.EmbarkSquad
// 0x0040 (0x0308 - 0x02C8)
class AEmbarkSquad : public AActor
{
public:
	struct FString                                     Title;                                                    // 0x02C8(0x0010) (BlueprintVisible, Net, ZeroConstructor, Transient)
	TArray<class UEmbarkSquadMember*>                  Members;                                                  // 0x02D8(0x0010) (BlueprintVisible, Net, ZeroConstructor, Transient)
	struct FString                                     SquadId;                                                  // 0x02E8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSquadChanged;                                           // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkSquad"));
		return ptr;
	}


	void OnRep_Title();//Offset:Discovery.exe+0x19E04A0
	void OnRep_SquadId();//Offset:Discovery.exe+0x19E04A0
	void OnRep_Members();//Offset:Discovery.exe+0x19E04C0
	void OnMod_Members();//Offset:Discovery.exe+0x19E04A0
};


// Class EmbarkGameplay.SquadStatics
// 0x0000 (0x0028 - 0x0028)
class USquadStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.SquadStatics"));
		return ptr;
	}


	bool STATIC_TryParseSquadJson(class UObject* WorldContextObject, const struct FString& Json, TArray<class AEmbarkSquad*>* OutSquads);//Offset:Discovery.exe+0x19E0A20
	TArray<class AEmbarkSquad*> STATIC_ParseSquadJson(class UObject* WorldContextObject, const struct FString& Json);//Offset:Discovery.exe+0x19E0B80
};


// Class EmbarkGameplay.EmbarkStaticMeshComponent
// 0x0000 (0x0620 - 0x0620)
class UEmbarkStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkStaticMeshComponent"));
		return ptr;
	}


	void SetRenderUpdateEnabled(bool bEnabled);//Offset:Discovery.exe+0x19DB440
};


// Class EmbarkGameplay.EmbarkWatermarkSubsystem
// 0x0008 (0x0038 - 0x0030)
class UEmbarkWatermarkSubsystem : public UScriptGameInstanceSubsystem
{
public:
	class UClass*                                      WatermarkWidgetClass;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkWatermarkSubsystem"));
		return ptr;
	}

};


// Class EmbarkGameplay.EmbarkWorldAssociatedObject
// 0x0000 (0x0028 - 0x0028)
class UEmbarkWorldAssociatedObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkWorldAssociatedObject"));
		return ptr;
	}

};


// Class EmbarkGameplay.WorldCompositionMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UWorldCompositionMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.WorldCompositionMixinLibrary"));
		return ptr;
	}


	int STATIC_GetStreamingDistance(class UWorldComposition* WorldComposition, const struct FName& PackageName);//Offset:Discovery.exe+0x19E14B0
	struct FIntVector STATIC_GetPosition(class UWorldComposition* WorldComposition, const struct FName& PackageName);//Offset:Discovery.exe+0x19E17B0
	struct FString STATIC_GetParentTilePackageName(class UWorldComposition* WorldComposition, const struct FName& PackageName);//Offset:Discovery.exe+0x19E1670
	struct FString STATIC_GetLayerName(class UWorldComposition* WorldComposition, const struct FName& PackageName);//Offset:Discovery.exe+0x19E1670
	bool STATIC_GetDistanceStreamingEnabled(class UWorldComposition* WorldComposition, const struct FName& PackageName);//Offset:Discovery.exe+0x19E1590
	struct FIntVector STATIC_GetAbsolutePosition(class UWorldComposition* WorldComposition, const struct FName& PackageName);//Offset:Discovery.exe+0x19E17B0
};


// Class EmbarkGameplay.EmbarkWorldSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkWorldSubsystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkWorldSubsystem"));
		return ptr;
	}


	void OnInitialized();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitialized();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkGameplay.EmbarkTickableWorldSubsystem
// 0x0000 (0x0040 - 0x0040)
class UEmbarkTickableWorldSubsystem : public UTickableWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.EmbarkTickableWorldSubsystem"));
		return ptr;
	}


	void OnTick(float DeltaTime);//Offset:Discovery.exe+0x327F8B0
	void OnInitialized();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitialized();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkGameplay.GameStateBaseMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameStateBaseMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.GameStateBaseMixinLibrary"));
		return ptr;
	}


	void STATIC_RemovePlayerState(class AGameStateBase* GameStateBase, class APlayerState* PlayerState);//Offset:Discovery.exe+0x19E21A0
	void STATIC_AddPlayerState(class AGameStateBase* GameStateBase, class APlayerState* PlayerState);//Offset:Discovery.exe+0x19E22B0
};


// Class EmbarkGameplay.LevelSequenceLibrary
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGameplay.LevelSequenceLibrary"));
		return ptr;
	}


	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayerWithClass(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class UClass* LevelSequenceActorType, class ALevelSequenceActor** OutActor);//Offset:Discovery.exe+0x19E26B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
