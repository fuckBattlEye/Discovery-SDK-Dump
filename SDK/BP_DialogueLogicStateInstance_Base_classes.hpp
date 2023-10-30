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

// BlueprintGeneratedClass BP_DialogueLogicStateInstance_Base.BP_DialogueLogicStateInstance_Base_C
// 0x0000 (0x0100 - 0x0100)
class UBP_DialogueLogicStateInstance_Base_C : public UDialogueLogicStateInstance_Base
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DialogueLogicStateInstance_Base.BP_DialogueLogicStateInstance_Base_C"));
		return ptr;
	}


	void ConstructionScript();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
