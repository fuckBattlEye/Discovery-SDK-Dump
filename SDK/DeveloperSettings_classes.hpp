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

// Class DeveloperSettings.DeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UDeveloperSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DeveloperSettings.DeveloperSettings"));
		return ptr;
	}

};


// Class DeveloperSettings.PlatformSettings
// 0x0018 (0x0040 - 0x0028)
class UPlatformSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DeveloperSettings.PlatformSettings"));
		return ptr;
	}

};


// Class DeveloperSettings.DeveloperSettingsBackedByCVars
// 0x0000 (0x0038 - 0x0038)
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DeveloperSettings.DeveloperSettingsBackedByCVars"));
		return ptr;
	}

};


// Class DeveloperSettings.PlatformSettingsManager
// 0x0058 (0x0080 - 0x0028)
class UPlatformSettingsManager : public UObject
{
public:
	TMap<class UClass*, struct FPlatformSettingsInstances> SettingsMap;                                              // 0x0028(0x0050) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DeveloperSettings.PlatformSettingsManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
