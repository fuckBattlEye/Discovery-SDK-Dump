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

// BlueprintGeneratedClass BP_DeployableShield_01_Actor.BP_DeployableShield_01_Actor_C
// 0x0008 (0x0438 - 0x0430)
class ABP_DeployableShield_01_Actor_C : public APlaceableShieldActor
{
public:
	class UStaticMeshComponent*                        SM_DeployableShield_01_Logos_A;                           // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DeployableShield_01_Actor.BP_DeployableShield_01_Actor_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
