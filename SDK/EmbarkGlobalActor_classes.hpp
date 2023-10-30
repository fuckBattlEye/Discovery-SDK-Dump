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

// Class EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem
// 0x0060 (0x0090 - 0x0030)
class UEmbarkGlobalActorFactorySubsystem : public UEmbarkGlobalActorFactorySubsystemInterface
{
public:
	TArray<class UClass*>                              InitializeActorClasses;                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class AEmbarkGlobalActor*>     CreatedActors;                                            // 0x0040(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem"));
		return ptr;
	}


	bool ReceiveShouldCreateSubsystem(class UObject* Outer);//Offset:Discovery.exe+0x11B73E0
	void ReceivePostInitialize();//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnInitialize();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkGlobalActor.EmbarkGameplayGlobalActorFactorySubsystemBase
// 0x0008 (0x0098 - 0x0090)
class UEmbarkGameplayGlobalActorFactorySubsystemBase : public UEmbarkGlobalActorFactorySubsystem
{
public:
	class UClass*                                      EmbarkCharacterMovementGlobalActorClass;                  // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGlobalActor.EmbarkGameplayGlobalActorFactorySubsystemBase"));
		return ptr;
	}


	class AEmbarkFastReplicatorTransform* GetTransformFastReplicator();//Offset:Discovery.exe+0x1C4CCD0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
