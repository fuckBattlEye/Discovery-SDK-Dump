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

// BlueprintGeneratedClass BP_Launcher_01_Projectile.BP_Launcher_01_Projectile_C
// 0x0008 (0x0460 - 0x0458)
class ABP_Launcher_01_Projectile_C : public ADiscoverySimpleExplosiveProjectile
{
public:
	class UBasicEngineAudioComponent*                  BasicEngineAudioComponent;                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_Launcher_01_Projectile.BP_Launcher_01_Projectile_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
