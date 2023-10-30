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

// Enum TemplateSequence.ETemplateSectionPropertyScaleType
enum class ETemplateSectionPropertyScaleType : uint8_t
{
	FloatProperty                  = 0,
	TransformPropertyLocationOnly  = 1,
	TransformPropertyRotationOnly  = 2,
	ETemplateSectionPropertyScaleType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// 0x000C
struct FTemplateSequenceBindingOverrideData
{
	TWeakObjectPtr<class UObject>                      Object;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridesDefault;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct TemplateSequence.TemplateSectionPropertyScale
// 0x0110
struct FTemplateSectionPropertyScale
{
	struct FGuid                                       ObjectBinding;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieScenePropertyBinding                  PropertyBinding;                                          // 0x0010(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     FloatChannel;                                             // 0x0028(0x00E8)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
