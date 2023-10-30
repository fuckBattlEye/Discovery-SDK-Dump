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

// BlueprintGeneratedClass BP_DialogueLogicStateInstance_ResetCooldown.BP_DialogueLogicStateInstance_ResetCooldown_C
// 0x0000 (0x0110 - 0x0110)
class UBP_DialogueLogicStateInstance_ResetCooldown_C : public UDialogueLogicStateInstance_ResetCooldown
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DialogueLogicStateInstance_ResetCooldown.BP_DialogueLogicStateInstance_ResetCooldown_C"));
		return ptr;
	}


	void ConstructionScript();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
