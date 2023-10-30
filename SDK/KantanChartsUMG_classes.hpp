#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class KantanChartsUMG.KantanChart
// 0x0050 (0x0178 - 0x0128)
class UKantanChart : public UWidget
{
public:
	struct FMargin                                     Margins;                                                  // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       ChartTitle;                                               // 0x0138(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TitlePadding;                                             // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTickRate;                                           // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0164(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.KantanChart"));
		return ptr;
	}


	void SetUpdateTickRate(float InRate);//Offset:Discovery.exe+0x2A0C2B0
	void SetMargins(const struct FMargin& InMargins);//Offset:Discovery.exe+0x2A0C4E0
	void SetChartTitlePadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x2A0C350
	void SetChartTitle(const struct FText& InTitle);//Offset:Discovery.exe+0x2A0C400
};


// Class KantanChartsUMG.KantanCategoryChart
// 0x0020 (0x0198 - 0x0178)
class UKantanCategoryChart : public UKantanChart
{
public:
	bool                                               bAutoPerCategoryStyles;                                   // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class UKantanCategoryStyleSet*                     CategoryStyleSet;                                         // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCategoryStyleManualMapping>         ManualStyleMappings;                                      // 0x0188(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.KantanCategoryChart"));
		return ptr;
	}


	void AddCategoryStyleOverride(const struct FName& CategoryId, const struct FLinearColor& Color);//Offset:Discovery.exe+0x2A0C010
};


// Class KantanChartsUMG.KantanBarChartBase
// 0x01E8 (0x0380 - 0x0198)
class UKantanBarChartBase : public UKantanCategoryChart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET
	struct FKantanBarChartStyle                        WidgetStyle;                                              // 0x01A0(0x0180) (Edit, BlueprintVisible)
	enum class EKantanBarChartOrientation              Orientation;                                              // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              MaxBarValue;                                              // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EKantanBarLabelPosition                 LabelPosition;                                            // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              BarToGapRatio;                                            // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EKantanBarValueExtents                  ValueExtentsDisplay;                                      // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FCartesianAxisConfig                        ValueAxisCfg;                                             // 0x0338(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.KantanBarChartBase"));
		return ptr;
	}


	void SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg);//Offset:Discovery.exe+0x2A0A4D0
	void SetOrientation(enum class EKantanBarChartOrientation InOrientation);//Offset:Discovery.exe+0x2A0A860
	void SetMaxBarValue(float InMaxValue);//Offset:Discovery.exe+0x2A0A7C0
	void SetLabelPosition(enum class EKantanBarLabelPosition InPosition);//Offset:Discovery.exe+0x2A0A730
	void SetExtentsDisplay(enum class EKantanBarValueExtents InExtents);//Offset:Discovery.exe+0x2A0A600
	void SetBarToGapRatio(float InRatio);//Offset:Discovery.exe+0x2A0A690
};


// Class KantanChartsUMG.BarChart
// 0x0010 (0x0390 - 0x0380)
class UBarChart : public UKantanBarChartBase
{
public:
	class UObject*                                     DataSource;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.BarChart"));
		return ptr;
	}


	bool SetDatasource(class UObject* InDatasource);//Offset:Discovery.exe+0x2A09C80
};


// Class KantanChartsUMG.KantanCartesianChartBase
// 0x0288 (0x0400 - 0x0178)
class UKantanCartesianChartBase : public UKantanChart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FKantanCartesianChartStyle                  WidgetStyle;                                              // 0x0180(0x0180) (Edit, BlueprintVisible)
	struct FKantanCartesianPlotScale                   PlotScale;                                                // 0x0300(0x0038) (Edit)
	enum class EKantanDataPointSize                    DataPointSize;                                            // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FCartesianAxisConfig                        XAxisCfg;                                                 // 0x0340(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCartesianAxisConfig                        YAxisCfg;                                                 // 0x0388(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     AxisTitlePadding;                                         // 0x03D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKantanSeriesStyleSet*                       SeriesStyleSet;                                           // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSeriesStyleManualMapping>           ManualStyleMappings;                                      // 0x03E8(0x0010) (Edit, ZeroConstructor)
	bool                                               bAntiAlias;                                               // 0x03F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.KantanCartesianChartBase"));
		return ptr;
	}


	void SetYAxisConfig(const struct FCartesianAxisConfig& InCfg);//Offset:Discovery.exe+0x2A0B2C0
	void SetXAxisConfig(const struct FCartesianAxisConfig& InCfg);//Offset:Discovery.exe+0x2A0B3F0
	void SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY);//Offset:Discovery.exe+0x2A0B5B0
	void SetPlotScale(const struct FVector2D& InScale, const struct FVector2D& InFocalCoords);//Offset:Discovery.exe+0x2A0B6C0
	void SetDataPointSize(enum class EKantanDataPointSize InSize);//Offset:Discovery.exe+0x2A0B520
	void SetAxisTitlePadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x2A0B210
	void EnableSeries(const struct FName& ID, bool bEnable);//Offset:Discovery.exe+0x2A0AFF0
	void ConfigureSeries(const struct FName& ID, bool bDrawPoints, bool bDrawLines);//Offset:Discovery.exe+0x2A0AEB0
	void AddSeriesStyleOverride(const struct FName& SeriesId, class UKantanPointStyle* PointStyle, const struct FLinearColor& Color);//Offset:Discovery.exe+0x2A0B0E0
};


