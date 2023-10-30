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

// Class EmbarkStreaming.EmbarkStreamingDataAsset
// 0x0058 (0x0090 - 0x0038)
class UEmbarkStreamingDataAsset : public UOptionalPrimaryDataAsset
{
public:
	TMap<struct FSoftObjectPath, class UObject*>       LoadedAssetPtrs;                                          // 0x0038(0x0050) (Transient)
	bool                                               bEnableSoftReferenceScanning;                             // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkStreamingFilter                  StreamingFilter;                                          // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x008A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStreaming.EmbarkStreamingDataAsset"));
		return ptr;
	}


	bool UseSoftReferenceScanning();//Offset:Discovery.exe+0x19EF560
	void STATIC_ScheduleStreamingHintsForAllStreamableDataAssets();//Offset:Discovery.exe+0x19EEFA0
	class UObject* ResolveSoftObjectPath(const struct FSoftObjectPath& ObjectPath, const struct FName& DebugPropertyName);//Offset:Discovery.exe+0x19EF300
	class UClass* ResolveSoftClassPath(const struct FSoftClassPath& ClassPath, const struct FName& DebugPropertyName);//Offset:Discovery.exe+0x19EF430
	class UObject* ResolveObject(const struct FName& DebugPropertyName, const struct FSoftObjectPath& ObjectPath, class UObject* ResolvedObject);//Offset:Discovery.exe+0x19EF000
	class UClass* ResolveClass(const struct FName& DebugPropertyName, const struct FSoftClassPath& ClassPath, class UClass* ResolvedClass);//Offset:Discovery.exe+0x19EF180
	void ReceiveStreamingHint();//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnStreamingDataAssetComplete();//Offset:Discovery.exe+0x327F8B0
	void OnStreamingDataAssetComplete();//Offset:Discovery.exe+0x19EF590
	void DispatchStreamingHint();//Offset:Discovery.exe+0x19EEFE0
	void ClearLoadedAssetsCache();//Offset:Discovery.exe+0x19EEFC0
	void STATIC_ClearAllLoadedAssetsCache(bool bForceGC);//Offset:Discovery.exe+0x19EEF10
};


// Class EmbarkStreaming.EmbarkStreaming
// 0x0000 (0x0028 - 0x0028)
class UEmbarkStreaming : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStreaming.EmbarkStreaming"));
		return ptr;
	}


	void STATIC_SuspendAsyncLoads(float Timeout);//Offset:Discovery.exe+0x19F0E60
	void STATIC_ResumeAsyncLoads();//Offset:Discovery.exe+0x19F0E40
	class UObject* STATIC_ResolveObject(const struct FName& PropertyName, const struct FSoftObjectPath& ObjectPath, class UObject* ResolvedObject);//Offset:Discovery.exe+0x19F09E0
	class UClass* STATIC_ResolveClass(const struct FName& PropertyName, const struct FSoftClassPath& ClassPath, class UClass* ResolvedClass);//Offset:Discovery.exe+0x19F0B50
	void STATIC_LoadAsync(const struct FSoftObjectPath& TargetToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName);//Offset:Discovery.exe+0x19F07E0
	void STATIC_LoadAssetsAsync(TArray<struct FAssetData> AssetsToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName);//Offset:Discovery.exe+0x19F00F0
	void STATIC_LoadAssetAsync(const struct FAssetData& AssetToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName);//Offset:Discovery.exe+0x19F0350
	void STATIC_LoadAllAsyncEx(TArray<struct FSoftObjectPath> TargetsToStream, TArray<struct FSoftClassPath> ClassesToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName);//Offset:Discovery.exe+0x19EFE20
	void STATIC_LoadAllAsync(TArray<struct FSoftObjectPath> TargetsToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName);//Offset:Discovery.exe+0x19F05C0
	void STATIC_GetAsyncLoadState(bool* bOutPending, bool* bOutSuspended);//Offset:Discovery.exe+0x19F0CC0
	void STATIC_FlushAsyncLoads(enum class EEmbarkStreamingFlushMode FlushMode);//Offset:Discovery.exe+0x19F0DB0
};


// Class EmbarkStreaming.EmbarkStreamingSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkStreamingSubsystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkStreaming.EmbarkStreamingSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
