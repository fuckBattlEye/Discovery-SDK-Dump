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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0008 (0x0030 - 0x0028)
class UDatasmithObjectTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithObjectTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithActorTemplate
// 0x00A0 (0x00D0 - 0x0030)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: Layers
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: Tags

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithActorTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAdditionalData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithAdditionalData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithAdditionalData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActor
// 0x0078 (0x0340 - 0x02C8)
class ADatasmithAreaLightActor : public AActor
{
public:
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EDatasmithAreaLightActorType            LightType;                                                // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EDatasmithAreaLightActorShape           LightShape;                                               // 0x02CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02CB(0x0005) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class ELightUnits                             IntensityUnits;                                           // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class UTextureLightProfile*                        IESTexture;                                               // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIESBrightness;                                        // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	float                                              IESBrightnessScale;                                       // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0310(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightInnerAngle;                                      // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightOuterAngle;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithAreaLightActor"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0090 (0x00C0 - 0x0030)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	enum class EDatasmithAreaLightActorType            LightType;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class EDatasmithAreaLightActorShape           LightShape;                                               // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	enum class ELightUnits                             IntensityUnits;                                           // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              Temperature;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x0064(0x0028) UNKNOWN PROPERTY: IESTexture
	bool                                               bUseIESBrightness;                                        // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              IESBrightnessScale;                                       // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0098(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithAreaLightActorTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithAssetImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithStaticMeshImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithStaticMeshCADImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithTranslatedSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithCADImportSceneData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithMDLSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (0x0070 - 0x0028)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	struct FString                                     Generator;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Version;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     Author;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     License;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Source;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithGLTFSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (0x0038 - 0x0028)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceMeshName;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithStaticMeshGLTFImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithFBXSceneImportData
// 0x0020 (0x0048 - 0x0028)
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	bool                                               bGenerateLightmapUVs;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     TexturesDir;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      IntermediateSerialization;                                // 0x0040(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bColorizeMaterials;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithFBXSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithDeltaGenAssetImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0048 (0x0090 - 0x0048)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOptimizeDuplicatedNodes;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bRemoveInvisibleNodes;                                    // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bSimplifyNodeHierarchy;                                   // 0x004B(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bImportVar;                                               // 0x004C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FString                                     VarPath;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportPos;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     PosPath;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportTml;                                               // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     TmlPath;                                                  // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithDeltaGenSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithVREDAssetImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0060 (0x00A8 - 0x0048)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOptimizeDuplicatedNodes;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bImportMats;                                              // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     MatsPath;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportVar;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCleanVar;                                                // 0x0061(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FString                                     VarPath;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportLightInfo;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     LightInfoPath;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportClipInfo;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     ClipInfoPath;                                             // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithVREDSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithIFCSceneImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x0010 (0x0038 - 0x0028)
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceGlobalId;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithStaticMeshIFCImportData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (0x0078 - 0x0028)
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<struct FName, struct FString>                 MetaData;                                                 // 0x0028(0x0050) (Edit, BlueprintVisible, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithAssetUserData"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0030 (0x0060 - 0x0030)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                                   // 0x0030(0x0030)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithCineCameraActorTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0060 (0x0090 - 0x0030)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate    FilmbackSettings;                                         // 0x0030(0x0008)
	struct FDatasmithCameraLensSettingsTemplate        LensSettings;                                             // 0x0038(0x0004)
	struct FDatasmithCameraFocusSettingsTemplate       FocusSettings;                                            // 0x003C(0x0008)
	float                                              CurrentFocalLength;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FDatasmithPostProcessSettingsTemplate       PostProcessSettings;                                      // 0x0050(0x0040)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithCineCameraComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithContentBlueprintLibrary"));
		return ptr;
	}


	struct FString STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key);//Offset:Discovery.exe+0x2CED660
	void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);//Offset:Discovery.exe+0x2CED460
	class UDatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject* Object);//Offset:Discovery.exe+0x2CED780
};


// Class DatasmithContent.DatasmithCustomActionBase
// 0x0008 (0x0030 - 0x0028)
class UDatasmithCustomActionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithCustomActionBase"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDecalComponentTemplate
// 0x0028 (0x0058 - 0x0030)
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
public:
	int                                                SortOrder;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FVector                                     DecalSize;                                                // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithDecalComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x0010 (0x02D8 - 0x02C8)
