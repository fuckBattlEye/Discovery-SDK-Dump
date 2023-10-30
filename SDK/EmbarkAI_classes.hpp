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

// Class EmbarkAI.BTComposite_Utility
// 0x0008 (0x0098 - 0x0090)
class UBTComposite_Utility : public UBTCompositeNode
{
public:
	enum class EUtilitySelectionMethod                 SelectionMethod;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.BTComposite_Utility"));
		return ptr;
	}

};


// Class EmbarkAI.BTDecorator_UtilityFunction
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_UtilityFunction : public UBTDecorator
{
public:
	bool                                               bContinuousEvaluation;                                    // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.BTDecorator_UtilityFunction"));
		return ptr;
	}

};


// Class EmbarkAI.BTDecorator_UtilityBlackboard
// 0x0028 (0x0098 - 0x0070)
class UBTDecorator_UtilityBlackboard : public UBTDecorator_UtilityFunction
{
public:
	struct FBlackboardKeySelector                      UtilityValueKey;                                          // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.BTDecorator_UtilityBlackboard"));
		return ptr;
	}

};


// Class EmbarkAI.BTDecorator_UtilityBlueprintBase
// 0x0010 (0x0080 - 0x0070)
class UBTDecorator_UtilityBlueprintBase : public UBTDecorator_UtilityFunction
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.BTDecorator_UtilityBlueprintBase"));
		return ptr;
	}


	float CalculateUtility(class AAIController* OwnerController, class APawn* ControlledPawn);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkAI.BTDecorator_UtilityConstant
// 0x0008 (0x0078 - 0x0070)
class UBTDecorator_UtilityConstant : public UBTDecorator_UtilityFunction
{
public:
	float                                              UtilityValue;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.BTDecorator_UtilityConstant"));
		return ptr;
	}

};


// Class EmbarkAI.BTTask_EmbarkAIRunBehaviorDynamic
// 0x0000 (0x0088 - 0x0088)
class UBTTask_EmbarkAIRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.BTTask_EmbarkAIRunBehaviorDynamic"));
		return ptr;
	}

};


// Class EmbarkAI.BTUtilitySelectionMethod
// 0x0000 (0x0028 - 0x0028)
class UBTUtilitySelectionMethod : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.BTUtilitySelectionMethod"));
		return ptr;
	}

};


// Class EmbarkAI.AIPerceiver
// 0x0000 (0x0028 - 0x0028)
class UAIPerceiver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIPerceiver"));
		return ptr;
	}


	void GetAIPerceivedActors(const struct FActorPerceptionBlueprintInfo& EmptyPerceptionInfo, class UAIPerceptionComponent* PerceptionComponent, struct FAIPerceiveResult* Result, struct FActorPerceptionBlueprintInfo* PerceptionInfoTemp, TArray<class AActor*>* PerceivedActors);//Offset:Discovery.exe+0x190CC00
};


// Class EmbarkAI.AITargetComponent
// 0x00F0 (0x03C0 - 0x02D0)
class UAITargetComponent : public USceneComponent
{
public:
	class UAIKnowledgeBaseInterface*                   AIKBInterface;                                            // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BaseThreat;                                               // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	float                                              AccuracyFactor;                                           // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x02E4(0x0054) MISSED OFFSET
	bool                                               bBypassPerception;                                        // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRegisterWithPerception;                                  // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	float                                              ThreatRange;                                              // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkTeamId                           OverrideTeamId;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	float                                              TargetRadius;                                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class AAIController*, float>                  LastTimeTargetedBy;                                       // 0x0348(0x0050) (Edit, BlueprintVisible, Transient, EditConst)
	int                                                AttackingTokens;                                          // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetingTokens;                                          // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAITokenPool*                                TargetingTokenPool;                                       // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAITokenPool*>                        AttackTokenPools;                                         // 0x03A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AITargetComponent"));
		return ptr;
	}


	void UpdateAITargeting(float DeltaSeconds, struct FAITargetingParams* TargetingParams);//Offset:Discovery.exe+0x190DED0
	void StopAttackBy(class AActor* Attacker, enum class EAITokenType TokenType, int Cost, int ID);//Offset:Discovery.exe+0x190ED10
	bool StartOrQueueForAttackBy(class AActor* Attacker, enum class EAITokenType TokenType, int Cost, int ID);//Offset:Discovery.exe+0x190EFE0
	void SetBaseThreat(float NewBaseThreat);//Offset:Discovery.exe+0x190E070
	void RemoveTargetAdjustment(const struct FName& AdjustmentName);//Offset:Discovery.exe+0x190E120
	void ReleaseAsTarget(class AActor* Attacker, int Cost);//Offset:Discovery.exe+0x190E4D0
	bool IsAcquiredAsTargetBy(class AActor* Attacker);//Offset:Discovery.exe+0x190E830
	int GetNumTargetingTokens();//Offset:Discovery.exe+0x190E490
	int GetNumAttackTokens(enum class EAITokenType TokenType);//Offset:Discovery.exe+0x190EC50
	int GetMaxNumTargetingTokens();//Offset:Discovery.exe+0x190E450
	int GetMaxNumAttackTokens(enum class EAITokenType TokenType);//Offset:Discovery.exe+0x190EB90
	float GetBaseThreat();//Offset:Discovery.exe+0x190E040
	struct FVector GetAimDirectionOffset(const struct FVector& AimDirection, float DeltaSeconds, struct FAITargetingParams* TargetingParams, struct FAIAimParams* AimParams);//Offset:Discovery.exe+0x190DC80
	float GetAccuracyFactor();//Offset:Discovery.exe+0x190E010
	bool CanBeAcquiredAsTargetBy(class AActor* Attacker);//Offset:Discovery.exe+0x190E6E0
	void AddTargetAdjustment(const struct FName& AdjustmentName, struct FTemporaryAITargetingModification* TargetAdjustment);//Offset:Discovery.exe+0x190E2D0
	bool AcquireAsTarget(class AActor* Attacker, int Cost);//Offset:Discovery.exe+0x190E960
};


