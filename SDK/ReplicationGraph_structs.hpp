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

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// 0x0010
struct FConnectionAlwaysRelevantNodePair
{
	class UNetConnection*                              NetConnection;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// 0x0018
struct FAlwaysRelevantActorInfo
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastViewer;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastViewTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// 0x0018
struct FTearOffActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// 0x0038
struct FLastLocationGatherInfo
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastOutOfRangeLocationCheck;                              // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ReplicationGraph.ClassReplicationInfo
// 0x0070
struct FClassReplicationInfo
{
	float                                              DistancePriorityScale;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StarvationPriorityScale;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedNetPriorityBias;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ScalingStart;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ScalingEnd;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ReplicationPeriodFrame;                                   // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ReplicationPeriodFrameMin;                                // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ReplicationPeriodFrameMax;                                // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           FastPath_ReplicationPeriodFrame;                          // 0x001A(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ActorChannelFrameTimeout;                                 // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4A];                                      // 0x001E(0x004A) MISSED OFFSET
	float                                              CullDistance;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CullDistanceSquared;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
