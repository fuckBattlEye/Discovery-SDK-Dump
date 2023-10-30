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

// Class EmbarkReplicatedSubobjects.ReplicatedSubobject
// 0x0030 (0x0058 - 0x0028)
class UReplicatedSubobject : public UObject
{
public:
	unsigned char                                      bUseRepKeyForReplication : 1;                             // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0029(0x001F) MISSED OFFSET
	class UActorComponent*                             ActorComponentToPropagateReplicationKeyDirtyTo;           // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UReplicatedSubobject*                        ReplicatedSubobjectToPropagateReplicationKeyDirtyTo;      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicatedSubobjects.ReplicatedSubobject"));
		return ptr;
	}


	void SetUsesReplicationKeyForReplication(bool bNewUserRepKeyForReplication);//Offset:Discovery.exe+0x19E54F0
	void SetReplicationKeyDirty();//Offset:Discovery.exe+0x19E5590
	void SetReplicatedSubobjectToPropagateReplicationKeyDirtyTo(class UReplicatedSubobject* TargtReplicatedSubobject);//Offset:Discovery.exe+0x19E53B0
	void SetOuter(class UObject* Outer);//Offset:Discovery.exe+0x19E5250
	void SetActorComponentToPropagateReplicationKeyDirtyTo(class UActorComponent* ActorComponent);//Offset:Discovery.exe+0x19E5450
	void ScriptReplicateSubobjects();//Offset:Discovery.exe+0x327F8B0
	void PostReplication();//Offset:Discovery.exe+0x327F8B0
	bool GetUsesReplicationKeyForReplication();//Offset:Discovery.exe+0x19E5390
	void AddObjectToReplicate(class UReplicatedSubobject* ObjectToReplicate);//Offset:Discovery.exe+0x19E52F0
};


// Class EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects
// 0x0018 (0x00D0 - 0x00B8)
class UActorComponentReplicatedSubobjects : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects"));
		return ptr;
	}


	void ScriptReplicateSubobjects();//Offset:Discovery.exe+0x327F8B0
	void AddObjectToReplicate(class UReplicatedSubobject* ObjectToReplicate);//Offset:Discovery.exe+0x19E4A50
};


// Class EmbarkReplicatedSubobjects.ActorReplicatedSubobjects
// 0x0018 (0x02E0 - 0x02C8)
class AActorReplicatedSubobjects : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicatedSubobjects.ActorReplicatedSubobjects"));
		return ptr;
	}


	void ScriptReplicateSubobjects();//Offset:Discovery.exe+0x327F8B0
	void AddObjectToReplicate(class UReplicatedSubobject* ObjectToReplicate);//Offset:Discovery.exe+0x19E4EC0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
