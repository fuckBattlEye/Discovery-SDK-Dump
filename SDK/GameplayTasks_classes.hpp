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

// Class GameplayTasks.GameplayTasksComponent
// 0x0070 (0x0128 - 0x00B8)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B8(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x00C4(0x0001)
	unsigned char                                      bIsNetDirty : 1;                                          // 0x00C4(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	TArray<class UGameplayTask*>                       SimulatedTasks;                                           // 0x00C8(0x0010) (Net, ZeroConstructor)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                        // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET
	TArray<class UGameplayTask*>                       TickingTasks;                                             // 0x00F8(0x0010) (ZeroConstructor)
	TArray<class UGameplayTask*>                       KnownTasks;                                               // 0x0108(0x0010) (ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                 // 0x0118(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTasksComponent"));
		return ptr;
	}


	void OnRep_SimulatedTasks();//Offset:Discovery.exe+0x5BBC020
	enum class EGameplayTaskRunResult STATIC_K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);//Offset:Discovery.exe+0x5BBBD70
};


// Class GameplayTasks.GameplayTask
// 0x0040 (0x0068 - 0x0028)
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0038(0x0002) MISSED OFFSET
	enum class ETaskResourceOverlapPolicy              ResourceOverlapPolicy;                                    // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x25];                                      // 0x003B(0x0025) MISSED OFFSET
	class UGameplayTask*                               ChildTask;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTask"));
		return ptr;
	}


	void ReadyForActivation();//Offset:Discovery.exe+0x5BBB780
	void GenericGameplayTaskDelegate__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	void EndTask();//Offset:Discovery.exe+0x5BBB760
};


// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTaskOwnerInterface"));
		return ptr;
	}

};


// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             AutoResourceID;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bManuallySetID : 1;                                       // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTaskResource"));
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0068 - 0x0068)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTask_ClaimResource"));
		return ptr;
	}


	class UGameplayTask_ClaimResource* STATIC_ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);//Offset:Discovery.exe+0x5BBC3A0
	class UGameplayTask_ClaimResource* STATIC_ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);//Offset:Discovery.exe+0x5BBC590
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0058 (0x00C0 - 0x0068)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0088(0x0030) MISSED OFFSET
	class UClass*                                      ClassToSpawn;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTask_SpawnActor"));
		return ptr;
	}


	class UGameplayTask_SpawnActor* STATIC_SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);//Offset:Discovery.exe+0x5BBCB10
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);//Offset:Discovery.exe+0x5BBC920
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);//Offset:Discovery.exe+0x5BBCA10
};


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (0x0098 - 0x0068)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTask_TimeLimitedExecution"));
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTasks.GameplayTask_WaitDelay"));
		return ptr;
	}


	class UGameplayTask_WaitDelay* STATIC_TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);//Offset:Discovery.exe+0x5BBD220
	void TaskDelayDelegate__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
