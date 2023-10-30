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

// Class EmbarkStateInterpolator.StateInterpolatorComponent
// 0x00A0 (0x0158 - 0x00B8)
class UStateInterpolatorComponent : public UActorComponent
{
public:
	struct FActorStateInterpolatorSettings             Settings;                                                 // 0x00B8(0x0028) (Edit, BlueprintVisible)
	TArray<struct FStateDependency>                    StateDependencies;                                        // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UStateInterpolatorSubsystem*                 StateInterpolatorSubsystem;                               // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F8(0x0028) MISSED OFFSET
	TArray<class UStateInterpolator*>                  StateInterpolators;                                       // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorComponent"));
		return ptr;
	}


	void UpdateSettings();//Offset:Discovery.exe+0x1BB8060
	void PreUpdateInputForOwnerEvent_RemoveUFunction(class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BB7A00
	void PreUpdateInputForOwnerEvent_AddUFunction(class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BB7AF0
	void PreUpdateEvent_RemoveFunction(class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BB7BE0
	void PreUpdateEvent_AddUFunction(class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BB7CD0
	bool IsInitialized();//Offset:Discovery.exe+0x1BB7DC0
	bool HasAnyActiveInterpolator();//Offset:Discovery.exe+0x1BB8080
	class UStateInterpolatorSubsystem* GetStateInterpolatorSubsystem();//Offset:Discovery.exe+0x1BB7DF0
	class UStateInterpolator* GetStateInterpolator(class UClass* StateClass);//Offset:Discovery.exe+0x1BB7E20
	struct FStateInstanceId GetStateInstanceId(int Key);//Offset:Discovery.exe+0x1BB7EC0
	float GetLatestSyncTimestamp();//Offset:Discovery.exe+0x1BB7FA0
	float GetEstimatedLocalInterpolationDelayTarget();//Offset:Discovery.exe+0x1BB8000
	struct FStateInstanceId GetDefaultStateInstanceId();//Offset:Discovery.exe+0x1BB7F70
	float GetCurrentTotalInterpolationDelay();//Offset:Discovery.exe+0x1BB8030
	float GetCurrentInterpolationTimestamp();//Offset:Discovery.exe+0x1BB7FD0
};


// Class EmbarkStateInterpolator.EmbarkCharacterStateInterpolatorDataBase
// 0x0000 (0x0028 - 0x0028)
class UEmbarkCharacterStateInterpolatorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.EmbarkCharacterStateInterpolatorDataBase"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.StateInterpolator
// 0x00D0 (0x00F8 - 0x0028)
class UStateInterpolator : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolator"));
		return ptr;
	}


	bool HasInstanceForActor(class AActor* Actor);//Offset:Discovery.exe+0x1BB75F0
	bool HasInstance(const struct FStateInstanceId& StateInstance);//Offset:Discovery.exe+0x1BB7530
};


// Class EmbarkStateInterpolator.LinearBufferStateInterpolator
// 0x0160 (0x0258 - 0x00F8)
class ULinearBufferStateInterpolator : public UStateInterpolator
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x00F8(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.LinearBufferStateInterpolator"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.ObjectInterpolator
// 0x0078 (0x02D0 - 0x0258)
class UObjectInterpolator : public ULinearBufferStateInterpolator
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0258(0x0028) MISSED OFFSET
	TArray<class UObject*>                             PooledStateObjs;                                          // 0x0280(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             InputStateObjs;                                           // 0x0290(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             InterpolatedStateObjs;                                    // 0x02A0(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LatestStateObjs;                                          // 0x02B0(0x0010) (ZeroConstructor)
	TArray<struct FObjectInterpolatorStateObjQueue>    QueuedStateObjs;                                          // 0x02C0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.ObjectInterpolator"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.BPObjectInterpolator
// 0x0000 (0x02D0 - 0x02D0)
class UBPObjectInterpolator : public UObjectInterpolator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.BPObjectInterpolator"));
		return ptr;
	}


	void Interpolate_BP(TArray<class UObject*> A_Array, TArray<class UObject*> B_Array, TArray<float> Alphas, TArray<class UObject*> OutResults);//Offset:Discovery.exe+0x327F8B0
	class UClass* GetObjectType_BP();//Offset:Discovery.exe+0x327F8B0
	class UObject* GetLatestStateObj_BP(const struct FStateInstanceId& InstanceId);//Offset:Discovery.exe+0x1BB64D0
	class UObject* GetInterpolatedStateObj_BP(const struct FStateInstanceId& InstanceId);//Offset:Discovery.exe+0x1BB63E0
	class UObject* GetInputStateObj_BP(const struct FStateInstanceId& InstanceId);//Offset:Discovery.exe+0x1BB65C0
};


