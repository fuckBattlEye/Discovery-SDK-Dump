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

// Class Landscape.ControlPointMeshActor
// 0x0008 (0x02D0 - 0x02C8)
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.ControlPointMeshActor"));
		return ptr;
	}

};


// Class Landscape.ControlPointMeshComponent
// 0x0010 (0x0630 - 0x0620)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                    // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0624(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.ControlPointMeshComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeSplineInterface
// 0x0000 (0x0028 - 0x0028)
class ULandscapeSplineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeSplineInterface"));
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0358 (0x0620 - 0x02C8)
class ALandscapeProxy : public APartitionActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x02D8(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x02F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x02F8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	float                                              ComponentScreenSizeToUseSubSections;                      // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0ScreenSize;                                           // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0DistributionSetting;                                  // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x0308(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x030C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0318(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0328(0x0020) MISSED OFFSET
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeProxyMaterialOverride>     LandscapeMaterialsOverride;                               // 0x0350(0x0010) (Edit, ZeroConstructor)
	bool                                               bMeshHoles;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MeshHolesMaxLod;                                          // 0x0361(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0362(0x0006) MISSED OFFSET
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSetCreateRuntimeVirtualTextureVolumes;                   // 0x0378(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	int                                                VirtualTextureNumLods;                                    // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VirtualTextureLodBias;                                    // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ERuntimeVirtualTextureMainPassType      VirtualTextureRenderPassType;                             // 0x0384(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	float                                              NegativeZBoundsExtension;                                 // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0390(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x03A0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x03B0(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData07[0x64];                                      // 0x03C0(0x0064) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CastShadow : 1;                                           // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastContactShadow : 1;                                   // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	unsigned char                                      bCastFarShadow : 1;                                       // 0x0430(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	unsigned char                                      bCastHiddenShadow : 1;                                    // 0x0434(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x043C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLightingChannels                           LightingChannels;                                         // 0x043D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData13[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x0440(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	enum class ERendererStencilMask                    CustomDepthStencilWriteMask;                              // 0x0444(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LDMaxDrawDistance;                                        // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x0450(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0468(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAlphaBlendingForDominantPhysicsLayer;                 // 0x0474(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0478(0x0190) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0608(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0608(0x0001) (Edit)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x060C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0610(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0614(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0618(0x0001) (Edit)
	unsigned char                                      bFillCollisionUnderLandscapeForNavmesh : 1;               // 0x0618(0x0001) (Edit)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	bool                                               bUseDynamicMaterialInstance;                              // 0x061C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENavDataGatheringMode                   NavigationGeometryGatheringMode;                          // 0x061D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x061E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLayersContent;                                        // 0x061F(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeProxy"));
		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);//Offset:Discovery.exe+0x47C7910
	void SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);//Offset:Discovery.exe+0x47C7A00
	void SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value);//Offset:Discovery.exe+0x47C7830
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);//Offset:Discovery.exe+0x47C76F0
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);//Offset:Discovery.exe+0x2CEDDA0
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, const struct FName& EditLayerName);//Offset:Discovery.exe+0x47C7AE0
	void ChangeLODDistanceFactor(float InLODDistanceFactor);//Offset:Discovery.exe+0x47C8010
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);//Offset:Discovery.exe+0x47C7F70
};


// Class Landscape.Landscape
// 0x0000 (0x0620 - 0x0620)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.Landscape"));
		return ptr;
	}

};


// Class Landscape.LandscapeBlueprintBrushBase
// 0x0000 (0x02C8 - 0x02C8)
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeBlueprintBrushBase"));
		return ptr;
	}


	void RequestLandscapeUpdate();//Offset:Discovery.exe+0x155C060
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);//Offset:Discovery.exe+0x47C4350
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);//Offset:Discovery.exe+0x47C41C0
	void GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets);//Offset:Discovery.exe+0x327F8B0
};


// Class Landscape.LandscapeLODStreamingProxy
// 0x0008 (0x00D8 - 0x00D0)
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeLODStreamingProxy"));
		return ptr;
	}

};