// Class EmbarkAI.AIFocusingInterface
// 0x0038 (0x0060 - 0x0028)
class UAIFocusingInterface : public UObject
{
public:
	TArray<struct FFocusRequest>                       FocusRequests;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FFocusTarget                                SelectedFocus;                                            // 0x0038(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIFocusingInterface"));
		return ptr;
	}


	void SelectFocus(float DeltaSeconds, class AAIController* AIAgent);//Offset:Discovery.exe+0x327F8B0
	void RequestFocus(const struct FFocusRequest& FocusRequest);//Offset:Discovery.exe+0x1910230
	bool IsRequestValid(const struct FFocusRequest& Request);//Offset:Discovery.exe+0x190FE60
	bool HasValidFocus();//Offset:Discovery.exe+0x1910090
	struct FFocusTarget GetCurrentFocus();//Offset:Discovery.exe+0x1910040
	void ClearFocus(enum class EAIFocusMode FocusMode);//Offset:Discovery.exe+0x1910170
};


// Class EmbarkAI.AIAgentStimuliInfoLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIAgentStimuliInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIAgentStimuliInfoLibrary"));
		return ptr;
	}


	struct FAIStimulusInfo STATIC_GetTouch(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x19128A0
	TArray<struct FAIStimulusInfo> STATIC_GetStimulusInfosAscendingPriority(const struct FAIAgentStimuliInfo& I);//Offset:Discovery.exe+0x1912210
	struct FAIStimulusInfo STATIC_GetStimulusBySense(enum class EStimulusSense Sense, struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x1910EA0
	struct FAIStimulusInfo STATIC_GetSight(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x1912CA0
	struct FAIStimulusInfo STATIC_GetSensedStimulus(const struct FAIStimulus& Stimulus, struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x19111E0
	struct FAIStimulusInfo STATIC_GetNetwork(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x19124C0
	float STATIC_GetLastSensedTime(const struct FAIAgentStimuliInfo& I);//Offset:Discovery.exe+0x1911D30
	struct FGameplayTag STATIC_GetLastKnownTag(const struct FAIAgentStimuliInfo& I);//Offset:Discovery.exe+0x1911AB0
	float STATIC_GetHighestAlertness(const struct FAIAgentStimuliInfo& I);//Offset:Discovery.exe+0x1911FA0
	struct FAIStimulusInfo STATIC_GetHearing(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x19126A0
	struct FAIStimulusInfo STATIC_GetDamage(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x1912AA0
	struct FAIStimulusInfo STATIC_GetBypass(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x1912EA0
	float STATIC_CombatExpiresAt(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x1911820
	float STATIC_AlertnessExpiresAt(struct FAIAgentStimuliInfo* I);//Offset:Discovery.exe+0x1911610
};


// Class EmbarkAI.AIAgentTargetInfoLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIAgentTargetInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIAgentTargetInfoLibrary"));
		return ptr;
	}


	void STATIC_SetThreat(int Category, float Value, struct FAgentTargetInfo* AgentTargetInfo);//Offset:Discovery.exe+0x1913AD0
	float STATIC_GetThreat(const struct FAgentTargetInfo& AgentTargetInfo, int Category);//Offset:Discovery.exe+0x1913CB0
};


// Class EmbarkAI.EmbarkAITemplateDataAsset
// 0x0010 (0x0040 - 0x0030)
class UEmbarkAITemplateDataAsset : public UDataAsset
{
public:
	bool                                               bIgnoreZReachThreshold;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideHasReachedCurrentTargetFunction;                 // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UBlackboardData*                             BlackboardAssetOverride;                                  // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAITemplateDataAsset"));
		return ptr;
	}

};


// Class EmbarkAI.AITemplateDataAsset
// 0x0348 (0x0388 - 0x0040)
class UAITemplateDataAsset : public UEmbarkAITemplateDataAsset
{
public:
	enum class EAINavigationCapability                 NavigationCapability;                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              MinimumProximityRequiredDefault;                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinLookAheadDistance;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLookAheadDistance;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumHeightAboveGround;                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       GrantedBehaviors;                                         // 0x0058(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      FocusingFunction;                                         // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TargetingFunction;                                        // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              InitialGameplayEffects;                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      AlertnessStateProgram;                                    // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aggression;                                               // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FNetworkMessageSettings                     LocalNetworkMessages;                                     // 0x00A8(0x0020) (Edit, BlueprintVisible)
	float                                              FriendlyDetectionRange;                                   // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeutralDetectionRange;                                    // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetingTrackingSpeed;                                   // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetingLookAheadTime;                                   // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetingDirectionCorrectionSpeed;                        // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FAISmartObjectData                          SmartObjectSettings;                                      // 0x00E0(0x02A8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AITemplateDataAsset"));
		return ptr;
	}

};


// Class EmbarkAI.AITargetingInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetingInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AITargetingInterface"));
		return ptr;
	}


	void SelectTargets(float DeltaSeconds, class AAIController* AIAgent, TArray<class UAITargetComponent*>* OutSelectedTargets);//Offset:Discovery.exe+0x327F8B0
	void SelectNeutralTargets(float DeltaSeconds, class AAIController* AIAgent, TArray<class UAITargetComponent*>* OutSelectedNeutralTargets);//Offset:Discovery.exe+0x327F8B0
	void SelectFriendlyTargets(float DeltaSeconds, class AAIController* AIAgent, TArray<class UAITargetComponent*>* OutSelectedFriendlyTargets);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIKnowledgeBaseNativeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary"));
		return ptr;
	}


	void STATIC_UpdateAgentTargetInfos(class UObject* WorldContextObject, float DeltaSeconds, TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap, TMap<class AAIController*, struct FAgentInfo>* AgentInfoMap, TArray<struct FAIKnowledgebaseNativeEvent>* OutEvents);//Offset:Discovery.exe+0x1914C30
	void STATIC_UpdateAgentPerception(class UObject* WorldContextObject, float DeltaSeconds, TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap, class UAIPerceiver* Perceiver, TMap<class AAIController*, struct FAgentInfo>* AgentInfoMap, TArray<class UAITargetComponent*>* PerceptionBypassTargets, TArray<struct FAIKnowledgebaseNativeEvent>* OutEvents);//Offset:Discovery.exe+0x19147E0
};


// Class EmbarkAI.AgentInfoFunctionLibrary
// 0x0008 (0x0030 - 0x0028)
class UAgentInfoFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentInfoFunctionLibrary"));
		return ptr;
	}


	bool STATIC_IsTargetPerceivedBySense(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent, enum class EStimulusSense Sense);//Offset:Discovery.exe+0x19163D0
	bool STATIC_IsLastTimeWithin(class UObject* WorldContextObject, float LastTime, float TimeWithin);//Offset:Discovery.exe+0x1915FD0
	bool STATIC_HasTarget(const struct FAgentInfo& Info);//Offset:Discovery.exe+0x1917780
	bool STATIC_HasGrantedBehavior(const struct FAgentInfo& Info, const struct FGameplayTag& Tag);//Offset:Discovery.exe+0x1916FD0
	bool STATIC_GetUnsensedFriendlyTargetsWithinRange(const struct FAgentInfo& Info, float MaxRange, TArray<class UAITargetComponent*>* OutTargets);//Offset:Discovery.exe+0x1916CF0
	float STATIC_GetTimeSince(class UObject* WorldContextObject, float LastTime);//Offset:Discovery.exe+0x1916100
	struct FGameplayTagQuery STATIC_GetSmartObjectUserQueryFromAgentInfoSettings(const struct FAgentInfo& AgentInfo);//Offset:Discovery.exe+0x1915440
	struct FGameplayTagQuery STATIC_GetSmartObjectUserQuery(const struct FAISmartObjectQuerySettings& Settings, const struct FAgentInfo& AgentInfo);//Offset:Discovery.exe+0x1915290
	struct FAISmartObjectQuerySettings STATIC_GetSmartObjectQuerySettings(const struct FAgentInfo& AgentInfo);//Offset:Discovery.exe+0x19155F0
	bool STATIC_GetSelectedTargetsWithinRange(const struct FAgentInfo& Info, float MaxRange, TArray<class UAITargetComponent*>* OutTargets);//Offset:Discovery.exe+0x1916E60
	class UAITargetComponent* STATIC_GetMostRelevantTarget(const struct FAgentInfo& Info);//Offset:Discovery.exe+0x1917680
	class UAITargetComponent* STATIC_GetMostRelevantNeutralTarget(const struct FAgentInfo& Info);//Offset:Discovery.exe+0x1917350
	class UAITargetComponent* STATIC_GetMostRelevantFriendlyTarget(const struct FAgentInfo& Info);//Offset:Discovery.exe+0x1917450
	TArray<class UAITargetComponent*> STATIC_GetKnownTargetsBySense(class UObject* WorldContextObject, const struct FAgentInfo& Info, enum class EStimulusSense Sense, bool bOnlyCurrentlyPerceived);//Offset:Discovery.exe+0x19161F0
	TArray<class UAITargetComponent*> STATIC_GetAllSortedRelevantTargets(const struct FAgentInfo& Info);//Offset:Discovery.exe+0x1917550
	TArray<class UAITargetComponent*> STATIC_GetAllSortedFriendlyTargets(const struct FAgentInfo& Info);//Offset:Discovery.exe+0x19170F0
	TArray<class UAITargetComponent*> STATIC_GetAllNeutralTargets(const struct FAgentInfo& Info);//Offset:Discovery.exe+0x1917220
	bool STATIC_GetAIAgentsWithinRange(class UObject* WorldContextObject, const struct FVector& Origin, float MaxRange, TArray<class AAIController*>* OutAgents);//Offset:Discovery.exe+0x1916B50
	bool STATIC_GetAgentTargetInfoSafe(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent, struct FAgentTargetInfo* OutAgentTargetInfo);//Offset:Discovery.exe+0x1916690
	struct FAgentTargetInfo STATIC_GetAgentTargetInfo(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent);//Offset:Discovery.exe+0x1916980
	void STATIC_GatherPendingAgentOrders(const struct FAgentInfo& AgentInfo, TArray<class UAgentOrder*>* OrdersOut);//Offset:Discovery.exe+0x1915A50
	void STATIC_GatherAllActiveOrdersOfType(const struct FAgentInfo& AgentInfo, class UClass* Type, TArray<class UAgentOrder*>* OrdersOut);//Offset:Discovery.exe+0x1915700
	void STATIC_GatherAllActiveOrders(const struct FAgentInfo& AgentInfo, TArray<class UAgentOrder*>* OrdersOut);//Offset:Discovery.exe+0x1915870
	class UAgentBehaviorOrder* STATIC_FindFirstPendingAgentBehaviorOrder(const struct FAgentInfo& AgentInfo);//Offset:Discovery.exe+0x1915B70
	class UAgentBehaviorOrder* STATIC_FindActiveAgentBehaviorOrder(const struct FAgentInfo& AgentInfo);//Offset:Discovery.exe+0x1915990
	bool STATIC_CanSeeTarget(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent, float TimeSinceSeen);//Offset:Discovery.exe+0x1916530
	struct FRotator STATIC_CalcFocusRotator(const struct FAgentInfo& AgentInfo, const struct FFocusTarget& FocusTarget);//Offset:Discovery.exe+0x1915C30
	struct FVector STATIC_CalcFocusLocation(const struct FAgentInfo& AgentInfo, const struct FFocusTarget& FocusTarget);//Offset:Discovery.exe+0x1915E80
};


