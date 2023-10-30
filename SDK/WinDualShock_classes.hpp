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

// Class WinDualShock.DualShockExternalEndpointSettings
// 0x0008 (0x0030 - 0x0028)
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{
public:
	int                                                ControllerIndex;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class WinDualShock.DualShockExternalEndpointSettings"));
		return ptr;
	}

};


// Class WinDualShock.DualShockSoundfieldEndpointSettings
// 0x0008 (0x0030 - 0x0028)
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{
public:
	int                                                ControllerIndex;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class WinDualShock.DualShockSoundfieldEndpointSettings"));
		return ptr;
	}

};


// Class WinDualShock.DualShockSpatializationSettings
// 0x0010 (0x0038 - 0x0028)
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{
public:
	float                                              Spread;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Passthrough;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class WinDualShock.DualShockSpatializationSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
