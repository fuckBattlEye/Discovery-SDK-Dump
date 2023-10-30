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

// Class GameplayAbilities.AbilitySystemComponent
// 0x12B0 (0x13D8 - 0x0128)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                      // 0x0138(0x0010) (Edit, ZeroConstructor)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                        // 0x0148(0x0010) (ExportObject, Net, ZeroConstructor)
	struct FName                                       AffectedAnimInstanceTag;                                  // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1A0];                                     // 0x0160(0x01A0) MISSED OFFSET
	float                                              OutgoingDuration;                                         // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IncomingDuration;                                         // 0x0304(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0308(0x0020) MISSED OFFSET
	TArray<struct FString>                             ClientDebugStrings;                                       // 0x0328(0x0010) (Net, ZeroConstructor)
	TArray<struct FString>                             ServerDebugStrings;                                       // 0x0338(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0348(0x0060) MISSED OFFSET
	bool                                               UserAbilityActivationInhibited;                           // 0x03A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplicationProxyEnabled;                                  // 0x03A9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressGrantAbility;                                    // 0x03AA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressGameplayCues;                                    // 0x03AB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                      // 0x03B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x28];                                      // 0x03C0(0x0028) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x03E8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AvatarActor;                                              // 0x03F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x03F8(0x0010) MISSED OFFSET
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                     // 0x0408(0x0128) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData07[0x30];                                      // 0x0530(0x0030) MISSED OFFSET
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                          // 0x0560(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x210];                                     // 0x0570(0x0210) MISSED OFFSET
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                       // 0x0780(0x0038) (Net)
	bool                                               bCachedIsNetSimulated;                                    // 0x07B8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingMontageRep;                                       // 0x07B9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x07BA(0x0006) MISSED OFFSET
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                     // 0x07C0(0x0030)
	unsigned char                                      UnknownData10[0xA0];                                      // 0x07F0(0x00A0) MISSED OFFSET
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                    // 0x0890(0x0480) (Net)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                       // 0x0D10(0x0130) (Net)
	struct FActiveGameplayCueContainer                 MinimalReplicationGameplayCues;                           // 0x0E40(0x0130) (Net)
	unsigned char                                      UnknownData11[0x128];                                     // 0x0F70(0x0128) MISSED OFFSET
	TArray<unsigned char>                              BlockedAbilityBindings;                                   // 0x1098(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData12[0x128];                                     // 0x10A8(0x0128) MISSED OFFSET
	struct FMinimalReplicationTagCountMap              MinimalReplicationTags;                                   // 0x11D0(0x0060) (Net)
	unsigned char                                      UnknownData13[0x10];                                      // 0x1230(0x0010) MISSED OFFSET
	struct FMinimalReplicationTagCountMap              ReplicatedLooseTags;                                      // 0x1240(0x0060) (Net)
	unsigned char                                      UnknownData14[0x8];                                       // 0x12A0(0x0008) MISSED OFFSET
	struct FReplicatedPredictionKeyMap                 ReplicatedPredictionKeyMap;                               // 0x12A8(0x0120) (Net)
	unsigned char                                      UnknownData15[0x10];                                      // 0x13C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemComponent"));
		return ptr;
	}


	void UpdateActiveGameplayEffectSetByCallerMagnitudes(const struct FActiveGameplayEffectHandle& ActiveHandle, TMap<struct FGameplayTag, float> NewSetByCallerValues);//Offset:Discovery.exe+0x1552E20
	void UpdateActiveGameplayEffectSetByCallerMagnitude(const struct FActiveGameplayEffectHandle& ActiveHandle, const struct FGameplayTag& SetByCallerTag, float NewValue);//Offset:Discovery.exe+0x1552FD0
	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);//Offset:Discovery.exe+0x154FC10
	bool TryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation);//Offset:Discovery.exe+0x154FB20
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);//Offset:Discovery.exe+0x154FD00
	void TargetConfirm();//Offset:Discovery.exe+0x154EC80
	void TargetCancel();//Offset:Discovery.exe+0x154EC60
	void SetUserAbilityActivationInhibited(bool NewInhibit);//Offset:Discovery.exe+0x154EE20
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel);//Offset:Discovery.exe+0x1552C00
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);//Offset:Discovery.exe+0x1552D30
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);//Offset:Discovery.exe+0x154D2C0
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);//Offset:Discovery.exe+0x154D9B0
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);//Offset:Discovery.exe+0x154DD10
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);//Offset:Discovery.exe+0x154DF40
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);//Offset:Discovery.exe+0x154E440
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);//Offset:Discovery.exe+0x154E780
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);//Offset:Discovery.exe+0x154DB90
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);//Offset:Discovery.exe+0x154DC50
	void ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings);//Offset:Discovery.exe+0x154F4F0
	void ServerPrintDebug_Request();//Offset:Discovery.exe+0x154F600
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);//Offset:Discovery.exe+0x154CFE0
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);//Offset:Discovery.exe+0x154C250
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);//Offset:Discovery.exe+0x154C470
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);//Offset:Discovery.exe+0x154C360
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);//Offset:Discovery.exe+0x154CD60
	void ServerAbilityRPCBatch(const struct FServerAbilityRPCBatch& BatchInfo);//Offset:Discovery.exe+0x154EEF0
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);//Offset:Discovery.exe+0x1553560
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);//Offset:Discovery.exe+0x1553690
	int RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);//Offset:Discovery.exe+0x1552340
	int RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);//Offset:Discovery.exe+0x1552260
	int RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);//Offset:Discovery.exe+0x1552180
	int RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);//Offset:Discovery.exe+0x1552180
	void ReleaseInputID(int InputID);//Offset:Discovery.exe+0x154ECE0
	void PressInputID(int InputID);//Offset:Discovery.exe+0x154ED80
	void OnSpawnedAttributesEndPlayed(class AActor* InActor, TEnumAsByte<EEndPlayReason> EndPlayReason);//Offset:Discovery.exe+0x154EA20
	void OnRep_ServerDebugString();//Offset:Discovery.exe+0x154F380
	void OnRep_ReplicatedAnimMontage();//Offset:Discovery.exe+0x154C630
	void OnRep_OwningActor();//Offset:Discovery.exe+0x154EC40
	void OnRep_ClientDebugString();//Offset:Discovery.exe+0x154F3A0
	void OnRep_ActivateAbilities();//Offset:Discovery.exe+0x154DB70
	void OnOwnerActorDestroyed(class AActor* InActor);//Offset:Discovery.exe+0x154EB00
	void OnAvatarActorDestroyed(class AActor* InActor);//Offset:Discovery.exe+0x154EBA0
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x1551280
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1551B10
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x15502D0
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x15516F0
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);//Offset:Discovery.exe+0x1551F20
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1551D50
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x1550740
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);//Offset:Discovery.exe+0x1550B60
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1550C90
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x15510B0
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);//Offset:Discovery.exe+0x1553320
	struct FGameplayEffectContextHandle MakeEffectContext();//Offset:Discovery.exe+0x1553250
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);//Offset:Discovery.exe+0x1553CA0
	struct FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(class UClass* AbilityClass, int Level, int InputID);//Offset:Discovery.exe+0x154FFA0
	struct FGameplayAbilitySpecHandle K2_GiveAbility(class UClass* AbilityClass, int Level, int InputID);//Offset:Discovery.exe+0x15500E0
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);//Offset:Discovery.exe+0x1550220
	void InputConfirm();//Offset:Discovery.exe+0x154ECC0
	void InputCancel();//Offset:Discovery.exe+0x154ECA0
	bool GetUserAbilityActivationInhibited();//Offset:Discovery.exe+0x154EEC0
	int GetGameplayTagCount(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x1552A00
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);//Offset:Discovery.exe+0x1552AA0
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);//Offset:Discovery.exe+0x1553110
	float GetGameplayAttributeValue(const struct FGameplayAttribute& Attribute, bool* bFound);//Offset:Discovery.exe+0x15539B0
	class UAttributeSet* GetAttributeSet(class UClass* AttributeSetClass);//Offset:Discovery.exe+0x1553B10
	void GetAllAttributes(TArray<struct FGameplayAttribute>* OutAttributes);//Offset:Discovery.exe+0x1553BB0
	void GetAllAbilities(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles);//Offset:Discovery.exe+0x154FA70
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags);//Offset:Discovery.exe+0x1552420
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(const struct FGameplayEffectQuery& Query);//Offset:Discovery.exe+0x1552540
	void FindAllAbilitiesWithTags(const struct FGameplayTagContainer& Tags, bool bExactMatch, TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles);//Offset:Discovery.exe+0x154F8D0
	void FindAllAbilitiesWithInputID(int InputID, TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles);//Offset:Discovery.exe+0x154F650
	void FindAllAbilitiesMatchingQuery(const struct FGameplayTagQuery& Query, TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles);//Offset:Discovery.exe+0x154F750
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);//Offset:Discovery.exe+0x154D220
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);//Offset:Discovery.exe+0x154E2E0
	void ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags);//Offset:Discovery.exe+0x154F3C0
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);//Offset:Discovery.exe+0x154CED0
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);//Offset:Discovery.exe+0x154CC50
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);//Offset:Discovery.exe+0x154C650
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);//Offset:Discovery.exe+0x154CA50
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);//Offset:Discovery.exe+0x154CB60
	void ClearAllAbilitiesWithInputID(int InputID);//Offset:Discovery.exe+0x154FEE0
	void ClearAllAbilities();//Offset:Discovery.exe+0x154FF80
	void ClearAbility(const struct FGameplayAbilitySpecHandle& Handle);//Offset:Discovery.exe+0x154FE30
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);//Offset:Discovery.exe+0x15527F0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1552640
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);//Offset:Discovery.exe+0x1553870
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const struct FGameplayEffectSpecHandle& SpecHandle);//Offset:Discovery.exe+0x1553780
	void AbilityConfirmOrCancel__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	void AbilityAbilityKey__DelegateSignature(int InputID);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.AbilityTask
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                            Ability;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask"));
		return ptr;
	}

};


