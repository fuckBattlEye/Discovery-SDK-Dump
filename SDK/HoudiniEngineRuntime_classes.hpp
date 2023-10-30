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

// Class HoudiniEngineRuntime.HoudiniAsset
// 0x0028 (0x0050 - 0x0028)
class UHoudiniAsset : public UObject
{
public:
	struct FString                                     AssetFileName;                                            // 0x0028(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              AssetBytes;                                               // 0x0038(0x0010) (ZeroConstructor)
	uint32_t                                           AssetBytesCount;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAssetLimitedCommercial;                                  // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAssetNonCommercial;                                      // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAssetExpanded;                                           // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAsset"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetActor
// 0x0008 (0x02D0 - 0x02C8)
class AHoudiniAssetActor : public AActor
{
public:
	class UHoudiniAssetComponent*                      HoudiniAssetComponent;                                    // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetActor"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetComponent
// 0x0550 (0x0AE0 - 0x0590)
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0590(0x0008) MISSED OFFSET
	class UHoudiniAsset*                               HoudiniAsset;                                             // 0x0598(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCookOnParameterChange;                                   // 0x05A0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUploadTransformsToHoudiniEngine;                         // 0x05A1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCookOnTransformChange;                                   // 0x05A2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCookOnAssetInputCook;                                    // 0x05A3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOutputless;                                              // 0x05A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOutputTemplateGeos;                                      // 0x05A5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseOutputNodes;                                          // 0x05A6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05A7(0x0001) MISSED OFFSET
	struct FDirectoryPath                              TemporaryCookFolder;                                      // 0x05A8(0x0010)
	struct FDirectoryPath                              BakeFolder;                                               // 0x05B8(0x0010)
	enum class EHoudiniStaticMeshMethod                StaticMeshMethod;                                         // 0x05C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	struct FHoudiniStaticMeshGenerationProperties      StaticMeshGenerationProperties;                           // 0x05D0(0x01E0) (Edit)
	struct FMeshBuildSettings                          StaticMeshBuildSettings;                                  // 0x07B0(0x0048) (Edit)
	bool                                               bOverrideGlobalProxyStaticMeshSettings;                   // 0x07F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableProxyStaticMeshOverride;                           // 0x07F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableProxyStaticMeshRefinementByTimerOverride;          // 0x07FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x07FB(0x0001) MISSED OFFSET
	float                                              ProxyMeshAutoRefineTimeoutSecondsOverride;                // 0x07FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;   // 0x0800(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;    // 0x0801(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0802(0x0002) MISSED OFFSET
	int                                                AssetId;                                                  // 0x0804(0x0004) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	TArray<int>                                        NodeIdsToCook;                                            // 0x0808(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<int, int>                                     OutputNodeCookCounts;                                     // 0x0818(0x0050) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0868(0x0050) UNKNOWN PROPERTY: DownstreamHoudiniAssets
	struct FGuid                                       ComponentGUID;                                            // 0x08B8(0x0010) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	struct FGuid                                       HapiGUID;                                                 // 0x08C8(0x0010) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	struct FString                                     HapiAssetName;                                            // 0x08D8(0x0010) (ZeroConstructor, DuplicateTransient)
	enum class EHoudiniAssetState                      AssetState;                                               // 0x08E8(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	enum class EHoudiniAssetState                      DebugLastAssetState;                                      // 0x08E9(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	enum class EHoudiniAssetStateResult                AssetStateResult;                                         // 0x08EA(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x08EB(0x0005) MISSED OFFSET
	struct FTransform                                  LastComponentTransform;                                   // 0x08F0(0x0060) (DuplicateTransient, IsPlainOldData)
	uint32_t                                           SubAssetIndex;                                            // 0x0950(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AssetCookCount;                                           // 0x0954(0x0004) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bHasBeenLoaded;                                           // 0x0958(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bHasBeenDuplicated;                                       // 0x0959(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bPendingDelete;                                           // 0x095A(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bRecookRequested;                                         // 0x095B(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bRebuildRequested;                                        // 0x095C(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bEnableCooking;                                           // 0x095D(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bForceNeedUpdate;                                         // 0x095E(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bLastCookSuccess;                                         // 0x095F(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bParameterDefinitionUpdateNeeded;                         // 0x0960(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bBlueprintStructureModified;                              // 0x0961(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bBlueprintModified;                                       // 0x0962(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0963(0x0005) MISSED OFFSET
	TArray<class UHoudiniParameter*>                   Parameters;                                               // 0x0968(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHoudiniInput*>                       Inputs;                                                   // 0x0978(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHoudiniOutput*>                      Outputs;                                                  // 0x0988(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FHoudiniBakedOutput>                 BakedOutputs;                                             // 0x0998(0x0010) (ZeroConstructor)
	TArray<TWeakObjectPtr<class AActor>>               UntrackedOutputs;                                         // 0x09A8(0x0010) (ZeroConstructor)
	TArray<class UHoudiniHandleComponent*>             HandleComponents;                                         // 0x09B8(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bHasComponentTransformChanged;                            // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bFullyLoaded;                                             // 0x09C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x09CA(0x0006) MISSED OFFSET
	class UHoudiniPDGAssetLink*                        PDGAssetLink;                                             // 0x09D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                RefineMeshesTimer;                                        // 0x09D8(0x0008)
	unsigned char                                      UnknownData09[0x18];                                      // 0x09E0(0x0018) MISSED OFFSET
	bool                                               bNoProxyMeshNextCookRequested;                            // 0x09F8(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	TMap<class UObject*, int>                          InputPresets;                                             // 0x0A00(0x0050) (Transient, DuplicateTransient)
	bool                                               bBakeAfterNextCook;                                       // 0x0A50(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x5F];                                      // 0x0A51(0x005F) MISSED OFFSET
	bool                                               bCachedIsPreview;                                         // 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0xF];                                       // 0x0AB1(0x000F) MISSED OFFSET
	double                                             LastTickTime;                                             // 0x0AC0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x0AC8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// 0x0100 (0x0BE0 - 0x0AE0)
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0AE0(0x0048) MISSED OFFSET
	bool                                               FauxBPProperty;                                           // 0x0B28(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHoudiniAssetChanged;                                     // 0x0B29(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatedFromTemplate;                                     // 0x0B2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bIsInBlueprintEditor;                                     // 0x0B2B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanDeleteHoudiniNodes;                                   // 0x0B2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bHasRegisteredComponentTemplate;                          // 0x0B2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0B2E(0x000A) MISSED OFFSET
	TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes;                                        // 0x0B38(0x0050)
	TMap<struct FGuid, struct FGuid>                   CachedInputNodes;                                         // 0x0B88(0x0050)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0BD8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent"));
		return ptr;
	}