// Class EmbarkAI.AgentOrderContextFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAgentOrderContextFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentOrderContextFunctionLibrary"));
		return ptr;
	}


	class UAgentOrderContextBase* STATIC_MakeContextAndSetStructData(class AAIController* AIController, const struct FEmbarkGenericStruct& StructData, class UObject* ObjectData);//Offset:Discovery.exe+0x191C660
	class UAgentOrderContextBase* STATIC_MakeContext(class AAIController* AIController, class UObject* ObjectData);//Offset:Discovery.exe+0x191C580
};


// Class EmbarkAI.AgentOrderContextBase
// 0x0020 (0x0048 - 0x0028)
class UAgentOrderContextBase : public UObject
{
public:
	struct FEmbarkGenericStruct                        StructData;                                               // 0x0028(0x0018)
	class UObject*                                     ObjectData;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentOrderContextBase"));
		return ptr;
	}


	bool IsValid();//Offset:Discovery.exe+0x14618B0
	struct FVector GetContextLocation();//Offset:Discovery.exe+0x191CBB0
};


// Class EmbarkAI.AgentOrderLocationContext
// 0x0018 (0x0060 - 0x0048)
class UAgentOrderLocationContext : public UAgentOrderContextBase
{
public:
	struct FVector                                     Location;                                                 // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentOrderLocationContext"));
		return ptr;
	}

};


