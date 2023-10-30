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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface"));
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0010 (0x32F0 - 0x32E0)
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                           // 0x32E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x32E1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemSteam.SteamNetConnection"));
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (0x07E0 - 0x07D8)
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemSteam.SteamNetDriver"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