class ADatasmithImportedSequencesActor : public AActor
{
public:
	TArray<class ULevelSequence*>                      ImportedSequences;                                        // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithImportedSequencesActor"));
		return ptr;
	}


	void PlayLevelSequence(class ULevelSequence* SequenceToPlay);//Offset:Discovery.exe+0x2CEDDA0
};


// Class DatasmithContent.DatasmithOptionsBase
// 0x0000 (0x0028 - 0x0028)
class UDatasmithOptionsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithOptionsBase"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x0010 (0x0038 - 0x0028)
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
	struct FDatasmithTessellationOptions               Options;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithCommonTessellationOptions"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportOptions
// 0x0068 (0x0090 - 0x0028)
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	enum class EDatasmithImportSearchPackagePolicy     SearchPackagePolicy;                                      // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class EDatasmithImportAssetConflictPolicy     MaterialConflictPolicy;                                   // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class EDatasmithImportAssetConflictPolicy     TextureConflictPolicy;                                    // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class EDatasmithImportActorPolicy             StaticMeshActorImportPolicy;                              // 0x002B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class EDatasmithImportActorPolicy             LightImportPolicy;                                        // 0x002C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class EDatasmithImportActorPolicy             CameraImportPolicy;                                       // 0x002D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class EDatasmithImportActorPolicy             OtherActorImportPolicy;                                   // 0x002E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class EDatasmithImportMaterialQuality         MaterialQuality;                                          // 0x002F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDatasmithImportBaseOptions                 BaseOptions;                                              // 0x0030(0x0014) (Edit, BlueprintVisible, Config)
	struct FDatasmithReimportOptions                   ReimportOptions;                                          // 0x0044(0x0002) (Edit, BlueprintVisible, Config)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	struct FString                                     Filename;                                                 // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     FilePath;                                                 // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SourceUri;                                                // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithImportOptions"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithLandscapeTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (0x0068 - 0x0030)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      bVisible : 1;                                             // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	unsigned char                                      CastShadows : 1;                                          // 0x0034(0x0001)
	unsigned char                                      bUseTemperature : 1;                                      // 0x0034(0x0001)
	unsigned char                                      bUseIESBrightness : 1;                                    // 0x0034(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IESBrightnessScale;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LightFunctionMaterial;                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureLightProfile*                        IESTexture;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithLightComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x0168 (0x0198 - 0x0030)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: ParentMaterial
	TMap<struct FName, float>                          ScalarParameterValues;                                    // 0x0058(0x0050)
	TMap<struct FName, struct FLinearColor>            VectorParameterValues;                                    // 0x00A8(0x0050)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00F8(0x0050) UNKNOWN PROPERTY: TextureParameterValues
	struct FDatasmithStaticParameterSetTemplate        StaticParameters;                                         // 0x0148(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithMaterialInstanceTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ELightUnits                             IntensityUnits;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              SourceRadius;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithPointLightComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0050 (0x0080 - 0x0030)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithPostProcessSettingsTemplate       Settings;                                                 // 0x0030(0x0040)
	unsigned char                                      bEnabled : 1;                                             // 0x0070(0x0001)
	unsigned char                                      bUnbound : 1;                                             // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0071(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithPostProcessVolumeTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithScene
// 0x0008 (0x0030 - 0x0028)
class UDatasmithScene : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithScene"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (0x0320 - 0x02C8)
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                             Scene;                                                    // 0x02C8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x02D0(0x0050) UNKNOWN PROPERTY: RelatedActors

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithSceneActor"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x00F0 (0x0120 - 0x0030)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FTransform                                  RelativeTransform;                                        // 0x0030(0x0060) (IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0091(0x0028) UNKNOWN PROPERTY: AttachParent
	bool                                               bVisible;                                                 // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x50];                                      // 0x00C1(0x0050) UNKNOWN PROPERTY: Tags
	unsigned char                                      UnknownData04[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithSceneComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	TEnumAsByte<ESkyLightSourceType>                   SourceType;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                CubemapResolution;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                Cubemap;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithSkyLightComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (0x0038 - 0x0030)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                              InnerConeAngle;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithSpotLightComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0018 (0x0048 - 0x0030)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithStaticMeshComponentTemplate"));
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (0x00A8 - 0x0030)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate        SectionInfoMap;                                           // 0x0030(0x0050) (Edit, EditConst)
	int                                                LightMapCoordinateIndex;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x0084(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FDatasmithStaticMaterialTemplate>    StaticMaterials;                                          // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DatasmithContent.DatasmithStaticMeshTemplate"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