// Class EmbarkAI.AgentOrderActorContext
// 0x0008 (0x0050 - 0x0048)
class UAgentOrderActorContext : public UAgentOrderContextBase
{
public:
	class AActor*                                      Actor;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentOrderActorContext"));
		return ptr;
	}

};


// Class EmbarkAI.AgentOrderObjectContext
// 0x0008 (0x0050 - 0x0048)
class UAgentOrderObjectContext : public UAgentOrderContextBase
{
public:
	class UObject*                                     Object;                                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentOrderObjectContext"));
		return ptr;
	}

};


// Class EmbarkAI.AgentOrderContextHelperFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAgentOrderContextHelperFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentOrderContextHelperFunctionLibrary"));
		return ptr;
	}


	class UAgentOrderObjectContext* STATIC_CreateAgentOrderObjectContext(class AAIController* AIAgent, class UObject* Object);//Offset:Discovery.exe+0x191D200
	class UAgentOrderLocationContext* STATIC_CreateAgentOrderLocationContext(class AAIController* AIAgent, const struct FVector& Location);//Offset:Discovery.exe+0x191D3C0
	class UAgentOrderActorContext* STATIC_CreateAgentOrderActorContext(class AAIController* AIAgent, class AActor* Actor);//Offset:Discovery.exe+0x191D2E0
};


// Class EmbarkAI.AgentOrder
// 0x0030 (0x0058 - 0x0028)
class UAgentOrder : public UObject
{
public:
	class UAgentOrderContextBase*                      CurrentContext;                                           // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OrderInstigator;                                          // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EAIAgentOrder                           AIAgentOrder;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRaiseAlertnessToMatchFilter;                             // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                RequiredAlertnessFilter;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrderTimeout;                                             // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrderDuration;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentOrder"));
		return ptr;
	}


	void SetOrderHandle(int ID);//Offset:Discovery.exe+0x191D860
	void OnOrderStartedBP(class UAgentOrderContextBase* InCurrentContext);//Offset:Discovery.exe+0x327F8B0
	void OnOrderStarted();//Offset:Discovery.exe+0x191D9E0
	void OnOrderIssuedBP(class UAgentOrderContextBase* InCurrentContext);//Offset:Discovery.exe+0x327F8B0
	void OnOrderIssued_Internal();//Offset:Discovery.exe+0x191DA00
	void OnOrderIssued();//Offset:Discovery.exe+0x14618E0
	bool IsValid_Internal();//Offset:Discovery.exe+0x191D9C0
	bool IsValid();//Offset:Discovery.exe+0x191D9C0
	bool HasOrderTimedout();//Offset:Discovery.exe+0x191D990
	bool HasOrderDurationEnded();//Offset:Discovery.exe+0x191D960
	float GetOrderTimeoutLeft();//Offset:Discovery.exe+0x191D930
	int GetOrderHandle();//Offset:Discovery.exe+0x191D830
	float GetOrderDurationLeft();//Offset:Discovery.exe+0x191D900
};


// Class EmbarkAI.AgentBehaviorOrder
// 0x0018 (0x0070 - 0x0058)
class UAgentBehaviorOrder : public UAgentOrder
{
public:
	class UBehaviorTree*                               BehaviorTree;                                             // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PositionQuery;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OptimalRange;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AgentBehaviorOrder"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAIAvoidanceManager
// 0x0000 (0x00E0 - 0x00E0)
class UEmbarkAIAvoidanceManager : public UAvoidanceManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIAvoidanceManager"));
		return ptr;
	}


	int RegisterAvoidanceObject(const struct FVector& Location, float Radius, float TimeToLive, float Weight, int GroupMask, int GroupsToAvoid, int GroupsToIgnore);//Offset:Discovery.exe+0x191E520
	class UEmbarkAIAvoidanceManager* STATIC_GetAvoidanceManager(class UWorld* World);//Offset:Discovery.exe+0x191E7A0
};


// Class EmbarkAI.EmbarkAIAvoidanceManagerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAIAvoidanceManagerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIAvoidanceManagerMixinLibrary"));
		return ptr;
	}


	void STATIC_RemoveAvoidanceObject(class UEmbarkAIAvoidanceManager* Manager, int AvoidanceUID);//Offset:Discovery.exe+0x191EB80
};


// Class EmbarkAI.EmbarkAIBehaviorTreeComponent
// 0x0010 (0x02A8 - 0x0298)
class UEmbarkAIBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:
	struct FScriptMulticastDelegate                    OnSignalTreeFinished;                                     // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIBehaviorTreeComponent"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAIFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIFunctionLibrary"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAIController
