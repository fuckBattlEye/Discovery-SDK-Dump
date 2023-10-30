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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0040 (0x0930 - 0x08F0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnInstanceTakePointDamage;                                // 0x08F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x0900(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableDiscardOnLoad;                                     // 0x0910(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	struct FGuid                                       GenerationGuid;                                           // 0x0914(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0924(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.FoliageInstancedStaticMeshComponent"));
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.FoliageStatistics"));
		return ptr;
	}


	int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);//Offset:Discovery.exe+0x4783940
	void STATIC_FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box, TArray<struct FTransform>* OutTransforms);//Offset:Discovery.exe+0x47835E0
	int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);//Offset:Discovery.exe+0x47837C0
};


// Class Foliage.FoliageType
// 0x0490 (0x04B8 - 0x0028)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleInstanceModeOverrideRadius;                        // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              SingleInstanceModeRadius;                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EFoliageScaling                         Scaling;                                                  // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0068(0x000C) (Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0098(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x00A0(0x0001) (Deprecated)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x00A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00AC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      AverageNormal : 1;                                        // 0x00AC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      AverageNormalSingleComponent : 1;                         // 0x00AC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Height;                                                   // 0x00C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinimumLayerWeight;                                       // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FName>                               ExclusionLandscapeLayers;                                 // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinimumExclusionLayerWeight;                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LandscapeLayer;                                           // 0x00FC(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x0104(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x0108(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AverageNormalSampleCount;                                 // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x0128(0x0038) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0160(0x0018) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0178(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x017C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x0184(0x0001) (Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x0184(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0184(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0184(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0184(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0184(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	unsigned char                                      bCastContactShadow : 1;                                   // 0x0188(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x018C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x018C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x018C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData13[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x0190(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ELightmapType                           LightmapType;                                             // 0x0194(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	unsigned char                                      bVisibleInRayTracing : 1;                                 // 0x019C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bEvaluateWorldPositionOffset : 1;                         // 0x019C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData16[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x01A0(0x0190) (Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x0330(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0331(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0332(0x0002) MISSED OFFSET
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0334(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	enum class ERendererStencilMask                    CustomDepthStencilWriteMask;                              // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x034C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x0369(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x0380(0x0088) (Edit)
	struct FFoliageDensityFalloff                      DensityFalloff;                                           // 0x0408(0x0090) (Edit)
	int                                                ChangeCount;                                              // 0x0498(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x049C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x049D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x049D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x049D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x049D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x049D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x049D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x049D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x049D(0x0001) (Edit)
	unsigned char                                      bEnableDiscardOnLoad : 1;                                 // 0x049E(0x0001) (Edit)
	unsigned char                                      UnknownData21[0x1];                                       // 0x049F(0x0001) MISSED OFFSET
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VirtualTextureCullMips;                                   // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ERuntimeVirtualTextureMainPassType      VirtualTextureRenderPassType;                             // 0x04B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.FoliageType"));
		return ptr;
	}

};


// Class Foliage.FoliageType_Actor
// 0x0018 (0x04D0 - 0x04B8)
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                      ActorClass;                                               // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAttachToBaseComponent;                             // 0x04C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStaticMeshOnly;                                          // 0x04C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04C2(0x0006) MISSED OFFSET
	class UClass*                                      StaticMeshOnlyComponentClass;                             // 0x04C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.FoliageType_Actor"));
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x04D8 - 0x04B8)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x04D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.FoliageType_InstancedStaticMesh"));
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x0328 - 0x02D8)
class AInstancedFoliageActor : public AISMPartitionActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.InstancedFoliageActor"));
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0090 (0x0368 - 0x02D8)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x02E0(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x02F8(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0310(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x0328(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.InteractiveFoliageActor"));
		return ptr;
	}


	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);//Offset:Discovery.exe+0x47847B0
};


// Class Foliage.InteractiveFoliageComponent
// 0x0010 (0x0630 - 0x0620)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0620(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.InteractiveFoliageComponent"));
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0098 (0x0398 - 0x0300)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFoliageDensityFalloff                      DensityFalloff;                                           // 0x0308(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.ProceduralFoliageBlockingVolume"));
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x00E0 - 0x00B8)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x00D0(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.ProceduralFoliageComponent"));
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0040 (0x0068 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.ProceduralFoliageSpawner"));
		return ptr;
	}


	void Simulate(int NumSteps);//Offset:Discovery.exe+0x4785340
};


// Class Foliage.ProceduralFoliageTile
// 0x0148 (0x0170 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x90];                                      // 0x00E0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.ProceduralFoliageTile"));
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0308 - 0x0300)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x0300(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Foliage.ProceduralFoliageVolume"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
