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

// Function EmbarkStreaming.EmbarkStreamingDataAsset.UseSoftReferenceScanning
struct UEmbarkStreamingDataAsset_UseSoftReferenceScanning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ScheduleStreamingHintsForAllStreamableDataAssets
struct UEmbarkStreamingDataAsset_ScheduleStreamingHintsForAllStreamableDataAssets_Params
{
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveSoftObjectPath
struct UEmbarkStreamingDataAsset_ResolveSoftObjectPath_Params
{
	struct FSoftObjectPath                             ObjectPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       DebugPropertyName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveSoftClassPath
struct UEmbarkStreamingDataAsset_ResolveSoftClassPath_Params
{
	struct FSoftClassPath                              ClassPath;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       DebugPropertyName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveObject
struct UEmbarkStreamingDataAsset_ResolveObject_Params
{
	struct FName                                       DebugPropertyName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSoftObjectPath                             ObjectPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     ResolvedObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ResolveClass
struct UEmbarkStreamingDataAsset_ResolveClass_Params
{
	struct FName                                       DebugPropertyName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSoftClassPath                              ClassPath;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ResolvedClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ReceiveStreamingHint
struct UEmbarkStreamingDataAsset_ReceiveStreamingHint_Params
{
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ReceiveOnStreamingDataAssetComplete
struct UEmbarkStreamingDataAsset_ReceiveOnStreamingDataAssetComplete_Params
{
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.OnStreamingDataAssetComplete
struct UEmbarkStreamingDataAsset_OnStreamingDataAssetComplete_Params
{
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.DispatchStreamingHint
struct UEmbarkStreamingDataAsset_DispatchStreamingHint_Params
{
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ClearLoadedAssetsCache
struct UEmbarkStreamingDataAsset_ClearLoadedAssetsCache_Params
{
};

// Function EmbarkStreaming.EmbarkStreamingDataAsset.ClearAllLoadedAssetsCache
struct UEmbarkStreamingDataAsset_ClearAllLoadedAssetsCache_Params
{
	bool                                               bForceGC;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreaming.SuspendAsyncLoads
struct UEmbarkStreaming_SuspendAsyncLoads_Params
{
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreaming.ResumeAsyncLoads
struct UEmbarkStreaming_ResumeAsyncLoads_Params
{
};

// Function EmbarkStreaming.EmbarkStreaming.ResolveObject
struct UEmbarkStreaming_ResolveObject_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSoftObjectPath                             ObjectPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     ResolvedObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreaming.ResolveClass
struct UEmbarkStreaming_ResolveClass_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSoftClassPath                              ClassPath;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ResolvedClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreaming.LoadAsync
struct UEmbarkStreaming_LoadAsync_Params
{
	struct FSoftObjectPath                             TargetToStream;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Opt_CallbackObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Opt_CallbackFunctionName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Opt_DebugName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkStreaming.EmbarkStreaming.LoadAssetsAsync
struct UEmbarkStreaming_LoadAssetsAsync_Params
{
	TArray<struct FAssetData>                          AssetsToStream;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Opt_CallbackObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Opt_CallbackFunctionName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Opt_DebugName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkStreaming.EmbarkStreaming.LoadAssetAsync
struct UEmbarkStreaming_LoadAssetAsync_Params
{
	struct FAssetData                                  AssetToStream;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Opt_CallbackObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Opt_CallbackFunctionName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Opt_DebugName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkStreaming.EmbarkStreaming.LoadAllAsyncEx
struct UEmbarkStreaming_LoadAllAsyncEx_Params
{
	TArray<struct FSoftObjectPath>                     TargetsToStream;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSoftClassPath>                      ClassesToStream;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Opt_CallbackObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Opt_CallbackFunctionName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Opt_DebugName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkStreaming.EmbarkStreaming.LoadAllAsync
struct UEmbarkStreaming_LoadAllAsync_Params
{
	TArray<struct FSoftObjectPath>                     TargetsToStream;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Opt_CallbackObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Opt_CallbackFunctionName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Opt_DebugName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkStreaming.EmbarkStreaming.GetAsyncLoadState
struct UEmbarkStreaming_GetAsyncLoadState_Params
{
	bool                                               bOutPending;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutSuspended;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStreaming.EmbarkStreaming.FlushAsyncLoads
struct UEmbarkStreaming_FlushAsyncLoads_Params
{
	enum class EEmbarkStreamingFlushMode               FlushMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
