#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	Chaos_PointImplicit            = 0,
	Chaos_DelaunayTriangulation    = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None                     = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX                      = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// 0x0058
struct FChaosHandlerSet
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: ChaosHandlers
};

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// 0x0040
struct FBreakEventCallbackWrapper
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ChaosSolverEngine.RemovalEventCallbackWrapper
// 0x0040
struct FRemovalEventCallbackWrapper
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// 0x00C0
struct FChaosPhysicsCollisionInfo
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0028(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedImpulse;                                       // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0058(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OtherVelocity;                                            // 0x0070(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0088(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OtherAngularVelocity;                                     // 0x00A0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OtherMass;                                                // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// 0x0003
struct FChaosDebugSubstepControl
{
	bool                                               bPause;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSubstep;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStep;                                                    // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// 0x0058
struct FChaosBreakEvent
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ChaosSolverEngine.ChaosRemovalEvent
// 0x0028
struct FChaosRemovalEvent
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
