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

// Class ReplicationGraph.ReplicationGraphNode
// 0x0028 (0x0050 - 0x0028)
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>               AllChildNodes;                                            // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraph
// 0x0538 (0x0560 - 0x0028)
class UReplicationGraph : public UReplicationDriver
{
public:
	class UClass*                                      ReplicationConnectionManagerClass;                        // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UNetReplicationGraphConnection*>      Connections;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<class UNetReplicationGraphConnection*>      PendingConnections;                                       // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET
	TArray<class UReplicationGraphNode*>               GlobalGraphNodes;                                         // 0x0098(0x0010) (ZeroConstructor)
	TArray<class UReplicationGraphNode*>               PrepareForReplicationNodes;                               // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4A8];                                     // 0x00B8(0x04A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraph"));
		return ptr;
	}

};


// Class ReplicationGraph.BasicReplicationGraph
// 0x0030 (0x0590 - 0x0560)
class UBasicReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                       // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FConnectionAlwaysRelevantNodePair>   AlwaysRelevantForConnectionList;                          // 0x0568(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              ActorsWithoutNetConnection;                               // 0x0578(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.BasicReplicationGraph"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_ActorList
// 0x0080 (0x00D0 - 0x0050)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0050(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_ActorList"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// 0x00B8 (0x0108 - 0x0050)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0050(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// 0x0030 (0x0100 - 0x00D0)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// 0x0080 (0x0150 - 0x00D0)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// 0x0010 (0x00E0 - 0x00D0)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_DormancyNode"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_GridCell
// 0x0050 (0x0120 - 0x00D0)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET
	class UReplicationGraphNode*                       DynamicNode;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_DormancyNode*          DormancyNode;                                             // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_GridCell"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// 0x0210 (0x0260 - 0x0050)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0050(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// 0x0018 (0x0068 - 0x0050)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                       ChildNode;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0020 (0x00F0 - 0x00D0)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	TArray<struct FAlwaysRelevantActorInfo>            PastRelevantActors;                                       // 0x00E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// 0x0020 (0x0070 - 0x0050)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>                   TearOffActors;                                            // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection"));
		return ptr;
	}

};


// Class ReplicationGraph.NetReplicationGraphConnection
// 0x02B0 (0x02D8 - 0x0028)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                              NetConnection;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x140];                                     // 0x0030(0x0140) MISSED OFFSET
	class AReplicationGraphDebugActor*                 DebugActor;                                               // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	TArray<struct FLastLocationGatherInfo>             LastGatherLocations;                                      // 0x0188(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0198(0x0058) MISSED OFFSET
	TArray<class UReplicationGraphNode*>               ConnectionGraphNodes;                                     // 0x01F0(0x0010) (ZeroConstructor)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                              // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x0208(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.NetReplicationGraphConnection"));
		return ptr;
	}

};


// Class ReplicationGraph.ReplicationGraphDebugActor
// 0x0010 (0x02D8 - 0x02C8)
class AReplicationGraphDebugActor : public AActor
{
public:
	class UReplicationGraph*                           ReplicationGraph;                                         // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetReplicationGraphConnection*              ConnectionManager;                                        // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ReplicationGraph.ReplicationGraphDebugActor"));
		return ptr;
	}


	void ServerStopDebugging();//Offset:Discovery.exe+0x2116CA0
	void ServerStartDebugging();//Offset:Discovery.exe+0x2116CC0
	void ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame);//Offset:Discovery.exe+0x21169F0
	void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);//Offset:Discovery.exe+0x2116AE0
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);//Offset:Discovery.exe+0x2116950
	void ServerPrintCullDistances();//Offset:Discovery.exe+0x1462470
	void ServerPrintAllActorInfo(const struct FString& Str);//Offset:Discovery.exe+0x2116BD0
	void ServerCellInfo();//Offset:Discovery.exe+0x2116C80
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);//Offset:Discovery.exe+0x21167E0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
