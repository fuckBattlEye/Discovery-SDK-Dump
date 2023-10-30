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

// BlueprintGeneratedClass GC_BashedDoor.GC_BashedDoor_C
// 0x000C (0x004C - 0x0040)
class UGC_BashedDoor_C : public UGameplayCueNotify_Static
{
public:
	enum class EPlayerAnimEvent                        AnimationEvent;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FGameplayTag                                CharacterStateTag;                                        // 0x0044(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass GC_BashedDoor.GC_BashedDoor_C"));
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
