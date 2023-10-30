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

// Class SocketSubsystemEOS.NetDriverEOSBase
// 0x0008 (0x07E0 - 0x07D8)
class UNetDriverEOSBase : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                           // 0x07D8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsUsingP2PSockets;                                       // 0x07D9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x07DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SocketSubsystemEOS.NetDriverEOSBase"));
		return ptr;
	}

};


// Class SocketSubsystemEOS.NetConnectionEOS
// 0x0010 (0x32F0 - 0x32E0)
class UNetConnectionEOS : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x32E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SocketSubsystemEOS.NetConnectionEOS"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
