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

// BlueprintGeneratedClass BP_FireExtinguisher_SmokeVolume.BP_FireExtinguisher_SmokeVolume_C
// 0x0010 (0x0378 - 0x0368)
class ABP_FireExtinguisher_SmokeVolume_C : public AEffectSphereActor
{
public:
	class USphereComponent*                            FireModifierRadius;                                       // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryFirePropagationComponent*          DiscoveryFirePropagationComponent;                        // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_FireExtinguisher_SmokeVolume.BP_FireExtinguisher_SmokeVolume_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