// Class KantanChartsUMG.KantanCartesianPlotBase
// 0x0000 (0x0400 - 0x0400)
class UKantanCartesianPlotBase : public UKantanCartesianChartBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.KantanCartesianPlotBase"));
		return ptr;
	}

};


// Class KantanChartsUMG.CartesianPlot
// 0x0010 (0x0410 - 0x0400)
class UCartesianPlot : public UKantanCartesianPlotBase
{
public:
	class UObject*                                     DataSource;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.CartesianPlot"));
		return ptr;
	}


	bool SetDatasource(class UObject* InDatasource);//Offset:Discovery.exe+0x2A0A0C0
};


// Class KantanChartsUMG.KantanChartLegend
// 0x0118 (0x0240 - 0x0128)
class UKantanChartLegend : public UWidget
{
public:
	struct FMargin                                     Margins;                                                  // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SeriesPadding;                                            // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0150(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                FontSize;                                                 // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UKantanCartesianChartBase>    Chart;                                                    // 0x0224(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x022C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.KantanChartLegend"));
		return ptr;
	}


	void SetSeriesPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x2A0CAF0
	void SetMargins(const struct FMargin& InMargins);//Offset:Discovery.exe+0x2A0CBA0
	void SetFontSize(int InFontSize);//Offset:Discovery.exe+0x2A0C960
	void SetChart(class UKantanCartesianChartBase* InChart);//Offset:Discovery.exe+0x2A0C8C0
	void SetBackground(const struct FSlateBrush& InBrush);//Offset:Discovery.exe+0x2A0CA00
};


// Class KantanChartsUMG.KantanTimeSeriesPlotBase
// 0x0030 (0x0430 - 0x0400)
class UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase
{
public:
	bool                                               bUseFixedTimeRange;                                       // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              DisplayTimeRange;                                         // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCartesianRangeBound                        LowerTimeBound;                                           // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCartesianRangeBound                        UpperTimeBound;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCartesianRangeBound                        LowerValueBound;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCartesianRangeBound                        UpperValueBound;                                          // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bExtendValueRangeToZero;                                  // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0429(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.KantanTimeSeriesPlotBase"));
		return ptr;
	}


	void SetUpperValueBound(const struct FCartesianRangeBound& InUpperBound);//Offset:Discovery.exe+0x2A0D0F0
	void SetUpperTimeBound(const struct FCartesianRangeBound& InUpperBound);//Offset:Discovery.exe+0x2A0D230
	void SetLowerValueBound(const struct FCartesianRangeBound& InLowerBound);//Offset:Discovery.exe+0x2A0D190
	void SetLowerTimeBound(const struct FCartesianRangeBound& InLowerBound);//Offset:Discovery.exe+0x2A0D2D0
	void SetFixedTimeRange(bool bEnableFixedRange, float TimeRange);//Offset:Discovery.exe+0x2A0D370
};


// Class KantanChartsUMG.SimpleBarChart
// 0x0020 (0x03A0 - 0x0380)
class USimpleBarChart : public UKantanBarChartBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0380(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.SimpleBarChart"));
		return ptr;
	}


	void BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess);//Offset:Discovery.exe+0x2A0D910
	void BP_RemoveCategory(const struct FName& ID, bool* bSuccess);//Offset:Discovery.exe+0x2A0DA70
	void BP_RemoveAllCategories();//Offset:Discovery.exe+0x2A0DA50
	void BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);//Offset:Discovery.exe+0x2A0DCA0
	void BP_AddCategory(const struct FText& Name, struct FName* CatId);//Offset:Discovery.exe+0x2A0DB60
};


// Class KantanChartsUMG.SimpleCartesianPlot
// 0x0020 (0x0420 - 0x0400)
class USimpleCartesianPlot : public UKantanCartesianPlotBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0400(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.SimpleCartesianPlot"));
		return ptr;
	}


	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);//Offset:Discovery.exe+0x2A0E430
	void BP_RemoveAllSeries();//Offset:Discovery.exe+0x2A0E410
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);//Offset:Discovery.exe+0x2A0E770
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);//Offset:Discovery.exe+0x2A0E520
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);//Offset:Discovery.exe+0x2A0E2D0
};


// Class KantanChartsUMG.SimpleTimeSeriesPlot
// 0x0020 (0x0450 - 0x0430)
class USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.SimpleTimeSeriesPlot"));
		return ptr;
	}


	void BP_SetDatapointLimit(int Limit);//Offset:Discovery.exe+0x2A0EEB0
	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);//Offset:Discovery.exe+0x2A0F1F0
	void BP_RemoveAllSeries();//Offset:Discovery.exe+0x2A0F1D0
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);//Offset:Discovery.exe+0x2A0F530
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);//Offset:Discovery.exe+0x2A0F2E0
	void BP_AddDatapointNow(const struct FName& SeriesId, float Value, bool* bSuccess);//Offset:Discovery.exe+0x2A0EF50
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);//Offset:Discovery.exe+0x2A0F090
};


// Class KantanChartsUMG.TimeSeriesPlot
// 0x0010 (0x0440 - 0x0430)
class UTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	class UObject*                                     DataSource;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsUMG.TimeSeriesPlot"));
		return ptr;
	}


	bool SetDatasource(class UObject* InDatasource);//Offset:Discovery.exe+0x2A0FD80
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
