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

// Class AngelscriptGAS.AbilitySystemComponentMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemComponentMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AbilitySystemComponentMixinLibrary"));
		return ptr;
	}


	void STATIC_RemoveLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& GameplayTags, int Count);//Offset:Discovery.exe+0x1476630
	void STATIC_RemoveLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayTag, int Count);//Offset:Discovery.exe+0x1476820
	void STATIC_RemoveGameplayCue(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag);//Offset:Discovery.exe+0x1476FC0
	void STATIC_RemoveAllGameplayCues(class UAbilitySystemComponent* AbilitySystemComponent);//Offset:Discovery.exe+0x1476F20
	void STATIC_InitDefaultGameplayCueParameters(class UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayCueParameters* Parameters);//Offset:Discovery.exe+0x1476CF0
	void STATIC_GetOwnedGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTagContainer* TagContainer);//Offset:Discovery.exe+0x14764F0
	struct FActiveGameplayEffect STATIC_GetActiveGameplayEffect(class UAbilitySystemComponent* AbilitySystemComponent, const struct FActiveGameplayEffectHandle& Handle);//Offset:Discovery.exe+0x1476230
	void STATIC_ExecuteGameplayCueWithParameters(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x1477620
	void STATIC_ExecuteGameplayCueWithEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1477890
	bool STATIC_AreAbilityTagsBlocked(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& Tags);//Offset:Discovery.exe+0x14763B0
	void STATIC_AddLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& GameplayTags, int Count);//Offset:Discovery.exe+0x14769A0
	void STATIC_AddLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayTag, int Count);//Offset:Discovery.exe+0x1476B70
	void STATIC_AddGameplayCueWithParameters(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x14770E0
	void STATIC_AddGameplayCueWithEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);//Offset:Discovery.exe+0x1477380
};


// Class AngelscriptGAS.ActiveGameplayEffecteMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UActiveGameplayEffecteMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.ActiveGameplayEffecteMixinLibrary"));
		return ptr;
	}


	struct FGameplayEffectSpec STATIC_GetSpec(const struct FActiveGameplayEffect& ActiveGameplayEffect);//Offset:Discovery.exe+0x1478460
};


// Class AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UAngelscriptAttributeChangedDataMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary"));
		return ptr;
	}


	class UAbilitySystemComponent* STATIC_GetTargetAbilitySystemComponent(struct FAngelscriptAttributeChangedData* Data);//Offset:Discovery.exe+0x1478980
	float STATIC_GetOldValue(struct FAngelscriptAttributeChangedData* Data);//Offset:Discovery.exe+0x1478FE0
	float STATIC_GetNewValue(struct FAngelscriptAttributeChangedData* Data);//Offset:Discovery.exe+0x14790D0
	struct FGameplayModifierEvaluatedData STATIC_GetGameplayModifierEvaluatedData(struct FAngelscriptAttributeChangedData* Data, bool* bIsValid);//Offset:Discovery.exe+0x1478A90
	struct FGameplayAttribute STATIC_GetGameplayAttribute(struct FAngelscriptAttributeChangedData* Data);//Offset:Discovery.exe+0x14791B0
	struct FGameplayEffectSpec STATIC_GetEffectSpec(struct FAngelscriptAttributeChangedData* Data, bool* bIsValid);//Offset:Discovery.exe+0x1478D80
};


