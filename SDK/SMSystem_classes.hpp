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

// Class SMSystem.SMInstance
// 0x06D0 (0x06F8 - 0x0028)
class USMInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	TArray<struct FSMReferenceContainer>               ReplicatedReferences;                                     // 0x0080(0x0010) (Net, ZeroConstructor, Transient)
	struct FGuid                                       RootStateMachineGuid;                                     // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPreStateMachineInitializedEvent;                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineInitializedEvent;                           // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStartedEvent;                               // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineUpdatedEvent;                               // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStoppedEvent;                               // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineShutdownEvent;                              // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineTransitionTakenEvent;                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStateChangedEvent;                          // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStateStartedEvent;                          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USMStateMachineComponent*                    ComponentOwner;                                           // 0x0130(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class USMStateMachineNetworkedInterface> NetworkInterface;                                         // 0x0138(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0148(0x0140) MISSED OFFSET
	struct FSMStateMachine                             RootStateMachine;                                         // 0x0288(0x02C8)
	class UObject*                                     R_StateMachineContext;                                    // 0x0550(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class USMInstance*                                 ReferenceOwner;                                           // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      StateMachineClass;                                        // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAutoManageTime : 1;                                      // 0x0568(0x0001) (Edit, Net)
	unsigned char                                      bStopOnEndState : 1;                                      // 0x0568(0x0001) (Edit, Net)
	unsigned char                                      bCanEverTick : 1;                                         // 0x0568(0x0001) (Edit, Net)
	unsigned char                                      bCanTickWhenPaused : 1;                                   // 0x0568(0x0001) (Edit, Net)
	unsigned char                                      bTickRegistered : 1;                                      // 0x0568(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTickBeforeInitialize : 1;                                // 0x0568(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTickBeforeBeginPlay : 1;                                 // 0x0568(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0569(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x056C(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0570(0x0010) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x0580(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESMStateMachineInput>                  AutoReceiveInput;                                         // 0x0588(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	int                                                InputPriority;                                            // 0x058C(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBlockInput : 1;                                          // 0x0590(0x0001) (Edit, Net)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	TArray<struct FSMStateHistory>                     StateHistory;                                             // 0x0598(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
	int                                                StateHistoryMaxCount;                                     // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableLogging : 1;                                       // 0x05AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bLogStateChange : 1;                                      // 0x05AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bLogTransitionTaken : 1;                                  // 0x05AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanReplicateAsReference : 1;                             // 0x05AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	TMap<struct FGuid, struct FGuid>                   PathGuidRedirectMap;                                      // 0x05B0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGuid, struct FSMGuidMap>              RootPathGuidCache;                                        // 0x0600(0x0050)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0650(0x0010) MISSED OFFSET
	TArray<class UObject*>                             ReferenceTemplates;                                       // 0x0660(0x0010) (ExportObject, ZeroConstructor, DuplicateTransient)
	TMap<struct FGuid, struct FSMExposedNodeFunctions> NodeExposedFunctions;                                     // 0x0670(0x0050)
	unsigned char                                      UnknownData08[0x38];                                      // 0x06C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMInstance"));
		return ptr;
	}


	void Update(float DeltaSeconds);//Offset:Discovery.exe+0x21BEF50
	void TryGetTransitionInfo(const struct FGuid& Guid, struct FSMTransitionInfo* TransitionInfo, bool* bSuccess);//Offset:Discovery.exe+0x21BD980
	void TryGetStateInfo(const struct FGuid& Guid, struct FSMStateInfo* StateInfo, bool* bSuccess);//Offset:Discovery.exe+0x21BDB10
	void TryGetNestedActiveState(struct FSMStateInfo* FoundState, bool* bSuccess);//Offset:Discovery.exe+0x21BE110
	void Tick(float DeltaTime);//Offset:Discovery.exe+0x21BF160
	bool TakeTransitionChain(TArray<class USMTransitionInstance*> InTransitionChain);//Offset:Discovery.exe+0x21BEAB0
	void SwitchActiveStateByQualifiedName(const struct FString& InFullPath, bool bDeactivateOtherStates);//Offset:Discovery.exe+0x21BE8A0
	void SwitchActiveState(class USMStateInstance_Base* NewStateInstance, bool bDeactivateOtherStates);//Offset:Discovery.exe+0x21BE9A0
	void Stop();//Offset:Discovery.exe+0x21BEF30
	void StartWithNewContext(class UObject* Context);//Offset:Discovery.exe+0x21BEDF0
	void Start();//Offset:Discovery.exe+0x21BEFF0
	void Shutdown();//Offset:Discovery.exe+0x21BEEF0
	void SetTickOnManualUpdate(bool Value);//Offset:Discovery.exe+0x21BD2A0
	void SetTickInterval(float Value);//Offset:Discovery.exe+0x21BD090
	void SetTickBeforeBeginPlay(bool Value);//Offset:Discovery.exe+0x21BD130
	void SetStopOnEndState(bool Value);//Offset:Discovery.exe+0x21BCEF0
	void SetStateMachineClass(class UClass* NewStateMachineClass);//Offset:Discovery.exe+0x21BC7E0
	void SetStateHistoryMaxCount(int NewSize);//Offset:Discovery.exe+0x21BCCE0
	void SetGuidRedirectMap(TMap<struct FGuid, struct FGuid> InGuidMap);//Offset:Discovery.exe+0x21BD480
	void SetContext(class UObject* Context);//Offset:Discovery.exe+0x21BCDF0
	void SetCanTickWhenPaused(bool Value);//Offset:Discovery.exe+0x21BD1D0
	void SetCanEverTick(bool Value);//Offset:Discovery.exe+0x21BD340
	void SetAutoManageTime(bool Value);//Offset:Discovery.exe+0x21BCFF0
	void RunUpdateAsReference(float DeltaSeconds);//Offset:Discovery.exe+0x21BC270
	void Restart();//Offset:Discovery.exe+0x21BEF10
	void ReplicatedStop();//Offset:Discovery.exe+0x21BEEB0
	void ReplicatedStart();//Offset:Discovery.exe+0x21BEED0
	void ReplicatedRestart();//Offset:Discovery.exe+0x21BEE90
	void REP_OnReplicatedReferencesLoaded();//Offset:Discovery.exe+0x21BC930
	void PreloadAllNodeInstances();//Offset:Discovery.exe+0x21BEA90
	void OnStateMachineUpdate(float DeltaSeconds);//Offset:Discovery.exe+0x21BC740
	void OnStateMachineTransitionTaken(const struct FSMTransitionInfo& Transition);//Offset:Discovery.exe+0x21BC660
	void OnStateMachineStop();//Offset:Discovery.exe+0x155C0A0
	void OnStateMachineStateStarted(const struct FSMStateInfo& State);//Offset:Discovery.exe+0x21BC310
	void OnStateMachineStateChanged(const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState);//Offset:Discovery.exe+0x21BC450
	void OnStateMachineStart();//Offset:Discovery.exe+0x1DC09C0
	void OnStateMachineShutdown();//Offset:Discovery.exe+0x155C080
	void OnStateMachineInitialStateLoaded(const struct FGuid& StateGuid);//Offset:Discovery.exe+0x21BE540
	void OnStateMachineInitialized();//Offset:Discovery.exe+0x11BDAF0
	void OnPreStateMachineInitialized();//Offset:Discovery.exe+0x11B97D0
	void OnContextPawnRestarted(class APawn* Pawn);//Offset:Discovery.exe+0x21BBF80
	void LoadFromState(const struct FGuid& FromGuid, bool bAllParents, bool bNotify);//Offset:Discovery.exe+0x21BE750
	void LoadFromMultipleStates(TArray<struct FGuid> FromGuids, bool bNotify);//Offset:Discovery.exe+0x21BE640
	void K2_TryGetNetworkInterface(TScriptInterface<class USMStateMachineNetworkedInterface>* Interface, bool* bIsValid);//Offset:Discovery.exe+0x21BC9E0
	void K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo);//Offset:Discovery.exe+0x21BE440
	bool IsTickableWhenPaused();//Offset:Discovery.exe+0x21BF100
	bool IsTickable();//Offset:Discovery.exe+0x21BF130
	bool IsInitializingAsync();//Offset:Discovery.exe+0x21BC950
	bool IsInitialized();//Offset:Discovery.exe+0x21BC980
	bool IsInEndState();//Offset:Discovery.exe+0x21BCE90
	bool IsActive();//Offset:Discovery.exe+0x21BD410
	void Internal_Update(float DeltaSeconds);//Offset:Discovery.exe+0x21BC1D0
	void Internal_EventUpdate();//Offset:Discovery.exe+0x21BC100
	void Internal_EventCleanup(const struct FGuid& PathGuid);//Offset:Discovery.exe+0x21BC050
	bool Internal_EvaluateAndTakeTransitionChainByGuid(const struct FGuid& PathGuid);//Offset:Discovery.exe+0x21BC120
	void Initialize(class UObject* Context);//Offset:Discovery.exe+0x21BF010
	bool HasStarted();//Offset:Discovery.exe+0x21BC9B0
	class USMTransitionInstance* GetTransitionInstanceByGuid(const struct FGuid& Guid);//Offset:Discovery.exe+0x21BD770
	float GetTickInterval();//Offset:Discovery.exe+0x21BCF90
	bool GetStopOnEndState();//Offset:Discovery.exe+0x21BCEC0
	class UClass* GetStateMachineClass();//Offset:Discovery.exe+0x21BC890
	class USMStateInstance_Base* GetStateInstanceByQualifiedName(const struct FString& InFullPath);//Offset:Discovery.exe+0x21BD610
	class USMStateInstance_Base* GetStateInstanceByGuid(const struct FGuid& Guid);//Offset:Discovery.exe+0x21BD820
	int GetStateHistoryMaxCount();//Offset:Discovery.exe+0x21BCCB0
	TArray<struct FSMStateHistory> GetStateHistory();//Offset:Discovery.exe+0x21BCD80
	class USMStateInstance_Base* GetSingleActiveStateInstance(bool bCheckNested);//Offset:Discovery.exe+0x21BDE90
	struct FGuid GetSingleActiveStateGuid(bool bCheckNested);//Offset:Discovery.exe+0x21BDFE0
	class USMStateMachineInstance* GetRootStateMachineNodeInstance();//Offset:Discovery.exe+0x21BD440
	class USMStateMachineInstance* GetRootStateMachineInstance();//Offset:Discovery.exe+0x21BD440
	class USMInstance* GetReferenceOwner();//Offset:Discovery.exe+0x21BC900
	class USMInstance* GetReferencedInstanceByGuid(const struct FGuid& Guid);//Offset:Discovery.exe+0x21BD8D0
	class USMInstance* GetPrimaryReferenceOwner();//Offset:Discovery.exe+0x21BC8C0
	class USMNodeInstance* GetNodeInstanceByGuid(const struct FGuid& Guid);//Offset:Discovery.exe+0x21BD6C0
	TScriptInterface<class USMStateMachineNetworkedInterface> GetNetworkInterface();//Offset:Discovery.exe+0x21BCAE0
	struct FString GetNestedActiveStateName();//Offset:Discovery.exe+0x21BE340
	struct FGuid GetNestedActiveStateGuid();//Offset:Discovery.exe+0x21BE2A0
	class USMInstance* GetMasterReferenceOwner();//Offset:Discovery.exe+0x21BC8C0
	class UInputComponent* GetInputComponent();//Offset:Discovery.exe+0x21BC020
	TMap<struct FGuid, struct FGuid> GetGuidRedirectMap();//Offset:Discovery.exe+0x21BD5E0
	class UObject* GetContext();//Offset:Discovery.exe+0x21BF0D0
	class USMStateMachineComponent* GetComponentOwner();//Offset:Discovery.exe+0x21BF0B0
	void GetAllTransitionInstances(TArray<class USMTransitionInstance*>* TransitionInstances);//Offset:Discovery.exe+0x21BCB30
	void GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances);//Offset:Discovery.exe+0x21BCBE0
	TArray<class USMInstance*> GetAllReferencedInstances(bool bIncludeChildren);//Offset:Discovery.exe+0x21BDD00
	TArray<struct FGuid> GetAllCurrentStateGuids();//Offset:Discovery.exe+0x21BE090
	void GetAllActiveStateInstances(TArray<class USMStateInstance_Base*>* ActiveStateInstances);//Offset:Discovery.exe+0x21BDDE0
	void GetAllActiveStateGuids(TArray<struct FGuid>* ActiveGuids);//Offset:Discovery.exe+0x21BDF30
	struct FString GetActiveStateName();//Offset:Discovery.exe+0x21BE3C0
	class USMStateInstance_Base* GetActiveStateInstance(bool bCheckNested);//Offset:Discovery.exe+0x21BDE90
	struct FGuid GetActiveStateGuid();//Offset:Discovery.exe+0x21BE2F0
	void EvaluateTransitions();//Offset:Discovery.exe+0x21BEDD0
	bool EvaluateAndTakeTransitionChain(class USMTransitionInstance* InFirstTransitionInstance);//Offset:Discovery.exe+0x21BED30
	bool EvaluateAndFindTransitionChain(class USMTransitionInstance* InFirstTransitionInstance, bool bRequirePreviousStateActive, TArray<class USMTransitionInstance*>* OutTransitionChain, class USMStateInstance_Base** OutDestinationState);//Offset:Discovery.exe+0x21BEB70
	void ClearStateHistory();//Offset:Discovery.exe+0x21BCC90
	void ClearLoadedStates();//Offset:Discovery.exe+0x21BE5F0
	bool CanTickOnManualUpdate();//Offset:Discovery.exe+0x21BD270
	bool CanEverTick();//Offset:Discovery.exe+0x21BD3E0
	bool CanAutoManageTime();//Offset:Discovery.exe+0x21BCFC0
	bool AreInitialStatesSetFromLoad();//Offset:Discovery.exe+0x21BE610
};


