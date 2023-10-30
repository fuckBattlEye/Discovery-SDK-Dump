#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function KantanChartsUMG.KantanChart.SetUpdateTickRate
struct UKantanChart_SetUpdateTickRate_Params
{
	float                                              InRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChart.SetMargins
struct UKantanChart_SetMargins_Params
{
	struct FMargin                                     InMargins;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChart.SetChartTitlePadding
struct UKantanChart_SetChartTitlePadding_Params
{
	struct FMargin                                     InPadding;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChart.SetChartTitle
struct UKantanChart_SetChartTitle_Params
{
	struct FText                                       InTitle;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride
struct UKantanCategoryChart_AddCategoryStyleOverride_Params
{
	struct FName                                       CategoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig
struct UKantanBarChartBase_SetValueAxisConfig_Params
{
	struct FCartesianAxisConfig                        InCfg;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KantanChartsUMG.KantanBarChartBase.SetOrientation
struct UKantanBarChartBase_SetOrientation_Params
{
	enum class EKantanBarChartOrientation              InOrientation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanBarChartBase.SetMaxBarValue
struct UKantanBarChartBase_SetMaxBarValue_Params
{
	float                                              InMaxValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanBarChartBase.SetLabelPosition
struct UKantanBarChartBase_SetLabelPosition_Params
{
	enum class EKantanBarLabelPosition                 InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanBarChartBase.SetExtentsDisplay
struct UKantanBarChartBase_SetExtentsDisplay_Params
{
	enum class EKantanBarValueExtents                  InExtents;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanBarChartBase.SetBarToGapRatio
struct UKantanBarChartBase_SetBarToGapRatio_Params
{
	float                                              InRatio;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.BarChart.SetDatasource
struct UBarChart_SetDatasource_Params
{
	class UObject*                                     InDatasource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig
struct UKantanCartesianChartBase_SetYAxisConfig_Params
{
	struct FCartesianAxisConfig                        InCfg;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KantanChartsUMG.KantanCartesianChartBase.SetXAxisConfig
struct UKantanCartesianChartBase_SetXAxisConfig_Params
{
	struct FCartesianAxisConfig                        InCfg;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScaleByRange
struct UKantanCartesianChartBase_SetPlotScaleByRange_Params
{
	struct FCartesianAxisRange                         InRangeX;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCartesianAxisRange                         InRangeY;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScale
struct UKantanCartesianChartBase_SetPlotScale_Params
{
	struct FVector2D                                   InScale;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   InFocalCoords;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanCartesianChartBase.SetDataPointSize
struct UKantanCartesianChartBase_SetDataPointSize_Params
{
	enum class EKantanDataPointSize                    InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanCartesianChartBase.SetAxisTitlePadding
struct UKantanCartesianChartBase_SetAxisTitlePadding_Params
{
	struct FMargin                                     InPadding;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanCartesianChartBase.EnableSeries
struct UKantanCartesianChartBase_EnableSeries_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanCartesianChartBase.ConfigureSeries
struct UKantanCartesianChartBase_ConfigureSeries_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawLines;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanCartesianChartBase.AddSeriesStyleOverride
struct UKantanCartesianChartBase_AddSeriesStyleOverride_Params
{
	struct FName                                       SeriesId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UKantanPointStyle*                           PointStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.CartesianPlot.SetDatasource
struct UCartesianPlot_SetDatasource_Params
{
	class UObject*                                     InDatasource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChartLegend.SetSeriesPadding
struct UKantanChartLegend_SetSeriesPadding_Params
{
	struct FMargin                                     InPadding;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChartLegend.SetMargins
struct UKantanChartLegend_SetMargins_Params
{
	struct FMargin                                     InMargins;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChartLegend.SetFontSize
struct UKantanChartLegend_SetFontSize_Params
{
	int                                                InFontSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChartLegend.SetChart
struct UKantanChartLegend_SetChart_Params
{
	class UKantanCartesianChartBase*                   InChart;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KantanChartsUMG.KantanChartLegend.SetBackground
struct UKantanChartLegend_SetBackground_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetUpperValueBound
struct UKantanTimeSeriesPlotBase_SetUpperValueBound_Params
{
	struct FCartesianRangeBound                        InUpperBound;                                             // (Parm)
};

// Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetUpperTimeBound
struct UKantanTimeSeriesPlotBase_SetUpperTimeBound_Params
{
	struct FCartesianRangeBound                        InUpperBound;                                             // (Parm)
};

// Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetLowerValueBound
struct UKantanTimeSeriesPlotBase_SetLowerValueBound_Params
{
	struct FCartesianRangeBound                        InLowerBound;                                             // (Parm)
};

// Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetLowerTimeBound
struct UKantanTimeSeriesPlotBase_SetLowerTimeBound_Params
{
	struct FCartesianRangeBound                        InLowerBound;                                             // (Parm)
};

// Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetFixedTimeRange
struct UKantanTimeSeriesPlotBase_SetFixedTimeRange_Params
{
	bool                                               bEnableFixedRange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue
struct USimpleBarChart_BP_UpdateCategoryValue_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleBarChart.BP_RemoveCategory
struct USimpleBarChart_BP_RemoveCategory_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleBarChart.BP_RemoveAllCategories
struct USimpleBarChart_BP_RemoveAllCategories_Params
{
};

// Function KantanChartsUMG.SimpleBarChart.BP_AddCategoryWithId
struct USimpleBarChart_BP_AddCategoryWithId_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleBarChart.BP_AddCategory
struct USimpleBarChart_BP_AddCategory_Params
{
	struct FText                                       Name;                                                     // (Parm)
	struct FName                                       CatId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries
struct USimpleCartesianPlot_BP_RemoveSeries_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveAllSeries
struct USimpleCartesianPlot_BP_RemoveAllSeries_Params
{
};

// Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeriesWithId
struct USimpleCartesianPlot_BP_AddSeriesWithId_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLines;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeries
struct USimpleCartesianPlot_BP_AddSeries_Params
{
	struct FName                                       SeriesId;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLines;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleCartesianPlot.BP_AddDatapoint
struct USimpleCartesianPlot_BP_AddDatapoint_Params
{
	struct FName                                       SeriesId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_SetDatapointLimit
struct USimpleTimeSeriesPlot_BP_SetDatapointLimit_Params
{
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries
struct USimpleTimeSeriesPlot_BP_RemoveSeries_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveAllSeries
struct USimpleTimeSeriesPlot_BP_RemoveAllSeries_Params
{
};

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeriesWithId
struct USimpleTimeSeriesPlot_BP_AddSeriesWithId_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLines;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeries
struct USimpleTimeSeriesPlot_BP_AddSeries_Params
{
	struct FName                                       SeriesId;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLines;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapointNow
struct USimpleTimeSeriesPlot_BP_AddDatapointNow_Params
{
	struct FName                                       SeriesId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapoint
struct USimpleTimeSeriesPlot_BP_AddDatapoint_Params
{
	struct FName                                       SeriesId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsUMG.TimeSeriesPlot.SetDatasource
struct UTimeSeriesPlot_SetDatasource_Params
{
	class UObject*                                     InDatasource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
