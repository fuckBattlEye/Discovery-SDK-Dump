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

// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	Undefined                      = 0,
	Generic                        = 1,
	RelativeLocation               = 2,
	RelativeRotation               = 3,
	RelativeScale3D                = 4,
	Visibility                     = 5,
	Material                       = 6,
	Color                          = 7,
	Option                         = 8,
	EPropertyValueCategory_MAX     = 9
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028
struct FCapturedPropSegment
{
	struct FString                                     PropertyName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                PropertyIndex;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct VariantManagerContent.VariantDependency
// 0x0058
struct FVariantDependency
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: VariantSet
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: Variant
	bool                                               bEnabled;                                                 // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0008
struct FFunctionCaller
{
	struct FName                                       FunctionName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