// 0x0080 (0x0470 - 0x03F0)
class AEmbarkAIController : public AAIController
{
public:
	struct FScriptMulticastDelegate                    OnPawnChanged;                                            // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSightSenseUpdated;                                      // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearingSenseUpdated;                                    // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDamageSenseUpdated;                                     // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNetworkSenseUpdated;                                    // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0440(0x0018) MISSED OFFSET
	class APawn*                                       LastPossessedPawn;                                        // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEmbarkPawnComponent*>                CachedPawnComponents;                                     // 0x0460(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIController"));
		return ptr;
	}


	void SetTeam(enum class EEmbarkTeamId NewTeam);//Offset:Discovery.exe+0x191FC10
	void RemovePerceptionComponentByIndex(int PerceptionComponentIdx);//Offset:Discovery.exe+0x191F130
	void RemovePerceptionComponent(class USceneComponent* OwningComponent);//Offset:Discovery.exe+0x191F1D0
	void RegisterAIData(class UEmbarkAITemplateDataAsset* DataAsset);//Offset:Discovery.exe+0x191F910
	void ReceiveRegisterAIData(class UEmbarkAITemplateDataAsset* DataAsset);//Offset:Discovery.exe+0x327F8B0
	void ReceivePostInitializeComponents();//Offset:Discovery.exe+0x327F8B0
	void OnPawnChangedSignature__DelegateSignature(class AController* Controller);//Offset:Discovery.exe+0x327F8B0
	void OnActorPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);//Offset:Discovery.exe+0x191F6B0
	void STATIC_MakeAIForgetActor(class AActor* ActorToForget);//Offset:Discovery.exe+0x191FA90
	enum class EEmbarkTeamId GetTeam();//Offset:Discovery.exe+0x191FBE0
	class UEmbarkAISenseConfig_Sight* GetPerceptionSightConfig(class UAIPerceptionComponent* InPerceptionComponent);//Offset:Discovery.exe+0x191F610
	class UEmbarkAISenseConfig_Network* GetPerceptionNetworkConfig(class UAIPerceptionComponent* InPerceptionComponent);//Offset:Discovery.exe+0x191F430
	class UEmbarkAISenseConfig_Hearing* GetPerceptionHearingConfig(class UAIPerceptionComponent* InPerceptionComponent);//Offset:Discovery.exe+0x191F570
	class UAISenseConfig_Damage* GetPerceptionDamageConfig(class UAIPerceptionComponent* InPerceptionComponent);//Offset:Discovery.exe+0x191F4D0
	void GetPerceptionComponents(TArray<class UAIPerceptionComponent*>* OutPerceptionComponents);//Offset:Discovery.exe+0x191F380
	void ForgetEverything();//Offset:Discovery.exe+0x191FBC0
	void ForgetActor(class AActor* ActorToForget);//Offset:Discovery.exe+0x191FB20
	void ConfigureSense(class UAIPerceptionComponent* InPerceptionComponent, class UAISenseConfig* SenseConfig);//Offset:Discovery.exe+0x191F9B0
	int AddPerceptionComponent(class USceneComponent* OwningComponent, TArray<class UAISenseConfig*> SenseConfigs);//Offset:Discovery.exe+0x191F270
};


// Class EmbarkAI.EmbarkEnvQueryResultWrapper
// 0x0020 (0x0048 - 0x0028)
class UEmbarkEnvQueryResultWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkEnvQueryResultWrapper"));
		return ptr;
	}


	bool IsSuccessful();//Offset:Discovery.exe+0x1920A60
	bool IsFinished();//Offset:Discovery.exe+0x1920B00
	bool IsAborted();//Offset:Discovery.exe+0x1920AB0
	bool HasResult();//Offset:Discovery.exe+0x1920B50
	struct FEnvQueryResult GetQueryResult();//Offset:Discovery.exe+0x19207E0
	void Clear();//Offset:Discovery.exe+0x1920B80
};


// Class EmbarkAI.EnvQueryResultMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryResultMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EnvQueryResultMixinLibrary"));
		return ptr;
	}


	void STATIC_GetItemsAsLocations(const struct FEnvQueryResult& Result, TArray<struct FVector>* OutLocations);//Offset:Discovery.exe+0x1921140
};


// Class EmbarkAI.EnvQueryManagerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryManagerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EnvQueryManagerMixinLibrary"));
		return ptr;
	}


	int STATIC_RunQueryWithParams(class UEnvQueryManager* Manager, class UEnvQuery* Query, class UObject* RequestOwner, TEnumAsByte<EEnvQueryRunMode> RunMode, const struct FEmbarkEnvQueryParams& Params, class UEmbarkEnvQueryResultWrapper* NotifyWrapper);//Offset:Discovery.exe+0x19215B0
	int STATIC_RunQuery(class UEnvQueryManager* Manager, class UEnvQuery* Query, class UObject* RequestOwner, TEnumAsByte<EEnvQueryRunMode> RunMode, class UEmbarkEnvQueryResultWrapper* NotifyWrapper);//Offset:Discovery.exe+0x1922120
};


// Class EmbarkAI.EmbarkAIFlowSubsystem
// 0x00D0 (0x0110 - 0x0040)
class UEmbarkAIFlowSubsystem : public UTickableWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET
	double                                             GroupSearchDistance;                                      // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GroupSearchGradient;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	double                                             GroupTurnSpeed;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VisionDim;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightMapDistanceBetweenVertices;                         // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             GroundVoxelHeightMargin;                                  // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBucketUpdates;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FVector                                     WorldOrigin;                                              // 0x0090(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldEnd;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CellSize;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                XGridSize;                                                // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YGridSize;                                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FFlowHeightMap                              HeightMap;                                                // 0x00D0(0x0020) (Edit, Transient)
	TArray<uint32_t>                                   Visitation;                                               // 0x00F0(0x0010) (Edit, ZeroConstructor, Transient)
	TArray<struct FFlowPriorityBucket>                 BucketPriorityQueue;                                      // 0x0100(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIFlowSubsystem"));
		return ptr;
	}


	void UpdateGroups(TArray<class APawn*> Agents, double DeltaUpdateTime);//Offset:Discovery.exe+0x1922850
	bool OnTryInitialize();//Offset:Discovery.exe+0x327F8B0
	void OnTick(float DeltaTime);//Offset:Discovery.exe+0x327F8B0
	double LineValue(const struct FVector& Start, const struct FVector& Direction, double SearchDistance, int SkipBlockedMargin, struct FVector* OutCollision);//Offset:Discovery.exe+0x1922B60
	struct FVector GradientDescent(const struct FVector& WorldLocation, int Steps);//Offset:Discovery.exe+0x1922A50
	int GetTime(int CellX, int CellY);//Offset:Discovery.exe+0x19231B0
	TArray<struct FVector> GetAgentLocations();//Offset:Discovery.exe+0x327F8B0
	double FindHeight(const struct FVector& Location);//Offset:Discovery.exe+0x1923060
	struct FVector ClosestUnblockedLocation(const struct FVector& WorldLocation);//Offset:Discovery.exe+0x1922D90
	double CellValue(const struct FVector& WorldLocation);//Offset:Discovery.exe+0x19229A0
	struct FVector CalculateGroupMovement(const struct FVector& Centroid, const struct FVector& TargetLocation, const struct FVector& HomeLocation, double Radius);//Offset:Discovery.exe+0x1922E50
	bool Blocked(int CellX, int CellY);//Offset:Discovery.exe+0x19232D0
};