// Class SMSystem.SMEditorGraphNodeInterface
// 0x0000 (0x0028 - 0x0028)
class USMEditorGraphNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMEditorGraphNodeInterface"));
		return ptr;
	}


	TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> GetEditorGraphPropertyAsArray(const struct FName& PropertyName, class USMNodeInstance* NodeInstance, int ArrayIndex);//Offset:Discovery.exe+0x21B9030
	TScriptInterface<class USMEditorGraphPropertyNodeInterface> GetEditorGraphProperty(const struct FName& PropertyName, class USMNodeInstance* NodeInstance, int ArrayIndex);//Offset:Discovery.exe+0x21B91A0
	TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> GetAllEditorGraphProperties(class USMNodeInstance* NodeInstance);//Offset:Discovery.exe+0x21B8F50
};


// Class SMSystem.SMEditorGraphPropertyNodeInterface
// 0x0000 (0x0028 - 0x0028)
class USMEditorGraphPropertyNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMEditorGraphPropertyNodeInterface"));
		return ptr;
	}


	void SetNotificationAndHighlight(bool bEnable, enum class ESMLogType Severity, const struct FString& Message, bool bClearOnCompile);//Offset:Discovery.exe+0x21B97A0
	void SetNotification(bool bEnable, enum class ESMLogType Severity, const struct FString& Message, bool bClearOnCompile);//Offset:Discovery.exe+0x21B9930
	void SetHighlight(bool bEnable, const struct FLinearColor& Color, bool bClearOnCompile);//Offset:Discovery.exe+0x21B9AC0
	void ResetProperty();//Offset:Discovery.exe+0x21B9780
};