// Class EmbarkStateInterpolator.EmbarkCharacterStateInterpolatorBase
// 0x0000 (0x02D0 - 0x02D0)
class UEmbarkCharacterStateInterpolatorBase : public UBPObjectInterpolator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.EmbarkCharacterStateInterpolatorBase"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.InterpolatedTestActor
// 0x00A0 (0x0368 - 0x02C8)
class AInterpolatedTestActor : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStateInterpolatorComponent*                 StateInterpolatorComponent;                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UReplicationSettingsComponent*               ReplicationSettingsComponent;                             // 0x02D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FReplicatedTransform                        Transform;                                                // 0x02E0(0x0068) (BlueprintVisible, Net)
	bool                                               bEnableInterpolation;                                     // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0349(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.InterpolatedTestActor"));
		return ptr;
	}


	void SetVelocity(const struct FVector& Velocity);//Offset:Discovery.exe+0x1BB3590
	void SetAngularVelocity(const struct FVector& Velocity);//Offset:Discovery.exe+0x1BB34C0
	void OnRep_Transform();//Offset:Discovery.exe+0x1BB3660
};


// Class EmbarkStateInterpolator.InterpolationUtilsStatics
// 0x0000 (0x0028 - 0x0028)
class UInterpolationUtilsStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.InterpolationUtilsStatics"));
		return ptr;
	}


	struct FVector STATIC_SinusoidalVector(const struct FVector& A, const struct FVector& B, float Alpha);//Offset:Discovery.exe+0x1BB3B30
	float STATIC_SinusoidalFloat(float A, float B, float Alpha);//Offset:Discovery.exe+0x1BB3E10
	int STATIC_MinInt(int A, int B, float Alpha);//Offset:Discovery.exe+0x1BB4980
	float STATIC_MinFloat(float A, float B, float Alpha);//Offset:Discovery.exe+0x1BB4AF0
	bool STATIC_MinBool(bool A, bool B, float Alpha);//Offset:Discovery.exe+0x1BB47F0
	int STATIC_MaxInt(int A, int B, float Alpha);//Offset:Discovery.exe+0x1BB44F0
	float STATIC_MaxFloat(float A, float B, float Alpha);//Offset:Discovery.exe+0x1BB4660
	bool STATIC_MaxBool(bool A, bool B, float Alpha);//Offset:Discovery.exe+0x1BB4360
	struct FVector STATIC_LinearVector(const struct FVector& A, const struct FVector& B, float Alpha);//Offset:Discovery.exe+0x1BB4080
	float STATIC_LinearFloat(float A, float B, float Alpha);//Offset:Discovery.exe+0x1BB4220
	struct FVector STATIC_CutoffVector(const struct FVector& A, const struct FVector& B, float Alpha, float CutoffPoint);//Offset:Discovery.exe+0x1BB4C80
	int STATIC_CutoffInt(int A, int B, float Alpha, float CutoffPoint);//Offset:Discovery.exe+0x1BB4FE0
	float STATIC_CutoffFloat(float A, float B, float Alpha, float CutoffPoint);//Offset:Discovery.exe+0x1BB5170
	bool STATIC_CutoffBool(bool A, bool B, float Alpha, float CutoffPoint);//Offset:Discovery.exe+0x1BB4E50
};


// Class EmbarkStateInterpolator.FakeLinearBufferStateInterpolator
// 0x0000 (0x0258 - 0x0258)
class UFakeLinearBufferStateInterpolator : public ULinearBufferStateInterpolator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.FakeLinearBufferStateInterpolator"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.FakeObjectStateDataObj
// 0x0010 (0x0038 - 0x0028)
class UFakeObjectStateDataObj : public UObject
{
public:
	float                                              TestFloat;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TestInt;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.FakeObjectStateDataObj"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.FakeObjectStateInterpolator
// 0x0000 (0x02D0 - 0x02D0)
class UFakeObjectStateInterpolator : public UObjectInterpolator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.FakeObjectStateInterpolator"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.StateInstanceIdMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UStateInstanceIdMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInstanceIdMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsValid(const struct FStateInstanceId& StateInstanceId);//Offset:Discovery.exe+0x1BB6F30
	int STATIC_GetKey(const struct FStateInstanceId& StateInstanceId);//Offset:Discovery.exe+0x1BB6FE0
	class AActor* STATIC_GetActor(const struct FStateInstanceId& StateInstanceId);//Offset:Discovery.exe+0x1BB7090
};


