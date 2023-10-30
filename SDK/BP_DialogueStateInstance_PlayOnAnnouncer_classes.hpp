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

// SMNodeBlueprintGeneratedClass BP_DialogueStateInstance_PlayOnAnnouncer.BP_DialogueStateInstance_PlayOnAnnouncer_C
// 0x0000 (0x0180 - 0x0180)
class UBP_DialogueStateInstance_PlayOnAnnouncer_C : public UDialogueStateInstance_PlayOnStaticSpeaker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMNodeBlueprintGeneratedClass BP_DialogueStateInstance_PlayOnAnnouncer.BP_DialogueStateInstance_PlayOnAnnouncer_C"));
		return ptr;
	}


	void ConstructionScript();//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
