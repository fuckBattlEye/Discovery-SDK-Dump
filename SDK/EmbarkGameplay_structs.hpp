#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkGameplay.EmbarkComponentSelection
// 0x0020
struct FEmbarkComponentSelection
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SanitizedComponentName;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClassFilter;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UActorComponent>              SelectedComponent;                                        // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmbarkGameplay.EmbarkConvexVolume
// 0x0300
struct FEmbarkConvexVolume
{
	unsigned char                                      UnknownData00[0x300];                                     // 0x0000(0x0300) MISSED OFFSET
};

// ScriptStruct EmbarkGameplay.MatchIdDesc
// 0x0018
struct FMatchIdDesc
{
	struct FName                                       PlatformName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkGameplay.EmbarkOptimizedTick
// 0x0010
struct FEmbarkOptimizedTick
{
	int                                                TickOrder;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UEmbarkOptimizedTickObject*                  OptimizedTickObject;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkGameplay.EmbarkPropertyOuter
// 0x0010
struct FEmbarkPropertyOuter
{
	class UObject*                                     PropertyOuterCDO;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData)
	class UClass*                                      PropertyActorClass;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkGameplay.EmbarkProxyTransform
// 0x00A0
struct FEmbarkProxyTransform
{
	struct FTransform                                  RelativeTransform;                                        // 0x0000(0x0060) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FName                                       ComponentDisplayName;                                     // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FEmbarkPropertyOuter                        PropertyOuter;                                            // 0x0070(0x0010) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET
};

// ScriptStruct EmbarkGameplay.EmbarkSMActiveStateData
// 0x0010
struct FEmbarkSMActiveStateData
{
	TArray<unsigned char>                              StateIndices;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EmbarkGameplay.Instigator
// 0x0048
struct FInstigator
{
	class APlayerState*                                InstigatorPlayerState;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InstigatingItem;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         PointOfOrigin;                                            // 0x0020(0x0018) (Edit, BlueprintVisible)
	int                                                TeamId;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Source;                                                   // 0x003C(0x0008) (Edit, BlueprintVisible)
	bool                                               bAlwaysFriendlyFire;                                      // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct EmbarkGameplay.EmbarkAnimNotifyBoneSelection
// 0x0008
struct FEmbarkAnimNotifyBoneSelection
{
	struct FName                                       SelectedSocket;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkGameplay.EmbarkOptimizedTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEmbarkOptimizedTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkGameplay.EmbarkStructHolder_Test
// 0x0050
struct FEmbarkStructHolder_Test
{
	TMap<struct FName, struct FEmbarkScriptStruct>     StructList;                                               // 0x0000(0x0050) (Transient)
};

// ScriptStruct EmbarkGameplay.EmbarkSocketSelection
// 0x0008
struct FEmbarkSocketSelection
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
