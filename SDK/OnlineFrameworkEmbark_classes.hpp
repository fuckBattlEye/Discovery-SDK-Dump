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

// Class OnlineFrameworkEmbark.EmbarkPartyMember
// 0x0180 (0x0278 - 0x00F8)
class UEmbarkPartyMember : public UPartyMember
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x00F8(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineFrameworkEmbark.EmbarkPartyMember"));
		return ptr;
	}

};


// Class OnlineFrameworkEmbark.EmbarkSocialManager
// 0x0168 (0x0310 - 0x01A8)
class UEmbarkSocialManager : public USocialManager
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x01A8(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineFrameworkEmbark.EmbarkSocialManager"));
		return ptr;
	}

};


// Class OnlineFrameworkEmbark.EmbarkSocialParty
// 0x0090 (0x03E0 - 0x0350)
class UEmbarkSocialParty : public USocialParty
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0350(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineFrameworkEmbark.EmbarkSocialParty"));
		return ptr;
	}

};


// Class OnlineFrameworkEmbark.EmbarkSocialToolkit
// 0x0108 (0x03B0 - 0x02A8)
class UEmbarkSocialToolkit : public USocialToolkit
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x02A8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineFrameworkEmbark.EmbarkSocialToolkit"));
		return ptr;
	}

};


// Class OnlineFrameworkEmbark.EmbarkSocialUser
// 0x0000 (0x01C0 - 0x01C0)
class UEmbarkSocialUser : public USocialUser
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineFrameworkEmbark.EmbarkSocialUser"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
