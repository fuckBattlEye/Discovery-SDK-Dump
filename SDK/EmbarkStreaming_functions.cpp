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

// Function EmbarkStreaming.EmbarkStreamingDataAsset.UseSoftReferenceScanning
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkStreamingDataAsset::UseSoftReferenceScanning()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.UseSoftReferenceScanning"));

	UEmbarkStreamingDataAsset_UseSoftReferenceScanning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ScheduleStreamingHintsForAllStreamableDataAssets
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkStreamingDataAsset::STATIC_ScheduleStreamingHintsForAllStreamableDataAssets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ScheduleStreamingHintsForAllStreamableDataAssets"));

	UEmbarkStreamingDataAsset_ScheduleStreamingHintsForAllStreamableDataAssets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveSoftObjectPath
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSoftObjectPath         ObjectPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   DebugPropertyName              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkStreamingDataAsset::ResolveSoftObjectPath(const struct FSoftObjectPath& ObjectPath, const struct FName& DebugPropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveSoftObjectPath"));

	UEmbarkStreamingDataAsset_ResolveSoftObjectPath_Params params;
	params.ObjectPath = ObjectPath;
	params.DebugPropertyName = DebugPropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveSoftClassPath
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSoftClassPath          ClassPath                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   DebugPropertyName              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEmbarkStreamingDataAsset::ResolveSoftClassPath(const struct FSoftClassPath& ClassPath, const struct FName& DebugPropertyName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveSoftClassPath"));

	UEmbarkStreamingDataAsset_ResolveSoftClassPath_Params params;
	params.ClassPath = ClassPath;
	params.DebugPropertyName = DebugPropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveObject
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   DebugPropertyName              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSoftObjectPath         ObjectPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 ResolvedObject                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkStreamingDataAsset::ResolveObject(const struct FName& DebugPropertyName, const struct FSoftObjectPath& ObjectPath, class UObject* ResolvedObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveObject"));

	UEmbarkStreamingDataAsset_ResolveObject_Params params;
	params.DebugPropertyName = DebugPropertyName;
	params.ObjectPath = ObjectPath;
	params.ResolvedObject = ResolvedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveClass
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   DebugPropertyName              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSoftClassPath          ClassPath                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ResolvedClass                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEmbarkStreamingDataAsset::ResolveClass(const struct FName& DebugPropertyName, const struct FSoftClassPath& ClassPath, class UClass* ResolvedClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveClass"));

	UEmbarkStreamingDataAsset_ResolveClass_Params params;
	params.DebugPropertyName = DebugPropertyName;
	params.ClassPath = ClassPath;
	params.ResolvedClass = ResolvedClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ReceiveStreamingHint
// (Event, Protected, BlueprintEvent)

void UEmbarkStreamingDataAsset::ReceiveStreamingHint()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ReceiveStreamingHint"));

	UEmbarkStreamingDataAsset_ReceiveStreamingHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ReceiveOnStreamingDataAssetComplete
// (Event, Protected, BlueprintEvent)

void UEmbarkStreamingDataAsset::ReceiveOnStreamingDataAssetComplete()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ReceiveOnStreamingDataAssetComplete"));

	UEmbarkStreamingDataAsset_ReceiveOnStreamingDataAssetComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.OnStreamingDataAssetComplete
// (Final, Native, Protected)

void UEmbarkStreamingDataAsset::OnStreamingDataAssetComplete()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.OnStreamingDataAssetComplete"));

	UEmbarkStreamingDataAsset_OnStreamingDataAssetComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.DispatchStreamingHint
// (Final, Native, Public, BlueprintCallable)

void UEmbarkStreamingDataAsset::DispatchStreamingHint()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.DispatchStreamingHint"));

	UEmbarkStreamingDataAsset_DispatchStreamingHint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ClearLoadedAssetsCache
// (Final, Native, Public, BlueprintCallable)

void UEmbarkStreamingDataAsset::ClearLoadedAssetsCache()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ClearLoadedAssetsCache"));

	UEmbarkStreamingDataAsset_ClearLoadedAssetsCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreamingDataAsset.ClearAllLoadedAssetsCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bForceGC                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkStreamingDataAsset::STATIC_ClearAllLoadedAssetsCache(bool bForceGC)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreamingDataAsset.ClearAllLoadedAssetsCache"));

	UEmbarkStreamingDataAsset_ClearAllLoadedAssetsCache_Params params;
	params.bForceGC = bForceGC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.SuspendAsyncLoads
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Timeout                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkStreaming::STATIC_SuspendAsyncLoads(float Timeout)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.SuspendAsyncLoads"));

	UEmbarkStreaming_SuspendAsyncLoads_Params params;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.ResumeAsyncLoads
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkStreaming::STATIC_ResumeAsyncLoads()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.ResumeAsyncLoads"));

	UEmbarkStreaming_ResumeAsyncLoads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.ResolveObject
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSoftObjectPath         ObjectPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 ResolvedObject                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkStreaming::STATIC_ResolveObject(const struct FName& PropertyName, const struct FSoftObjectPath& ObjectPath, class UObject* ResolvedObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.ResolveObject"));

	UEmbarkStreaming_ResolveObject_Params params;
	params.PropertyName = PropertyName;
	params.ObjectPath = ObjectPath;
	params.ResolvedObject = ResolvedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStreaming.EmbarkStreaming.ResolveClass
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSoftClassPath          ClassPath                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ResolvedClass                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEmbarkStreaming::STATIC_ResolveClass(const struct FName& PropertyName, const struct FSoftClassPath& ClassPath, class UClass* ResolvedClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.ResolveClass"));

	UEmbarkStreaming_ResolveClass_Params params;
	params.PropertyName = PropertyName;
	params.ClassPath = ClassPath;
	params.ResolvedClass = ResolvedClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStreaming.EmbarkStreaming.LoadAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath         TargetToStream                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Opt_CallbackObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Opt_CallbackFunctionName       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Opt_DebugName                  (Parm, ZeroConstructor)

void UEmbarkStreaming::STATIC_LoadAsync(const struct FSoftObjectPath& TargetToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.LoadAsync"));

	UEmbarkStreaming_LoadAsync_Params params;
	params.TargetToStream = TargetToStream;
	params.Opt_CallbackObject = Opt_CallbackObject;
	params.Opt_CallbackFunctionName = Opt_CallbackFunctionName;
	params.Opt_DebugName = Opt_DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.LoadAssetsAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAssetData>      AssetsToStream                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Opt_CallbackObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Opt_CallbackFunctionName       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Opt_DebugName                  (Parm, ZeroConstructor)

void UEmbarkStreaming::STATIC_LoadAssetsAsync(TArray<struct FAssetData> AssetsToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.LoadAssetsAsync"));

	UEmbarkStreaming_LoadAssetsAsync_Params params;
	params.AssetsToStream = AssetsToStream;
	params.Opt_CallbackObject = Opt_CallbackObject;
	params.Opt_CallbackFunctionName = Opt_CallbackFunctionName;
	params.Opt_DebugName = Opt_DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.LoadAssetAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAssetData              AssetToStream                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Opt_CallbackObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Opt_CallbackFunctionName       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Opt_DebugName                  (Parm, ZeroConstructor)

void UEmbarkStreaming::STATIC_LoadAssetAsync(const struct FAssetData& AssetToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.LoadAssetAsync"));

	UEmbarkStreaming_LoadAssetAsync_Params params;
	params.AssetToStream = AssetToStream;
	params.Opt_CallbackObject = Opt_CallbackObject;
	params.Opt_CallbackFunctionName = Opt_CallbackFunctionName;
	params.Opt_DebugName = Opt_DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.LoadAllAsyncEx
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSoftObjectPath> TargetsToStream                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSoftClassPath>  ClassesToStream                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Opt_CallbackObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Opt_CallbackFunctionName       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Opt_DebugName                  (Parm, ZeroConstructor)

void UEmbarkStreaming::STATIC_LoadAllAsyncEx(TArray<struct FSoftObjectPath> TargetsToStream, TArray<struct FSoftClassPath> ClassesToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.LoadAllAsyncEx"));

	UEmbarkStreaming_LoadAllAsyncEx_Params params;
	params.TargetsToStream = TargetsToStream;
	params.ClassesToStream = ClassesToStream;
	params.Opt_CallbackObject = Opt_CallbackObject;
	params.Opt_CallbackFunctionName = Opt_CallbackFunctionName;
	params.Opt_DebugName = Opt_DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.LoadAllAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSoftObjectPath> TargetsToStream                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Opt_CallbackObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Opt_CallbackFunctionName       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Opt_DebugName                  (Parm, ZeroConstructor)

void UEmbarkStreaming::STATIC_LoadAllAsync(TArray<struct FSoftObjectPath> TargetsToStream, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName, const struct FString& Opt_DebugName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.LoadAllAsync"));

	UEmbarkStreaming_LoadAllAsync_Params params;
	params.TargetsToStream = TargetsToStream;
	params.Opt_CallbackObject = Opt_CallbackObject;
	params.Opt_CallbackFunctionName = Opt_CallbackFunctionName;
	params.Opt_DebugName = Opt_DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStreaming.EmbarkStreaming.GetAsyncLoadState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bOutPending                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOutSuspended                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmbarkStreaming::STATIC_GetAsyncLoadState(bool* bOutPending, bool* bOutSuspended)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.GetAsyncLoadState"));

	UEmbarkStreaming_GetAsyncLoadState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutPending != nullptr)
		*bOutPending = params.bOutPending;
	if (bOutSuspended != nullptr)
		*bOutSuspended = params.bOutSuspended;
}


// Function EmbarkStreaming.EmbarkStreaming.FlushAsyncLoads
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EEmbarkStreamingFlushMode FlushMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkStreaming::STATIC_FlushAsyncLoads(enum class EEmbarkStreamingFlushMode FlushMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStreaming.EmbarkStreaming.FlushAsyncLoads"));

	UEmbarkStreaming_FlushAsyncLoads_Params params;
	params.FlushMode = FlushMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