// Class AngelscriptGAS.AngelscriptAbilitySystemComponent
// 0x0070 (0x1448 - 0x13D8)
class UAngelscriptAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	struct FScriptMulticastDelegate                    OnAttributeChanged;                                       // 0x13D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOwnedTagUpdated;                                        // 0x13E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilityActivatedDynamic;                                // 0x13F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilityCommittedDynamic;                                // 0x1408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilityEndedDynamic;                                    // 0x1418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilityFailedDynamic;                                   // 0x1428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x1438(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptAbilitySystemComponent"));
		return ptr;
	}


	bool TrySetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float NewBaseValue);//Offset:Discovery.exe+0x147B890
	bool TryGetFilteredAttributeValue(class UClass* AttributeSetClass, const struct FName& AttributeName, const struct FGameplayTagRequirements& SourceTags, const struct FGameplayTagContainer& TargetTags, float* OutValue);//Offset:Discovery.exe+0x147B360
	bool TryGetAttributeCurrentValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float* OutCurrentValue);//Offset:Discovery.exe+0x147B750
	bool TryGetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float* OutBaseValue);//Offset:Discovery.exe+0x147B610
	bool TryActivateAbilitySpec(const struct FGameplayAbilitySpecHandle& Handle, bool bAllowRemoteActivation);//Offset:Discovery.exe+0x147AEA0
	void SetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float NewBaseValue);//Offset:Discovery.exe+0x147BE30
	void SetAbilitySpecSourceObject(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle, class UObject* NewSourceObject);//Offset:Discovery.exe+0x147A320
	void RegisterCallbackForAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName);//Offset:Discovery.exe+0x147C320
	class UAngelscriptAttributeSet* RegisterAttributeSet(class UClass* AttributeSetClass);//Offset:Discovery.exe+0x147C840
	void RegisterAttributeChangedCallback(class UClass* AttributeSetClass, const struct FName& AttributeName, class UObject* CallbackObject, const struct FName& CallbackFunctionName_FAngelscriptAttributeChangedData);//Offset:Discovery.exe+0x147C5E0
	void OnAttributeSetRegistered(class UObject* InObject, const struct FName& InFunctionName);//Offset:Discovery.exe+0x147C760
	void ModAttributeUnsafe(const struct FGameplayAttribute& GameplayAttribute, TEnumAsByte<EGameplayModOp> ModifierOp, float ModifierMagnitude);//Offset:Discovery.exe+0x147BF60
	bool IsAbilitySpecActive(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle);//Offset:Discovery.exe+0x147AA70
	bool IsAbilityActive(class UClass* InAbilityClass);//Offset:Discovery.exe+0x147AB10
	bool HasGameplayTag(const struct FGameplayTag& TagToCheck);//Offset:Discovery.exe+0x1479EF0
	bool HasAnyGameplayTags(const struct FGameplayTagContainer& TagContainer);//Offset:Discovery.exe+0x1479D50
	bool HasAllGameplayTags(const struct FGameplayTagContainer& TagContainer);//Offset:Discovery.exe+0x1479E20
	bool HasAbilitySpec(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle);//Offset:Discovery.exe+0x147A140
	bool HasAbility(class UClass* InAbilityClass);//Offset:Discovery.exe+0x147A1E0
	class APlayerController* GetPlayerController();//Offset:Discovery.exe+0x147C8E0
	float GetCooldownTimeRemaining(class UClass* InAbilityClass);//Offset:Discovery.exe+0x147A0A0
	class AActor* GetAvatar();//Offset:Discovery.exe+0x147C910
	float GetAttributeCurrentValueChecked(class UClass* AttributeSetClass, const struct FName& AttributeName);//Offset:Discovery.exe+0x147BD40
	float GetAttributeCurrentValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float DefaultValue);//Offset:Discovery.exe+0x147BB10
	float GetAttributeBaseValueChecked(class UClass* AttributeSetClass, const struct FName& AttributeName);//Offset:Discovery.exe+0x147BC50
	float GetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float DefaultValue);//Offset:Discovery.exe+0x147B9D0
	void GetAndRegisterCallbackForAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName, float* OutCurrentValue);//Offset:Discovery.exe+0x147C1E0
	void GetAndRegisterAttributeChangedCallback(class UClass* AttributeSetClass, const struct FName& AttributeName, class UObject* CallbackObject, const struct FName& CallbackFunctionName_FAngelscriptAttributeChangedData, float* OutCurrentValue);//Offset:Discovery.exe+0x147C400
	void GetActiveAbilitiesWithTags(const struct FGameplayTagContainer& GameplayTagContainer, TArray<class UGameplayAbility*>* ActiveAbilities);//Offset:Discovery.exe+0x147A7F0
	class UObject* GetAbilitySpecSourceObject(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle);//Offset:Discovery.exe+0x147A280
	void GetAbilitiesWithTags(const struct FGameplayTagContainer& GameplayTagContainer, TArray<class UGameplayAbility*>* Abilities);//Offset:Discovery.exe+0x147A930
	void CancelAbilityByHandle(const struct FGameplayAbilitySpecHandle& AbilityHandle);//Offset:Discovery.exe+0x147ABB0
	void CancelAbility(class UClass* InAbilityClass);//Offset:Discovery.exe+0x147AE00
	void CancelAbilitiesByTags(const struct FGameplayTagContainer& WithTags, const struct FGameplayTagContainer& WithoutTags, class UGameplayAbility* Ignore);//Offset:Discovery.exe+0x147AC60
	bool CanActivateAnyAbilityWithTags(const struct FGameplayTagContainer& GameplayTagContainer);//Offset:Discovery.exe+0x147A5F0
	bool CanActivateAnyAbilityWithTag(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x147A540
	bool CanActivateAbilitySpec(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle);//Offset:Discovery.exe+0x147A400
	bool CanActivateAbilityByClass(class UClass* InAbilityToActivate);//Offset:Discovery.exe+0x147A4A0
	void BP_SetRemoveAbilityOnEnd(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle);//Offset:Discovery.exe+0x147AFA0
	void BP_InitAbilityActorInfo(class AActor* InOwnerActor, class AActor* InAvatarActor);//Offset:Discovery.exe+0x147C100
	struct FGameplayAbilitySpecHandle BP_GiveAbilityWithSourceObject(class UClass* InAbilityClass, int Level, int OptionalInputID, class UObject* OptionalSourceObject);//Offset:Discovery.exe+0x147B1D0
	struct FGameplayAbilitySpecHandle BP_GiveAbilityAndActivateOnceWithSourceObject(class UClass* InAbilityClass, int Level, int OptionalInputID, class UObject* OptionalSourceObject);//Offset:Discovery.exe+0x147B040
	bool BlueprintUnRegisterGameplayTagEvent(const struct FDelegateHandleWrapper& Handle, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1479960
	struct FDelegateHandleWrapper BlueprintRegisterGameplayTagEvent(const struct FScriptDelegate& Delegate, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1479A90
	struct FDelegateHandleWrapper BlueprintRegisterAndCallGameplayTagEvent(const struct FScriptDelegate& Delegate, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1479BF0
	void BindInput(class UInputComponent* InputComponent, const struct FAngelscriptInputBindData& BindData);//Offset:Discovery.exe+0x1479F90
	bool ActivateAbilitiesUsingTags(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);//Offset:Discovery.exe+0x147A6C0
};


// Class AngelscriptGAS.AngelscriptAbilityTask
// 0x0000 (0x0080 - 0x0080)
class UAngelscriptAbilityTask : public UAbilityTask
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptAbilityTask"));
		return ptr;
	}


	void SetIsTickingTask(bool bNewState);//Offset:Discovery.exe+0x147FB10
	void SetIsSimulatedTask(bool bNewState);//Offset:Discovery.exe+0x147F970
	void SetIsPausable(bool bNewState);//Offset:Discovery.exe+0x147FA40
	bool GetIsTickingTask();//Offset:Discovery.exe+0x147FBB0
	bool GetIsSimulating();//Offset:Discovery.exe+0x147F940
	bool GetIsSimulatedTask();//Offset:Discovery.exe+0x147FA10
	bool GetIsPausable();//Offset:Discovery.exe+0x147FAE0
	class UAngelscriptAbilityTask* STATIC_CreateAbilityTaskAndRunIt(class UClass* TaskType, class UGameplayAbility* ThisAbility, const struct FName& NewInstanceName);//Offset:Discovery.exe+0x147F320
	class UAngelscriptAbilityTask* STATIC_CreateAbilityTask(class UClass* TaskType, class UGameplayAbility* ThisAbility, const struct FName& NewInstanceName);//Offset:Discovery.exe+0x147F450
	void BP_TickTask(float DeltaTimeSecs);//Offset:Discovery.exe+0x327F8B0
	bool BP_ShouldBroadcastAbilityTaskDelegates();//Offset:Discovery.exe+0x147F600
	void BP_SetWaitingOnRemotePlayerData();//Offset:Discovery.exe+0x147F5E0
	void BP_SetWaitingOnAvatar();//Offset:Discovery.exe+0x147F5A0
	void BP_SetAbilitySystemComponent(class UAbilitySystemComponent* InAbilitySystemComponent);//Offset:Discovery.exe+0x147F840
	void BP_OnDestroy(bool bInOwnerFinished);//Offset:Discovery.exe+0x327F8B0
	bool BP_IsWaitingOnRemotePlayerdata();//Offset:Discovery.exe+0x147F910
	bool BP_IsWaitingOnAvatar();//Offset:Discovery.exe+0x147F8E0
	bool BP_IsPredictingClient();//Offset:Discovery.exe+0x147F690
	bool BP_IsLocallyControlled();//Offset:Discovery.exe+0x147F630
	bool BP_IsForRemoteClient();//Offset:Discovery.exe+0x147F660
	void BP_InitSimulatedTask(class UGameplayTasksComponent* InGameplayTasksComponent);//Offset:Discovery.exe+0x327F8B0
	class UAbilitySystemComponent* BP_GetAbilitySystemComponent();//Offset:Discovery.exe+0x147F810
	struct FGameplayAbilitySpecHandle BP_GetAbilitySpecHandle(bool bInOwnerFinished);//Offset:Discovery.exe+0x147F760
	class UGameplayAbility* BP_GetAbility(bool bInOwnerFinished);//Offset:Discovery.exe+0x147F6C0
	void BP_ClearWaitingOnRemotePlayerData();//Offset:Discovery.exe+0x147F5C0
	void BP_ClearWaitingOnAvatar();//Offset:Discovery.exe+0x147F580
	void BP_Activate();//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptGAS.AngelscriptAbilityTaskLibrary
// 0x0000 (0x0028 - 0x0028)
class UAngelscriptAbilityTaskLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptAbilityTaskLibrary"));
		return ptr;
	}


	class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);//Offset:Discovery.exe+0x1480DA0
	class UAbilityTask_WaitMovementModeChange* STATIC_WaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);//Offset:Discovery.exe+0x1480CB0
	class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1480E90
	class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1481020
	class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);//Offset:Discovery.exe+0x14812A0
	class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time);//Offset:Discovery.exe+0x14811B0
	class UAbilityTask_PlayMontageAndWait* STATIC_PlayMontageAndWait(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float InTimeToStartAnimMontageAt);//Offset:Discovery.exe+0x1481480
};


