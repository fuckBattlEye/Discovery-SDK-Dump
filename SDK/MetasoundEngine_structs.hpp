#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MetasoundEngine.EMetaSoundMessageLevel
enum class EMetaSoundMessageLevel : uint8_t
{
	Error                          = 0,
	Warning                        = 1,
	Info                           = 2,
	EMetaSoundMessageLevel_MAX     = 3
};


// Enum MetasoundEngine.EMetasoundSourceAudioFormat
enum class EMetasoundSourceAudioFormat : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	COUNT                          = 2,
	EMetasoundSourceAudioFormat_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
// 0x0010
struct FMetaSoundAssetDirectory
{
	struct FDirectoryPath                              Directory;                                                // 0x0000(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
// 0x0018
struct FDefaultMetaSoundAssetAutoUpdateSettings
{
	struct FSoftObjectPath                             MetaSound;                                                // 0x0000(0x0018) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
