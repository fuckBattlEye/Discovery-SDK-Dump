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

// BlueprintGeneratedClass BP_DialogueConditionInstance.BP_DialogueConditionInstance_C
// 0x0000 (0x0108 - 0x0108)
class UBP_DialogueConditionInstance_C : public UDialogueConditionInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DialogueConditionInstance.BP_DialogueConditionInstance_C"));
		return ptr;
	}


	void ConstructionScript();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
