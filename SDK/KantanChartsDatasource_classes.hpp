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

// Class KantanChartsDatasource.KantanCartesianDatasourceInterface
// 0x0000 (0x0028 - 0x0028)
class UKantanCartesianDatasourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsDatasource.KantanCartesianDatasourceInterface"));
		return ptr;
	}


	struct FText GetSeriesName(int SeriesIdx);//Offset:Discovery.exe+0x29E4630
	struct FName GetSeriesId(int CatIdx);//Offset:Discovery.exe+0x29E4720
	TArray<struct FKantanCartesianDatapoint> GetSeriesDatapoints(int SeriesIdx);//Offset:Discovery.exe+0x29E4550
	int GetNumSeries();//Offset:Discovery.exe+0x29E47D0
};


// Class KantanChartsDatasource.KantanCategoryDatasourceInterface
// 0x0000 (0x0028 - 0x0028)
class UKantanCategoryDatasourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsDatasource.KantanCategoryDatasourceInterface"));
		return ptr;
	}


	int GetNumCategories();//Offset:Discovery.exe+0x29E47D0
	float GetCategoryValue(int CatIdx);//Offset:Discovery.exe+0x29E52C0
	struct FText GetCategoryName(int CatIdx);//Offset:Discovery.exe+0x29E4630
	struct FName GetCategoryId(int CatIdx);//Offset:Discovery.exe+0x29E4720
};


// Class KantanChartsDatasource.KantanSimpleCartesianDatasource
// 0x0020 (0x0048 - 0x0028)
class UKantanSimpleCartesianDatasource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsDatasource.KantanSimpleCartesianDatasource"));
		return ptr;
	}


	class UKantanSimpleCartesianDatasource* STATIC_NewSimpleCartesianDatasource(int MaxDatapoints);//Offset:Discovery.exe+0x29E6370
	void BP_SetDatapointLimit(int Limit);//Offset:Discovery.exe+0x29E5EF0
	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);//Offset:Discovery.exe+0x29E5FB0
	void BP_RemoveAllSeries();//Offset:Discovery.exe+0x29E5F90
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);//Offset:Discovery.exe+0x29E61E0
	void BP_AddSeries(const struct FText& Name, struct FName* SeriesId);//Offset:Discovery.exe+0x29E60A0
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);//Offset:Discovery.exe+0x29E5DB0
};


// Class KantanChartsDatasource.KantanSimpleCategoryDatasource
// 0x0018 (0x0040 - 0x0028)
class UKantanSimpleCategoryDatasource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class KantanChartsDatasource.KantanSimpleCategoryDatasource"));
		return ptr;
	}


	class UKantanSimpleCategoryDatasource* STATIC_NewSimpleCategoryDatasource();//Offset:Discovery.exe+0x29E6EE0
	void BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess);//Offset:Discovery.exe+0x29E69C0
	void BP_RemoveCategory(const struct FName& ID, bool* bSuccess);//Offset:Discovery.exe+0x29E6B20
	void BP_RemoveAllCategories();//Offset:Discovery.exe+0x29E6B00
	void BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);//Offset:Discovery.exe+0x29E6D50
	void BP_AddCategory(const struct FText& Name, struct FName* CatId);//Offset:Discovery.exe+0x29E6C10
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
