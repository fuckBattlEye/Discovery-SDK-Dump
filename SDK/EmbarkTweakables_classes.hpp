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

// Class EmbarkTweakables.EmbarkTweakablesSettings
// 0x0010 (0x0048 - 0x0038)
class UEmbarkTweakablesSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: TweakableClasses

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTweakables.EmbarkTweakablesSettings"));
		return ptr;
	}

};


// Class EmbarkTweakables.TweakableObject
// 0x0000 (0x0028 - 0x0028)
class UTweakableObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTweakables.TweakableObject"));
		return ptr;
	}

};


// Class EmbarkTweakables.EmbarkTweakablesSubsystem
// 0x0078 (0x00A8 - 0x0030)
class UEmbarkTweakablesSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FTweakablesContainer                        TweakablesContainer;                                      // 0x0040(0x0050)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTweakables.EmbarkTweakablesSubsystem"));
		return ptr;
	}


	void RegisterOnlineTweakables_Server(const struct FOnlineTweakablesContainer& InOnlineTweakablesContainer);//Offset:Discovery.exe+0x19FD5A0
	void RegisterOnlineTweakables_Client(const struct FOnlineTweakablesContainer& InOnlineTweakablesContainer);//Offset:Discovery.exe+0x19FD4A0
	bool IsInitialized();//Offset:Discovery.exe+0x19FD6A0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
