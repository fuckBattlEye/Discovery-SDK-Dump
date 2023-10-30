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

// BlueprintGeneratedClass BP_DiscoveryGameMode_Boot.BP_DiscoveryGameMode_Boot_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_DiscoveryGameMode_Boot_C : public ADiscoveryBootGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DiscoveryGameMode_Boot.BP_DiscoveryGameMode_Boot_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
