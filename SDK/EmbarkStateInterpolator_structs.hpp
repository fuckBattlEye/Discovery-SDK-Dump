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

// Enum EmbarkStateInterpolator.EStateInterpolatorDebugMode
enum class EStateInterpolatorDebugMode : uint8_t
{
	None                           = 0,
	Simple                         = 1,
	Detailed                       = 2,
	Verbose                        = 3,
	NUM                            = 4,
	LAST                           = 5,
	EStateInterpolatorDebugMode_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkStateInterpolator.ActorStateInterpolatorSettings
// 0x0028
struct FActorStateInterpolatorSettings
{
	float                                              InterpolationBufferTarget;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolationDelayCorrectionSpeed;                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInterpolationDelayCorrectionDelta;                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultStateUpdateFrequencyEstimation;                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStateUpdateFrequencyMultiplier;                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DormancyDetectUpdateTimeMultiplier;                       // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExtrapolationTimeMultiplier;                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInterpolationReplicationDelay;                         // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreGlobalMinInterpolationReplicationDelayOverride;    // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TeleportSpeedLimit;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkStateInterpolator.StateDependency
// 0x0010
struct FStateDependency
{
	class UClass*                                      StateInterpolatorClass;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCreateDefaultActorInstance;                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkStateInterpolator.StateInstanceId
// 0x0010
struct FStateInstanceId
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkStateInterpolator.ObjectInterpolatorStateObjQueue
// 0x0010
struct FObjectInterpolatorStateObjQueue
{
	TArray<class UObject*>                             Queue;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkStateInterpolator.SubsystemOwnedStateInterpolator
// 0x0010
struct FSubsystemOwnedStateInterpolator
{
	class UStateInterpolator*                          Interpolator;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkStateInterpolator.TransformInterpolatorData
// 0x0080
struct FTransformInterpolatorData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0020) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0058(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDormantLinearVelocity;                                   // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDormantAngularVelocity;                                  // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleported;                                              // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0073(0x000D) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
