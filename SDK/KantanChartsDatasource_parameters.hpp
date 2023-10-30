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

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName
struct UKantanCartesianDatasourceInterface_GetSeriesName_Params
{
	int                                                SeriesIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesId
struct UKantanCartesianDatasourceInterface_GetSeriesId_Params
{
	int                                                CatIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesDatapoints
struct UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Params
{
	int                                                SeriesIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKantanCartesianDatapoint>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetNumSeries
struct UKantanCartesianDatasourceInterface_GetNumSeries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories
struct UKantanCategoryDatasourceInterface_GetNumCategories_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryValue
struct UKantanCategoryDatasourceInterface_GetCategoryValue_Params
{
	int                                                CatIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryName
struct UKantanCategoryDatasourceInterface_GetCategoryName_Params
{
	int                                                CatIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryId
struct UKantanCategoryDatasourceInterface_GetCategoryId_Params
{
	int                                                CatIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource
struct UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Params
{
	int                                                MaxDatapoints;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKantanSimpleCartesianDatasource*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_SetDatapointLimit
struct UKantanSimpleCartesianDatasource_BP_SetDatapointLimit_Params
{
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveSeries
struct UKantanSimpleCartesianDatasource_BP_RemoveSeries_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveAllSeries
struct UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Params
{
};

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeriesWithId
struct UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeries
struct UKantanSimpleCartesianDatasource_BP_AddSeries_Params
{
	struct FText                                       Name;                                                     // (Parm)
	struct FName                                       SeriesId;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddDatapoint
struct UKantanSimpleCartesianDatasource_BP_AddDatapoint_Params
{
	struct FName                                       SeriesId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource
struct UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Params
{
	class UKantanSimpleCategoryDatasource*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_UpdateCategoryValue
struct UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveCategory
struct UKantanSimpleCategoryDatasource_BP_RemoveCategory_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveAllCategories
struct UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Params
{
};

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategoryWithId
struct UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategory
struct UKantanSimpleCategoryDatasource_BP_AddCategory_Params
{
	struct FText                                       Name;                                                     // (Parm)
	struct FName                                       CatId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
