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

// BlueprintGeneratedClass BP_DiscoveryBootHUD.BP_DiscoveryBootHUD_C
// 0x0008 (0x03E8 - 0x03E0)
class ABP_DiscoveryBootHUD_C : public ADiscoveryBootHUD
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DiscoveryBootHUD.BP_DiscoveryBootHUD_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