// Class AngelscriptGAS.AngelscriptAttributeSet
// 0x0010 (0x0040 - 0x0030)
class UAngelscriptAttributeSet : public UAttributeSet
{
public:
	TArray<struct FName>                               ReplicatedAttributeBlackList;                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptAttributeSet"));
		return ptr;
	}


	bool TrySetAttributeBaseValue(const struct FName& AttributeName, float NewBaseValue);//Offset:Discovery.exe+0x14823E0
	bool STATIC_TryGetGameplayAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName, struct FGameplayAttribute* OutGameplayAttribute);//Offset:Discovery.exe+0x1481F50
	bool TryGetAttributeCurrentValue(const struct FName& AttributeName, float* OutCurrentValue);//Offset:Discovery.exe+0x14822E0
	bool TryGetAttributeBaseValue(const struct FName& AttributeName, float* OutBaseValue);//Offset:Discovery.exe+0x14821E0
	void OnRep_Attribute(struct FAngelscriptGameplayAttributeData* OldAttributeData);//Offset:Discovery.exe+0x1482800
	struct FGameplayAttribute STATIC_GetGameplayAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName);//Offset:Discovery.exe+0x14820D0
	bool STATIC_CompareGameplayAttributes(const struct FGameplayAttribute& First, const struct FGameplayAttribute& Second);//Offset:Discovery.exe+0x1481DC0
	bool BP_PreGameplayEffectExecute(const struct FGameplayEffectSpec& EffectSpec, class UAngelscriptAbilitySystemComponent* AbilitySystemComponent, struct FGameplayModifierEvaluatedData* EvaluatedData);//Offset:Discovery.exe+0x1482580
	void BP_PreAttributeChange(const struct FGameplayAttribute& Attribute, float* NewValue);//Offset:Discovery.exe+0x327F8B0
	void BP_PreAttributeBaseChange(const struct FGameplayAttribute& Attribute, float* NewValue);//Offset:Discovery.exe+0x327F8B0
	void BP_PostGameplayEffectExecute(const struct FGameplayEffectSpec& EffectSpec, class UAngelscriptAbilitySystemComponent* AbilitySystemComponent, struct FGameplayModifierEvaluatedData* EvaluatedData);//Offset:Discovery.exe+0x327F8B0
	bool BP_InitFromMetaDataTable(class UDataTable* DataTable);//Offset:Discovery.exe+0x1482760
	class AActor* BP_GetOwningActor();//Offset:Discovery.exe+0x1482550
	class UAngelscriptAbilitySystemComponent* BP_GetOwningAbilitySystemComponent();//Offset:Discovery.exe+0x1482520
	struct FGameplayAbilityActorInfo BP_GetActorInfo();//Offset:Discovery.exe+0x14824D0
};


