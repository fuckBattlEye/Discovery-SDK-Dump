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

// BlueprintGeneratedClass BP_ATK_FireExtinguisher_01.BP_ATK_FireExtinguisher_01_C
// 0x0008 (0x0590 - 0x0588)
class ABP_ATK_FireExtinguisher_01_C : public AExplosiveBarrelActor
{
public:
	class UDiscoveryFirePropagationComponent*          FirePropagationComponent_ExtinguishEffect;                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_ATK_FireExtinguisher_01.BP_ATK_FireExtinguisher_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
