//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSoftObjectPath         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FSoftObjectPath UAssetRegistryHelpers::STATIC_ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath"));

	UAssetRegistryHelpers_ToSoftObjectPath_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter               InFilter                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FTagAndValue>    InTagsAndValues                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FARFilter               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FARFilter UAssetRegistryHelpers::STATIC_SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues"));

	UAssetRegistryHelpers_SetFilterTagsAndValues_Params params;
	params.InFilter = InFilter;
	params.InTagsAndValues = InTagsAndValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::STATIC_IsValid(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.IsValid"));

	UAssetRegistryHelpers_IsValid_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::STATIC_IsUAsset(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.IsUAsset"));

	UAssetRegistryHelpers_IsUAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::STATIC_IsRedirector(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.IsRedirector"));

	UAssetRegistryHelpers_IsRedirector_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::STATIC_IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded"));

	UAssetRegistryHelpers_IsAssetLoaded_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   InTagName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 OutTagValue                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::STATIC_GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.GetTagValue"));

	UAssetRegistryHelpers_GetTagValue_Params params;
	params.InAssetData = InAssetData;
	params.InTagName = InTagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTagValue != nullptr)
		*OutTagValue = params.OutTagValue;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAssetRegistryHelpers::STATIC_GetFullName(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.GetFullName"));

	UAssetRegistryHelpers_GetFullName_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAssetRegistryHelpers::STATIC_GetExportTextName(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName"));

	UAssetRegistryHelpers_GetExportTextName_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAssetRegistryHelpers::STATIC_GetClass(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.GetClass"));

	UAssetRegistryHelpers_GetClass_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UAssetRegistry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UAssetRegistry> UAssetRegistryHelpers::STATIC_GetAssetRegistry()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry"));

	UAssetRegistryHelpers_GetAssetRegistry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAssetRegistryHelpers::STATIC_GetAsset(const struct FAssetData& InAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.GetAsset"));

	UAssetRegistryHelpers_GetAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InAsset                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBlueprintClass           (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetData              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetData UAssetRegistryHelpers::STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData"));

	UAssetRegistryHelpers_CreateAssetData_Params params;
	params.InAsset = InAsset;
	params.bAllowBlueprintClass = bAllowBlueprintClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.WaitForPackage
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PackageName                    (Parm, ZeroConstructor)

void UAssetRegistry::WaitForPackage(const struct FString& PackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.WaitForPackage"));

	UAssetRegistry_WaitForPackage_Params params;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.WaitForCompletion
// (Native, Public, BlueprintCallable)

void UAssetRegistry::WaitForCompletion()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.WaitForCompletion"));

	UAssetRegistry_WaitForCompletion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>      AssetDataList                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FARFilter               Filter                         (ConstParm, Parm, OutParm, ReferenceParm)

void UAssetRegistry::UseFilterToExcludeAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets"));

	UAssetRegistry_UseFilterToExcludeAssets_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSynchronousSearch             (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.SearchAllAssets"));

	UAssetRegistry_SearchAllAssets_Params params;
	params.bSynchronousSearch = bSynchronousSearch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InPaths                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bForceRescan                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreDenyListScanFilters     (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry::ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.ScanPathsSynchronous"));

	UAssetRegistry_ScanPathsSynchronous_Params params;
	params.InPaths = InPaths;
	params.bForceRescan = bForceRescan;
	params.bIgnoreDenyListScanFilters = bIgnoreDenyListScanFilters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAssetRegistry::ScanModifiedAssetFiles(TArray<struct FString> InFilePaths)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles"));

	UAssetRegistry_ScanModifiedAssetFiles_Params params;
	params.InFilePaths = InFilePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bForceRescan                   (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry::ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.ScanFilesSynchronous"));

	UAssetRegistry_ScanFilesSynchronous_Params params;
	params.InFilePaths = InFilePaths;
	params.bForceRescan = bForceRescan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>      AssetDataList                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FARFilter               Filter                         (ConstParm, Parm, OutParm, ReferenceParm)

void UAssetRegistry::RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter"));

	UAssetRegistry_RunAssetsThroughFilter_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PathToPrioritize               (Parm, ZeroConstructor)

void UAssetRegistry::PrioritizeSearchPath(const struct FString& PathToPrioritize)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.PrioritizeSearchPath"));

	UAssetRegistry_PrioritizeSearchPath_Params params;
	params.PathToPrioritize = PathToPrioritize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetRegistryDependencyOptions ReferenceOptions               (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FName>           OutReferencers                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::K2_GetReferencers(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<struct FName>* OutReferencers)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.K2_GetReferencers"));

	UAssetRegistry_K2_GetReferencers_Params params;
	params.PackageName = PackageName;
	params.ReferenceOptions = ReferenceOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReferencers != nullptr)
		*OutReferencers = params.OutReferencers;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetRegistryDependencyOptions DependencyOptions              (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FName>           OutDependencies                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::K2_GetDependencies(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<struct FName>* OutDependencies)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.K2_GetDependencies"));

	UAssetRegistry_K2_GetDependencies_Params params;
	params.PackageName = PackageName;
	params.DependencyOptions = DependencyOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDependencies != nullptr)
		*OutDependencies = params.OutDependencies;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.IsSearchAsync
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::IsSearchAsync()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.IsSearchAsync"));

	UAssetRegistry_IsSearchAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::IsSearchAllAssets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.IsSearchAllAssets"));

	UAssetRegistry_IsSearchAllAssets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::IsLoadingAssets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.IsLoadingAssets"));

	UAssetRegistry_IsLoadingAssets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackagePath                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRecursive                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::HasAssets(const struct FName& PackagePath, bool bRecursive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.HasAssets"));

	UAssetRegistry_HasAssets_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FString                 InBasePath                     (Parm, ZeroConstructor)
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor)
// bool                           bInRecurse                     (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry::GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetSubPaths"));

	UAssetRegistry_GetSubPaths_Params params;
	params.InBasePath = InBasePath;
	params.bInRecurse = bInRecurse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FName>           PackagePaths                   (Parm, ZeroConstructor)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssetsByPaths(TArray<struct FName> PackagePaths, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAssetsByPaths"));

	UAssetRegistry_GetAssetsByPaths_Params params;
	params.PackagePaths = PackagePaths;
	params.bRecursive = bRecursive;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackagePath                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAssetsByPath"));

	UAssetRegistry_GetAssetsByPath_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName"));

	UAssetRegistry_GetAssetsByPackageName_Params params;
	params.PackageName = PackageName;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   ClassName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bSearchSubClasses              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAssetsByClass"));

	UAssetRegistry_GetAssetsByClass_Params params;
	params.ClassName = ClassName;
	params.bSearchSubClasses = bSearchSubClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssets
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FARFilter               Filter                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAssets"));

	UAssetRegistry_GetAssets_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FName                   ObjectPath                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetData              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetData UAssetRegistry::GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath"));

	UAssetRegistry_GetAssetByObjectPath_Params params;
	params.ObjectPath = ObjectPath;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor)

void UAssetRegistry::GetAllCachedPaths(TArray<struct FString>* OutPathList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAllCachedPaths"));

	UAssetRegistry_GetAllCachedPaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AssetRegistry.AssetRegistry.GetAllAssets"));

	UAssetRegistry_GetAllAssets_Params params;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