// Class EmbarkStateInterpolator.StateInterpolatorComponentFake
// 0x0000 (0x0158 - 0x0158)
class UStateInterpolatorComponentFake : public UStateInterpolatorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorComponentFake"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.StateInterpolatorFake
// 0x0050 (0x0148 - 0x00F8)
class UStateInterpolatorFake : public UStateInterpolator
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorFake"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.StateInterpolatorFakeEmpty1
// 0x0000 (0x0148 - 0x0148)
class UStateInterpolatorFakeEmpty1 : public UStateInterpolatorFake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorFakeEmpty1"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.StateInterpolatorFakeEmpty2
// 0x0000 (0x0148 - 0x0148)
class UStateInterpolatorFakeEmpty2 : public UStateInterpolatorFake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorFakeEmpty2"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.StateInterpolatorSubsystem
// 0x0380 (0x03B0 - 0x0030)
class UStateInterpolatorSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0030(0x00F8) MISSED OFFSET
	TArray<struct FSubsystemOwnedStateInterpolator>    StateInterpolators;                                       // 0x0128(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x278];                                     // 0x0138(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorSubsystem"));
		return ptr;
	}


	void SetGlobalMinInterpolationReplicationDelayOverride(float Delay);//Offset:Discovery.exe+0x1BB9010
	void SetDebugModeForInstanceOnInterpolator(class UClass* StateInterpolatorClass, const struct FStateInstanceId& StateInstance, enum class EStateInterpolatorDebugMode DebugMode);//Offset:Discovery.exe+0x1BB92D0
	void SetDebugModeForInstance(const struct FStateInstanceId& StateInstance, enum class EStateInterpolatorDebugMode DebugMode);//Offset:Discovery.exe+0x1BB94B0
	void SetDebugModeForAllOnInterpolator(class UClass* StateInterpolatorClass, enum class EStateInterpolatorDebugMode DebugMode);//Offset:Discovery.exe+0x1BB90C0
	void SetDebugModeForAll(enum class EStateInterpolatorDebugMode DebugMode);//Offset:Discovery.exe+0x1BB9420
	void SetDebugModeForActorOnInterpolator(class UClass* StateInterpolatorClass, class AActor* Actor, enum class EStateInterpolatorDebugMode DebugMode);//Offset:Discovery.exe+0x1BB91A0
	void SetDebugModeForActor(class AActor* Actor, enum class EStateInterpolatorDebugMode DebugMode);//Offset:Discovery.exe+0x1BB90C0
	void ManuallySetActorHasNewState(class AActor* Actor);//Offset:Discovery.exe+0x1BB95B0
};


// Class EmbarkStateInterpolator.StateInterpolatorStatics
// 0x0000 (0x0028 - 0x0028)
class UStateInterpolatorStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorStatics"));
		return ptr;
	}


	class UStateInterpolatorSubsystem* STATIC_GetSubsystem(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1BB9BE0
};


// Class EmbarkStateInterpolator.StateInterpolatorSubsystemFake
// 0x0000 (0x03B0 - 0x03B0)
class UStateInterpolatorSubsystemFake : public UStateInterpolatorSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorSubsystemFake"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.StateInterpolatorFakeChild
// 0x0000 (0x0148 - 0x0148)
class UStateInterpolatorFakeChild : public UStateInterpolatorFake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.StateInterpolatorFakeChild"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.TransformInterpolatorBatchedUpdateSystem
// 0x0080 (0x0350 - 0x02D0)
class ATransformInterpolatorBatchedUpdateSystem : public AEmbarkGlobalActor
{
public:
	TArray<class AActor*>                              RegisteredActors;                                         // 0x02D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x70];                                      // 0x02E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.TransformInterpolatorBatchedUpdateSystem"));
		return ptr;
	}

};


// Class EmbarkStateInterpolator.TransformInterpolator
// 0x0088 (0x02E0 - 0x0258)
class UTransformInterpolator : public ULinearBufferStateInterpolator
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0258(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStateInterpolator.TransformInterpolator"));
		return ptr;
	}


	void SetInput(const struct FStateInstanceId& InstanceId, const struct FTransformInterpolatorData& InputData);//Offset:Discovery.exe+0x1BBA650
	bool GetLatestState(const struct FStateInstanceId& InstanceId, struct FTransformInterpolatorData* OutTransformInterpolatorData);//Offset:Discovery.exe+0x1BBA4D0
	bool GetInterpolatedState(const struct FStateInstanceId& InstanceId, struct FTransformInterpolatorData* OutTransformInterpolatorData);//Offset:Discovery.exe+0x1BBA350
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