// Class SMSystem.SMInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class USMInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMInstanceInterface"));
		return ptr;
	}

};


// Class SMSystem.SMStateMachineInterface
// 0x0000 (0x0028 - 0x0028)
class USMStateMachineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMStateMachineInterface"));
		return ptr;
	}

};


// Class SMSystem.SMStateMachineNetworkedInterface
// 0x0000 (0x0028 - 0x0028)
class USMStateMachineNetworkedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMStateMachineNetworkedInterface"));
		return ptr;
	}


	bool IsSimulatedProxy();//Offset:Discovery.exe+0x21BA180
	bool IsConfiguredForNetworking();//Offset:Discovery.exe+0x21BA1E0
	bool HasAuthority();//Offset:Discovery.exe+0x21BA1B0
};


// Class SMSystem.SMBlueprint
// 0x0008 (0x00A8 - 0x00A0)
class USMBlueprint : public UBlueprint
{
public:
	int                                                AssetVersion;                                             // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PluginVersion;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMBlueprint"));
		return ptr;
	}

};


// Class SMSystem.SMNodeBlueprint
// 0x0008 (0x00A8 - 0x00A0)
class USMNodeBlueprint : public UBlueprint
{
public:
	int                                                AssetVersion;                                             // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PluginVersion;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMNodeBlueprint"));
		return ptr;
	}

};


