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

// BlueprintGeneratedClass BP_DiscoveryTurret_Deployable.BP_DiscoveryTurret_Deployable_C
// 0x0048 (0x0598 - 0x0550)
class ABP_DiscoveryTurret_Deployable_C : public ADiscoveryTurret
{
public:
	class UBlockPlaceableComponent*                    BlockPlaceableComponent;                                  // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEmbarkActorTransformInterpolatorComponent*  EmbarkActorTransformInterpolator;                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryOcclusionPointMarkerComponent*     DiscoveryOcclusionPointMarkerComponent3;                  // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryOcclusionPointMarkerComponent*     DiscoveryOcclusionPointMarkerComponent2;                  // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryOcclusionPointMarkerComponent*     DiscoveryOcclusionPointMarkerComponent1;                  // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryOcclusionPointMarkerComponent*     DiscoveryOcclusionPointMarkerComponent;                   // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDiscoveryOcclusionPointsComponent_MarkerComponents* DiscoveryOcclusionPointsComponent_MarkerComponents;       // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBasicEngineAudioComponent*                  BasicEngineAudioComponent;                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USquadMetaDataList*                          SquadMetaDataList;                                        // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DiscoveryTurret_Deployable.BP_DiscoveryTurret_Deployable_C"));
		return ptr;
	}


	void OnRep_bIsExploding();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
