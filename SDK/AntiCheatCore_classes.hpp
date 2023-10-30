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

// Class AntiCheatCore.AntiCheatDelegates
// 0x0060 (0x0090 - 0x0030)
class UAntiCheatDelegates : public UEngineSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnViolation;                                              // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerActionRequired;                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AntiCheatCore.AntiCheatDelegates"));
		return ptr;
	}


	void ProcessEvents();//Offset:Discovery.exe+0x1ED22D0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
