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

// BlueprintGeneratedClass BP_Projectile_DomeShield_01.BP_Projectile_DomeShield_01_C
// 0x0028 (0x04C0 - 0x0498)
class ABP_Projectile_DomeShield_01_C : public ADiscoveryDomeShieldGrenade
{
public:
	class UDiscoveryOcclusionPointsComponent_MarkerComponents* DiscoveryOcclusionPointsComponent_MarkerComponents;       // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryOcclusionPointMarkerComponent*     DiscoveryOcclusionPointMarkerComponent;                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryOutlineComponent*                  DiscoveryOutlineComponent;                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Bubble;                                                   // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDiscoveryRecoverableComponent*              RecoverableComponent;                                     // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_Projectile_DomeShield_01.BP_Projectile_DomeShield_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