// Class GameplayAbilities.AttributeSet
// 0x0008 (0x0030 - 0x0028)
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AttributeSet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility
// 0x0390 (0x03B8 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	struct FGameplayTagContainer                       AbilityTags;                                              // 0x00A8(0x0020) (Edit, DisableEditOnInstance)
	bool                                               bReplicateInputDirectly;                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RemoteInstanceEnded;                                      // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CA(0x0004) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        // 0x00CE(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         // 0x00CF(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerRespectsRemoteAbilityCancellation;                 // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRetriggerInstancedAbility;                               // 0x00D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                    // 0x00D8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayEventData                          CurrentEventData;                                         // 0x00F8(0x00B0) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                        // 0x01A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	class UClass*                                      CostGameplayEffectClass;                                  // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                          // 0x01B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CooldownGameplayEffectClass;                              // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                   // 0x01D0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                    // 0x01F0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                      // 0x0210(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                   // 0x0230(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                    // 0x0250(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceRequiredTags;                                       // 0x0270(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceBlockedTags;                                        // 0x0290(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetRequiredTags;                                       // 0x02B0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetBlockedTags;                                        // 0x02D0(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET
	TArray<class UGameplayTask*>                       ActiveTasks;                                              // 0x0310(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0320(0x0010) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x60];                                      // 0x0338(0x0060) MISSED OFFSET
	bool                                               bIsActive;                                                // 0x0398(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAbilityEnding;                                         // 0x0399(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCancelable;                                            // 0x039A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlockingOtherAbilities;                                // 0x039B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x14];                                      // 0x039C(0x0014) MISSED OFFSET
	bool                                               bMarkPendingKillOnAbilityEnd;                             // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbility"));
		return ptr;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);//Offset:Discovery.exe+0x1573D80
	void SetCanBeCanceled(bool bCanBeCanceled);//Offset:Discovery.exe+0x1573CC0
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);//Offset:Discovery.exe+0x1573420
	void RemoveGrantedByEffect();//Offset:Discovery.exe+0x15737A0
	void MontageStop(float OverrideBlendOutTime);//Offset:Discovery.exe+0x1571A50
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);//Offset:Discovery.exe+0x1571AF0
	void MontageJumpToSection(const struct FName& SectionName);//Offset:Discovery.exe+0x1571BD0
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);//Offset:Discovery.exe+0x1571860
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();//Offset:Discovery.exe+0x1571980
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);//Offset:Discovery.exe+0x1573EB0
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);//Offset:Discovery.exe+0x327F8B0
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);//Offset:Discovery.exe+0x1571F40
	void K2_OnEndAbility(bool bWasCancelled);//Offset:Discovery.exe+0x327F8B0
	bool K2_HasAuthority();//Offset:Discovery.exe+0x1573E50
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x15723F0
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);//Offset:Discovery.exe+0x1572610
	void K2_EndAbilityLocally();//Offset:Discovery.exe+0x15733E0
	void K2_EndAbility();//Offset:Discovery.exe+0x1573400
	void K2_CommitExecute();//Offset:Discovery.exe+0x327F8B0
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);//Offset:Discovery.exe+0x1573AE0
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);//Offset:Discovery.exe+0x1573B90
	bool K2_CommitAbility();//Offset:Discovery.exe+0x1573C90
	bool K2_CheckAbilityCost();//Offset:Discovery.exe+0x11BB1D0
	bool K2_CheckAbilityCooldown();//Offset:Discovery.exe+0x1573AB0
	void K2_CancelAbility();//Offset:Discovery.exe+0x1573D60
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);//Offset:Discovery.exe+0x327F8B0
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);//Offset:Discovery.exe+0x1572AB0
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);//Offset:Discovery.exe+0x15731B0
	void K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x1571FE0
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x1572250
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);//Offset:Discovery.exe+0x327F8B0
	void K2_ActivateAbility();//Offset:Discovery.exe+0x327F8B0
	bool IsLocallyControlled();//Offset:Discovery.exe+0x1573E80
	void InvalidateClientPredictionKey();//Offset:Discovery.exe+0x15737C0
	class UObject* GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo);//Offset:Discovery.exe+0x15737E0
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();//Offset:Discovery.exe+0x1574410
	class AActor* GetOwningActorFromActorInfo();//Offset:Discovery.exe+0x1574470
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();//Offset:Discovery.exe+0x1574310
	class UObject* GetCurrentSourceObject();//Offset:Discovery.exe+0x1573900
	class UAnimMontage* GetCurrentMontage();//Offset:Discovery.exe+0x1573A80
	float GetCooldownTimeRemaining();//Offset:Discovery.exe+0x1573E20
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);//Offset:Discovery.exe+0x1574030
	class AActor* GetAvatarActorFromActorInfo();//Offset:Discovery.exe+0x1574440
	struct FGameplayAbilityActorInfo GetActorInfo();//Offset:Discovery.exe+0x15744A0
	class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();//Offset:Discovery.exe+0x15743E0
	int GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo);//Offset:Discovery.exe+0x1573930
	int GetAbilityLevel();//Offset:Discovery.exe+0x1573A50
	void EndTaskByInstanceName(const struct FName& InstanceName);//Offset:Discovery.exe+0x1571DB0
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);//Offset:Discovery.exe+0x1571C70
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);//Offset:Discovery.exe+0x1571E50
	void CancelTaskByInstanceName(const struct FName& InstanceName);//Offset:Discovery.exe+0x1571D10
	void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);//Offset:Discovery.exe+0x1572760
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);//Offset:Discovery.exe+0x1572850
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);//Offset:Discovery.exe+0x1572980
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);//Offset:Discovery.exe+0x1572DF0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);//Offset:Discovery.exe+0x15732A0
};