// Class AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UAngelscriptGameplayAttributeDataMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary"));
		return ptr;
	}


	void SetCurrentValue(float NewValue, struct FAngelscriptGameplayAttributeData* Data);//Offset:Discovery.exe+0x1483960
	void SetBaseValue(float NewValue, struct FAngelscriptGameplayAttributeData* Data);//Offset:Discovery.exe+0x1483850
	void STATIC_Initialize(float InitialData, struct FAngelscriptGameplayAttributeData* Data);//Offset:Discovery.exe+0x1483A70
	float GetCurrentValue(struct FAngelscriptGameplayAttributeData* Data);//Offset:Discovery.exe+0x14836B0
	float GetBaseValue(struct FAngelscriptGameplayAttributeData* Data);//Offset:Discovery.exe+0x1483780
};


// Class AngelscriptGAS.AngelscriptGameplayCueUtils
// 0x0000 (0x0028 - 0x0028)
class UAngelscriptGameplayCueUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptGameplayCueUtils"));
		return ptr;
	}


	void STATIC_RemoveLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1484500
	class AGameplayCueNotify_Actor* STATIC_FindInstancedCueActor(class AActor* TargetActor, const struct FGameplayTag& Tag, class AActor* InstigatorActor, class UObject* SourceObj);//Offset:Discovery.exe+0x1484040
	void STATIC_ExecuteLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x14841D0
	void STATIC_AddLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1484830
};


