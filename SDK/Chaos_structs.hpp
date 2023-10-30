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

// Enum Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
	PointImplicit                  = 0,
	DelaunayTriangulation          = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None                           = 4,
	EClusterUnionMethod_MAX        = 5
};


// Enum Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3,
	Field_MAX                      = 4
};


// Enum Chaos.EWaveFunctionType
enum class EWaveFunctionType : uint8_t
{
	Field_Wave_Cosine              = 0,
	Field_Wave_Gaussian            = 1,
	Field_Wave_Falloff             = 2,
	Field_Wave_Decay               = 3,
	Field_Wave_Max                 = 4
};


// Enum Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4
};


// Enum Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside           = 0,
	Field_Culling_Outside          = 1,
	Field_Culling_Operation_Max    = 2,
	Field_Culling_MAX              = 3
};


// Enum Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal       = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum       = 2,
	Field_Resolution_Max           = 3
};


// Enum Chaos.EFieldFilterType
enum class EFieldFilterType : uint8_t
{
	Field_Filter_Dynamic           = 0,
	Field_Filter_Kinematic         = 1,
	Field_Filter_Static            = 2,
	Field_Filter_All               = 3,
	Field_Filter_Sleeping          = 4,
	Field_Filter_Disabled          = 5,
	Field_Filter_Max               = 6
};


// Enum Chaos.EFieldObjectType
enum class EFieldObjectType : uint8_t
{
	Field_Object_Rigid             = 0,
	Field_Object_Cloth             = 1,
	Field_Object_Destruction       = 2,
	Field_Object_Character         = 3,
	Field_Object_All               = 4,
	Field_Object_Max               = 5
};


// Enum Chaos.EFieldPositionType
enum class EFieldPositionType : uint8_t
{
	Field_Position_CenterOfMass    = 0,
	Field_Position_PivotPoint      = 1,
	Field_Position_Max             = 2
};


// Enum Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None             = 0,
	Field_Falloff_Linear           = 1,
	Field_Falloff_Inverse          = 2,
	Field_Falloff_Squared          = 3,
	Field_Falloff_Logarithmic      = 4,
	Field_Falloff_Max              = 5
};


// Enum Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_None                     = 0,
	Field_DynamicState             = 1,
	Field_LinearForce              = 2,
	Field_ExternalClusterStrain    = 3,
	Field_Kill                     = 4,
	Field_LinearVelocity           = 5,
	Field_AngularVelociy           = 6,
	Field_AngularTorque            = 7,
	Field_InternalClusterStrain    = 8,
	Field_DisableThreshold         = 9,
	Field_SleepingThreshold        = 10,
	Field_PositionStatic           = 11,
	Field_PositionAnimated         = 12,
	Field_PositionTarget           = 13,
	Field_DynamicConstraint        = 14,
	Field_CollisionGroup           = 15,
	Field_ActivateDisabled         = 16,
	Field_InitialLinearVelocity    = 17,
	Field_InitialAngularVelocity   = 18,
	Field_PhysicsType_Max          = 19
};


// Enum Chaos.EFieldVectorType
enum class EFieldVectorType : uint8_t
{
	Vector_LinearForce             = 0,
	Vector_LinearVelocity          = 1,
	Vector_AngularVelocity         = 2,
	Vector_AngularTorque           = 3,
	Vector_PositionTarget          = 4,
	Vector_InitialLinearVelocity   = 5,
	Vector_InitialAngularVelocity  = 6,
	Vector_TargetMax               = 7,
	Vector_MAX                     = 8
};


// Enum Chaos.EFieldScalarType
enum class EFieldScalarType : uint8_t
{
	Scalar_ExternalClusterStrain   = 0,
	Scalar_Kill                    = 1,
	Scalar_DisableThreshold        = 2,
	Scalar_SleepingThreshold       = 3,
	Scalar_InternalClusterStrain   = 4,
	Scalar_DynamicConstraint       = 5,
	Scalar_TargetMax               = 6,
	Scalar_MAX                     = 7
};


// Enum Chaos.EFieldIntegerType
enum class EFieldIntegerType : uint8_t
{
	Integer_DynamicState           = 0,
	Integer_ActivateDisabled       = 1,
	Integer_CollisionGroup         = 2,
	Integer_PositionAnimated       = 3,
	Integer_PositionStatic         = 4,
	Integer_TargetMax              = 5,
	Integer_MAX                    = 6
};


// Enum Chaos.EFieldOutputType
enum class EFieldOutputType : uint8_t
{
	Field_Output_Vector            = 0,
	Field_Output_Scalar            = 1,
	Field_Output_Integer           = 2,
	Field_Output_Max               = 3
};


// Enum Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5
};


