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

// Class KantanChartsSlate.KantanBarChartWidgetStyle
// 0x0180 (0x01B0 - 0x0030)
class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanBarChartStyle                        ChartStyle;                                               // 0x0030(0x0180) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsSlate.KantanBarChartWidgetStyle"));
		return ptr;
	}

};


// Class KantanChartsSlate.KantanCartesianChartWidgetStyle
// 0x0180 (0x01B0 - 0x0030)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanCartesianChartStyle                  ChartStyle;                                               // 0x0030(0x0180) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsSlate.KantanCartesianChartWidgetStyle"));
		return ptr;
	}

};


// Class KantanChartsSlate.KantanCategoryStyleSet
// 0x0010 (0x0040 - 0x0030)
class UKantanCategoryStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanCategoryStyle>                Styles;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsSlate.KantanCategoryStyleSet"));
		return ptr;
	}

};


// Class KantanChartsSlate.KantanPointStyle
// 0x0020 (0x0050 - 0x0030)
class UKantanPointStyle : public UDataAsset
{
public:
	class UTexture2D*                                  DataPointTexture;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   PointSizeTextureOffsets[0x3];                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsSlate.KantanPointStyle"));
		return ptr;
	}

};


// Class KantanChartsSlate.KantanSeriesStyleSet
// 0x0010 (0x0040 - 0x0030)
class UKantanSeriesStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanSeriesStyle>                  Styles;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsSlate.KantanSeriesStyleSet"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
