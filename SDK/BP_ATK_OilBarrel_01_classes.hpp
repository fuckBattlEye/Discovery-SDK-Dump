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

// BlueprintGeneratedClass BP_ATK_OilBarrel_01.BP_ATK_OilBarrel_01_C
// 0x00F0 (0x0688 - 0x0598)
class ABP_ATK_OilBarrel_01_C : public AFireBarrelActor
{
public:
	class UDiscoveryOcclusionPointMarkerComponent*     OcclusionMarker_3;                                        // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  Out_Hit;                                                  // 0x05A0(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_ATK_OilBarrel_01.BP_ATK_OilBarrel_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
