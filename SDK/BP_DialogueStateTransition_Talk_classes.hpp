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

// BlueprintGeneratedClass BP_DialogueStateTransition_Talk.BP_DialogueStateTransition_Talk_C
// 0x0000 (0x00E8 - 0x00E8)
class UBP_DialogueStateTransition_Talk_C : public UDialogueStateTransition_Talk
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DialogueStateTransition_Talk.BP_DialogueStateTransition_Talk_C"));
		return ptr;
	}


	void ConstructionScript();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