// Enum Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	Chaos_Volumetric               = 0,
	Chaos_Surface_Volumetric       = 1,
	Chaos_Max                      = 2
};


// Enum Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	Chaos_Implicit_Box             = 0,
	Chaos_Implicit_Sphere          = 1,
	Chaos_Implicit_Capsule         = 2,
	Chaos_Implicit_LevelSet        = 3,
	Chaos_Implicit_None            = 4,
	Chaos_Implicit_Convex          = 5,
	Chaos_Max                      = 6
};


// Enum Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
	Chaos_NONE                     = 0,
	Chaos_Object_Sleeping          = 1,
	Chaos_Object_Kinematic         = 2,
	Chaos_Object_Static            = 3,
	Chaos_Object_Dynamic           = 4,
	Chaos_Object_UserDefined       = 5,
	Chaos_Max                      = 6
};


// Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	Chaos_AngularVelocity          = 0,
	Chaos_DynamicState             = 1,
	Chaos_LinearVelocity           = 2,
	Chaos_InitialAngularVelocity   = 3,
	Chaos_InitialLinearVelocity    = 4,
	Chaos_CollisionGroup           = 5,
	Chaos_LinearForce              = 6,
	Chaos_AngularTorque            = 7,
	Chaos_DisableThreshold         = 8,
	Chaos_SleepingThreshold        = 9,
	Chaos_Max                      = 10
};


// Enum Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None    = 1,
	Chaos_Max                      = 2
};


// Enum Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max                      = 2
};


// Enum Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed                          = 0,
	Variable                       = 1,
	VariableCapped                 = 2,
	VariableCappedWithTarget       = 3,
	EChaosSolverTickMode_MAX       = 4
};


// Enum Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread                = 0,
	TaskGraph                      = 1,
	SingleThread                   = 2,
	Num                            = 3,
	Invalid                        = 4,
	EChaosThreadingMode_MAX        = 5
};


// Enum Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double                         = 0,
	Triple                         = 1,
	Num                            = 2,
	Invalid                        = 3,
	EChaosBufferMode_MAX           = 4
};


// Enum Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	None                           = 0,
	Record                         = 1,
	Play                           = 2,
	RecordAndPlay                  = 3,
	EGeometryCollectionCacheType_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Chaos.SolverCollisionFilterSettings
// 0x0010
struct FSolverCollisionFilterSettings
{
	bool                                               FilterEnabled;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinImpulse;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.SolverBreakingFilterSettings
// 0x0010
struct FSolverBreakingFilterSettings
{
	bool                                               FilterEnabled;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinVolume;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.SolverTrailingFilterSettings
// 0x0010
struct FSolverTrailingFilterSettings
{
	bool                                               FilterEnabled;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinVolume;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.ChaosSolverConfiguration
// 0x006C
struct FChaosSolverConfiguration
{
	int                                                Iterations;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CollisionPairIterations;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CollisionPushOutPairIterations;                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionMarginFraction;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionMarginMax;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionCullDistance;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionMaxPushOutVelocity;                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                JointPairIterations;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                JointPushOutPairIterations;                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClusterConnectionFactor;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002C(0x0001) MISSED OFFSET
	bool                                               bGenerateCollisionData;                                   // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                  // 0x0030(0x0010) (Edit)
	bool                                               bGenerateBreakData;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                   // 0x0044(0x0010) (Edit)
	bool                                               bGenerateTrailingData;                                    // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                   // 0x0058(0x0010) (Edit)
	bool                                               bGenerateContactGraph;                                    // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
};

// ScriptStruct Chaos.SolverCollisionData
// 0x00C0
struct FSolverCollisionData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedImpulse;                                       // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity1;                                                // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity2;                                                // 0x0060(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity1;                                         // 0x0078(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity2;                                         // 0x0090(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Mass1;                                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Mass2;                                                    // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelsetIndex;                                            // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelsetIndexMesh;                                        // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.SolverBreakingData
// 0x0058
struct FSolverBreakingData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Chaos.SolverTrailingData
// 0x0058
struct FSolverTrailingData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Chaos.RecordedFrame
// 0x00B8
struct FRecordedFrame
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TransformIndices;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        PreviousTransformIndices;                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<bool>                                       DisabledFlags;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FSolverCollisionData>                Collisions;                                               // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FSolverBreakingData>                 Breakings;                                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0060(0x0050) UNKNOWN PROPERTY: Trailings
	float                                              Timestamp;                                                // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Chaos.RecordedTransformTrack
// 0x0010
struct FRecordedTransformTrack
{
	TArray<struct FRecordedFrame>                      Records;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Chaos.SolverRemovalFilterSettings
// 0x000C
struct FSolverRemovalFilterSettings
{
	bool                                               FilterEnabled;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinVolume;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