// Class SMSystem.SMBlueprintGeneratedClass
// 0x0010 (0x0398 - 0x0388)
class USMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	struct FGuid                                       RootGuid;                                                 // 0x0388(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class SMSystem.SMNodeBlueprintGeneratedClass
// 0x0000 (0x0388 - 0x0388)
class USMNodeBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMNodeBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class SMSystem.SMNodeInstance
// 0x0080 (0x00A8 - 0x0028)
class USMNodeInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bHasGameConstructionScripts;                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvalDefaultProperties : 1;                               // 0x0031(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAutoEvalExposedProperties : 1;                           // 0x0031(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UTexture2D*                                  NodeIcon;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   NodeIconSize;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NodeIconTintColor;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetVariablesOnInitialize;                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsThreadSafe : 1;                                        // 0x0061(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x0068(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESMNodeInput>                          AutoReceiveInput;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                InputPriority;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bBlockInput : 1;                                          // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x1F];                                      // 0x0079(0x001F) MISSED OFFSET
	struct FGuid                                       TemplateGuid;                                             // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMNodeInstance"));
		return ptr;
	}


	void WithExecutionEnvironment(enum class ESMExecutionEnvironment* ExecutionEnvironment);//Offset:Discovery.exe+0x21C62A0
	void SetVariableReadOnly(const struct FName& VariableName, bool bSetIsReadOnly);//Offset:Discovery.exe+0x21C6340
	void SetVariableHidden(const struct FName& VariableName, bool bSetHidden);//Offset:Discovery.exe+0x21C6340
	void SetUseCustomIcon(bool bValue);//Offset:Discovery.exe+0x1A6CDB0
	void SetUseCustomColor(bool bValue);//Offset:Discovery.exe+0x1A6CDB0
	void SetNodeDescriptionText(const struct FText& NewDescription);//Offset:Discovery.exe+0x21C6560
	void SetNodeColor(const struct FLinearColor& NewColor);//Offset:Discovery.exe+0x21C6430
	void SetDisplayName(const struct FName& NewDisplayName);//Offset:Discovery.exe+0x21C6650
	void ResetVariables();//Offset:Discovery.exe+0x21C6130
	void OnRootStateMachineStop();//Offset:Discovery.exe+0x11BA100
	void OnRootStateMachineStart();//Offset:Discovery.exe+0x1DB5730
	void OnPreCompileValidate(class USMCompilerLog* CompilerLog);//Offset:Discovery.exe+0x21C66F0
	void OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController);//Offset:Discovery.exe+0x21C6050
	void K2_TryGetOwningEditorGraphNode(TScriptInterface<class USMEditorGraphNodeInterface>* EditorNode, enum class ESMValidEditorNode* IsValidNode);//Offset:Discovery.exe+0x21C6150
	bool IsInitializedAndReadyForInputEvents();//Offset:Discovery.exe+0x21C6790
	bool IsInitialized();//Offset:Discovery.exe+0x21C67C0
	bool IsInEndState();//Offset:Discovery.exe+0x1DC1450
	bool IsEditorExecution();//Offset:Discovery.exe+0x1DB6450
	bool IsActive();//Offset:Discovery.exe+0x21C6A20
	bool HasUpdated();//Offset:Discovery.exe+0x1DC1480
	float GetTimeInState();//Offset:Discovery.exe+0x21C6A50
	class USMInstance* GetStateMachineInstance(bool bTopMostInstance);//Offset:Discovery.exe+0x21C6B00
	class USMStateMachineInstance* GetOwningStateMachineNodeInstance();//Offset:Discovery.exe+0x21C6AD0
	TScriptInterface<class USMEditorGraphNodeInterface> GetOwningEditorGraphNode();//Offset:Discovery.exe+0x21C6250
	struct FVector2D GetNodePosition();//Offset:Discovery.exe+0x21C67F0
	struct FString GetNodeName();//Offset:Discovery.exe+0x21C69B0
	struct FLinearColor GetNodeIconTintColor();//Offset:Discovery.exe+0x21C68C0
	struct FVector2D GetNodeIconSize();//Offset:Discovery.exe+0x21C6920
	class UTexture2D* GetNodeIcon();//Offset:Discovery.exe+0x1DB6640
	struct FText GetNodeDescriptionText();//Offset:Discovery.exe+0x21C64D0
	TScriptInterface<class USMStateMachineNetworkedInterface> GetNetworkInterface();//Offset:Discovery.exe+0x21C6A80
	class UInputComponent* GetInputComponent();//Offset:Discovery.exe+0x21C6030
	struct FGuid GetGuid();//Offset:Discovery.exe+0x21C6980
	class UObject* GetContext();//Offset:Discovery.exe+0x21C6BA0
	void EvaluateGraphProperties(bool bTargetOnly);//Offset:Discovery.exe+0x21C6820
	void ConstructionScript();//Offset:Discovery.exe+0x155C080
};


