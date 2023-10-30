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

// Class DataRegistry.DataRegistry
// 0x0098 (0x00C0 - 0x0028)
class UDataRegistry : public UObject
{
public:
	struct FName                                       RegistryType;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataRegistryIdFormat                       IdFormat;                                                 // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	class UScriptStruct*                               ItemStruct;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDataRegistrySource*>                 DataSources;                                              // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDataRegistrySource*>                 RuntimeSources;                                           // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
	float                                              TimerUpdateFrequency;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataRegistryCachePolicy                    DefaultCachePolicy;                                       // 0x0064(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0078(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.DataRegistry"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySettings
// 0x0018 (0x0050 - 0x0038)
class UDataRegistrySettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                      DirectoriesToScan;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bInitializeAllLoadedRegistries;                           // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIgnoreMissingCookedAssetRegistryData;                    // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.DataRegistrySettings"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySource
// 0x0010 (0x0038 - 0x0028)
class UDataRegistrySource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UDataRegistrySource*                         ParentSource;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.DataRegistrySource"));
		return ptr;
	}

};


// Class DataRegistry.MetaDataRegistrySource
// 0x00D0 (0x0108 - 0x0038)
class UMetaDataRegistrySource : public UDataRegistrySource
{
public:
	enum class EMetaDataRegistrySourceAssetUsage       AssetUsage;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FAssetManagerSearchRules                    SearchRules;                                              // 0x0040(0x0050) (Edit)
	TMap<struct FName, class UDataRegistrySource*>     RuntimeChildren;                                          // 0x0090(0x0050) (ExportObject, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.MetaDataRegistrySource"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySource_CurveTable
// 0x0068 (0x00A0 - 0x0038)
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SourceTable
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0060(0x0008) (Edit)
	class UCurveTable*                                 CachedTable;                                              // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCurveTable*                                 PreloadTable;                                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.DataRegistrySource_CurveTable"));
		return ptr;
	}

};


// Class DataRegistry.MetaDataRegistrySource_CurveTable
// 0x0010 (0x0118 - 0x0108)
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{
public:
	class UClass*                                      CreatedSource;                                            // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0110(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.MetaDataRegistrySource_CurveTable"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySource_DataTable
// 0x0068 (0x00A0 - 0x0038)
class UDataRegistrySource_DataTable : public UDataRegistrySource
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SourceTable
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0060(0x0008) (Edit)
	class UDataTable*                                  CachedTable;                                              // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDataTable*                                  PreloadTable;                                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.DataRegistrySource_DataTable"));
		return ptr;
	}

};


// Class DataRegistry.MetaDataRegistrySource_DataTable
// 0x0010 (0x0118 - 0x0108)
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{
public:
	class UClass*                                      CreatedSource;                                            // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0110(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.MetaDataRegistrySource_DataTable"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySubsystem
// 0x0098 (0x00C8 - 0x0030)
class UDataRegistrySubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DataRegistry.DataRegistrySubsystem"));
		return ptr;
	}


	bool STATIC_NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);//Offset:Discovery.exe+0x18E0350
	bool STATIC_NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);//Offset:Discovery.exe+0x18DFFD0
	bool STATIC_IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType);//Offset:Discovery.exe+0x18E05E0
	bool STATIC_IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId);//Offset:Discovery.exe+0x18E02B0
	bool STATIC_GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem);//Offset:Discovery.exe+0x18D8B10
	bool STATIC_GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase* OutItem);//Offset:Discovery.exe+0x18D8560
	void STATIC_FindCachedItemBP(const struct FDataRegistryId& ItemId, enum class EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem);//Offset:Discovery.exe+0x18D8820
	void STATIC_EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue);//Offset:Discovery.exe+0x18E0680
	bool STATIC_EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);//Offset:Discovery.exe+0x18E0430
	bool STATIC_EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);//Offset:Discovery.exe+0x18E00D0
	struct FString STATIC_Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType);//Offset:Discovery.exe+0x18E0510
	struct FString STATIC_Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId);//Offset:Discovery.exe+0x18E01D0
	bool STATIC_AcquireItemBP(const struct FDataRegistryId& ItemId, const struct FScriptDelegate& AcquireCallback);//Offset:Discovery.exe+0x18E0870
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
