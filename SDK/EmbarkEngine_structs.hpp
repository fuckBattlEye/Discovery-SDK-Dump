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

// Enum EmbarkEngine.ECurveTRTrack
enum class ECurveTRTrack : uint8_t
{
	TX                             = 0,
	TY                             = 1,
	TZ                             = 2,
	RX                             = 3,
	RY                             = 4,
	RZ                             = 5,
	ECurveTRTrack_MAX              = 6
};


// Enum EmbarkEngine.EEmbarkVertexSpace
enum class EEmbarkVertexSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	EEmbarkVertexSpace_MAX         = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkEngine.EmbarkLayerBlendInput
// 0x0050
struct FEmbarkLayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            LayerInput;                                               // 0x0008(0x0014)
	struct FExpressionInput                            HeightInput;                                              // 0x001C(0x0014)
	struct FExpressionInput                            BlendSharpnessInput;                                      // 0x0030(0x0014)
	float                                              PreviewWeight;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstHeightInput;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstBlendSharpness;                                      // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkEngine.EmbarkHttpParameter
// 0x0020
struct FEmbarkHttpParameter
{
	struct FString                                     ParameterKey;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ParameterValue;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EmbarkEngine.PhysicalSkinnedMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FPhysicalSkinnedMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