// Class Landscape.LandscapeComponent
// 0x0280 (0x0810 - 0x0590)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0598(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x059C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x05A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;                                        // 0x05B8(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x05C8(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                 // 0x05D8(0x0010) (ZeroConstructor, Transient)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                  // 0x05E8(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0600(0x0020) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0624(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0630(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0650(0x0038) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0688(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	class UTexture2D*                                  HeightmapTexture;                                         // 0x06A8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x06B0(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x06C0(0x0010) (ZeroConstructor)
	class ULandscapeLODStreamingProxy*                 LODStreamingProxy;                                        // 0x06D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x06D8(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x06E8(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x06F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x06FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0700(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0704(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0708(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x070C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0710(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x0714(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x0724(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       LastBakedTextureMaterialGuid;                             // 0x0734(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0748(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0750(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0758(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                 // 0x0760(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x0770(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x90];                                      // 0x0780(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeComponent"));
		return ptr;
	}


	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex);//Offset:Discovery.exe+0x47C4F60
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const struct FName& InPaintLayerName);//Offset:Discovery.exe+0x47C4D60
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);//Offset:Discovery.exe+0x47C4E60
};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x02C8 - 0x02C8)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeGizmoActor"));
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0318 - 0x02C8)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02C8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeGizmoActiveActor"));
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0590 - 0x0590)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeGizmoRenderComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0060 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UStaticMesh*                                 GrassMesh;                                                // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeGrassType"));
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x0100 (0x0690 - 0x0590)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x0590(0x0010) (ZeroConstructor)
	int                                                SectionBaseX;                                             // 0x05A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x05A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x05AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x05B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x05B8(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x05C8(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x05D8(0x0038) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x0610(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x062C(0x0014) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0640(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0650(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeHeightfieldCollisionComponent"));
		return ptr;
	}


	class ULandscapeComponent* GetRenderComponent();//Offset:Discovery.exe+0x47C6730
};


// Class Landscape.LandscapeHLODBuilder
// 0x0000 (0x0028 - 0x0028)
class ULandscapeHLODBuilder : public UHLODBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeHLODBuilder"));
		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01F0 (0x0218 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0078(0x00A0) MISSED OFFSET
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                  // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0128(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeInfo"));
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0080 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeInfoMap"));
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeLayerInfoObject"));
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0018 (0x0218 - 0x0200)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                                     // 0x0200(0x0010) (ZeroConstructor)
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x0210(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x0210(0x0001)
	unsigned char                                      bMobile : 1;                                              // 0x0210(0x0001)
	unsigned char                                      bEditorToolUsage : 1;                                     // 0x0210(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeMaterialInstanceConstant"));
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0020 (0x06B0 - 0x0690)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                 // 0x0690(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeMeshCollisionComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x02D0 - 0x02C8)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeMeshProxyActor"));
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0650 - 0x0620)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x0620(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0630(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0640(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0641(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeMeshProxyComponent"));
		return ptr;
	}

};


// Class Landscape.LandscapeSettings
// 0x0008 (0x0040 - 0x0038)
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int                                                MaxNumberOfLayers;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeSettings"));
		return ptr;
	}

};


// Class Landscape.LandscapeSplineActor
// 0x0018 (0x02E0 - 0x02C8)
class ALandscapeSplineActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FGuid                                       LandscapeGuid;                                            // 0x02D0(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeSplineActor"));
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x05C0 - 0x0590)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x0590(0x0010) (ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x05A0(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x05B0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeSplinesComponent"));
		return ptr;
	}


	TArray<class USplineMeshComponent*> GetSplineMeshComponents();//Offset:Discovery.exe+0x47C94B0
};


// Class Landscape.LandscapeSplineControlPoint
// 0x00B0 (0x00D8 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0040(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LayerWidthRatio;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideFalloffFactor;                                    // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideFalloffFactor;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideLayerFalloffFactor;                               // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideLayerFalloffFactor;                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0088(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0098(0x0038) (ZeroConstructor, IsPlainOldData)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeSplineControlPoint"));
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x00A0 (0x00C8 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x0038) (ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00B8(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeSplineSegment"));
		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0640 - 0x0620)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0620(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x063C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeStreamingProxy"));
		return ptr;
	}

};


// Class Landscape.LandscapeSubsystem
// 0x0010 (0x0050 - 0x0040)
class ULandscapeSubsystem : public UTickableWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeSubsystem"));
		return ptr;
	}

};


// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (0x0058 - 0x0028)
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LayerGuid;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.LandscapeWeightmapUsage"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapeGrassOutput"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapeLayerBlend"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapeLayerCoords"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapeLayerSample"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0038 (0x0078 - 0x0040)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0040(0x0014)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0054(0x0014)
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapeLayerSwitch"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0040(0x0014)
	struct FExpressionInput                            Layer;                                                    // 0x0054(0x0014)
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FVector                                     ConstBase;                                                // 0x0078(0x0018) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapeLayerWeight"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>              Inputs;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput"));
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Landscape.MaterialExpressionLandscapeVisibilityMask"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