// Class AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectExecutionParametersMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary"));
		return ptr;
	}


	void STATIC_SetTargetTags(struct FGameplayEffectExecutionParameters* Data, struct FGameplayTagContainer* TargetTags);//Offset:Discovery.exe+0x1485070
	void STATIC_SetSourceTags(struct FGameplayEffectExecutionParameters* Data, struct FGameplayTagContainer* SourceTags);//Offset:Discovery.exe+0x1485220
	void STATIC_SetIncludePredictiveMods(bool bShouldIncludePredictiveMods, struct FGameplayEffectExecutionParameters* Data);//Offset:Discovery.exe+0x14855C0
	void STATIC_SetCapturedSourceTagsFromSpec(struct FGameplayEffectExecutionParameters* Data, struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x14853C0
	bool STATIC_GetIncludePredictiveMods(const struct FGameplayEffectExecutionParameters& Data);//Offset:Discovery.exe+0x1485740
	TArray<struct FActiveGameplayEffectHandle> STATIC_GetIgnoreHandles(struct FGameplayEffectExecutionParameters* Data);//Offset:Discovery.exe+0x1485AD0
	struct FGameplayTagContainer STATIC_GetAppliedTargetTagFilter(struct FGameplayEffectExecutionParameters* Data);//Offset:Discovery.exe+0x1485870
	struct FGameplayTagContainer STATIC_GetAppliedSourceTagFilter(struct FGameplayEffectExecutionParameters* Data);//Offset:Discovery.exe+0x14859A0
};


// Class AngelscriptGAS.AngelscriptGameplayEffectUtils
// 0x0000 (0x0028 - 0x0028)
class UAngelscriptGameplayEffectUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptGameplayEffectUtils"));
		return ptr;
	}


	struct FGameplayModifierEvaluatedData STATIC_MakeGameplayModifierEvaluationData(const struct FGameplayAttribute& InAttribute, TEnumAsByte<EGameplayModOp> InModOp, float InMagnitude);//Offset:Discovery.exe+0x1486710
	struct FGameplayEffectExecutionScopedModifierInfo STATIC_MakeGameplayEffectExecutionScopedModifierInfo(const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef);//Offset:Discovery.exe+0x1486260
	struct FGameplayEffectAttributeCaptureDefinition STATIC_CaptureGameplayAttribute(class UStruct* AttributeSetType, const struct FName& AttributeName, enum class EGameplayEffectAttributeCaptureSource InSource, bool bIsSnapshot);//Offset:Discovery.exe+0x1486960
};


// Class AngelscriptGAS.AngelscriptGASAbility
// 0x0000 (0x03B8 - 0x03B8)
class UAngelscriptGASAbility : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptGASAbility"));
		return ptr;
	}


	void K2_RemoveGameplayCue_Static(class UClass* GameplayCue);//Offset:Discovery.exe+0x1487E90
	void K2_RemoveGameplayCue_Actor(class UClass* GameplayCue);//Offset:Discovery.exe+0x14886B0
	void K2_ExecuteGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x1488340
	void K2_ExecuteGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x1488B60
	void K2_ExecuteGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context);//Offset:Discovery.exe+0x1488560
	void K2_ExecuteGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context);//Offset:Discovery.exe+0x1488D80
	void K2_AddGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x1487F30
	void K2_AddGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x1488750
	void K2_AddGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x14881A0
	void K2_AddGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x14889C0
};


// Class AngelscriptGAS.AngelscriptGASActor
// 0x0010 (0x02D8 - 0x02C8)
class AAngelscriptGASActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	class UAngelscriptAbilitySystemComponent*          AbilitySystem;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptGASActor"));
		return ptr;
	}

};


// Class AngelscriptGAS.AngelscriptGASCharacter
// 0x0010 (0x0660 - 0x0650)
class AAngelscriptGASCharacter : public ACharacter
{
public:
	class UAngelscriptAbilitySystemComponent*          AbilitySystem;                                            // 0x0650(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0658(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptGASCharacter"));
		return ptr;
	}


	void SetupCharacterInput(class UInputComponent* PlayerInputComponent);//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptGAS.AngelscriptGASPawn
