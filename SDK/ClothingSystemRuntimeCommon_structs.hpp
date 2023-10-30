#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ClothingSystemRuntimeCommon.EClothMassMode
enum class EClothMassMode : uint8_t
{
	UniformMass                    = 0,
	TotalMass                      = 1,
	Density                        = 2,
	MaxClothMassMode               = 3,
	EClothMassMode_MAX             = 4
};


// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2
};


// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveStiffness             = 4,
	AnimDriveDamping_DEPRECATED    = 5,
	EWeightMapTargetCommon_MAX     = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// 0x0010
struct FPointWeightMap
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMorphTargetDelta
// 0x001C
struct FClothPhysicalMorphTargetDelta
{
	struct FVector3f                                   PositionDelta;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   NormalDelta;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PhysMeshVertId;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMorphTarget
// 0x0018
struct FClothPhysicalMorphTarget
{
	TArray<struct FClothPhysicalMorphTargetDelta>      Deltas;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                Index;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
// 0x0010
struct FClothTetherData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// 0x00E8
struct FClothPhysicalMeshData
{
	TArray<struct FVector3f>                           Vertices;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector3f>                           Normals;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   Indices;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TMap<uint32_t, struct FPointWeightMap>             WeightMaps;                                               // 0x0030(0x0050) (Edit)
	TArray<float>                                      InverseMasses;                                            // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothPhysicalMorphTarget>           MorphTargets;                                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   SelfCollisionIndices;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FClothTetherData                            EuclideanTethers;                                         // 0x00C0(0x0010) (Edit)
	struct FClothTetherData                            GeodesicTethers;                                          // 0x00D0(0x0010) (Edit)
	int                                                MaxBoneWeights;                                           // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFixedVerts;                                            // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// 0x0158
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                         // 0x0000(0x00E8) (Edit)
	struct FClothCollisionData                         CollisionData;                                            // 0x00E8(0x0040) (Edit)
	bool                                               bUseMultipleInfluences;                                   // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              SkinningKernelRadius;                                     // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothTransition;                                        // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0131(0x0027) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// 0x0010
struct FClothConstraintSetup_Legacy
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessMultiplier;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CompressionLimit;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// 0x0130
struct FClothConfig_Legacy
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FClothConstraintSetup_Legacy                VerticalConstraintConfig;                                 // 0x0004(0x0010)
	struct FClothConstraintSetup_Legacy                HorizontalConstraintConfig;                               // 0x0014(0x0010)
	struct FClothConstraintSetup_Legacy                BendConstraintConfig;                                     // 0x0024(0x0010)
	struct FClothConstraintSetup_Legacy                ShearConstraintConfig;                                    // 0x0034(0x0010)
	float                                              SelfCollisionRadius;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WindDragCoefficient;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FVector                                     LinearDrag;                                               // 0x0078(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x0090(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearInertiaScale;                                       // 0x00A8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x00C0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FVector                                     GravityOverride;                                          // 0x0100(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              TetherStiffness;                                          // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveDamperStiffness;                                 // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// 0x0030
struct FClothParameterMask_Legacy
{
	struct FName                                       MaskName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	float                                              MaxValue;                                                 // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