// Class GameplayAbilities.AbilityAsync
// 0x0008 (0x0038 - 0x0030)
class UAbilityAsync : public UCancellableAsyncAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityAsync"));
		return ptr;
	}


	void EndAction();//Offset:Discovery.exe+0x11B68C0
};


// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
// 0x0058 (0x0090 - 0x0038)
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{
public:
	struct FScriptMulticastDelegate                    Changed;                                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityAsync_WaitAttributeChanged"));
		return ptr;
	}


	class UAbilityAsync_WaitAttributeChanged* STATIC_WaitForAttributeChanged(class AActor* TargetActor, const struct FGameplayAttribute& Attribute, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x15383A0
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
// 0x00D0 (0x0108 - 0x0038)
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0048(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied"));
		return ptr;
	}


	class UAbilityAsync_WaitGameplayEffectApplied* STATIC_WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);//Offset:Discovery.exe+0x1538850
	void OnAppliedDelegate__DelegateSignature(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
// 0x0028 (0x0060 - 0x0038)
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
public:
	struct FScriptMulticastDelegate                    EventReceived;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityAsync_WaitGameplayEvent"));
		return ptr;
	}


	class UAbilityAsync_WaitGameplayEvent* STATIC_WaitGameplayEventToActor(class AActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);//Offset:Discovery.exe+0x1538FF0
	void EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
// 0x0018 (0x0050 - 0x0038)
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityAsync_WaitGameplayTag"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
// 0x0010 (0x0060 - 0x0050)
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                    // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded"));
		return ptr;
	}


	class UAbilityAsync_WaitGameplayTagAdded* STATIC_WaitGameplayTagAddToActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1539570
};


// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
// 0x0010 (0x0060 - 0x0050)
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                  // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved"));
		return ptr;
	}


	class UAbilityAsync_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1539970
};


// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemBlueprintLibrary"));
		return ptr;
	}


	bool STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);//Offset:Discovery.exe+0x1541C70
	bool STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);//Offset:Discovery.exe+0x1541FB0
	bool STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);//Offset:Discovery.exe+0x1541910
	bool STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);//Offset:Discovery.exe+0x1542120
	struct FGameplayEffectSpecHandle STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);//Offset:Discovery.exe+0x153B0A0
	struct FGameplayEffectSpecHandle STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);//Offset:Discovery.exe+0x153B210
	struct FGameplayEffectSpecHandle STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);//Offset:Discovery.exe+0x153BF30
	void STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);//Offset:Discovery.exe+0x1545030
	bool STATIC_RemoveLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate);//Offset:Discovery.exe+0x153AAA0
	bool STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);//Offset:Discovery.exe+0x1543EE0
	bool STATIC_NotEqual_GameplayAbilitySpecHandle(const struct FGameplayAbilitySpecHandle& A, const struct FGameplayAbilitySpecHandle& B);//Offset:Discovery.exe+0x1539D20
	bool STATIC_NotEqual_ActiveGameplayEffectHandle(const struct FActiveGameplayEffectHandle& A, const struct FActiveGameplayEffectHandle& B);//Offset:Discovery.exe+0x153A120
	struct FGameplayEffectSpecHandle STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);//Offset:Discovery.exe+0x1542960
	struct FGameplayCueParameters STATIC_MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int GameplayEffectLevel, int AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);//Offset:Discovery.exe+0x153CF10
	struct FGameplayTargetDataFilterHandle STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);//Offset:Discovery.exe+0x1542B70
	bool STATIC_IsValid(const struct FGameplayAttribute& Attribute);//Offset:Discovery.exe+0x1544F40
	bool STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1540190
	bool STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x15404D0
	bool STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x153F430
	struct FTransform STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);//Offset:Discovery.exe+0x1541A80
	struct FTransform STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);//Offset:Discovery.exe+0x1541590
	struct FVector STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);//Offset:Discovery.exe+0x1541780
	struct FVector STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x153E630
	float STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);//Offset:Discovery.exe+0x153A900
	struct FTransform STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x153E980
	class AActor* STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x153ED00
	struct FHitResult STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);//Offset:Discovery.exe+0x1541DE0
	struct FHitResult STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x153F770
	class UGameplayEffectUIData* STATIC_GetGameplayEffectUIData(class UClass* EffectClass, class UClass* DataType);//Offset:Discovery.exe+0x153A340
	class UGameplayEffect* STATIC_GetGameplayEffectFromActiveEffectHandle(const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A070
	bool STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);//Offset:Discovery.exe+0x153E1E0
	bool STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);//Offset:Discovery.exe+0x153DDF0
	class UGameplayAbility* STATIC_GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool* bIsInstance);//Offset:Discovery.exe+0x1539F20
	float STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);//Offset:Discovery.exe+0x1544BE0
	float STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);//Offset:Discovery.exe+0x1544880
	float STATIC_GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);//Offset:Discovery.exe+0x1544A30
	float STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);//Offset:Discovery.exe+0x1544D90
	struct FGameplayEffectContextHandle STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);//Offset:Discovery.exe+0x153AF40
	int STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);//Offset:Discovery.exe+0x15433C0
	TArray<struct FGameplayEffectSpecHandle> STATIC_GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);//Offset:Discovery.exe+0x153AD80
	TArray<class AActor*> STATIC_GetAllActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);//Offset:Discovery.exe+0x1542450
	TArray<class AActor*> STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);//Offset:Discovery.exe+0x15425B0
	int STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x153FE50
	class AActor* STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);//Offset:Discovery.exe+0x153FAC0
	float STATIC_GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A5E0
	float STATIC_GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A720
	int STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A7C0
	int STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A860
	float STATIC_GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A4F0
	float STATIC_GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A680
	struct FString STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x153A420
	class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(class AActor* Actor);//Offset:Discovery.exe+0x15453F0
	void STATIC_ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x153F040
	struct FGameplayAbilityTargetDataHandle STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);//Offset:Discovery.exe+0x1542D20
	float STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);//Offset:Discovery.exe+0x1544260
	float STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);//Offset:Discovery.exe+0x15445A0
	bool STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);//Offset:Discovery.exe+0x15440A0
	bool STATIC_EqualEqual_GameplayAbilitySpecHandle(const struct FGameplayAbilitySpecHandle& A, const struct FGameplayAbilitySpecHandle& B);//Offset:Discovery.exe+0x1539E20
	bool STATIC_EqualEqual_ActiveGameplayEffectHandle(const struct FActiveGameplayEffectHandle& A, const struct FActiveGameplayEffectHandle& B);//Offset:Discovery.exe+0x153A230
	void STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);//Offset:Discovery.exe+0x1540C10
	bool STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1541490
	bool STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1541390
	bool STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1541160
	class UObject* STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1540810
	class AActor* STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1540A10
	struct FVector STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1540D70
	class AActor* STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1540B10
	struct FHitResult STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1541260
	class AActor* STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1540910
	void STATIC_EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);//Offset:Discovery.exe+0x1540E80
	bool STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);//Offset:Discovery.exe+0x1542290
	bool STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, const struct FGameplayTagRequirements& SourceTagReqs, const struct FGameplayTagRequirements& TargetTagReqs);//Offset:Discovery.exe+0x153D910
	struct FGameplayEffectSpecHandle STATIC_CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);//Offset:Discovery.exe+0x1542760
	void STATIC_BreakGameplayCueParameters(const struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int* GameplayEffectLevel, int* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy);//Offset:Discovery.exe+0x153C4F0
	struct FGameplayEffectSpecHandle STATIC_AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);//Offset:Discovery.exe+0x153C0F0
	struct FGameplayEffectSpecHandle STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);//Offset:Discovery.exe+0x153C2F0
	struct FGameplayAbilityTargetDataHandle STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);//Offset:Discovery.exe+0x1543A80
	bool STATIC_AddLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate);//Offset:Discovery.exe+0x153AC10
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);//Offset:Discovery.exe+0x153B590
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect);//Offset:Discovery.exe+0x153B3D0
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);//Offset:Discovery.exe+0x153BB60
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);//Offset:Discovery.exe+0x153BD70
	struct FGameplayEffectSpecHandle STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);//Offset:Discovery.exe+0x153B790
	struct FGameplayEffectSpecHandle STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);//Offset:Discovery.exe+0x153B9A0
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);//Offset:Discovery.exe+0x1543780
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);//Offset:Discovery.exe+0x15434E0
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);//Offset:Discovery.exe+0x1543010
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActor(class AActor* Actor);//Offset:Discovery.exe+0x1543220
};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x03B8 - 0x03B8)
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemDebugHUD"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemGlobals
// 0x0238 (0x0260 - 0x0028)
class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                              AbilitySystemGlobalsClassName;                            // 0x0028(0x0018) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
	bool                                               bUseDebugTargetFromHud;                                   // 0x0068(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FGameplayTag                                ActivateFailIsDeadTag;                                    // 0x006C(0x0008)
	struct FName                                       ActivateFailIsDeadName;                                   // 0x0074(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailCooldownTag;                                  // 0x007C(0x0008)
	struct FName                                       ActivateFailCooldownName;                                 // 0x0084(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailCostTag;                                      // 0x008C(0x0008)
	struct FName                                       ActivateFailCostName;                                     // 0x0094(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                               // 0x009C(0x0008)
	struct FName                                       ActivateFailTagsBlockedName;                              // 0x00A4(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                               // 0x00AC(0x0008)
	struct FName                                       ActivateFailTagsMissingName;                              // 0x00B4(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                // 0x00BC(0x0008)
	struct FName                                       ActivateFailNetworkingName;                               // 0x00C4(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinimalReplicationTagCountBits;                           // 0x00CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FNetSerializeScriptStructCache              TargetDataStructCache;                                    // 0x00D0(0x0010)
	bool                                               bAllowGameplayModEvaluationChannels;                      // 0x00E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	enum class EGameplayModEvaluationChannel           DefaultGameplayModEvaluationChannel;                      // 0x00E1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	struct FName                                       GameplayModEvaluationChannelAliases[0xA];                 // 0x00E4(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             GlobalCurveTableName;                                     // 0x0138(0x0018) (ZeroConstructor, Config)
	class UCurveTable*                                 GlobalCurveTable;                                         // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             GlobalAttributeMetaDataTableName;                         // 0x0158(0x0018) (ZeroConstructor, Config)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                             // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             GlobalAttributeSetDefaultsTableName;                      // 0x0178(0x0018) (ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     GlobalAttributeSetDefaultsTableNames;                     // 0x0190(0x0010) (ZeroConstructor, Config)
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                            // 0x01A0(0x0010) (ZeroConstructor)
	struct FSoftObjectPath                             GlobalGameplayCueManagerClass;                            // 0x01B0(0x0018) (ZeroConstructor, Config)
	struct FSoftObjectPath                             GlobalGameplayCueManagerName;                             // 0x01C8(0x0018) (ZeroConstructor, Config)
	TArray<struct FString>                             GameplayCueNotifyPaths;                                   // 0x01E0(0x0010) (ZeroConstructor, Config)
	struct FSoftObjectPath                             GameplayTagResponseTableName;                             // 0x01F0(0x0018) (ZeroConstructor, Config)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                 // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PredictTargetGameplayEffects;                             // 0x0210(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               ReplicateActivationOwnedTags;                             // 0x0211(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0212(0x0006) MISSED OFFSET
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                 // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x40];                                      // 0x0220(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemGlobals"));
		return ptr;
	}


	void ToggleIgnoreAbilitySystemCosts();//Offset:Discovery.exe+0x155C080
	void ToggleIgnoreAbilitySystemCooldowns();//Offset:Discovery.exe+0x155C0A0
	void ServerEndPlayerAbility(const struct FString& AbilityNameMatch);//Offset:Discovery.exe+0x155BF70
	void ServerCancelPlayerAbility(const struct FString& AbilityNameMatch);//Offset:Discovery.exe+0x155BF70
	void ServerActivatePlayerAbility(const struct FString& AbilityNameMatch);//Offset:Discovery.exe+0x155BF70
	void ListPlayerAbilities();//Offset:Discovery.exe+0x155C060
};


// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemInterface"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemReplicationProxyInterface"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (0x0070 - 0x0030)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              MaxHealth;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Mana;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxMana;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpellDamage;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritChance;                                               // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ArmorDamageReduction;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DodgeChance;                                              // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LifeSteal;                                                // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute1;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute2;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoStackAttribute;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemTestAttributeSet"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (0x0390 - 0x0370)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilitySystemTestPawn"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0048 (0x00C8 - 0x0080)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	struct FName                                       ForceName;                                                // 0x0080(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	enum class ERootMotionFinishVelocityMode           FinishVelocityMode;                                       // 0x0088(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FVector                                     FinishSetVelocity;                                        // 0x0090(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	float                                              FinishClampVelocity;                                      // 0x00A8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 MovementComponent;                                        // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0048 (0x0110 - 0x00C8)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     WorldDirection;                                           // 0x00D8(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00F4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x0100(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableGravity;                                           // 0x0108(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce"));
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionConstantForce* STATIC_ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);//Offset:Discovery.exe+0x155D060
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0068 (0x0130 - 0x00C8)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLanded;                                                 // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FRotator                                    Rotation;                                                 // 0x00E8(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0100(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0104(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0108(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // 0x010C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bFinishOnLanded;                                          // 0x0110(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0118(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0120(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce"));
		return ptr;
	}


	void OnLandedCallback(const struct FHitResult& Hit);//Offset:Discovery.exe+0x155DF40
	void Finish();//Offset:Discovery.exe+0x155E0B0
	class UAbilityTask_ApplyRootMotionJumpForce* STATIC_ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);//Offset:Discovery.exe+0x155DA20
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x00A0 (0x0168 - 0x00C8)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x00E0(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00F8(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // 0x0118(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	enum class ERootMotionMoveToActorTargetOffsetType  OffsetAlignment;                                          // 0x0130(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0134(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableDestinationReachedInterrupt;                      // 0x0138(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x0139(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x013A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x013B(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0140(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0148(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                           // 0x0150(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                             // 0x0158(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce"));
		return ptr;
	}


	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);//Offset:Discovery.exe+0x155E880
	void OnRep_TargetLocation();//Offset:Discovery.exe+0x155E860
	class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int TargetDataIndex, int TargetActorIndex, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);//Offset:Discovery.exe+0x155E960
	class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);//Offset:Discovery.exe+0x155F340
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0068 (0x0130 - 0x00C8)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnTimedOut;                                               // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimedOutAndDestinationReached;                          // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     StartLocation;                                            // 0x00E8(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0100(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0118(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x011C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x011D(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x011E(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x011F(0x0001) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0120(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce"));
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionMoveToForce* STATIC_ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);//Offset:Discovery.exe+0x1560440
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0070 (0x0138 - 0x00C8)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     Location;                                                 // 0x00D8(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LocationActor;                                            // 0x00F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0100(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x0104(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x0105(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x0106(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0107(0x0001) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x0108(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x0118(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x0120(0x0018) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce"));
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionRadialForce* STATIC_ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);//Offset:Discovery.exe+0x1560E70
};


// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0068 (0x00E8 - 0x0080)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                  // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x0098(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00B0(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DurationOfMovement;                                       // 0x00C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00CC(0x000C) MISSED OFFSET
	class UCurveFloat*                                 LerpCurve;                                                // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                LerpCurveVector;                                          // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_MoveToLocation"));
		return ptr;
	}


	class UAbilityTask_MoveToLocation* STATIC_MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);//Offset:Discovery.exe+0x1562EC0
};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                   // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_NetworkSyncPoint"));
		return ptr;
	}


	class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);//Offset:Discovery.exe+0x1480DA0
	void OnSignalCallback();//Offset:Discovery.exe+0x1563650
};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0088 (0x0108 - 0x0080)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET
	class UAnimMontage*                                MontageToPlay;                                            // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // 0x00F4(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimRootMotionTranslationScale;                           // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTimeSeconds;                                         // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAbilityEnds;                                     // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_PlayMontageAndWait"));
		return ptr;
	}


	void OnMontageInterrupted();//Offset:Discovery.exe+0x1563AA0
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);//Offset:Discovery.exe+0x15639B0
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);//Offset:Discovery.exe+0x1563AC0
	class UAbilityTask_PlayMontageAndWait* STATIC_CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds);//Offset:Discovery.exe+0x1481480
};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_Repeat"));
		return ptr;
	}


	class UAbilityTask_Repeat* STATIC_RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount);//Offset:Discovery.exe+0x1563FF0
};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0048 (0x00C8 - 0x0080)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_SpawnActor"));
		return ptr;
	}


	class UAbilityTask_SpawnActor* STATIC_SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);//Offset:Discovery.exe+0x1564A40
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);//Offset:Discovery.exe+0x15643E0
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);//Offset:Discovery.exe+0x15646D0
};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                             // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                       // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_StartAbilityState"));
		return ptr;
	}


	class UAbilityTask_StartAbilityState* STATIC_StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState);//Offset:Discovery.exe+0x15650F0
};


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    TimeElapsed;                                              // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_VisualizeTargeting"));
		return ptr;
	}


	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);//Offset:Discovery.exe+0x1565710
	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const struct FName& TaskInstanceName, float Duration);//Offset:Discovery.exe+0x1565890
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);//Offset:Discovery.exe+0x15654E0
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);//Offset:Discovery.exe+0x15655C0
};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x00C0 (0x0140 - 0x0080)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0090(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitAbilityActivate"));
		return ptr;
	}


	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);//Offset:Discovery.exe+0x1566060
	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);//Offset:Discovery.exe+0x1565E60
	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);//Offset:Discovery.exe+0x15662C0
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);//Offset:Discovery.exe+0x1566490
};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0078 (0x00F8 - 0x0080)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0090(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitAbilityCommit"));
		return ptr;
	}


	class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);//Offset:Discovery.exe+0x1566990
	class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);//Offset:Discovery.exe+0x1566B40
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);//Offset:Discovery.exe+0x1566CC0
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0078 (0x00F8 - 0x0080)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0090(0x0060) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitAttributeChange"));
		return ptr;
	}


	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);//Offset:Discovery.exe+0x1567190
	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);//Offset:Discovery.exe+0x1567530
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x00C0 (0x0140 - 0x0080)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0090(0x00A8) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold"));
		return ptr;
	}


	class UAbilityTask_WaitAttributeChangeRatioThreshold* STATIC_WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);//Offset:Discovery.exe+0x1567B40
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0070 (0x00F0 - 0x0080)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0090(0x0058) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold"));
		return ptr;
	}


	class UAbilityTask_WaitAttributeChangeThreshold* STATIC_WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);//Offset:Discovery.exe+0x15681A0
};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitCancel"));
		return ptr;
	}


	class UAbilityTask_WaitCancel* STATIC_WaitCancel(class UGameplayAbility* OwningAbility);//Offset:Discovery.exe+0x1568720
	void OnLocalCancelCallback();//Offset:Discovery.exe+0x15687C0
	void OnCancelCallback();//Offset:Discovery.exe+0x15687E0
};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitConfirm"));
		return ptr;
	}


	class UAbilityTask_WaitConfirm* STATIC_WaitConfirm(class UGameplayAbility* OwningAbility);//Offset:Discovery.exe+0x1568B90
	void OnConfirmCallback(class UGameplayAbility* InAbility);//Offset:Discovery.exe+0x1568C30
};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitConfirmCancel"));
		return ptr;
	}


	class UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(class UGameplayAbility* OwningAbility);//Offset:Discovery.exe+0x156A020
	void OnLocalConfirmCallback();//Offset:Discovery.exe+0x156A0E0
	void OnLocalCancelCallback();//Offset:Discovery.exe+0x156A0C0
	void OnConfirmCallback();//Offset:Discovery.exe+0x156A120
	void OnCancelCallback();//Offset:Discovery.exe+0x156A100
};


// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitDelay"));
		return ptr;
	}


	class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time);//Offset:Discovery.exe+0x14811B0
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x0148 (0x01C8 - 0x0080)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0080(0x0138) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x01B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied"));
		return ptr;
	}


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);//Offset:Discovery.exe+0x156A890
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0020 (0x01E8 - 0x01C8)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);//Offset:Discovery.exe+0x156ACB0
	class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);//Offset:Discovery.exe+0x156B090
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0020 (0x01E8 - 0x01C8)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);//Offset:Discovery.exe+0x156B870
	class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);//Offset:Discovery.exe+0x156BC50
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x00B8 (0x0138 - 0x0080)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Blocked;                                                  // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0090(0x0098) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectBlockedImmunity* STATIC_WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x156C430
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);//Offset:Discovery.exe+0x156CAA0
	void OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);//Offset:Discovery.exe+0x156CB90
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectStackChange* STATIC_WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);//Offset:Discovery.exe+0x156CFC0
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount);//Offset:Discovery.exe+0x156D0B0
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0030 (0x00B0 - 0x0080)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    EventReceived;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayEvent"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);//Offset:Discovery.exe+0x14812A0
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayTag"));
		return ptr;
	}


	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);//Offset:Discovery.exe+0x156DDE0
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                    // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1481020
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                  // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved"));
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1480E90
};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                  // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitInputPress"));
		return ptr;
	}


	class UAbilityTask_WaitInputPress* STATIC_WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);//Offset:Discovery.exe+0x156E0B0
	void OnPressCallback();//Offset:Discovery.exe+0x156E1A0
};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitInputRelease"));
		return ptr;
	}


	class UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);//Offset:Discovery.exe+0x156E500
	void OnReleaseCallback();//Offset:Discovery.exe+0x156E5F0
};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitMovementModeChange"));
		return ptr;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);//Offset:Discovery.exe+0x156E950
	class UAbilityTask_WaitMovementModeChange* STATIC_CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);//Offset:Discovery.exe+0x1480CB0
};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0090 - 0x0080)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitOverlap"));
		return ptr;
	}


	class UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(class UGameplayAbility* OwningAbility);//Offset:Discovery.exe+0x156EDC0
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);//Offset:Discovery.exe+0x156EE60
};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Cancelled;                                                // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      TargetClass;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitTargetData"));
		return ptr;
	}


	class UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);//Offset:Discovery.exe+0x156F6C0
	class UAbilityTask_WaitTargetData* STATIC_WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);//Offset:Discovery.exe+0x156F840
	void OnTargetDataReplicatedCancelledCallback();//Offset:Discovery.exe+0x156FC20
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);//Offset:Discovery.exe+0x156FC40
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);//Offset:Discovery.exe+0x156FAF0
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);//Offset:Discovery.exe+0x156F9C0
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);//Offset:Discovery.exe+0x156F490
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);//Offset:Discovery.exe+0x156F570
};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AbilityTask_WaitVelocityChange"));
		return ptr;
	}


	class UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);//Offset:Discovery.exe+0x1570E70
};


