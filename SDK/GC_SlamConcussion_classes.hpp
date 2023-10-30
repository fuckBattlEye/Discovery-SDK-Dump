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

// BlueprintGeneratedClass GC_SlamConcussion.GC_SlamConcussion_C
// 0x0008 (0x0A68 - 0x0A60)
class AGC_SlamConcussion_C : public AGameplayCueNotify_Actor_Ability
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass GC_SlamConcussion.GC_SlamConcussion_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
