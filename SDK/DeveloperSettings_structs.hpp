#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DeveloperSettings.PlatformSettingsInstances
// 0x0058
struct FPlatformSettingsInstances
{
	class UPlatformSettings*                           PlatformInstance;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FName, class UPlatformSettings*>       OtherPlatforms;                                           // 0x0008(0x0050) (Transient)
};

// ScriptStruct DeveloperSettings.PerPlatformSettings
// 0x0010
struct FPerPlatformSettings
{
	TArray<class UPlatformSettings*>                   Settings;                                                 // 0x0000(0x0010) (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