// 0x0010 (0x0358 - 0x0348)
class AAngelscriptGASPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET
	class UAngelscriptAbilitySystemComponent*          AbilitySystem;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.AngelscriptGASPawn"));
		return ptr;
	}


	void SetupPawnInput(class UInputComponent* PlayerInputComponent);//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayAbilityActorInfoMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsNetAuthority(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x1489A70
	bool STATIC_IsLocallyControlledPlayer(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x1489B50
	bool STATIC_IsLocallyControlled(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x1489C30
	class USkeletalMeshComponent* STATIC_GetSkeletalMeshComponent(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x1489FC0
	class APlayerController* STATIC_GetPlayerController(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x148A200
	class AActor* STATIC_GetOwnerActor(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x148A440
	class UMovementComponent* STATIC_GetMovementComponent(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x1489D10
	class AActor* STATIC_GetAvatarActor(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x148A320
	class UAnimInstance* STATIC_GetAnimInstance(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x1489E30
	class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(const struct FGameplayAbilityActorInfo& Info);//Offset:Discovery.exe+0x148A0E0
};


// Class AngelscriptGAS.GameplayAbilityMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayAbilityMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayAbilityMixinLibrary"));
		return ptr;
	}


	class UObject* STATIC_GetSourceObject(class UGameplayAbility* Ability, const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo);//Offset:Discovery.exe+0x148AC80
};


// Class AngelscriptGAS.GameplayCueParametersMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueParametersMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayCueParametersMixinLibrary"));
		return ptr;
	}


	void STATIC_SetTargetAttachComponent(class USceneComponent* TargetAttachComponent, struct FGameplayCueParameters* GameplayCueParams);//Offset:Discovery.exe+0x148B600
	void STATIC_SetSourceObject(class UObject* SourceObject, struct FGameplayCueParameters* GameplayCueParams);//Offset:Discovery.exe+0x148BA80
	void STATIC_SetPhysicalMaterial(class UPhysicalMaterial* PhysicalMaterial, struct FGameplayCueParameters* GameplayCueParams);//Offset:Discovery.exe+0x148B840
	void STATIC_SetInstigator(class AActor* Instigator, struct FGameplayCueParameters* GameplayCueParams);//Offset:Discovery.exe+0x148BF00
	void STATIC_SetEffectCauser(class AActor* EffectCauser, struct FGameplayCueParameters* GameplayCueParams);//Offset:Discovery.exe+0x148BCC0
	class USceneComponent* STATIC_GetTargetAttachComponent(const struct FGameplayCueParameters& GameplayCueParams);//Offset:Discovery.exe+0x148B080
	class AActor* STATIC_GetInstigator(const struct FGameplayCueParameters& GameplayCueParams);//Offset:Discovery.exe+0x148B430
	class AActor* STATIC_GetEffectCauser(const struct FGameplayCueParameters& GameplayCueParams);//Offset:Discovery.exe+0x148B260
};


// Class AngelscriptGAS.GameplayEffectContextHandleMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectContextHandleMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayEffectContextHandleMixinLibrary"));
		return ptr;
	}


	void STATIC_SetEffectCauser(class AActor* NewEffectCauser, struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148E220
	void STATIC_SetAbility(class UGameplayAbility* InGameplayAbility, struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148E380
	bool STATIC_IsValid(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148D4E0
	bool STATIC_IsLocallyControlledPlayer(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148CC50
	bool STATIC_IsLocallyControlled(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148CD60
	bool STATIC_HasOrigin(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148C9E0
	class UObject* STATIC_GetSourceObject(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148CE70
	void STATIC_GetOwnedGameplayTags(const struct FGameplayEffectContextHandle& Handle, struct FGameplayTagContainer* ActorTagContainer, struct FGameplayTagContainer* SpecTagContainer);//Offset:Discovery.exe+0x148D5D0
	class UAbilitySystemComponent* STATIC_GetOriginalInstigatorAbilitySystemComponent(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148CF80
	class AActor* STATIC_GetOriginalInstigator(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148D090
	struct FVector STATIC_GetOrigin(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148CB00
	class AActor* STATIC_GetInstigator(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148D3C0
	bool STATIC_GetHitResult(const struct FGameplayEffectContextHandle& Handle, struct FHitResult* OutHitResult);//Offset:Discovery.exe+0x148C750
	class AActor* STATIC_GetEffectCauser(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148D1A0
	TArray<class AActor*> STATIC_GetActors(struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148D7E0
	int STATIC_GetAbilityLevel(const struct FGameplayEffectContextHandle& Handle);//Offset:Discovery.exe+0x148D2C0
	void STATIC_Clear(struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148E670
	void STATIC_AddSourceObject(class UObject* NewSourceObject, struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148E0D0
	void STATIC_AddOrigin(const struct FVector& InOrigin, struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148DCA0
	void STATIC_AddInstigator(class AActor* InInstigator, class AActor* InEffectCauser, struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148E4D0
	void STATIC_AddHitResult(const struct FHitResult& InHitResult, bool bReset, struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148DE30
	void STATIC_AddActors(TArray<class AActor*> InActors, bool bReset, struct FGameplayEffectContextHandle* Handle);//Offset:Discovery.exe+0x148DA10
};


// Class AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectCustomExecutionOutputMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary"));
		return ptr;
	}


	bool STATIC_ShouldTriggerConditionalGameplayEffects(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148F9C0
	void STATIC_MarkStackCountHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148FEF0
	void STATIC_MarkGameplayCuesHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148FAD0
	void STATIC_MarkConditionalGameplayEffectsToTrigger(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148FBD0
	bool STATIC_IsStackCountHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148FDE0
	TArray<struct FGameplayModifierEvaluatedData> STATIC_GetOutputModifiersRef(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148F530
	TArray<struct FGameplayModifierEvaluatedData> STATIC_GetOutputModifiers(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148F6F0
	bool STATIC_AreGameplayCuesHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148FCD0
	void STATIC_AddOutputModifier(const struct FGameplayModifierEvaluatedData& InOutputMod, struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput);//Offset:Discovery.exe+0x148F800
};


// Class AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectCustomExecutionParametersMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary"));
		return ptr;
	}


	class UAbilitySystemComponent* STATIC_GetTargetAbilitySystemComponent(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);//Offset:Discovery.exe+0x14916F0
	class UAbilitySystemComponent* STATIC_GetSourceAbilitySystemComponent(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);//Offset:Discovery.exe+0x1491620
	struct FPredictionKey STATIC_GetPredictionKey(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);//Offset:Discovery.exe+0x1491340
	struct FGameplayTagContainer STATIC_GetPassedInTags(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);//Offset:Discovery.exe+0x1491550
	struct FGameplayEffectSpec STATIC_GetOwningSpecForPreExecuteMod(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);//Offset:Discovery.exe+0x14917C0
	struct FGameplayEffectSpec STATIC_GetOwningSpec(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);//Offset:Discovery.exe+0x14917C0
	TArray<struct FActiveGameplayEffectHandle> STATIC_GetIgnoreHandles(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);//Offset:Discovery.exe+0x1491430
	void STATIC_AttemptCalculateTransientAggregatorMagnitude(const struct FGameplayEffectCustomExecutionParameters& ExecutionParameters, const struct FGameplayTag& InAggregatorIdentifier, const struct FGameplayEffectExecutionParameters& InParams, float* OutMagnitude);//Offset:Discovery.exe+0x1490680
	bool STATIC_AttemptCalculateCapturedAttributeMagnitudeWithBase(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const struct FGameplayEffectExecutionParameters& InParams, float InBaseValue, float* OutMagnitude);//Offset:Discovery.exe+0x1490D70
	bool STATIC_AttemptCalculateCapturedAttributeMagnitude(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const struct FGameplayEffectExecutionParameters& InParams, float* OutMagnitude);//Offset:Discovery.exe+0x1491080
	bool STATIC_AttemptCalculateCapturedAttributeBonusMagnitude(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const struct FGameplayEffectExecutionParameters& InParams, float* OutBonusMagnitude);//Offset:Discovery.exe+0x14908F0
	bool STATIC_AttemptCalculateCapturedAttributeBaseValue(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, float* OutBaseValue);//Offset:Discovery.exe+0x1490BB0
};


// Class AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectExecutionScopedModifierInfoMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary"));
		return ptr;
	}


	struct FGameplayTag STATIC_GetTransientAggregatorIdentifier(struct FGameplayEffectExecutionScopedModifierInfo* Handle);//Offset:Discovery.exe+0x1492A70
	struct FGameplayEffectAttributeCaptureDefinition STATIC_GetCapturedAttribute(struct FGameplayEffectExecutionScopedModifierInfo* Handle);//Offset:Discovery.exe+0x1492D10
	enum class EGameplayEffectScopedModifierAggregatorType STATIC_GetAggregatorType(struct FGameplayEffectExecutionScopedModifierInfo* Handle);//Offset:Discovery.exe+0x14927D0
};


// Class AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectSpecHandleMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsValid(struct FGameplayEffectSpecHandle* Handle);//Offset:Discovery.exe+0x1493750
	struct FGameplayEffectSpec STATIC_GetSpec(struct FGameplayEffectSpecHandle* Handle);//Offset:Discovery.exe+0x1493670
	void STATIC_AddDynamicAssetTags(const struct FGameplayTagContainer& TagsToAdd, struct FGameplayEffectSpecHandle* Handle);//Offset:Discovery.exe+0x1493350
	void STATIC_AddDynamicAssetTag(const struct FGameplayTag& TagToAdd, struct FGameplayEffectSpecHandle* Handle);//Offset:Discovery.exe+0x1493510
};


// Class AngelscriptGAS.GameplayEffectSpecMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectSpecMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayEffectSpecMixinLibrary"));
		return ptr;
	}


	struct FString STATIC_ToSimpleString(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x14950E0
	void STATIC_SetupAttributeCaptureDefinitions(struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1495FB0
	void STATIC_SetLevel(float InLevel, struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1496460
	void STATIC_SetContext(const struct FGameplayEffectContextHandle& NewEffectContextHandle, struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x14966D0
	void STATIC_SetByCallerMagnitude(const struct FGameplayTag& DataTag, float Magnitude, struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1496570
	void STATIC_RecaptureSourceActorTags(struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1496070
	void STATIC_RecaptureAttributeDataForClone(class UAbilitySystemComponent* OriginalASC, class UAbilitySystemComponent* NewASC, struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1496130
	void STATIC_PrintAll(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1495200
	bool STATIC_HasSetByCallerMagnitudeTag(const struct FGameplayEffectSpec& Spec, const struct FGameplayTag& DataTag);//Offset:Discovery.exe+0x1495760
	int STATIC_GetStackCount(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494790
	float STATIC_GetSetByCallerMagnitude(const struct FGameplayEffectSpec& Spec, const struct FGameplayTag& DataTag, float DefaultIfNotFound);//Offset:Discovery.exe+0x14955F0
	float STATIC_GetPeriod(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1495BC0
	float STATIC_GetModifierMagnitude(const struct FGameplayEffectSpec& Spec, int ModifierIdx, bool bFactorInStackCount);//Offset:Discovery.exe+0x1494F70
	float STATIC_GetModifiedAttributeMagnitude(const struct FGameplayAttribute& Attribute, struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1495D60
	float STATIC_GetLevel(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x14952C0
	TArray<struct FGameplayAbilitySpecDef> STATIC_GetGrantedAbilitySpecs(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494130
	struct FGameplayTagContainer STATIC_GetDynamicGrantedTags(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494990
	struct FGameplayTagContainer STATIC_GetDynamicAssetTags(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494860
	int STATIC_GetDurationLocked(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494520
	float STATIC_GetDuration(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1495C90
	class UGameplayEffect* STATIC_GetDefinitionEffectCDO(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494070
	struct FGameplayEffectContextHandle STATIC_GetContext(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1495990
	int STATIC_GetCompletedTargetAttributeCapture(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x14945F0
	int STATIC_GetCompletedSourceAttributeCapture(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x14946C0
	float STATIC_GetChanceToApplyToTarget(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1495AF0
	struct FAngelscriptTagContainerAggregator STATIC_GetCapturedTargetTags(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494AC0
	struct FAngelscriptTagContainerAggregator STATIC_GetCapturedSourceTags(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1494D20
	struct FGameplayTagContainer STATIC_GetAllGrantedTags(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x14954C0
	struct FGameplayTagContainer STATIC_GetAllAssetTags(const struct FGameplayEffectSpec& Spec);//Offset:Discovery.exe+0x1495390
	void STATIC_CaptureAttributeDataFromTarget(class UAbilitySystemComponent* TargetAbilitySystemComponent, struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1496350
	void STATIC_CalculateModifierMagnitudes(struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1496290
	float STATIC_CalculateModifiedDuration(struct FGameplayEffectSpec* Spec);//Offset:Discovery.exe+0x1495EE0
	void STATIC_ApplyExecutorModifiersForDefinition(const struct FGameplayEffectSpec& Spec, class UClass* CalculationClass, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, float* ValueToModify);//Offset:Discovery.exe+0x1493CC0
};


// Class AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayModifierEvaluatedDataMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary"));
		return ptr;
	}


	struct FString STATIC_ToSimpleString(struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x1497C30
	void STATIC_SetModifierOp(TEnumAsByte<EGameplayModOp> NewValue, struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x14984D0
	void STATIC_SetMagnitude(float NewValue, struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x1498270
	void STATIC_SetIsValid(bool NewValue, struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x1497D90
	void STATIC_SetHandle(const struct FActiveGameplayEffectHandle& NewValue, struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x1498000
	void STATIC_SetAttribute(struct FGameplayModifierEvaluatedData* Data, struct FGameplayAttribute* NewValue);//Offset:Discovery.exe+0x1498730
	TEnumAsByte<EGameplayModOp> STATIC_GetModifierOp(struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x1498620
	float STATIC_GetMagnitude(struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x14983D0
	bool STATIC_GetIsValid(struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x1497EF0
	struct FActiveGameplayEffectHandle STATIC_GetHandle(struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x1498160
	struct FGameplayAttribute STATIC_GetAttribute(struct FGameplayModifierEvaluatedData* Data);//Offset:Discovery.exe+0x14988E0
};


// Class AngelscriptGAS.GameplayTaskMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.GameplayTaskMixinLibrary"));
		return ptr;
	}


	void STATIC_ReadyForActivation(class UGameplayTask* Task);//Offset:Discovery.exe+0x1499190
};


// Class AngelscriptGAS.InheritedTagContainerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UInheritedTagContainerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptGAS.InheritedTagContainerMixinLibrary"));
		return ptr;
	}


	void STATIC_RemoveTag(const struct FGameplayTag& TagToRemove, struct FInheritedTagContainer* Container);//Offset:Discovery.exe+0x14994A0
	void STATIC_AddTag(const struct FGameplayTag& TagToAdd, struct FInheritedTagContainer* Container);//Offset:Discovery.exe+0x1499630
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
