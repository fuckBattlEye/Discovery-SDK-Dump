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

// BlueprintGeneratedClass BP_ATK_GooBarrel_01.BP_ATK_GooBarrel_01_C
// 0x0004 (0x0594 - 0x0590)
class ABP_ATK_GooBarrel_01_C : public AGooBarrelActor
{
public:
	int                                                HitsTaken;                                                // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_ATK_GooBarrel_01.BP_ATK_GooBarrel_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
