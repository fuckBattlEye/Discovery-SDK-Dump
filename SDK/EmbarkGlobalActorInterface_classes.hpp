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

// Class EmbarkGlobalActorInterface.EmbarkGlobalActor
// 0x0008 (0x02D0 - 0x02C8)
class AEmbarkGlobalActor : public AActor
{
public:
	unsigned char                                      bCreateOnListenServer : 1;                                // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bCreateOnDedicatedServer : 1;                             // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bCreateOnClients : 1;                                     // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGlobalActorInterface.EmbarkGlobalActor"));
		return ptr;
	}

};


// Class EmbarkGlobalActorInterface.EmbarkGlobalActorFactorySubsystemInterface
// 0x0000 (0x0030 - 0x0030)
class UEmbarkGlobalActorFactorySubsystemInterface : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGlobalActorInterface.EmbarkGlobalActorFactorySubsystemInterface"));
		return ptr;
	}


	class AEmbarkGlobalActor* GetGlobalActor(class UClass* GlobalActorClass);//Offset:Discovery.exe+0x1D31250
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
