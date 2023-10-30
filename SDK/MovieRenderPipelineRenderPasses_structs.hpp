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

// Enum MovieRenderPipelineRenderPasses.EEXRCompressionFormat
enum class EEXRCompressionFormat : uint8_t
{
	None                           = 0,
	PIZ                            = 1,
	ZIP                            = 2,
	DWAA                           = 3,
	DWAB                           = 4,
	EEXRCompressionFormat_MAX      = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
// 0x0030
struct FMoviePipelinePostProcessPass
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: Material
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