// Class SMSystem.SMStateInstance_Base
// 0x0048 (0x00F0 - 0x00A8)
class USMStateInstance_Base : public USMNodeInstance
{
public:
	unsigned char                                      bEvalGraphsOnStart : 1;                                   // 0x00A8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEvalGraphsOnUpdate : 1;                                  // 0x00A8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEvalGraphsOnEnd : 1;                                     // 0x00A8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEvalGraphsOnRootStateMachineStart : 1;                   // 0x00A8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEvalGraphsOnRootStateMachineStop : 1;                    // 0x00A8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A9(0x0001) MISSED OFFSET
	unsigned char                                      bAlwaysUpdate : 1;                                        // 0x00AA(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDisableTickTransitionEvaluation : 1;                     // 0x00AA(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDefaultToParallel : 1;                                   // 0x00AA(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowParallelReentry : 1;                                // 0x00AA(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bStayActiveOnStateChange : 1;                             // 0x00AA(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEvalTransitionsOnStart : 1;                              // 0x00AA(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bExcludeFromAnyState : 1;                                 // 0x00AA(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00AB(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateBeginEvent;                                        // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostStateBeginEvent;                                    // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateUpdateEvent;                                       // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateEndEvent;                                          // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMStateInstance_Base"));
		return ptr;
	}


	bool SwitchToLinkedStateByTransition(class USMTransitionInstance* TransitionInstance, bool bRequireTransitionToPass, bool bActivateNow);//Offset:Discovery.exe+0x21CB2F0
	bool SwitchToLinkedStateByName(const struct FString& NextStateName, bool bRequireTransitionToPass, bool bActivateNow);//Offset:Discovery.exe+0x21CB430
	bool SwitchToLinkedState(class USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass, bool bActivateNow);//Offset:Discovery.exe+0x21CB580
	void SetStayActiveOnStateChange(bool bValue);//Offset:Discovery.exe+0x21CAAA0
	void SetExcludeFromAnyState(bool bValue);//Offset:Discovery.exe+0x21CA900
	void SetEvalTransitionsOnStart(bool bValue);//Offset:Discovery.exe+0x21CA9D0
	void SetDisableTickTransitionEvaluation(bool bValue);//Offset:Discovery.exe+0x21CAD10
	void SetDefaultToParallel(bool bValue);//Offset:Discovery.exe+0x21CAC40
	void SetAlwaysUpdate(bool bValue);//Offset:Discovery.exe+0x21CADE0
	void SetAllowParallelReentry(bool bValue);//Offset:Discovery.exe+0x21CAB70
	void SetActive(bool bValue, bool bSetAllParents, bool bActivateNow);//Offset:Discovery.exe+0x21CB930
	void OnStateUpdate(float DeltaSeconds);//Offset:Discovery.exe+0x21CBC00
	void OnStateEnd();//Offset:Discovery.exe+0x1DB6730
	void OnStateBegin();//Offset:Discovery.exe+0x1B057D0
	bool IsStateMachine();//Offset:Discovery.exe+0x21CBAA0
	bool IsEntryState();//Offset:Discovery.exe+0x21CBA70
	class USMTransitionInstance* GetTransitionToTake();//Offset:Discovery.exe+0x21CB6C0
	class USMTransitionInstance* GetTransitionByIndex(int Index);//Offset:Discovery.exe+0x21CB250
	bool GetStayActiveOnStateChange();//Offset:Discovery.exe+0x21CAB40
	void GetStateInfo(struct FSMStateInfo* State);//Offset:Discovery.exe+0x21CBAD0
	struct FDateTime GetStartTime();//Offset:Discovery.exe+0x21CAF60
	float GetServerTimeInState(bool* bOutUsedLocalTime);//Offset:Discovery.exe+0x21CAEB0
	class USMStateInstance_Base* GetPreviousStateByName(const struct FString& StateName);//Offset:Discovery.exe+0x21CB050
	class USMTransitionInstance* GetPreviousActiveTransition();//Offset:Discovery.exe+0x21CAFF0
	class USMStateInstance_Base* GetPreviousActiveState();//Offset:Discovery.exe+0x21CB020
	bool GetOutgoingTransitions(bool bExcludeAlwaysFalse, TArray<class USMTransitionInstance*>* Transitions);//Offset:Discovery.exe+0x21CB800
	class USMStateInstance_Base* GetNextStateByTransitionIndex(int Index);//Offset:Discovery.exe+0x21CB1B0
	class USMStateInstance_Base* GetNextStateByName(const struct FString& StateName);//Offset:Discovery.exe+0x21CB100
	bool GetIncomingTransitions(bool bExcludeAlwaysFalse, TArray<class USMTransitionInstance*>* Transitions);//Offset:Discovery.exe+0x21CB6F0
	bool GetExcludeFromAnyState();//Offset:Discovery.exe+0x21CA9A0
	bool GetEvalTransitionsOnStart();//Offset:Discovery.exe+0x21CAA70
	bool GetDisableTickTransitionEvaluation();//Offset:Discovery.exe+0x21CADB0
	bool GetDefaultToParallel();//Offset:Discovery.exe+0x21CACE0
	bool GetAlwaysUpdate();//Offset:Discovery.exe+0x21CAE80
	bool GetAllowParallelReentry();//Offset:Discovery.exe+0x21CAC10
	void EvaluateTransitions();//Offset:Discovery.exe+0x21CB910
	bool AreAllOutgoingTransitionsFromAnAnyState();//Offset:Discovery.exe+0x21CAFC0
	bool AreAllIncomingTransitionsFromAnAnyState();//Offset:Discovery.exe+0x21CAF90
};


// Class SMSystem.SMConduitInstance
// 0x0008 (0x00F8 - 0x00F0)
class USMConduitInstance : public USMStateInstance_Base
{
public:
	bool                                               bEvalGraphsOnInitialize;                                  // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEvalGraphsOnTransitionEval;                              // 0x00F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bEvalWithTransitions : 1;                                 // 0x00F2(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEvaluate : 1;                                         // 0x00F2(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00F3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMConduitInstance"));
		return ptr;
	}


	void SetEvalWithTransitions(bool bValue);//Offset:Discovery.exe+0x21BAA60
	void SetCanEvaluate(bool bValue);//Offset:Discovery.exe+0x21BAB60
	void OnConduitShutdown();//Offset:Discovery.exe+0x21BAC00
	void OnConduitInitialized();//Offset:Discovery.exe+0x21BAC20
	void OnConduitEntered();//Offset:Discovery.exe+0x1B0B410
	bool GetEvalWithTransitions();//Offset:Discovery.exe+0x21BAB00
	bool GetCanEvaluate();//Offset:Discovery.exe+0x21BAB30
	bool CanEnterTransition();//Offset:Discovery.exe+0x1573C90
};


// Class SMSystem.SMCompilerLog
// 0x0000 (0x0028 - 0x0028)
class USMCompilerLog : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMCompilerLog"));
		return ptr;
	}


	void LogProperty(const struct FName& PropertyName, class USMNodeInstance* NodeInstance, const struct FString& Message, enum class ESMCompilerLogType Severity, bool bHighlight, bool bSilent, int ArrayIndex);//Offset:Discovery.exe+0x21C5910
	void Log(enum class ESMCompilerLogType Severity, const struct FString& Message);//Offset:Discovery.exe+0x21C5B90
};


// Class SMSystem.SMRuntimeSettings
// 0x0008 (0x0030 - 0x0028)
class USMRuntimeSettings : public UObject
{
public:
	bool                                               bPreloadDefaultNodes;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMRuntimeSettings"));
		return ptr;
	}

};


