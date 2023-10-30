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

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
struct UAssetRegistryHelpers_ToSoftObjectPath_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSoftObjectPath                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
struct UAssetRegistryHelpers_SetFilterTagsAndValues_Params
{
	struct FARFilter                                   InFilter;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FTagAndValue>                        InTagsAndValues;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FARFilter                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.IsValid
struct UAssetRegistryHelpers_IsValid_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
struct UAssetRegistryHelpers_IsUAsset_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
struct UAssetRegistryHelpers_IsRedirector_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
struct UAssetRegistryHelpers_IsAssetLoaded_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
struct UAssetRegistryHelpers_GetTagValue_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       InTagName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     OutTagValue;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetFullName
struct UAssetRegistryHelpers_GetFullName_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
struct UAssetRegistryHelpers_GetExportTextName_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.GetClass
struct UAssetRegistryHelpers_GetClass_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
struct UAssetRegistryHelpers_GetAssetRegistry_Params
{
	TScriptInterface<class UAssetRegistry>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAsset
struct UAssetRegistryHelpers_GetAsset_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
struct UAssetRegistryHelpers_CreateAssetData_Params
{
	class UObject*                                     InAsset;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBlueprintClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetData                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetRegistry.AssetRegistry.WaitForPackage
struct UAssetRegistry_WaitForPackage_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
};

// Function AssetRegistry.AssetRegistry.WaitForCompletion
struct UAssetRegistry_WaitForCompletion_Params
{
};

// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
struct UAssetRegistry_UseFilterToExcludeAssets_Params
{
	TArray<struct FAssetData>                          AssetDataList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FARFilter                                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AssetRegistry.AssetRegistry.SearchAllAssets
struct UAssetRegistry_SearchAllAssets_Params
{
	bool                                               bSynchronousSearch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
struct UAssetRegistry_ScanPathsSynchronous_Params
{
	TArray<struct FString>                             InPaths;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForceRescan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDenyListScanFilters;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
struct UAssetRegistry_ScanModifiedAssetFiles_Params
{
	TArray<struct FString>                             InFilePaths;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
struct UAssetRegistry_ScanFilesSynchronous_Params
{
	TArray<struct FString>                             InFilePaths;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForceRescan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
struct UAssetRegistry_RunAssetsThroughFilter_Params
{
	TArray<struct FAssetData>                          AssetDataList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FARFilter                                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
struct UAssetRegistry_PrioritizeSearchPath_Params
{
	struct FString                                     PathToPrioritize;                                         // (Parm, ZeroConstructor)
};

// Function AssetRegistry.AssetRegistry.K2_GetReferencers
struct UAssetRegistry_K2_GetReferencers_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetRegistryDependencyOptions             ReferenceOptions;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               OutReferencers;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.K2_GetDependencies
struct UAssetRegistry_K2_GetDependencies_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetRegistryDependencyOptions             DependencyOptions;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               OutDependencies;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.IsSearchAsync
struct UAssetRegistry_IsSearchAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
struct UAssetRegistry_IsSearchAllAssets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.IsLoadingAssets
struct UAssetRegistry_IsLoadingAssets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.HasAssets
struct UAssetRegistry_HasAssets_Params
{
	struct FName                                       PackagePath;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRecursive;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetSubPaths
struct UAssetRegistry_GetSubPaths_Params
{
	struct FString                                     InBasePath;                                               // (Parm, ZeroConstructor)
	TArray<struct FString>                             OutPathList;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bInRecurse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
struct UAssetRegistry_GetAssetsByPaths_Params
{
	TArray<struct FName>                               PackagePaths;                                             // (Parm, ZeroConstructor)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPath
struct UAssetRegistry_GetAssetsByPath_Params
{
	struct FName                                       PackagePath;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
struct UAssetRegistry_GetAssetsByPackageName_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByClass
struct UAssetRegistry_GetAssetsByClass_Params
{
	struct FName                                       ClassName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bSearchSubClasses;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssets
struct UAssetRegistry_GetAssets_Params
{
	struct FARFilter                                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
struct UAssetRegistry_GetAssetByObjectPath_Params
{
	struct FName                                       ObjectPath;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetData                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
struct UAssetRegistry_GetAllCachedPaths_Params
{
	TArray<struct FString>                             OutPathList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function AssetRegistry.AssetRegistry.GetAllAssets
struct UAssetRegistry_GetAllAssets_Params
{
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