// Class EmbarkAI.EmbarkAIGroundPathFollowingComponent
// 0x0008 (0x02D8 - 0x02D0)
class UEmbarkAIGroundPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIGroundPathFollowingComponent"));
		return ptr;
	}


	void SetOverrideHasReachedCurrentTargetFunction(bool bOverride);//Offset:Discovery.exe+0x19259B0
	void SetIgnoreZReachThreshold(bool bIgnore);//Offset:Discovery.exe+0x1925A50
};


// Class EmbarkAI.GroupRoleInfoMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGroupRoleInfoMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.GroupRoleInfoMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsValid(struct FGroupRoleInfo* Info);//Offset:Discovery.exe+0x1926320
};


// Class EmbarkAI.AIAlertnessFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIAlertnessFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIAlertnessFunctionLibrary"));
		return ptr;
	}


	struct FName STATIC_ToFName(enum class EAIAlertness inAIAlertness);//Offset:Discovery.exe+0x1926700
};


// Class EmbarkAI.AIAlertnessSourceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIAlertnessSourceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIAlertnessSourceFunctionLibrary"));
		return ptr;
	}


	struct FName STATIC_ToFName(enum class EAIAlertnessSource inAIAlertnessSource);//Offset:Discovery.exe+0x1926A20
};


// Class EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAIKnowledgeBaseInterfaceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary"));
		return ptr;
	}


	class UAIKnowledgeBaseInterface* STATIC_GetAIKnowledgeBaseInterfaceFromGameMode(class AGameModeBase* GameMode);//Offset:Discovery.exe+0x1927070
	class UAIKnowledgeBaseInterface* STATIC_GetAIKnowledgeBaseInterface(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1926FD0
};


// Class EmbarkAI.AIKnowledgeBaseInterface
// 0x00F0 (0x01A8 - 0x00B8)
class UAIKnowledgeBaseInterface : public UActorComponent
{
public:
	TMap<class AAIController*, struct FAgentInfo>      AgentInfoMap;                                             // 0x00B8(0x0050)
	TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap;                                            // 0x0108(0x0050)
	TMap<int, struct FAgentGroupInfo>                  AgentGroupInfos;                                          // 0x0158(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AIKnowledgeBaseInterface"));
		return ptr;
	}


	void UnregisterAITarget(class UActorComponent* Target);//Offset:Discovery.exe+0x327F8B0
	void UnregisterAIAgent(class AAIController* Agent);//Offset:Discovery.exe+0x327F8B0
	void RegisterAITarget(class UActorComponent* Target);//Offset:Discovery.exe+0x327F8B0
	void RegisterAIAgent(class AAIController* Agent, class UDataAsset* Template);//Offset:Discovery.exe+0x327F8B0
	bool HasAgentGroupInfo(int GroupId);//Offset:Discovery.exe+0x19277D0
	TMap<class UAITargetComponent*, struct FTargetInfo> GetTargetInfos();//Offset:Discovery.exe+0x1927870
	struct FTargetInfo GetTargetInfo(class UAITargetComponent* Comp);//Offset:Discovery.exe+0x19278A0
	TMap<class AAIController*, struct FAgentInfo> GetAgentInfos();//Offset:Discovery.exe+0x1927950
	struct FAgentInfo GetAgentInfoNonRef(class AAIController* AIController);//Offset:Discovery.exe+0x1927980
	struct FAgentInfo GetAgentInfo(class AAIController* AIController);//Offset:Discovery.exe+0x1927E90
	struct FAgentGroupInfo GetAgentGroupInfo(int GroupId);//Offset:Discovery.exe+0x19274C0
	bool AgentInfoExist(class AAIController* AIController);//Offset:Discovery.exe+0x1927F40
};


// Class EmbarkAI.EmbarkAINavigationComponentBase
// 0x0010 (0x00C8 - 0x00B8)
class UEmbarkAINavigationComponentBase : public UActorComponent
{
public:
	class AAIController*                               Controller;                                               // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAINavigationComponentBase"));
		return ptr;
	}


	void StopMovement();//Offset:Discovery.exe+0x327F8B0
	struct FVector GetMoveDestination();//Offset:Discovery.exe+0x327F8B0
	struct FVector GetImmediateMoveDestination();//Offset:Discovery.exe+0x327F8B0
	TEnumAsByte<EPathFollowingRequestResult> FindPath(const struct FEmbarkAIPathRequest& PathRequest, TArray<struct FVector>* OutOptimizedPath);//Offset:Discovery.exe+0x19289D0
};


// Class EmbarkAI.EmbarkAIPerceptionSystem
// 0x0000 (0x0130 - 0x0130)
class UEmbarkAIPerceptionSystem : public UAIPerceptionSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAIPerceptionSystem"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAICombatPositionQueryBase
// 0x0060 (0x0088 - 0x0028)
class UEmbarkAICombatPositionQueryBase : public UObject
{
public:
	float                                              QueryResultThreshold;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopMovingWithinLOS;                                     // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsContinious;                                            // 0x002D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	struct FCombatPositionQueryInfo                    StoredQueryInfo;                                          // 0x0030(0x0030) (BlueprintVisible)
	struct FCombatPositionQueryResults                 StoredQueryResults;                                       // 0x0060(0x0020) (BlueprintVisible)
	float                                              QueryFrequency;                                           // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAICombatPositionQueryBase"));
		return ptr;
	}


	void UpdateQuery_Internal();//Offset:Discovery.exe+0x1929210
	void UpdateQuery();//Offset:Discovery.exe+0x1929210
	enum class EAICombatPositionQueryState RunQuery_Internal(const struct FCombatPositionQueryInfo& QueryInfo);//Offset:Discovery.exe+0x1929230
	enum class EAICombatPositionQueryState RunQuery(const struct FCombatPositionQueryInfo& QueryInfo);//Offset:Discovery.exe+0x1929310
	bool ReadyToRunContiniousQuery();//Offset:Discovery.exe+0x19293F0
	enum class EAICombatPositionQueryState GetQueryResult_Internal(struct FCombatPositionQueryResults* OutPositionInfo);//Offset:Discovery.exe+0x1929120
	enum class EAICombatPositionQueryState GetQueryResult(struct FCombatPositionQueryResults* OutPositionInfo);//Offset:Discovery.exe+0x1929120
};


