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

// BlueprintGeneratedClass GC_Tracked_Dart.GC_Tracked_Dart_C
// 0x0008 (0x0E48 - 0x0E40)
class AGC_Tracked_Dart_C : public AGameplayCueNotifyStatusEffectTracked
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass GC_Tracked_Dart.GC_Tracked_Dart_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
