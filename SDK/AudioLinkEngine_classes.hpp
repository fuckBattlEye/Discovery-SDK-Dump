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

// Class AudioLinkEngine.AudioLinkBlueprintInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioLinkBlueprintInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioLinkEngine.AudioLinkBlueprintInterface"));
		return ptr;
	}


	void StopLink();//Offset:Discovery.exe+0x4BA8BD0
	void SetLinkSound(class USoundBase* NewSound);//Offset:Discovery.exe+0x4BA8C90
	void PlayLink(float StartTime);//Offset:Discovery.exe+0x4BA8BF0
	bool IsLinkPlaying();//Offset:Discovery.exe+0x4BA8BA0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
