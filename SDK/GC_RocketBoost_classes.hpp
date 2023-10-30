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

// BlueprintGeneratedClass GC_RocketBoost.GC_RocketBoost_C
// 0x0000 (0x0040 - 0x0040)
class UGC_RocketBoost_C : public UGameplayCueNotify_Static
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass GC_RocketBoost.GC_RocketBoost_C"));
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
