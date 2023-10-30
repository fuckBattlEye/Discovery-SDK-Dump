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

// BlueprintGeneratedClass GC_DeadStatus.GC_DeadStatus_C
// 0x0008 (0x0F68 - 0x0F60)
class AGC_DeadStatus_C : public AGameplayCueNotifyStatusEffectDissolve
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass GC_DeadStatus.GC_DeadStatus_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
