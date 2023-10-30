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

// ScriptStruct EmbarkLocalization.EmbarkLocalizationSourceConfig
// 0x0028
struct FEmbarkLocalizationSourceConfig
{
	struct FString                                     Namespace;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FName                                       TableId;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     FilePath;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