// Class GameplayAbilities.AnimNotify_GameplayCue
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_GameplayCue : public UAnimNotify
{
public:
	struct FGameplayCueTag                             GameplayCue;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AnimNotify_GameplayCue"));
		return ptr;
	}

};


// Class GameplayAbilities.AnimNotify_GameplayCueState
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{
public:
	struct FGameplayCueTag                             GameplayCue;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.AnimNotify_GameplayCueState"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityBlueprint"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0040 - 0x0030)
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilitySet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0148 (0x0410 - 0x02C8)
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                               ShouldProduceTargetDataOnServer;                          // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                            // 0x02D0(0x00A0) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0370(0x0030) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGameplayAbility*                            OwningAbility;                                            // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnConfirmation;                                   // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FWorldReticleParameters                     ReticleParams;                                            // 0x03C0(0x0018) (BlueprintVisible)
	class UClass*                                      ReticleClass;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             Filter;                                                   // 0x03E0(0x0010) (BlueprintVisible, Net)
	bool                                               bDebug;                                                   // 0x03F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x03F1(0x0017) MISSED OFFSET
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                  // 0x0408(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityTargetActor"));
		return ptr;
	}


	void ConfirmTargeting();//Offset:Discovery.exe+0x14624B0
	void CancelTargeting();//Offset:Discovery.exe+0x157BE70
};


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0020 (0x0430 - 0x0410)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	float                                              MaxRange;                                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCollisionProfileName                       TraceProfile;                                             // 0x0414(0x0008) (Edit, BlueprintVisible, Config)
	bool                                               bTraceAffectsAimPitch;                                    // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x041D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityTargetActor_Trace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x0450 - 0x0430)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0010 (0x0460 - 0x0450)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UMaterialInterface*                          PlacedActorMaterial;                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0010 (0x0420 - 0x0410)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	float                                              Radius;                                                   // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0414(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityTargetActor_Radius"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x0430 - 0x0430)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0030 (0x02F8 - 0x02C8)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters                     Parameters;                                               // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                               bFaceOwnerFlat;                                           // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToTargetedActor;                                     // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetValid;                                           // 0x02E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetAnActor;                                         // 0x02E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetingActor;                                           // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityWorldReticle"));
		return ptr;
	}


	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);//Offset:Discovery.exe+0x327F8B0
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);//Offset:Discovery.exe+0x327F8B0
	void OnValidTargetChanged(bool bNewValue);//Offset:Discovery.exe+0x327F8B0
	void OnTargetingAnActor(bool bNewValue);//Offset:Discovery.exe+0x327F8B0
	void OnParametersInitialized();//Offset:Discovery.exe+0x327F8B0
	void FaceTowardSource(bool bFaceIn2D);//Offset:Discovery.exe+0x157D920
};


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x0310 - 0x02F8)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UActorComponent*>                     VisualizationComponents;                                  // 0x0300(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (0x03B8 - 0x03B8)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbility_CharacterJump"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_Montage
// 0x0038 (0x03F0 - 0x03B8)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                            // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SectionName;                                              // 0x03C4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                      // 0x03D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                            // 0x03E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayAbility_Montage"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueFunctionLibrary"));
		return ptr;
	}


	void STATIC_RemoveGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x157E070
	struct FGameplayCueParameters STATIC_MakeGameplayCueParametersFromHitResult(const struct FHitResult& HitResult);//Offset:Discovery.exe+0x157E790
	void STATIC_ExecuteGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x157E530
	void STATIC_AddGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x157E2D0
};


// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueInterface"));
		return ptr;
	}


	void ForwardGameplayCueToParent();//Offset:Discovery.exe+0x1580A20
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.GameplayCueManager
// 0x02E0 (0x0310 - 0x0030)
class UGameplayCueManager : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FGameplayCueObjectLibrary                   RuntimeGameplayCueObjectLibrary;                          // 0x0048(0x0050) (Transient)
	struct FGameplayCueObjectLibrary                   EditorGameplayCueObjectLibrary;                           // 0x0098(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x1C8];                                     // 0x00E8(0x01C8) MISSED OFFSET
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                           // 0x02B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                       // 0x02C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                       // 0x02D0(0x0010) (ZeroConstructor, Transient)
	int                                                GameplayCueSendContextCount;                              // 0x02E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TArray<struct FPreallocationInfo>                  PreallocationInfoList_Internal;                           // 0x02E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x02F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueManager"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0060 (0x0328 - 0x02C8)
class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                               bAutoDestroyOnRemove;                                     // 0x02C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              AutoDestroyDelay;                                         // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WarnIfTimelineIsStillRunning;                             // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WarnIfLatentActionIsStillRunning;                         // 0x02D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02D2(0x0002) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x02D4(0x0008) (Edit, DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x02DC(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAttachToOwner;                                       // 0x02E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x02E5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerInstigator;                             // 0x02E6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerSourceObject;                           // 0x02E7(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMultipleOnActiveEvents;                             // 0x02E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMultipleWhileActiveEvents;                          // 0x02E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02EA(0x0002) MISSED OFFSET
	int                                                NumPreallocatedInstances;                                 // 0x02EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x02F0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueNotify_Actor"));
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1581EE0
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1581CC0
	void OnOwnerDestroyed(class AActor* DestroyedActor);//Offset:Discovery.exe+0x1582560
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1582320
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1582100
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x327F8B0
	void K2_EndGameplayCue();//Offset:Discovery.exe+0x1582540
};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0018 (0x0040 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueNotify_Static"));
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1588550
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1588330
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1588990
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1588770
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.GameplayCueNotify_Burst
// 0x0358 (0x0398 - 0x0040)
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{
public:
	struct FGameplayCueNotify_SpawnCondition           DefaultSpawnCondition;                                    // 0x0040(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_PlacementInfo            DefaultPlacementInfo;                                     // 0x0078(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_BurstEffects             BurstEffects;                                             // 0x00B8(0x02E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueNotify_Burst"));
		return ptr;
	}


	void OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.GameplayCueNotify_BurstLatent
// 0x03B8 (0x06E0 - 0x0328)
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{
public:
	struct FGameplayCueNotify_SpawnCondition           DefaultSpawnCondition;                                    // 0x0328(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_PlacementInfo            DefaultPlacementInfo;                                     // 0x0360(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_BurstEffects             BurstEffects;                                             // 0x03A0(0x02E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_SpawnResult              BurstSpawnResults;                                        // 0x0680(0x0060) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueNotify_BurstLatent"));
		return ptr;
	}


	void OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0050 - 0x0040)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueNotify_HitImpact"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Looping
