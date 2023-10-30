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

// ScriptStruct KantanChartsUMG.CategoryStyleManualMapping
// 0x0020
struct FCategoryStyleManualMapping
{
	struct FName                                       CategoryId;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKantanCategoryStyle                        Style;                                                    // 0x0008(0x0018) (Edit)
};

// ScriptStruct KantanChartsUMG.SeriesStyleManualMapping
// 0x0028
struct FSeriesStyleManualMapping
{
	struct FName                                       SeriesId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKantanSeriesStyle                          Style;                                                    // 0x0008(0x0020) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