// Class SMSystem.SMStateInstance
// 0x0000 (0x00F0 - 0x00F0)
class USMStateInstance : public USMStateInstance_Base
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMStateInstance"));
		return ptr;
	}


	void RemoveStateFromStack(int StackIndex);//Offset:Discovery.exe+0x21CD2F0
	void OnStateShutdown();//Offset:Discovery.exe+0x1B0B410
	void OnStateInitialized();//Offset:Discovery.exe+0x1B00320
	int GetStateStackCount();//Offset:Discovery.exe+0x21CD480
	class USMStateInstance_Base* GetStateInStackByClass(class UClass* StateClass, bool bIncludeChildren);//Offset:Discovery.exe+0x21CD6D0
	class USMStateInstance_Base* GetStateInStack(int Index);//Offset:Discovery.exe+0x21CD7C0
	int GetStateIndexInStack(class USMStateInstance_Base* StateInstance);//Offset:Discovery.exe+0x21CD4B0
	class USMStateInstance_Base* GetStackOwnerInstance();//Offset:Discovery.exe+0x21CD6A0
	void GetAllStateStackInstances(TArray<class USMStateInstance_Base*>* StateStackInstances);//Offset:Discovery.exe+0x21CD860
	void GetAllStatesInStackOfClass(class UClass* StateClass, bool bIncludeChildren, TArray<class USMStateInstance_Base*>* StateStackInstances);//Offset:Discovery.exe+0x21CD550
	void ClearStateStack();//Offset:Discovery.exe+0x155C060
	class USMStateInstance* AddStateToStack(class UClass* StateClass, int StackIndex);//Offset:Discovery.exe+0x21CD390
};


// Class SMSystem.SMEntryStateInstance
// 0x0000 (0x00F0 - 0x00F0)
class USMEntryStateInstance : public USMStateInstance_Base
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMEntryStateInstance"));
		return ptr;
	}

};


