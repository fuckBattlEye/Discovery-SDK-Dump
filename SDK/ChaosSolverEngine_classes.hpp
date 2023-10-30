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

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (0x00C0 - 0x00B8)
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosDebugDrawComponent"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (0x00C0 - 0x00B8)
class UChaosEventListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosEventListenerComponent"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x0210 (0x02D0 - 0x00C0)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00C0(0x0110) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                              // 0x01D0(0x0050)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                  // 0x0220(0x0050)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                                // 0x0270(0x0050)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosGameplayEventDispatcher"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UChaosNotifyHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosNotifyHandlerInterface"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary"));
		return ptr;
	}


	struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);//Offset:Discovery.exe+0x5E11F20
};


// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosSolver"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverActor
// 0x0100 (0x03C8 - 0x02C8)
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration                   Properties;                                               // 0x02C8(0x006C) (Edit)
	float                                              TimeStepMultiplier;                                       // 0x0334(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                CollisionIterations;                                      // 0x0338(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x033C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                PushOutPairIterations;                                    // 0x0340(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ClusterConnectionFactor;                                  // 0x0344(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	enum class EClusterConnectionTypeEnum              ClusterUnionConnectionType;                               // 0x0348(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               DoGenerateCollisionData;                                  // 0x0349(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x034A(0x0002) MISSED OFFSET
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                  // 0x034C(0x0010) (Deprecated)
	bool                                               DoGenerateBreakingData;                                   // 0x035C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                   // 0x0360(0x0010) (Deprecated)
	bool                                               DoGenerateTrailingData;                                   // 0x0370(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                   // 0x0374(0x0010) (Deprecated)
	float                                              MassScale;                                                // 0x0384(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateContactGraph;                                    // 0x0388(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHasFloor;                                                // 0x0389(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x038A(0x0002) MISSED OFFSET
	float                                              FloorHeight;                                              // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                 // 0x0390(0x0003) (Edit)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0393(0x0005) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x03A0(0x0018) MISSED OFFSET
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                         // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosSolverActor"));
		return ptr;
	}


	void SetSolverActive(bool bActive);//Offset:Discovery.exe+0x234F200
	void SetAsCurrentWorldSolver();//Offset:Discovery.exe+0x1C8A860
};


// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0020 (0x0058 - 0x0038)
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                             // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosSolverEngine.ChaosSolverSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
