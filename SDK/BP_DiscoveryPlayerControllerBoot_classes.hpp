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

// BlueprintGeneratedClass BP_DiscoveryPlayerControllerBoot.BP_DiscoveryPlayerControllerBoot_C
// 0x0008 (0x08A0 - 0x0898)
class ABP_DiscoveryPlayerControllerBoot_C : public AEmbarkPlayerController
{
public:
	class UMediaSoundComponent*                        MediaSound;                                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DiscoveryPlayerControllerBoot.BP_DiscoveryPlayerControllerBoot_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
