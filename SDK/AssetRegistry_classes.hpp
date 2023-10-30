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

// Class AssetRegistry.AssetRegistryImpl
// 0x08E0 (0x0908 - 0x0028)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8E0];                                     // 0x0028(0x08E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AssetRegistry.AssetRegistryImpl"));
		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AssetRegistry.AssetRegistryHelpers"));
		return ptr;
	}


	struct FSoftObjectPath STATIC_ToSoftObjectPath(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E4B0
	struct FARFilter STATIC_SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues);//Offset:Discovery.exe+0x4C6DA50
	bool STATIC_IsValid(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E9C0
	bool STATIC_IsUAsset(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E8A0
	bool STATIC_IsRedirector(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E780
	bool STATIC_IsAssetLoaded(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E150
	bool STATIC_GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue);//Offset:Discovery.exe+0x4C6DDF0
	struct FString STATIC_GetFullName(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E620
	struct FString STATIC_GetExportTextName(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6DFF0
	class UClass* STATIC_GetClass(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E390
	TScriptInterface<class UAssetRegistry> STATIC_GetAssetRegistry();//Offset:Discovery.exe+0x4C6ED10
	class UObject* STATIC_GetAsset(const struct FAssetData& InAssetData);//Offset:Discovery.exe+0x4C6E270
	struct FAssetData STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);//Offset:Discovery.exe+0x4C6EAE0
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AssetRegistry.AssetRegistry"));
		return ptr;
	}


	void WaitForPackage(const struct FString& PackageName);//Offset:Discovery.exe+0x4C6F860
	void WaitForCompletion();//Offset:Discovery.exe+0x4C6F910
	void UseFilterToExcludeAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList);//Offset:Discovery.exe+0x4C6FD20
	void SearchAllAssets(bool bSynchronousSearch);//Offset:Discovery.exe+0x4C6F990
	void ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters);//Offset:Discovery.exe+0x4C6FB80
	void ScanModifiedAssetFiles(TArray<struct FString> InFilePaths);//Offset:Discovery.exe+0x4C6F6C0
	void ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan);//Offset:Discovery.exe+0x4C6FA30
	void RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList);//Offset:Discovery.exe+0x4C6FF50
	void PrioritizeSearchPath(const struct FString& PathToPrioritize);//Offset:Discovery.exe+0x4C6F7B0
	bool K2_GetReferencers(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<struct FName>* OutReferencers);//Offset:Discovery.exe+0x4C70410
	bool K2_GetDependencies(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<struct FName>* OutDependencies);//Offset:Discovery.exe+0x4C70580
	bool IsSearchAsync();//Offset:Discovery.exe+0x4C6F930
	bool IsSearchAllAssets();//Offset:Discovery.exe+0x4C6F960
	bool IsLoadingAssets();//Offset:Discovery.exe+0x4C6F690
	bool HasAssets(const struct FName& PackagePath, bool bRecursive);//Offset:Discovery.exe+0x4C71530
	void GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList);//Offset:Discovery.exe+0x4C70180
	bool GetAssetsByPaths(TArray<struct FName> PackagePaths, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);//Offset:Discovery.exe+0x4C70EC0
	bool GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);//Offset:Discovery.exe+0x4C71140
	bool GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);//Offset:Discovery.exe+0x4C71360
	bool GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData);//Offset:Discovery.exe+0x4C70CF0
	bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);//Offset:Discovery.exe+0x4C70AB0
	struct FAssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);//Offset:Discovery.exe+0x4C70870
	void GetAllCachedPaths(TArray<struct FString>* OutPathList);//Offset:Discovery.exe+0x4C70320
	bool GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);//Offset:Discovery.exe+0x4C706F0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
