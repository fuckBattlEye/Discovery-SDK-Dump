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

// BlueprintGeneratedClass GC_GrappleHookCancel.GC_GrappleHookCancel_C
// 0x0008 (0x0330 - 0x0328)
class AGC_GrappleHookCancel_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass GC_GrappleHookCancel.GC_GrappleHookCancel_C"));
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