// 0x0CD8 (0x1000 - 0x0328)
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
public:
	struct FGameplayCueNotify_SpawnCondition           DefaultSpawnCondition;                                    // 0x0328(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_PlacementInfo            DefaultPlacementInfo;                                     // 0x0360(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_BurstEffects             ApplicationEffects;                                       // 0x03A0(0x02E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_SpawnResult              ApplicationSpawnResults;                                  // 0x0680(0x0060) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayCueNotify_LoopingEffects           LoopingEffects;                                           // 0x06E0(0x0238) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_SpawnResult              LoopingSpawnResults;                                      // 0x0918(0x0060) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayCueNotify_BurstEffects             RecurringEffects;                                         // 0x0978(0x02E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_SpawnResult              RecurringSpawnResults;                                    // 0x0C58(0x0060) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayCueNotify_BurstEffects             RemovalEffects;                                           // 0x0CB8(0x02E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayCueNotify_SpawnResult              RemovalSpawnResults;                                      // 0x0F98(0x0060) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0FF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueNotify_Looping"));
		return ptr;
	}


	void OnRemoval(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);//Offset:Discovery.exe+0x327F8B0
	void OnRecurring(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);//Offset:Discovery.exe+0x327F8B0
	void OnLoopingStart(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);//Offset:Discovery.exe+0x327F8B0
	void OnApplication(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayAbilities.GameplayCueSet
// 0x0060 (0x0090 - 0x0030)
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueSet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueTranslator"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayCueTranslator_Test"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffect
// 0x07F8 (0x0820 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	enum class EGameplayEffectDurationType             DurationPolicy;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                        // 0x0038(0x01E0) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              Period;                                                   // 0x0218(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bExecutePeriodicEffectOnApplication;                      // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;                                 // 0x0241(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              ChanceToApplyToTarget;                                    // 0x0268(0x0028) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              ApplicationRequirements;                                  // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TargetEffectClasses;                                      // 0x02A0(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               // 0x02B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              OverflowEffects;                                          // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDenyOverflowApplication;                                 // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearStackOnOverflow;                                    // 0x02D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x02D2(0x0006) MISSED OFFSET
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                         // 0x02D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                           // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRequireModifierSuccessToTriggerCues;                     // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSuppressStackingCues;                                    // 0x02F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x02FA(0x0006) MISSED OFFSET
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                             // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UGameplayEffectUIData*                       UIData;                                                   // 0x0310(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                            // 0x0318(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            // 0x0378(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   // 0x03D8(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               // 0x0420(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    RemovalTagRequirements;                                   // 0x0468(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                            // 0x04B0(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                           // 0x0510(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayEffectQuery                        GrantedApplicationImmunityQuery;                          // 0x0558(0x0150) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FGameplayEffectQuery                        RemoveGameplayEffectQuery;                                // 0x06B0(0x0150) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0800(0x0001) MISSED OFFSET
	enum class EGameplayEffectStackingType             StackingType;                                             // 0x0801(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0802(0x0002) MISSED OFFSET
	int                                                StackLimitCount;                                          // 0x0804(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EGameplayEffectStackingDurationPolicy   StackDurationRefreshPolicy;                               // 0x0808(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EGameplayEffectStackingPeriodPolicy     StackPeriodResetPolicy;                                   // 0x0809(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                                    // 0x080A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x5];                                       // 0x080B(0x0005) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                         // 0x0810(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayEffect"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayEffectCalculation"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement"));
		return ptr;
	}


	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);//Offset:Discovery.exe+0x158E740
};


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayEffectExecutionCalculation"));
		return ptr;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);//Offset:Discovery.exe+0x158ED60
};


// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayEffectUIData"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0018 (0x0040 - 0x0028)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayEffectUIData_TextOnly"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;              // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayModMagnitudeCalculation"));
		return ptr;
	}


	float K2_GetCapturedAttributeMagnitude(const struct FGameplayEffectSpec& EffectSpec, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags);//Offset:Discovery.exe+0x15907D0
	struct FGameplayTagContainer GetTargetSpecTags(const struct FGameplayEffectSpec& EffectSpec);//Offset:Discovery.exe+0x1590030
	struct FGameplayTagContainer GetTargetAggregatedTags(const struct FGameplayEffectSpec& EffectSpec);//Offset:Discovery.exe+0x15901D0
	struct FGameplayTagContainer GetTargetActorTags(const struct FGameplayEffectSpec& EffectSpec);//Offset:Discovery.exe+0x1590100
	struct FGameplayTagContainer GetSourceSpecTags(const struct FGameplayEffectSpec& EffectSpec);//Offset:Discovery.exe+0x15902D0
	struct FGameplayTagContainer GetSourceAggregatedTags(const struct FGameplayEffectSpec& EffectSpec);//Offset:Discovery.exe+0x1590470
	struct FGameplayTagContainer GetSourceActorTags(const struct FGameplayEffectSpec& EffectSpec);//Offset:Discovery.exe+0x15903A0
	float GetSetByCallerMagnitudeByTag(const struct FGameplayEffectSpec& EffectSpec, const struct FGameplayTag& Tag);//Offset:Discovery.exe+0x15906A0
	float GetSetByCallerMagnitudeByName(const struct FGameplayEffectSpec& EffectSpec, const struct FName& MagnitudeName);//Offset:Discovery.exe+0x1590570
	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1590A80
};


// Class GameplayAbilities.GameplayTagReponseTable
// 0x01B8 (0x01E8 - 0x0030)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0040(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.GameplayTagReponseTable"));
		return ptr;
	}


	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx);//Offset:Discovery.exe+0x1591650
};


// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
// 0x00D0 (0x01D0 - 0x0100)
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueChannel               Channel;                                                  // 0x0100(0x00D0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.MovieSceneGameplayCueTriggerSection"));
		return ptr;
	}

};


// Class GameplayAbilities.MovieSceneGameplayCueSection
// 0x0090 (0x0190 - 0x0100)
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueKey                   Cue;                                                      // 0x0100(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.MovieSceneGameplayCueSection"));
		return ptr;
	}

};


// Class GameplayAbilities.MovieSceneGameplayCueTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.MovieSceneGameplayCueTrack"));
		return ptr;
	}


	void STATIC_SetSequencerTrackHandler(const struct FScriptDelegate& InGameplayCueTrackHandler);//Offset:Discovery.exe+0x1593F60
};


// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayAbilities.TickableAttributeSetInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
