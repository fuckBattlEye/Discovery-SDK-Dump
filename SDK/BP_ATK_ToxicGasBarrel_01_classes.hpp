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

// BlueprintGeneratedClass BP_ATK_ToxicGasBarrel_01.BP_ATK_ToxicGasBarrel_01_C
// 0x000C (0x0594 - 0x0588)
class ABP_ATK_ToxicGasBarrel_01_C : public AExplosiveBarrelActor
{
public:
	class ABP_ToxicLeak_C*                             ToxicLeak;                                                // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                HitsTaken;                                                // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_ATK_ToxicGasBarrel_01.BP_ATK_ToxicGasBarrel_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
