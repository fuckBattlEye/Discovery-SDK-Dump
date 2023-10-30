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

// Class EmbarkReplicationGraph.ReplicationGraphNode_AlwaysRelevantObjects
// 0x0010 (0x0060 - 0x0050)
class UReplicationGraphNode_AlwaysRelevantObjects : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                       ChildNode;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_DormancyNode*          DormancyNode;                                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicationGraph.ReplicationGraphNode_AlwaysRelevantObjects"));
		return ptr;
	}

};


// Class EmbarkReplicationGraph.EmbarkReplicationGraph
// 0x00E0 (0x0640 - 0x0560)
class UEmbarkReplicationGraph : public UReplicationGraph
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0560(0x0090) MISSED OFFSET
	class UReplicationGraphNode_GridSpatialization2D*  GridNode;                                                 // 0x05F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_AlwaysRelevantObjects* AlwaysRelevantNode;                                       // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FConnectionAlwaysRelevantPair>       AlwaysRelevantForConnectionList;                          // 0x0600(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              ActorsWithoutNetConnection;                               // 0x0610(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              ScalableActors;                                           // 0x0620(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0630(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicationGraph.EmbarkReplicationGraph"));
		return ptr;
	}

};


// Class EmbarkReplicationGraph.EmbarkReplicationGraphSettingsDataAsset
// 0x0018 (0x0048 - 0x0030)
class UEmbarkReplicationGraphSettingsDataAsset : public UDataAsset
{
public:
	double                                             MaxConnectionReplicationFrameTime;                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             MaxConnectionReplicationFrameTimeModifierForFirstConnection;// 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             MaxAckTimeBeforeReplicationStops;                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicationGraph.EmbarkReplicationGraphSettingsDataAsset"));
		return ptr;
	}

};


// Class EmbarkReplicationGraph.EmbarkReplicationGraphSettings
// 0x0028 (0x0060 - 0x0038)
class UEmbarkReplicationGraphSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SettingsDataAsset

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicationGraph.EmbarkReplicationGraphSettings"));
		return ptr;
	}

};


// Class EmbarkReplicationGraph.EmbarkReplicationGraphStatics
// 0x0000 (0x0028 - 0x0028)
class UEmbarkReplicationGraphStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicationGraph.EmbarkReplicationGraphStatics"));
		return ptr;
	}


	void STATIC_RemoveDependentActor_Server(class AActor* Parent, class AActor* Child, class UObject* WorldContextObject);//Offset:Discovery.exe+0x1C41380
	void STATIC_AddDependentActor_Server(class AActor* Parent, class AActor* Child, class UObject* WorldContextObject);//Offset:Discovery.exe+0x1C415E0
};


// Class EmbarkReplicationGraph.PioneerReplicationGraph
// 0x0000 (0x0640 - 0x0640)
class UPioneerReplicationGraph : public UEmbarkReplicationGraph
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicationGraph.PioneerReplicationGraph"));
		return ptr;
	}

};


// Class EmbarkReplicationGraph.ReplicationSettingsComponent
// 0x0010 (0x00C8 - 0x00B8)
class UReplicationSettingsComponent : public UActorComponent
{
public:
	unsigned char                                      bEnableReplicationRateScaling : 1;                        // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              NetFrequencyScalingStart;                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetFrequencyScalingEnd;                                   // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistancePriorityScale;                                    // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicationGraph.ReplicationSettingsComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