// Class EmbarkAI.EmbarkAISense_Hearing
// 0x0060 (0x00E0 - 0x0080)
class UEmbarkAISense_Hearing : public UAISense
{
public:
	TArray<struct FEmbarkAISoundEvent>                 SoundEvents;                                              // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0090(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISense_Hearing"));
		return ptr;
	}


	void STATIC_ReportSoundEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Range, class AActor* Instigator, const struct FName& Tag);//Offset:Discovery.exe+0x1929BC0
};


// Class EmbarkAI.EmbarkAISenseEvent_Hearing
// 0x0038 (0x0060 - 0x0028)
class UEmbarkAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FEmbarkAISoundEvent                         Event;                                                    // 0x0028(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISenseEvent_Hearing"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAISenseConfig_Hearing
// 0x0008 (0x0050 - 0x0048)
class UEmbarkAISenseConfig_Hearing : public UAISenseConfig
{
public:
	enum class EAISoundInterestRange                   InterestRange;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EAISoundMaskingEngine                   NoiseMasking;                                             // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseLoSHearing;                                           // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISenseConfig_Hearing"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAISense_Network
// 0x0010 (0x0090 - 0x0080)
class UEmbarkAISense_Network : public UAISense
{
public:
	TArray<struct FEmbarkAINetworkEvent>               RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISense_Network"));
		return ptr;
	}


	void STATIC_ReportNetworkEvent(class UObject* WorldContextObject, class AActor* Instigator, class AActor* TargetActor, const struct FVector& LastSeenLocation, float MaxRange, const struct FName& Tag);//Offset:Discovery.exe+0x192C6D0
};


// Class EmbarkAI.EmbarkAISenseEvent_Network
// 0x0040 (0x0068 - 0x0028)
class UEmbarkAISenseEvent_Network : public UAISenseEvent
{
public:
	struct FEmbarkAINetworkEvent                       Event;                                                    // 0x0028(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISenseEvent_Network"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAISenseConfig_Network
// 0x0000 (0x0048 - 0x0048)
class UEmbarkAISenseConfig_Network : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISenseConfig_Network"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAISense_Sight
// 0x0000 (0x0170 - 0x0170)
class UEmbarkAISense_Sight : public UAISense_Sight
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISense_Sight"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAISenseConfig_Sight
// 0x0008 (0x0078 - 0x0070)
class UEmbarkAISenseConfig_Sight : public UAISenseConfig_Sight
{
public:
	float                                              MacularVisionAngleDegrees;                                // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISenseConfig_Sight"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAISense_Touch
// 0x0010 (0x0090 - 0x0080)
class UEmbarkAISense_Touch : public UAISense
{
public:
	TArray<struct FEmbarkAITouchEvent>                 RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISense_Touch"));
		return ptr;
	}


	void STATIC_ReportTouchEvent(class UObject* WorldContextObject, class AActor* TouchReceiver, class AActor* OtherActor, const struct FVector& EventLocation);//Offset:Discovery.exe+0x192D0A0
};


// Class EmbarkAI.EmbarkAISenseEvent_Touch
// 0x0030 (0x0058 - 0x0028)
class UEmbarkAISenseEvent_Touch : public UAISenseEvent
{
public:
	struct FEmbarkAITouchEvent                         Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISenseEvent_Touch"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkAISenseConfig_Touch
// 0x0000 (0x0048 - 0x0048)
class UEmbarkAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkAISenseConfig_Touch"));
		return ptr;
	}

};


// Class EmbarkAI.AITokenPool
// 0x0068 (0x0090 - 0x0028)
class UAITokenPool : public UObject
{
public:
	TArray<struct FAITokenInfo>                        Queue;                                                    // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) UNKNOWN PROPERTY: Active
	unsigned char                                      UnknownData01[0x4];                                       // 0x0088(0x0004) MISSED OFFSET
	int                                                Pool;                                                     // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.AITokenPool"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkEnvQueryGenerator_DonutSpan
// 0x0150 (0x01E0 - 0x0090)
class UEmbarkEnvQueryGenerator_DonutSpan : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0090(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   RadiusSpan;                                               // 0x00C8(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x0100(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0138(0x0038) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0190(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x01C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01D8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkEnvQueryGenerator_DonutSpan"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkEnvQueryGenerator_DynamicShape
// 0x02D0 (0x0360 - 0x0090)
class UEmbarkEnvQueryGenerator_DynamicShape : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Center;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReferenceContext;                                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUse2D;                                                   // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          InnerRadius;                                              // 0x00B0(0x0088) (Edit, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          OuterRadius;                                              // 0x0138(0x0088) (Edit, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Spacing;                                                  // 0x01C0(0x0088) (Edit, DisableEditOnInstance)
	bool                                               bArcLineFromCenterToReference;                            // 0x0248(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Arc;                                                      // 0x0250(0x0088) (Edit, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Offset;                                                   // 0x02D8(0x0088) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkEnvQueryGenerator_DynamicShape"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkEnvQueryGenerator_FlyingBase
// 0x0090 (0x00E0 - 0x0050)
class UEmbarkEnvQueryGenerator_FlyingBase : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   DesiredFlyingHeight;                                      // 0x0050(0x0038) (Edit, DisableEditOnInstance)
	class UClass*                                      MinimumFlyingHeightTarget;                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmbarkEnvQueryFlyingProjection>       ProjectionType;                                           // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CollisionRadius;                                          // 0x0098(0x0038) (Edit, DisableEditOnInstance)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              ProjectDown;                                              // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectUp;                                                // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkEnvQueryGenerator_FlyingBase"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkEnvQueryGenerator_Flying
// 0x0178 (0x0258 - 0x00E0)
class UEmbarkEnvQueryGenerator_Flying : public UEmbarkEnvQueryGenerator_FlyingBase
{
public:
	class UClass*                                      Center;                                                   // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x00E8(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   RadiusSpan;                                               // 0x0120(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumRings;                                                 // 0x0158(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumPoints;                                                // 0x0190(0x0038) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               Direction;                                                // 0x01C8(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x01E8(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   StartAngle;                                               // 0x0220(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkEnvQueryGenerator_Flying"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkEnvQueryTest_HpaPathfinding
// 0x0048 (0x0240 - 0x01F8)
class UEmbarkEnvQueryTest_HpaPathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<EEmbarkEnvTestPathfinding>             TestMode;                                                 // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   AgentCollisionRadius;                                     // 0x0208(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkEnvQueryTest_HpaPathfinding"));
		return ptr;
	}

};


// Class EmbarkAI.EmbarkSmartObjectComponent
// 0x0020 (0x02F0 - 0x02D0)
class UEmbarkSmartObjectComponent : public USceneComponent
{
public:
	TArray<struct FEmbarkSmartObjectSlot>              Slots;                                                    // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkSmartObjectComponent"));
		return ptr;
	}


