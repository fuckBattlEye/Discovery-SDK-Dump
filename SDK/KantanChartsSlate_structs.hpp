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

// Enum KantanChartsSlate.EChartAxisPosition
enum class EChartAxisPosition : uint8_t
{
	LeftBottom                     = 0,
	RightTop                       = 1,
	Floating                       = 2,
	EChartAxisPosition_MAX         = 3
};


// Enum KantanChartsSlate.ECartesianScalingType
enum class ECartesianScalingType : uint8_t
{
	FixedScale                     = 0,
	FixedRange                     = 1,
	ECartesianScalingType_MAX      = 2
};


// Enum KantanChartsSlate.ECartesianRangeBoundType
enum class ECartesianRangeBoundType : uint8_t
{
	FixedValue                     = 0,
	FitToData                      = 1,
	FitToDataRounded               = 2,
	ECartesianRangeBoundType_MAX   = 3
};


// Enum KantanChartsSlate.EKantanDataPointSize
enum class EKantanDataPointSize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	EKantanDataPointSize_MAX       = 3
};


// Enum KantanChartsSlate.EKantanBarChartOrientation
enum class EKantanBarChartOrientation : uint8_t
{
	Vertical                       = 0,
	Horizontal                     = 1,
	EKantanBarChartOrientation_MAX = 2
};


// Enum KantanChartsSlate.EKantanBarLabelPosition
enum class EKantanBarLabelPosition : uint8_t
{
	NoLabels                       = 0,
	Standard                       = 1,
	Overlaid                       = 2,
	EKantanBarLabelPosition_MAX    = 3
};


// Enum KantanChartsSlate.EKantanBarValueExtents
enum class EKantanBarValueExtents : uint8_t
{
	NoValueLines                   = 0,
	ZeroLineOnly                   = 1,
	ZeroAndMaxLines                = 2,
	EKantanBarValueExtents_MAX     = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KantanChartsSlate.KantanChartStyle
// 0x0168 (0x0170 - 0x0008)
struct FKantanChartStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FLinearColor                                ChartLineColor;                                           // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChartLineThickness;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              BaseFont;                                                 // 0x00F8(0x0058) (Edit, BlueprintVisible)
	int                                                TitleFontSize;                                            // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AxisDescriptionFontSize;                                  // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AxisValueFontSize;                                        // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FontColor;                                                // 0x015C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
};

// ScriptStruct KantanChartsSlate.KantanBarChartStyle
// 0x0010 (0x0180 - 0x0170)
struct FKantanBarChartStyle : public FKantanChartStyle
{
	float                                              BarOpacity;                                               // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarOutlineOpacity;                                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarOutlineThickness;                                      // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
};

// ScriptStruct KantanChartsSlate.KantanCartesianChartStyle
// 0x0010 (0x0180 - 0x0170)
struct FKantanCartesianChartStyle : public FKantanChartStyle
{
	float                                              DataOpacity;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DataLineThickness;                                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
};

// ScriptStruct KantanChartsSlate.KantanCategoryStyle
// 0x0018
struct FKantanCategoryStyle
{
	struct FName                                       CategoryStyleId;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.KantanSeriesStyle
// 0x0020
struct FKantanSeriesStyle
{
	struct FName                                       StyleId;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UKantanPointStyle*                           PointStyle;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.CartesianAxisInstanceConfig
// 0x0004
struct FCartesianAxisInstanceConfig
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTitle;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowMarkers;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLabels;                                              // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.CartesianAxisConfig
// 0x0048
struct FCartesianAxisConfig
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit)
	struct FText                                       Unit;                                                     // 0x0018(0x0018) (Edit)
	float                                              MarkerSpacing;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxValueDigits;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCartesianAxisInstanceConfig                LeftBottomAxis;                                           // 0x0038(0x0004) (Edit)
	struct FCartesianAxisInstanceConfig                RightTopAxis;                                             // 0x003C(0x0004) (Edit)
	struct FCartesianAxisInstanceConfig                FloatingAxis;                                             // 0x0040(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct KantanChartsSlate.CartesianAxisRange
// 0x0008
struct FCartesianAxisRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.KantanCartesianPlotScale
// 0x0038
struct FKantanCartesianPlotScale
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector2D                                   Scale;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FocalCoordinates;                                         // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCartesianAxisRange                         RangeX;                                                   // 0x0028(0x0008) (Edit)
	struct FCartesianAxisRange                         RangeY;                                                   // 0x0030(0x0008) (Edit)
};

// ScriptStruct KantanChartsSlate.CartesianRangeBound
// 0x0008
struct FCartesianRangeBound
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              FixedBoundValue;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