// Class SMSystem.SMStateMachineComponent
// 0x0168 (0x0220 - 0x00B8)
class USMStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateMachineInitializedEvent;                           // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStartedEvent;                               // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineUpdatedEvent;                               // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStoppedEvent;                               // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineShutdownEvent;                              // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineTransitionTakenEvent;                       // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStateChangedEvent;                          // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateMachineStateStartedEvent;                          // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0148(0x0050) UNKNOWN PROPERTY: CurrentActorChannels
	unsigned char                                      UnknownData02[0x24];                                      // 0x0198(0x0024) MISSED OFFSET
	unsigned char                                      bAutomaticallyHandleNewConnections : 1;                   // 0x01BC(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01BD(0x0003) MISSED OFFSET
	class UClass*                                      StateMachineClass;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInitializeOnBeginPlay : 1;                               // 0x01C8(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      bStartOnBeginPlay : 1;                                    // 0x01C8(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      bStopOnEndPlay : 1;                                       // 0x01C8(0x0001) (Edit, BlueprintVisible, Net)
	enum class ESMThreadMode                           BeginPlayInitializationMode;                              // 0x01C9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLetInstanceManageTick : 1;                               // 0x01CA(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bReuseInstanceAfterShutdown : 1;                          // 0x01CA(0x0001) (Edit, Net, DisableEditOnInstance)
	TEnumAsByte<ESMNetworkConfigurationType>           StateChangeAuthority;                                     // 0x01CB(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkTransitionConfiguration;                           // 0x01CC(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkTickConfiguration;                                 // 0x01CD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkStateExecution;                                    // 0x01CE(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkStateConfiguration;                                // 0x01CF(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeSimulatedProxies : 1;                             // 0x01D0(0x0001) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	enum class ESMThreadMode                           ReplicatedInitializationMode;                             // 0x01D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkTransitionEnteredConfiguration;                    // 0x01D2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bWaitForTransactionsFromServer : 1;                       // 0x01D3(0x0001) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	unsigned char                                      bTakeTransitionsFromServerOnly : 1;                       // 0x01D3(0x0001)
	unsigned char                                      bHandleControllerChange : 1;                              // 0x01D3(0x0001) (Edit, Net, DisableEditOnInstance)
	unsigned char                                      bCalculateServerTimeForClients : 1;                       // 0x01D3(0x0001) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	unsigned char                                      bUseOwnerNetUpdateFrequency : 1;                          // 0x01D3(0x0001) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              ServerNetUpdateFrequency;                                 // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientNetUpdateFrequency;                                 // 0x01D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAlwaysMulticast : 1;                                     // 0x01DC(0x0001) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	unsigned char                                      bDiscardTransitionsBeforeInitialize : 1;                  // 0x01DC(0x0001) (Deprecated)
	unsigned char                                      bReplicateStatesOnLoad : 1;                               // 0x01DC(0x0001) (Deprecated)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	float                                              TransitionResetTimeSeconds;                               // 0x01E0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MaxTimeToWaitForTransitionUpdate;                         // 0x01E4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USMStateMachineComponent*                    ComponentToCopy;                                          // 0x01E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET
	class USMInstance*                                 R_Instance;                                               // 0x0208(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class USMInstance*                                 InstanceTemplate;                                         // 0x0210(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      bOverrideTick : 1;                                        // 0x0218(0x0001) (Deprecated)
	unsigned char                                      bCanEverTick : 1;                                         // 0x0218(0x0001) (Deprecated)
	unsigned char                                      bOverrideTickInterval : 1;                                // 0x0218(0x0001) (Deprecated)
	unsigned char                                      bCanInstanceNetworkTick : 1;                              // 0x0218(0x0001) (Transient)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x021C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMStateMachineComponent"));
		return ptr;
	}


	void Update(float DeltaSeconds);//Offset:Discovery.exe+0x21D0780
	void Stop();//Offset:Discovery.exe+0x21D0750
	void Start();//Offset:Discovery.exe+0x21D0820
	void Shutdown();//Offset:Discovery.exe+0x21D06F0
	void SetCanInstanceNetworkTick(bool bCanEverTick);//Offset:Discovery.exe+0x21D0450
	void SERVER_Update(float DeltaTime);//Offset:Discovery.exe+0x21CF190
	void SERVER_TakeTransitions(TArray<struct FSMTransitionTransaction> TransitionTransactions);//Offset:Discovery.exe+0x21CEF70
	void SERVER_Stop(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CF0F0
	void SERVER_Start(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CF230
	void SERVER_Shutdown(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CF050
	void SERVER_RequestFullSync(bool bForceFullRefresh);//Offset:Discovery.exe+0x21CEE20
	void SERVER_Initialize(const struct FSMInitializeTransaction& Transaction);//Offset:Discovery.exe+0x21CF2D0
	void SERVER_FullSync(const struct FSMFullSyncTransaction& FullSyncTransaction);//Offset:Discovery.exe+0x21CED60
	void SERVER_ActivateStates(TArray<struct FSMActivateStateTransaction> StateTransactions);//Offset:Discovery.exe+0x21CEEC0
	void Restart();//Offset:Discovery.exe+0x21D0720
	void REP_OnInstanceLoaded();//Offset:Discovery.exe+0x21CED40
	void OnPostInitialize();//Offset:Discovery.exe+0x327F8B0
	void OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController);//Offset:Discovery.exe+0x21CE400
	void MULTICAST_TakeTransitions(TArray<struct FSMTransitionTransaction> Transactions);//Offset:Discovery.exe+0x21CE8A0
	void MULTICAST_Stop(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CEB60
	void MULTICAST_Start(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CECA0
	void MULTICAST_Shutdown(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CEA20
	void MULTICAST_FullSync(const struct FSMFullSyncTransaction& FullSyncTransaction);//Offset:Discovery.exe+0x21CE5A0
	void MULTICAST_ActivateStates(TArray<struct FSMActivateStateTransaction> StateTransactions);//Offset:Discovery.exe+0x21CE710
	void K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo);//Offset:Discovery.exe+0x21D05F0
	bool IsStateMachineActive();//Offset:Discovery.exe+0x21D0590
	bool IsInitialized();//Offset:Discovery.exe+0x21D05C0
	void Internal_OnStateMachineUpdated(class USMInstance* Instance, float DeltaSeconds);//Offset:Discovery.exe+0x21D0100
	void Internal_OnStateMachineTransitionTaken(class USMInstance* Instance, const struct FSMTransitionInfo& Transition);//Offset:Discovery.exe+0x21CFDB0
	void Internal_OnStateMachineStopped(class USMInstance* Instance);//Offset:Discovery.exe+0x21D0060
	void Internal_OnStateMachineStateStarted(class USMInstance* Instance, const struct FSMStateInfo& State);//Offset:Discovery.exe+0x21CF380
	void Internal_OnStateMachineStateChanged(class USMInstance* Instance, const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState);//Offset:Discovery.exe+0x21CF710
	void Internal_OnStateMachineStarted(class USMInstance* Instance);//Offset:Discovery.exe+0x21D01E0
	void Internal_OnStateMachineShutdown(class USMInstance* Instance);//Offset:Discovery.exe+0x21CFFC0
	void Internal_OnReplicatedInstanceInitialized(class USMInstance* Instance);//Offset:Discovery.exe+0x21D0280
	void Internal_OnInstanceInitializedAsync(class USMInstance* Instance);//Offset:Discovery.exe+0x21D0320
	void Initialize(class UObject* Context);//Offset:Discovery.exe+0x21D0850
	class AActor* GetTopMostParentActor();//Offset:Discovery.exe+0x21D0420
	class USMInstance* GetInstance();//Offset:Discovery.exe+0x21D03F0
	class UObject* GetContextForInitialization();//Offset:Discovery.exe+0x21D03C0
	void CopySettingsFromOtherComponent(class USMStateMachineComponent* OtherComponent);//Offset:Discovery.exe+0x21D04F0
	void CLIENT_TakeTransitions(TArray<struct FSMTransitionTransaction> Transactions);//Offset:Discovery.exe+0x21CE7C0
	void CLIENT_Stop(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CEAC0
	void CLIENT_Start(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CEC00
	void CLIENT_Shutdown(const struct FSMTransaction_Base& Transaction);//Offset:Discovery.exe+0x21CE980
	void CLIENT_FullSync(const struct FSMFullSyncTransaction& FullSyncTransaction);//Offset:Discovery.exe+0x21CE4E0
	void CLIENT_ActivateStates(TArray<struct FSMActivateStateTransaction> StateTransactions);//Offset:Discovery.exe+0x21CE660
};


// Class SMSystem.SMStateMachineInstance
// 0x0008 (0x00F8 - 0x00F0)
class USMStateMachineInstance : public USMStateInstance_Base
{
public:
	unsigned char                                      bWaitForEndState : 1;                                     // 0x00F0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bReuseCurrentState : 1;                                   // 0x00F0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bReuseIfNotEndState : 1;                                  // 0x00F0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMStateMachineInstance"));
		return ptr;
	}


	void SetWaitForEndState(bool bValue);//Offset:Discovery.exe+0x21D49B0
	void SetReuseIfNotEndState(bool bValue);//Offset:Discovery.exe+0x21D4810
	void SetReuseCurrentState(bool bValue);//Offset:Discovery.exe+0x21D48E0
	void OnStateShutdown();//Offset:Discovery.exe+0x21BAC00
	void OnStateMachineCompleted();//Offset:Discovery.exe+0x1B00320
	void OnStateInitialized();//Offset:Discovery.exe+0x21BAC20
	void OnEndStateReached();//Offset:Discovery.exe+0x1B0B410
	bool GetWaitForEndState();//Offset:Discovery.exe+0x21D4A50
	class USMInstance* GetStateMachineReference();//Offset:Discovery.exe+0x21D4A80
	bool GetReuseIfNotEndState();//Offset:Discovery.exe+0x21D48B0
	bool GetReuseCurrentState();//Offset:Discovery.exe+0x21D4980
	void GetEntryStates(TArray<class USMStateInstance_Base*>* EntryStates);//Offset:Discovery.exe+0x21D4B60
	class USMStateInstance_Base* GetContainedStateByName(const struct FString& StateName);//Offset:Discovery.exe+0x21D4C10
	void GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances);//Offset:Discovery.exe+0x21D4CC0
	void GetActiveStates(TArray<class USMStateInstance_Base*>* ActiveStates);//Offset:Discovery.exe+0x21D4AB0
};


// Class SMSystem.SMTransitionInstance
// 0x0018 (0x00C0 - 0x00A8)
class USMTransitionInstance : public USMNodeInstance
{
public:
	int                                                PriorityOrder;                                            // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRunParallel : 1;                                         // 0x00AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEvalIfNextStateActive : 1;                               // 0x00AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEvaluate : 1;                                         // 0x00AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEvaluateFromEvent : 1;                                // 0x00AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEvalWithStartState : 1;                               // 0x00AC(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTransitionEnteredEvent;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMTransitionInstance"));
		return ptr;
	}


	void SetRunParallel(bool bValue);//Offset:Discovery.exe+0x21D6150
	void SetPriorityOrder(int Value);//Offset:Discovery.exe+0x21D6220
	void SetEvalIfNextStateActive(bool bValue);//Offset:Discovery.exe+0x21D6080
	void SetCanEvalWithStartState(bool bValue);//Offset:Discovery.exe+0x21D5EE0
	void SetCanEvaluateFromEvent(bool bValue);//Offset:Discovery.exe+0x21D5FB0
	void SetCanEvaluate(bool bValue);//Offset:Discovery.exe+0x21D6320
	void OnTransitionShutdown();//Offset:Discovery.exe+0x1B00320
	void OnTransitionInitialized();//Offset:Discovery.exe+0x1DB6730
	void OnTransitionEntered();//Offset:Discovery.exe+0x1B057F0
	bool IsTransitionFromLinkState();//Offset:Discovery.exe+0x21D67B0
	bool IsTransitionFromAnyState();//Offset:Discovery.exe+0x21D67E0
	int GetTransitionStackCount();//Offset:Discovery.exe+0x21CD480
	class USMTransitionInstance* GetTransitionInStackByClass(class UClass* TransitionClass, bool bIncludeChildren);//Offset:Discovery.exe+0x21D6540
	class USMTransitionInstance* GetTransitionInStack(int Index);//Offset:Discovery.exe+0x21D6630
	void GetTransitionInfo(struct FSMTransitionInfo* Transition);//Offset:Discovery.exe+0x21D6870
	int GetTransitionIndexInStack(class USMTransitionInstance* TransitionInstance);//Offset:Discovery.exe+0x21CD4B0
	class USMTransitionInstance* GetStackOwnerInstance();//Offset:Discovery.exe+0x21D6510
	class USMStateInstance_Base* GetSourceStateForActiveTransition();//Offset:Discovery.exe+0x21D6970
	struct FDateTime GetServerTimestamp();//Offset:Discovery.exe+0x21D6840
	bool GetRunParallel();//Offset:Discovery.exe+0x21D61F0
	int GetPriorityOrder();//Offset:Discovery.exe+0x21D62C0
	class USMStateInstance_Base* GetPreviousStateInstance();//Offset:Discovery.exe+0x21D69D0
	class USMStateInstance_Base* GetNextStateInstance();//Offset:Discovery.exe+0x21D69A0
	bool GetEvalIfNextStateActive();//Offset:Discovery.exe+0x21D6120
	class USMStateInstance_Base* GetDestinationStateForActiveTransition();//Offset:Discovery.exe+0x21D6940
	bool GetCanEvalWithStartState();//Offset:Discovery.exe+0x21D5F80
	bool GetCanEvaluateFromEvent();//Offset:Discovery.exe+0x21D6050
	bool GetCanEvaluate();//Offset:Discovery.exe+0x21D62F0
	void GetAllTransitionStackInstances(TArray<class USMTransitionInstance*>* TransitionStackInstances);//Offset:Discovery.exe+0x21D66D0
	void GetAllTransitionsInStackOfClass(class UClass* TransitionClass, bool bIncludeChildren, TArray<class USMTransitionInstance*>* TransitionStackInstances);//Offset:Discovery.exe+0x21D63C0
	bool EvaluateFromManuallyBoundEvent();//Offset:Discovery.exe+0x21D6780
	bool DoesTransitionPass();//Offset:Discovery.exe+0x21D6810
	bool CanEnterTransition();//Offset:Discovery.exe+0x1DC15D0
};


// Class SMSystem.SMBlueprintUtils
// 0x0000 (0x0028 - 0x0028)
class USMBlueprintUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMSystem.SMBlueprintUtils"));
		return ptr;
	}


	class USMInstance* STATIC_K2_CreateStateMachineInstancePure(class UClass* StateMachineClass, class UObject* Context, bool bInitializeNow);//Offset:Discovery.exe+0x21D7EF0
	class USMInstance* STATIC_K2_CreateStateMachineInstanceAsync(class UClass* StateMachineClass, class UObject* Context, const struct FLatentActionInfo& LatentInfo);//Offset:Discovery.exe+0x21D8020
	class USMInstance* STATIC_K2_CreateStateMachineInstance(class UClass* StateMachineClass, class UObject* Context, bool bInitializeNow);//Offset:Discovery.exe+0x21D7EF0
	class USMInstance* STATIC_CreateStateMachineInstanceFromTemplate(class UClass* StateMachineClass, class UObject* Context, class USMInstance* Template, bool bInitializeNow);//Offset:Discovery.exe+0x21D7D70
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