	int ReceiveSelectSlot(class AActor* Querier, TArray<int> AvailableSlots);//Offset:Discovery.exe+0x327F8B0
	void ReceiveRelease(class AActor* Querier, int Slot);//Offset:Discovery.exe+0x327F8B0
	void ReceiveClaim(class AActor* Querier, int Slot);//Offset:Discovery.exe+0x327F8B0
	bool ReceiveCanBeClaimed(class AActor* Querier, int Slot);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkAI.EmbarkSmartObjectSubsystem
// 0x0128 (0x0158 - 0x0030)
class UEmbarkSmartObjectSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0030(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkSmartObjectSubsystem"));
		return ptr;
	}


	bool Release(const struct FEmbarkSmartObjectClaimHandle& Handle);//Offset:Discovery.exe+0x192EB40
	bool IsInitialized();//Offset:Discovery.exe+0x192F3B0
	void InitializeOctree(const struct FBox& Bounds);//Offset:Discovery.exe+0x192F3D0
	bool GetSmartObjectRawPtrsInRange(const struct FBox& QueryBox, TArray<class UEmbarkSmartObjectComponent*>* OutResults);//Offset:Discovery.exe+0x192ECA0
	class UEmbarkSmartObjectComponent* GetSmartObject(const struct FEmbarkSmartObjectClaimHandle& Handle);//Offset:Discovery.exe+0x192E770
	struct FQuat GetSlotRotation(const struct FEmbarkSmartObjectClaimHandle& Handle);//Offset:Discovery.exe+0x192E8F0
	struct FVector GetSlotLocation(const struct FEmbarkSmartObjectClaimHandle& Handle);//Offset:Discovery.exe+0x192E9C0
	int GetSlotIndex(const struct FEmbarkSmartObjectClaimHandle& Handle);//Offset:Discovery.exe+0x192E6C0
	class UEmbarkSmartObjectSubsystem* STATIC_GetCurrent(class UWorld* World);//Offset:Discovery.exe+0x192F470
	struct FEmbarkSmartObjectClaimHandle GetClaim(class AActor* Owner);//Offset:Discovery.exe+0x192EA90
	class UClass* GetBehaviorOrder(const struct FEmbarkSmartObjectClaimHandle& Handle);//Offset:Discovery.exe+0x192E830
	struct FEmbarkSmartObjectClaimHandle FindSmartObjectWithPredicate(const struct FEmbarkSmartObjectRequest& Request, const struct FScriptDelegate& Predicate);//Offset:Discovery.exe+0x192F0A0
	struct FEmbarkSmartObjectClaimHandle FindSmartObject(const struct FEmbarkSmartObjectRequest& Request);//Offset:Discovery.exe+0x192F260
	struct FEmbarkSmartObjectClaimHandle FindClosestSmartObject(const struct FEmbarkSmartObjectRequest& Request);//Offset:Discovery.exe+0x192EF50
	bool FindAllSmartObjects(const struct FEmbarkSmartObjectRequest& Request, TArray<struct FEmbarkSmartObjectClaimHandle>* OutResults);//Offset:Discovery.exe+0x192EDB0
	void DebugDraw();//Offset:Discovery.exe+0x192E6A0
	bool Claim(const struct FEmbarkSmartObjectClaimHandle& Handle);//Offset:Discovery.exe+0x192EBF0
};


// Class EmbarkAI.EmbarkSmartObjectClaimHandleMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkSmartObjectClaimHandleMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkSmartObjectClaimHandleMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsValid(struct FEmbarkSmartObjectClaimHandle* Handle);//Offset:Discovery.exe+0x19300D0
};


// Class EmbarkAI.EmbarkTeamFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkTeamFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAI.EmbarkTeamFunctionLibrary"));
		return ptr;
	}


	void STATIC_SetActorTeam(class AActor* ActorToUpdate, enum class EEmbarkTeamId NewTeam);//Offset:Discovery.exe+0x1930690
	TEnumAsByte<ETeamAttitude> STATIC_GetAttitudeBetweenTeams(enum class EEmbarkTeamId AskingTeam, enum class EEmbarkTeamId TargetTeam);//Offset:Discovery.exe+0x19304D0
	TEnumAsByte<ETeamAttitude> STATIC_GetAttitudeBetweenActors(class AActor* AskingActor, class AActor* TargetActor);//Offset:Discovery.exe+0x19305B0
	enum class EEmbarkTeamId STATIC_GetActorTeam(class AActor* TeamMember);//Offset:Discovery.exe+0x1930770
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