	void SetToggleValueAt(const struct FString& Name, bool Value, int Index);//Offset:Discovery.exe+0x2F12040
	void SetFloatParameter(const struct FString& Name, float Value, int Index);//Offset:Discovery.exe+0x2F121D0
	bool HasParameter(const struct FString& Name);//Offset:Discovery.exe+0x2F12370
};


// Class HoudiniEngineRuntime.HoudiniAssetParameter
// 0x0058 (0x0080 - 0x0028)
class UHoudiniAssetParameter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameter"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// 0x0000 (0x0080 - 0x0080)
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterButton"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// 0x0038 (0x00B8 - 0x0080)
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterChoice"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// 0x0010 (0x0090 - 0x0080)
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterColor"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// 0x0028 (0x00A8 - 0x0080)
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterFile"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// 0x0038 (0x00B8 - 0x0080)
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterFloat"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// 0x0000 (0x0080 - 0x0080)
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterFolder"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// 0x0000 (0x0080 - 0x0080)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// 0x0030 (0x00B0 - 0x0080)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterInt"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// 0x0000 (0x0080 - 0x0080)
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterLabel"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// 0x0008 (0x0088 - 0x0080)
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// 0x0018 (0x0098 - 0x0080)
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterRamp"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// 0x0000 (0x0080 - 0x0080)
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// 0x0010 (0x0090 - 0x0080)
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterString"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// 0x0010 (0x0090 - 0x0080)
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetParameterToggle"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
// 0x00A0 (0x00C8 - 0x0028)
class UHoudiniAssetComponentMaterials_V1 : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
// 0x0090 (0x0360 - 0x02D0)
class UHoudiniHandleComponent_V1 : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02D0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniHandleComponent_V1"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
// 0x0120 (0x03F0 - 0x02D0)
class UHoudiniSplineComponent_V1 : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x02D0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniSplineComponent_V1"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInput
// 0x0150 (0x01D0 - 0x0080)
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0080(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetInput"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// 0x0110 (0x0190 - 0x0080)
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0080(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetInstanceInput"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// 0x0198 (0x01C0 - 0x0028)
class UHoudiniAssetInstanceInputField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
// 0x0550 (0x0AE0 - 0x0590)
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{
public:
	unsigned char                                      bGeneratedDoubleSidedGeometry : 1;                        // 0x0590(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                    // 0x0598(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               DefaultBodyInstance;                                      // 0x05A0(0x0190) (Edit)
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                              // 0x0730(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	int                                                GeneratedLightMapResolution;                              // 0x0734(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedDistanceFieldResolutionScale;                    // 0x0738(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWalkableSlopeOverride                      GeneratedWalkableSlopeOverride;                           // 0x073C(0x0010) (Edit, IsPlainOldData)
	int                                                GeneratedLightMapCoordinateIndex;                         // 0x074C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGeneratedUseMaximumStreamingTexelRatio : 1;              // 0x0750(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	float                                              GeneratedStreamingDistanceMultiplier;                     // 0x0754(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                          // 0x0758(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                   // 0x0760(0x0010) (Edit, ExportObject, ZeroConstructor)
	struct FText                                       BakeFolder;                                               // 0x0770(0x0018)
	struct FText                                       TempCookFolder;                                           // 0x0788(0x0018)
	unsigned char                                      UnknownData03[0x340];                                     // 0x07A0(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetComponent_V1"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
// 0x0020 (0x02F0 - 0x02D0)
class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
// 0x0020 (0x02F0 - 0x02D0)
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// 0x0000 (0x0028 - 0x0028)
class UHoudiniEngineCopyPropertiesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniHandleParameter
// 0x0010 (0x0038 - 0x0028)
class UHoudiniHandleParameter : public UObject
{
public:
	class UHoudiniParameter*                           AssetParameter;                                           // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TupleIndex;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniHandleParameter"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniHandleComponent
// 0x0040 (0x0310 - 0x02D0)
class UHoudiniHandleComponent : public USceneComponent
{
public:
	TArray<class UHoudiniHandleParameter*>             XformParms;                                               // 0x02D0(0x0010) (ZeroConstructor)
	class UHoudiniHandleParameter*                     RSTParm;                                                  // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UHoudiniHandleParameter*                     RotOrderParm;                                             // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	enum class EHoudiniHandleType                      HandleType;                                               // 0x02F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FString                                     HandleName;                                               // 0x02F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniHandleComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInput
// 0x0220 (0x0248 - 0x0028)
class UHoudiniInput : public UObject
{
public:
	struct FString                                     Name;                                                     // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     Label;                                                    // 0x0038(0x0010) (ZeroConstructor)
	enum class EHoudiniInputType                       Type;                                                     // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class EHoudiniInputType                       PreviousType;                                             // 0x0049(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                AssetNodeId;                                              // 0x004C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                InputNodeId;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                InputIndex;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParmId;                                                   // 0x0058(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bIsObjectPathParameter;                                   // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<int>                                        CreatedDataNodeIds;                                       // 0x0060(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bHasChanged;                                              // 0x0070(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bNeedsToTriggerUpdate;                                    // 0x0071(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	struct FBox                                        CachedBounds;                                             // 0x0078(0x0038) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Help;                                                     // 0x00B0(0x0010) (ZeroConstructor)
	enum class EHoudiniXformType                       KeepWorldTransform;                                       // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPackBeforeMerge;                                         // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportAsReference;                                       // 0x00C2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportAsReferenceRotScaleEnabled;                        // 0x00C3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportAsReferenceBboxEnabled;                            // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportAsReferenceMaterialEnabled;                        // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportLODs;                                              // 0x00C6(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportSockets;                                           // 0x00C7(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPreferNaniteFallbackMesh;                                // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportColliders;                                         // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportMaterialParameters;                                // 0x00CA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCookOnCurveChanged;                                      // 0x00CB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<class UHoudiniInputObject*>                 GeometryInputObjects;                                     // 0x00D0(0x0010) (ZeroConstructor)
	bool                                               bStaticMeshChanged;                                       // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<class UHoudiniInputObject*>                 AssetInputObjects;                                        // 0x00E8(0x0010) (ZeroConstructor)
	bool                                               bInputAssetConnectedInHoudini;                            // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<class UHoudiniInputObject*>                 CurveInputObjects;                                        // 0x0100(0x0010) (ZeroConstructor)
	float                                              DefaultCurveOffset;                                       // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAddRotAndScaleAttributesOnCurves;                        // 0x0114(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseLegacyInputCurves;                                    // 0x0115(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	TArray<class UHoudiniInputObject*>                 LandscapeInputObjects;                                    // 0x0118(0x0010) (ZeroConstructor)
	bool                                               bLandscapeHasExportTypeChanged;                           // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	TArray<class UHoudiniInputObject*>                 WorldInputObjects;                                        // 0x0130(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              WorldInputBoundSelectorObjects;                           // 0x0140(0x0010) (ZeroConstructor)
	bool                                               bIsWorldInputBoundSelector;                               // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWorldInputBoundSelectorAutoUpdate;                       // 0x0151(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              UnrealSplineResolution;                                   // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UHoudiniInputObject*>                 SkeletalInputObjects;                                     // 0x0158(0x0010) (ZeroConstructor)
	TArray<class UHoudiniInputObject*>                 GeometryCollectionInputObjects;                           // 0x0168(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x50];                                      // 0x0178(0x0050) UNKNOWN PROPERTY: LandscapeSelectedComponents
	unsigned char                                      UnknownData10[0x50];                                      // 0x01C8(0x0050) UNKNOWN PROPERTY: InputNodesPendingDelete
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                       // 0x0218(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UHoudiniInputObject*>                 LastUndoDeletedInputs;                                    // 0x0228(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bUpdateInputLandscape;                                    // 0x0238(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class EHoudiniLandscapeExportType             LandscapeExportType;                                      // 0x0239(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeExportSelectionOnly;                            // 0x023A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeAutoSelectComponent;                            // 0x023B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeExportMaterials;                                // 0x023C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeExportLighting;                                 // 0x023D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeExportNormalizedUVs;                            // 0x023E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeExportTileUVs;                                  // 0x023F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanDeleteHoudiniNodes;                                   // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0241(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInput"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputObject
// 0x00F8 (0x0120 - 0x0028)
class UHoudiniInputObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: InputObject
	struct FTransform                                  Transform;                                                // 0x0050(0x0060) (IsPlainOldData)
	enum class EHoudiniInputObjectType                 Type;                                                     // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                InputNodeId;                                              // 0x00B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                InputObjectNodeId;                                        // 0x00B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // 0x00BC(0x0010) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x00CC(0x002C) MISSED OFFSET
	bool                                               bHasChanged;                                              // 0x00F8(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bNeedsToTriggerUpdate;                                    // 0x00F9(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bTransformChanged;                                        // 0x00FA(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	bool                                               bImportAsReference;                                       // 0x00FB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportAsReferenceRotScaleEnabled;                        // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportAsReferenceBboxEnabled;                            // 0x00FD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportAsReferenceMaterialEnabled;                        // 0x00FE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00FF(0x0001) MISSED OFFSET
	TArray<struct FString>                             MaterialReferences;                                       // 0x0100(0x0010) (ZeroConstructor)
	bool                                               bCanDeleteHoudiniNodes;                                   // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0111(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputObject"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// 0x0000 (0x0120 - 0x0120)
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputStaticMesh"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// 0x0000 (0x0120 - 0x0120)
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
// 0x0000 (0x0120 - 0x0120)
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputGeometryCollection"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// 0x0060 (0x0180 - 0x0120)
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
public:
	struct FTransform                                  ActorTransform;                                           // 0x0120(0x0060) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputSceneComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// 0x0030 (0x01B0 - 0x0180)
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0180(0x0028) UNKNOWN PROPERTY: StaticMesh
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputMeshComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// 0x0010 (0x01C0 - 0x01B0)
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// 0x0020 (0x01A0 - 0x0180)
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
public:
	int                                                NumberOfSplineControlPoints;                              // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SplineLength;                                             // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SplineResolution;                                         // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               SplineClosed;                                             // 0x018C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	TArray<struct FTransform>                          SplineControlPoints;                                      // 0x0190(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputSplineComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
// 0x0000 (0x0180 - 0x0180)
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
// 0x0000 (0x0180 - 0x0180)
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// 0x0010 (0x0130 - 0x0120)
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
public:
	class UHoudiniSplineComponent*                     CachedComponent;                                          // 0x0120(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// 0x0020 (0x01A0 - 0x0180)
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
public:
	float                                              FOV;                                                      // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsOrthographic;                                          // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              OrthoWidth;                                               // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputCameraComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// 0x0000 (0x0120 - 0x0120)
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputActor
// 0x0060 (0x0180 - 0x0120)
class UHoudiniInputActor : public UHoudiniInputObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0120(0x0050) UNKNOWN PROPERTY: ActorSceneComponents
	int                                                LastUpdateNumComponentsAdded;                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastUpdateNumComponentsRemoved;                           // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputActor"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputLandscape
// 0x0070 (0x01F0 - 0x0180)
class UHoudiniInputLandscape : public UHoudiniInputActor
{
public:
	struct FTransform                                  CachedInputLandscapeTraqnsform;                           // 0x0180(0x0060) (IsPlainOldData)
	int                                                CachedNumLandscapeComponents;                             // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x01E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputLandscape"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputBrush
// 0x0020 (0x01A0 - 0x0180)
class UHoudiniInputBrush : public UHoudiniInputActor
{
public:
	TArray<struct FHoudiniBrushInfo>                   BrushesInfo;                                              // 0x0180(0x0010) (ZeroConstructor)
	class UModel*                                      CombinedModel;                                            // 0x0190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bIgnoreInputObject;                                       // 0x0198(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBrushType>                            CachedInputBrushType;                                     // 0x0199(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x019A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputBrush"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputDataTable
// 0x0000 (0x0120 - 0x0120)
class UHoudiniInputDataTable : public UHoudiniInputObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputDataTable"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
// 0x0000 (0x0120 - 0x0120)
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInputBlueprint
// 0x0060 (0x0180 - 0x0120)
class UHoudiniInputBlueprint : public UHoudiniInputObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0120(0x0050) UNKNOWN PROPERTY: BPSceneComponents
	int                                                LastUpdateNumComponentsAdded;                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastUpdateNumComponentsRemoved;                           // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInputBlueprint"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// 0x0020 (0x02F0 - 0x02D0)
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	class UObject*                                     InstancedObject;                                          // 0x02D0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AActor*>                              InstancedActors;                                          // 0x02D8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniInstancedActorComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// 0x0030 (0x0300 - 0x02D0)
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:
	TArray<class UStaticMeshComponent*>                Instances;                                                // 0x02D0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x02E0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
	class UStaticMesh*                                 InstancedMesh;                                            // 0x02F0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniLandscapePtr
// 0x0038 (0x0060 - 0x0028)
class UHoudiniLandscapePtr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: LandscapeSoftPtr
	enum class EHoudiniLandscapeOutputBakeType         BakeType;                                                 // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FName                                       EditLayerName;                                            // 0x0054(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniLandscapePtr"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer
// 0x0038 (0x0060 - 0x0028)
class UHoudiniLandscapeEditLayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: LandscapeSoftPtr
	struct FString                                     LayerName;                                                // 0x0050(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniOutput
// 0x0188 (0x01B0 - 0x0028)
class UHoudiniOutput : public UObject
{
public:
	enum class EHoudiniOutputType                      Type;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FHoudiniGeoPartObject>               HoudiniGeoPartObjects;                                    // 0x0030(0x0010) (ZeroConstructor)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects;                                            // 0x0040(0x0050) (DuplicateTransient)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs;                                         // 0x0090(0x0050)
	TMap<struct FString, class UMaterialInterface*>    AssignementMaterials;                                     // 0x00E0(0x0050)
	TMap<struct FString, class UMaterialInterface*>    ReplacementMaterials;                                     // 0x0130(0x0050)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0180(0x0004) MISSED OFFSET
	bool                                               bLandscapeWorldComposition;                               // 0x0184(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	TArray<class AActor*>                              HoudiniCreatedSocketActors;                               // 0x0188(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              HoudiniAttachedSocketActors;                              // 0x0198(0x0010) (ZeroConstructor)
	bool                                               bIsEditableNode;                                          // 0x01A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasEditableNodeBuilt;                                    // 0x01A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bIsUpdating;                                              // 0x01AA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanDeleteHoudiniNodes;                                   // 0x01AB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniOutput"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameter
// 0x00E0 (0x0108 - 0x0028)
class UHoudiniParameter : public UObject
{
public:
	struct FString                                     Name;                                                     // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     Label;                                                    // 0x0038(0x0010) (ZeroConstructor)
	enum class EHoudiniParameterType                   ParmType;                                                 // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	uint32_t                                           TupleSize;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // 0x0050(0x0004) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	int                                                ParmId;                                                   // 0x0054(0x0004) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	int                                                ParentParmId;                                             // 0x0058(0x0004) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	int                                                ChildIndex;                                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsParentFolderVisible;                                   // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDisabled;                                              // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasChanged;                                              // 0x0063(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNeedsToTriggerUpdate;                                    // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDefault;                                               // 0x0065(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bIsSpare;                                                 // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJoinNext;                                                // 0x0067(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsChildOfMultiParm;                                      // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDirectChildOfMultiParm;                                // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingRevertToDefault;                                  // 0x006A(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
	TArray<int>                                        TuplePendingRevertToDefault;                              // 0x0070(0x0010) (ZeroConstructor, DuplicateTransient)
	struct FString                                     Help;                                                     // 0x0080(0x0010) (ZeroConstructor)
	uint32_t                                           TagCount;                                                 // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ValueIndex;                                               // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasExpression;                                           // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowExpression;                                          // 0x0099(0x0001) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	struct FString                                     ParamExpression;                                          // 0x00A0(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               Tags;                                                     // 0x00B0(0x0050)
	bool                                               bAutoUpdate;                                              // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameter"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterButton
// 0x0000 (0x0108 - 0x0108)
class UHoudiniParameterButton : public UHoudiniParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterButton"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// 0x0028 (0x0130 - 0x0108)
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{
public:
	int                                                Count;                                                    // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<struct FString>                             Labels;                                                   // 0x0110(0x0010) (ZeroConstructor)
	TArray<int>                                        Values;                                                   // 0x0120(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterButtonStrip"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterChoice
// 0x0070 (0x0178 - 0x0108)
class UHoudiniParameterChoice : public UHoudiniParameter
{
public:
	int                                                IntValue;                                                 // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DefaultIntValue;                                          // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0110(0x0010) (ZeroConstructor)
	struct FString                                     DefaultStringValue;                                       // 0x0120(0x0010) (ZeroConstructor)
	TArray<struct FString>                             StringChoiceValues;                                       // 0x0130(0x0010) (ZeroConstructor)
	TArray<struct FString>                             StringChoiceLabels;                                       // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET
	bool                                               bIsChildOfRamp;                                           // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TArray<int>                                        IntValuesArray;                                           // 0x0168(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterChoice"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterColor
// 0x0028 (0x0130 - 0x0108)
class UHoudiniParameterColor : public UHoudiniParameter
{
public:
	struct FLinearColor                                Color;                                                    // 0x0108(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // 0x0118(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsChildOfRamp;                                           // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterColor"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterFile
// 0x0038 (0x0140 - 0x0108)
class UHoudiniParameterFile : public UHoudiniParameter
{
public:
	TArray<struct FString>                             Values;                                                   // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DefaultValues;                                            // 0x0118(0x0010) (ZeroConstructor)
	struct FString                                     Filters;                                                  // 0x0128(0x0010) (ZeroConstructor)
	bool                                               bIsReadOnly;                                              // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterFile"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterFloat
// 0x0050 (0x0158 - 0x0108)
class UHoudiniParameterFloat : public UHoudiniParameter
{
public:
	TArray<float>                                      Values;                                                   // 0x0108(0x0010) (ZeroConstructor)
	TArray<float>                                      DefaultValues;                                            // 0x0118(0x0010) (ZeroConstructor)
	struct FString                                     Unit;                                                     // 0x0128(0x0010) (ZeroConstructor)
	bool                                               bNoSwap;                                                  // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasMin;                                                  // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasMax;                                                  // 0x013A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUIMin;                                                // 0x013B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUIMax;                                                // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsLogarithmic;                                           // 0x013D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	float                                              Min;                                                      // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UIMin;                                                    // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UIMax;                                                    // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsChildOfRamp;                                           // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterFloat"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterFolder
// 0x0010 (0x0118 - 0x0108)
class UHoudiniParameterFolder : public UHoudiniParameter
{
public:
	enum class EHoudiniFolderParameterType             FolderType;                                               // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExpanded;                                                // 0x0109(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bChosen;                                                  // 0x010A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x010B(0x0001) MISSED OFFSET
	int                                                ChildCounter;                                             // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsContentShown;                                          // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterFolder"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterFolderList
// 0x0018 (0x0120 - 0x0108)
class UHoudiniParameterFolderList : public UHoudiniParameter
{
public:
	bool                                               bIsTabMenu;                                               // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsTabsShown;                                             // 0x0109(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	TArray<class UHoudiniParameterFolder*>             TabFolders;                                               // 0x0110(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterFolderList"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterInt
// 0x0048 (0x0150 - 0x0108)
class UHoudiniParameterInt : public UHoudiniParameter
{
public:
	TArray<int>                                        Values;                                                   // 0x0108(0x0010) (ZeroConstructor)
	TArray<int>                                        DefaultValues;                                            // 0x0118(0x0010) (ZeroConstructor)
	struct FString                                     Unit;                                                     // 0x0128(0x0010) (ZeroConstructor)
	bool                                               bHasMin;                                                  // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasMax;                                                  // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUIMin;                                                // 0x013A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUIMax;                                                // 0x013B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsLogarithmic;                                           // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	int                                                Min;                                                      // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UIMin;                                                    // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UIMax;                                                    // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterInt"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterLabel
// 0x0010 (0x0118 - 0x0108)
class UHoudiniParameterLabel : public UHoudiniParameter
{
public:
	TArray<struct FString>                             LabelStrings;                                             // 0x0108(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterLabel"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// 0x0048 (0x0150 - 0x0108)
class UHoudiniParameterMultiParm : public UHoudiniParameter
{
public:
	bool                                               bIsShown;                                                 // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TemplateName;                                             // 0x0110(0x0010) (ZeroConstructor)
	int                                                MultiparmValue;                                           // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MultiParmInstanceNum;                                     // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MultiParmInstanceLength;                                  // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MultiParmInstanceCount;                                   // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           InstanceStartOffset;                                      // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;                         // 0x0138(0x0010) (ZeroConstructor)
	int                                                DefaultInstanceCount;                                     // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterMultiParm"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// 0x0008 (0x0110 - 0x0108)
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
public:
	TWeakObjectPtr<class UHoudiniInput>                HoudiniInput;                                             // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterOperatorPath"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// 0x0028 (0x0050 - 0x0028)
class UHoudiniParameterRampModificationEvent : public UObject
{
public:
	bool                                               bIsInsertEvent;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFloatRamp;                                             // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                DeleteInstanceIndex;                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InsertPosition;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InsertFloat;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InsertColor;                                              // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
	enum class EHoudiniRampInterpolationType           InsertInterpolation;                                      // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// 0x0028 (0x0050 - 0x0028)
class UHoudiniParameterRampFloatPoint : public UObject
{
public:
	float                                              Position;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	enum class EHoudiniRampInterpolationType           Interpolation;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                InstanceIndex;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class UHoudiniParameterFloat*                      PositionParentParm;                                       // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHoudiniParameterFloat*                      ValueParentParm;                                          // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                  // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// 0x0038 (0x0060 - 0x0028)
class UHoudiniParameterRampColorPoint : public UObject
{
public:
	float                                              Position;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // 0x002C(0x0010) (ZeroConstructor, IsPlainOldData)
	enum class EHoudiniRampInterpolationType           Interpolation;                                            // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                InstanceIndex;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UHoudiniParameterFloat*                      PositionParentParm;                                       // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHoudiniParameterColor*                      ValueParentParm;                                          // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                  // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// 0x0068 (0x01B8 - 0x0150)
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampFloatPoint*>     Points;                                                   // 0x0150(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHoudiniParameterRampFloatPoint*>     CachedPoints;                                             // 0x0160(0x0010) (ExportObject, ZeroConstructor)
	TArray<float>                                      DefaultPositions;                                         // 0x0170(0x0010) (ZeroConstructor)
	TArray<float>                                      DefaultValues;                                            // 0x0180(0x0010) (ZeroConstructor)
	TArray<int>                                        DefaultChoices;                                           // 0x0190(0x0010) (ZeroConstructor)
	int                                                NumDefaultPoints;                                         // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCaching;                                                 // 0x01A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                       // 0x01A8(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterRampFloat"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterRampColor
// 0x0070 (0x01C0 - 0x0150)
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampColorPoint*>     Points;                                                   // 0x0150(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bCaching;                                                 // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TArray<class UHoudiniParameterRampColorPoint*>     CachedPoints;                                             // 0x0168(0x0010) (ExportObject, ZeroConstructor)
	TArray<float>                                      DefaultPositions;                                         // 0x0178(0x0010) (ZeroConstructor)
	TArray<struct FLinearColor>                        DefaultValues;                                            // 0x0188(0x0010) (ZeroConstructor)
	TArray<int>                                        DefaultChoices;                                           // 0x0198(0x0010) (ZeroConstructor)
	int                                                NumDefaultPoints;                                         // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                       // 0x01B0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterRampColor"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterSeparator
// 0x0000 (0x0108 - 0x0108)
class UHoudiniParameterSeparator : public UHoudiniParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterSeparator"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterString
// 0x0038 (0x0140 - 0x0108)
class UHoudiniParameterString : public UHoudiniParameter
{
public:
	TArray<struct FString>                             Values;                                                   // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DefaultValues;                                            // 0x0118(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             ChosenAssets;                                             // 0x0128(0x0010) (ZeroConstructor)
	bool                                               bIsAssetRef;                                              // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterString"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameterToggle
// 0x0020 (0x0128 - 0x0108)
class UHoudiniParameterToggle : public UHoudiniParameter
{
public:
	TArray<int>                                        Values;                                                   // 0x0108(0x0010) (ZeroConstructor)
	TArray<int>                                        DefaultValues;                                            // 0x0118(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniParameterToggle"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.TOPNode
// 0x0428 (0x0450 - 0x0028)
class UTOPNode : public UObject
{
public:
	int                                                NodeID;                                                   // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     NodePath;                                                 // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     ParentName;                                               // 0x0050(0x0010) (ZeroConstructor)
	class UObject*                                     WorkResultParent;                                         // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTOPWorkResult>                      WorkResult;                                               // 0x0068(0x0010) (ZeroConstructor)
	bool                                               bHidden;                                                  // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoLoad;                                                // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class EPDGNodeState                           NodeState;                                                // 0x007A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCachedHaveNotLoadedWorkResults;                          // 0x007B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCachedHaveLoadedWorkResults;                             // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasChildNodes;                                           // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x007E(0x0050) UNKNOWN PROPERTY: ClearedLandscapeLayers
	unsigned char                                      UnknownData03[0xB0];                                      // 0x00D0(0x00B0) MISSED OFFSET
	bool                                               bShow;                                                    // 0x0180(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	TMap<struct FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                             // 0x0188(0x0050)
	struct FWorkItemTally                              WorkItemTally;                                            // 0x01D8(0x0238) (Transient)
	struct FAggregatedWorkItemTally                    AggregatedWorkItemTally;                                  // 0x0410(0x0028) (Transient)
	bool                                               bHasReceivedCookCompleteEvent;                            // 0x0438(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FOutputActorOwner                           OutputActorOwner;                                         // 0x0440(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.TOPNode"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.TOPNetwork
// 0x0070 (0x0098 - 0x0028)
class UTOPNetwork : public UObject
{
public:
	int                                                NodeID;                                                   // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     NodePath;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<class UTOPNode*>                            AllTOPNodes;                                              // 0x0050(0x0010) (ZeroConstructor)
	int                                                SelectedTOPIndex;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     ParentName;                                               // 0x0068(0x0010) (ZeroConstructor)
	bool                                               bShowResults;                                             // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoLoadResults;                                         // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E];                                      // 0x007A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.TOPNetwork"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// 0x0108 (0x0130 - 0x0028)
class UHoudiniPDGAssetLink : public UObject
{
public:
	struct FString                                     AssetName;                                                // 0x0028(0x0010) (ZeroConstructor, DuplicateTransient)
	struct FString                                     AssetNodePath;                                            // 0x0038(0x0010) (ZeroConstructor, DuplicateTransient)
	int                                                AssetId;                                                  // 0x0048(0x0004) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<class UTOPNetwork*>                         AllTOPNetworks;                                           // 0x0050(0x0010) (ZeroConstructor)
	int                                                SelectedTOPNetworkIndex;                                  // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	enum class EPDGLinkState                           LinkState;                                                // 0x0064(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoCook;                                                // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseTOPNodeFilter;                                        // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseTOPOutputFilter;                                      // 0x0067(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TOPNodeFilter;                                            // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     TOPOutputFilter;                                          // 0x0078(0x0010) (ZeroConstructor)
	int                                                NumWorkItems;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FAggregatedWorkItemTally                    WorkItemTally;                                            // 0x0090(0x0028) (Transient)
	struct FString                                     OutputCachePath;                                          // 0x00B8(0x0010) (ZeroConstructor)
	bool                                               bNeedsUIRefresh;                                          // 0x00C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class AActor*                                      OutputParentActor;                                        // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDirectoryPath                              BakeFolder;                                               // 0x00D8(0x0010)
	unsigned char                                      UnknownData03[0x48];                                      // 0x00E8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniPDGAssetLink"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// 0x0300 (0x0328 - 0x0028)
class UHoudiniRuntimeSettings : public UObject
{
public:
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType>    SessionType;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ServerHost;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	int                                                ServerPort;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ServerPipeName;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bStartAutomaticServer;                                    // 0x0058(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              AutomaticServerTimeout;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSyncWithHoudiniCook;                                     // 0x0060(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCookUsingHoudiniTime;                                    // 0x0061(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSyncViewport;                                            // 0x0062(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSyncHoudiniViewport;                                     // 0x0063(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSyncUnrealViewport;                                      // 0x0064(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShowMultiAssetDialog;                                    // 0x0065(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPreferHdaMemoryCopyOverHdaSourceFile;                    // 0x0066(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPauseCookingOnStart;                                     // 0x0067(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDisplaySlateCookingNotifications;                        // 0x0068(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     DefaultTemporaryCookFolder;                               // 0x0070(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     DefaultBakeFolder;                                        // 0x0080(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bEnableTheReferenceCountedInputSystem;                    // 0x0090(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               MarshallingLandscapesUseDefaultUnrealScaling;             // 0x0091(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               MarshallingLandscapesUseFullResolution;                   // 0x0092(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               MarshallingLandscapesForceMinMaxValues;                   // 0x0093(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              MarshallingLandscapesForcedMinValue;                      // 0x0094(0x0004) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData)
	float                                              MarshallingLandscapesForcedMaxValue;                      // 0x0098(0x0004) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData)
	bool                                               bAddRotAndScaleAttributesOnCurves;                        // 0x009C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseLegacyInputCurves;                                    // 0x009D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	float                                              MarshallingSplineResolution;                              // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableProxyStaticMesh;                                   // 0x00A4(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShowDefaultMesh;                                         // 0x00A5(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPreferNaniteFallbackMesh;                                // 0x00A6(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableProxyStaticMeshRefinementByTimer;                  // 0x00A7(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              ProxyMeshAutoRefineTimeoutSeconds;                        // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorld;           // 0x00AC(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIE;            // 0x00AD(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	unsigned char                                      bDoubleSidedGeometry : 1;                                 // 0x00B0(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData06[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               DefaultBodyInstance;                                      // 0x00C0(0x0190) (Edit, Config, GlobalConfig)
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                       // 0x0250(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	int                                                LightMapResolution;                                       // 0x0254(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LpvBiasMultiplier;                                        // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              GeneratedDistanceFieldResolutionScale;                    // 0x025C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x0260(0x0010) (Edit, Config, GlobalConfig, IsPlainOldData)
	int                                                LightMapCoordinateIndex;                                  // 0x0270(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bUseMaximumStreamingTexelRatio : 1;                       // 0x0274(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	float                                              StreamingDistanceMultiplier;                              // 0x0278(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UFoliageType_InstancedStaticMesh*            FoliageDefaultSettings;                                   // 0x0280(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x0288(0x0010) (Edit, ExportObject, ZeroConstructor)
	bool                                               bUseFullPrecisionUVs;                                     // 0x0298(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	int                                                SrcLightmapIndex;                                         // 0x029C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x02A0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MinLightmapResolution;                                    // 0x02A4(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x02A8(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  GenerateLightmapUVsFlag;                                  // 0x02A9(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeNormalsFlag;                                     // 0x02AA(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeTangentsFlag;                                    // 0x02AB(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseMikkTSpace;                                           // 0x02AC(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildAdjacencyBuffer;                                    // 0x02AD(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bComputeWeightedNormals : 1;                              // 0x02AE(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBuildReversedIndexBuffer : 1;                            // 0x02AE(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x02AE(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData11[0x1];                                       // 0x02AF(0x0001) MISSED OFFSET
	float                                              DistanceFieldResolutionScale;                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGenerateDistanceFieldAsIfTwoSided : 1;                   // 0x02B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSupportFaceRemap : 1;                                    // 0x02B4(0x0001) (Edit, BlueprintVisible)
	bool                                               bPDGAsyncCommandletImportEnabled;                         // 0x02B5(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBackwardCompatibility;                             // 0x02B6(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bAutomaticLegacyHDARebuild;                               // 0x02B7(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseCustomHoudiniLocation;                                // 0x02B8(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FDirectoryPath                              CustomHoudiniLocation;                                    // 0x02C0(0x0010) (Edit, Config, GlobalConfig)
	TEnumAsByte<EHoudiniExecutableType>                HoudiniExecutable;                                        // 0x02D0(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	int                                                CookingThreadStackSize;                                   // 0x02D4(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FString                                     HoudiniEnvironmentFiles;                                  // 0x02D8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     OtlSearchPath;                                            // 0x02E8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     DsoSearchPath;                                            // 0x02F8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ImageDsoSearchPath;                                       // 0x0308(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     AudioDsoSearchPath;                                       // 0x0318(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniRuntimeSettings"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniSplineComponent
// 0x0310 (0x05E0 - 0x02D0)
class UHoudiniSplineComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	TArray<struct FTransform>                          CurvePoints;                                              // 0x02D8(0x0010) (ZeroConstructor)
	TArray<struct FVector3d>                           DisplayPoints;                                            // 0x02E8(0x0010) (ZeroConstructor)
	TArray<int>                                        DisplayPointIndexDivider;                                 // 0x02F8(0x0010) (ZeroConstructor)
	struct FString                                     HoudiniSplineName;                                        // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bClosed;                                                  // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReversed;                                                // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x031A(0x0002) MISSED OFFSET
	int                                                CurveOrder;                                               // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHoudiniSplineVisible;                                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EHoudiniCurveType                       CurveType;                                                // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EHoudiniCurveMethod                     CurveMethod;                                              // 0x0322(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;                          // 0x0323(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOutputCurve;                                           // 0x0324(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCookOnCurveChanged;                                      // 0x0325(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsLegacyInputCurve;                                      // 0x0326(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x299];                                     // 0x0327(0x0299) MISSED OFFSET
	bool                                               bHasChanged;                                              // 0x05C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bNeedsToTriggerUpdate;                                    // 0x05C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bIsInputCurve;                                            // 0x05C2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsEditableOutputCurve;                                   // 0x05C3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // 0x05C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FString                                     PartName;                                                 // 0x05C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniSplineComponent"));
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniStaticMesh
// 0x00A0 (0x00C8 - 0x0028)
class UHoudiniStaticMesh : public UObject
{
public:
	bool                                               bHasNormals;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasTangents;                                             // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasColors;                                               // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	uint32_t                                           NumUVLayers;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasPerFaceMaterials;                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FVector3f>                           VertexPositions;                                          // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FIntVector>                          TriangleIndices;                                          // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              VertexInstanceColors;                                     // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FVector3f>                           VertexInstanceNormals;                                    // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FVector3f>                           VertexInstanceUTangents;                                  // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FVector3f>                           VertexInstanceVTangents;                                  // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FVector2D>                           VertexInstanceUVs;                                        // 0x0098(0x0010) (ZeroConstructor)
	TArray<int>                                        MaterialIDsPerTriangle;                                   // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FStaticMaterial>                     StaticMaterials;                                          // 0x00B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniStaticMesh"));
		return ptr;
	}


	void SetVertexPosition(uint32_t InVertexIndex, const struct FVector3f& InPosition);//Offset:Discovery.exe+0x2F1ECE0
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InVTangent);//Offset:Discovery.exe+0x2F1E860
	void SetTriangleVertexUV(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, unsigned char InUVLayer, const struct FVector2D& InUV);//Offset:Discovery.exe+0x2F1E5B0
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InUTangent);//Offset:Discovery.exe+0x2F1E990
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InNormal);//Offset:Discovery.exe+0x2F1EAC0
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, const struct FIntVector& InTriangleVertexIndices);//Offset:Discovery.exe+0x2F1EBF0
	void SetTriangleVertexColor(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FColor& InColor);//Offset:Discovery.exe+0x2F1E730
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int InMaterialID);//Offset:Discovery.exe+0x2F1E4D0
	void SetStaticMaterial(uint32_t InMaterialIndex, const struct FStaticMaterial& InStaticMaterial);//Offset:Discovery.exe+0x2F1E3D0
	void SetNumUVLayers(uint32_t InNumUVLayers);//Offset:Discovery.exe+0x2F1EEE0
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials);//Offset:Discovery.exe+0x2F1EE20
	void SetHasTangents(bool bInHasTangents);//Offset:Discovery.exe+0x2F1F070
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);//Offset:Discovery.exe+0x2F1F1E0
	void SetHasNormals(bool bInHasNormals);//Offset:Discovery.exe+0x2F1F140
	void SetHasColors(bool bInHasColors);//Offset:Discovery.exe+0x2F1EFA0
	void Optimize();//Offset:Discovery.exe+0x2F1E0F0
	bool IsValid(bool bInSkipVertexIndicesCheck);//Offset:Discovery.exe+0x2F1DA70
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);//Offset:Discovery.exe+0x2F1F2A0
	bool HasTangents();//Offset:Discovery.exe+0x2F1F110
	bool HasPerFaceMaterials();//Offset:Discovery.exe+0x2F1F280
	bool HasNormals();//Offset:Discovery.exe+0x2DCBB60
	bool HasColors();//Offset:Discovery.exe+0x2F1F040
	TArray<struct FVector3f> GetVertexPositions();//Offset:Discovery.exe+0x2F1E010
	TArray<struct FVector3f> GetVertexInstanceVTangents();//Offset:Discovery.exe+0x2F1DDD0
	TArray<struct FVector2D> GetVertexInstanceUVs();//Offset:Discovery.exe+0x2F1DD50
	TArray<struct FVector3f> GetVertexInstanceUTangents();//Offset:Discovery.exe+0x2F1DE50
	TArray<struct FVector3f> GetVertexInstanceNormals();//Offset:Discovery.exe+0x2F1DEC0
	TArray<struct FColor> GetVertexInstanceColors();//Offset:Discovery.exe+0x2F1DF30
	TArray<struct FIntVector> GetTriangleIndices();//Offset:Discovery.exe+0x2F1DFA0
	TArray<struct FStaticMaterial> GetStaticMaterials();//Offset:Discovery.exe+0x2F1DC50
	uint32_t GetNumVertices();//Offset:Discovery.exe+0x2F1EE00
	uint32_t GetNumVertexInstances();//Offset:Discovery.exe+0x2F1EDD0
	uint32_t GetNumUVLayers();//Offset:Discovery.exe+0x2F1EF80
	uint32_t GetNumTriangles();//Offset:Discovery.exe+0x191D830
	uint32_t GetNumStaticMaterials();//Offset:Discovery.exe+0x2F1EEC0
	int GetMaterialIndex(const struct FName& InMaterialSlotName);//Offset:Discovery.exe+0x2F1DB10
	TArray<int> GetMaterialIDsPerTriangle();//Offset:Discovery.exe+0x2F1DCD0
	class UMaterialInterface* GetMaterial(int InMaterialIndex);//Offset:Discovery.exe+0x2F1DBB0
	void CalculateTangents(bool bInComputeWeightedNormals);//Offset:Discovery.exe+0x2F1E110
	void CalculateNormals(bool bInComputeWeightedNormals);//Offset:Discovery.exe+0x2F1E1B0
	struct FBox CalcBounds();//Offset:Discovery.exe+0x2F1E080
	uint32_t AddStaticMaterial(const struct FStaticMaterial& InStaticMaterial);//Offset:Discovery.exe+0x2F1E250
};


// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// 0x0040 (0x0600 - 0x05C0)
class UHoudiniStaticMeshComponent : public UMeshComponent
{
public:
	struct FBox                                        LocalBounds;                                              // 0x05C0(0x0038) (ZeroConstructor, IsPlainOldData)
	bool                                               bHoudiniIconVisible;                                      // 0x05F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniStaticMeshComponent"));
		return ptr;
	}


	void SetMesh(class UHoudiniStaticMesh* InMesh);//Offset:Discovery.exe+0x2F20E30
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);//Offset:Discovery.exe+0x2F20D20
	void NotifyMeshUpdated();//Offset:Discovery.exe+0x2F20DF0
	bool IsHoudiniIconVisible();//Offset:Discovery.exe+0x2F20DC0
	class UHoudiniStaticMesh* GetMesh();//Offset:Discovery.exe+0x2F20E10
};


// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
// 0x0000 (0x0028 - 0x0028)
class UHoudiniAssetStateEvents : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HoudiniEngineRuntime.HoudiniAssetStateEvents"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
