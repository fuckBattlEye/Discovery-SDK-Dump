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

// BlueprintGeneratedClass GC_Stunned.GC_Stunned_C
// 0x0008 (0x0E28 - 0x0E20)
class AGC_Stunned_C : public AGameplayCueNotifyStatusEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass GC_Stunned.GC_Stunned_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
