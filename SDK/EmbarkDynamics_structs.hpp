#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkDynamics.EmbarkPendulumParams
// 0x0040
struct FEmbarkPendulumParams
{
	float                                              Damping;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tension;                                                  // 0x0020(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTensionIsLocalToOrigin;                                  // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.EmbarkDynamicsConeCollider
// 0x0028
struct FEmbarkDynamicsConeCollider
{
	float                                              Angle;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     Direction;                                                // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocalToOrigin;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.EmbarkDynamicsBoxCollider
// 0x0080
struct FEmbarkDynamicsBoxCollider
{
	struct FTransform                                  Offset;                                                   // 0x0000(0x0060) (Edit, IsPlainOldData)
	bool                                               bIsLocalToOrigin;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0061(0x001F) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.EmbarkDynamicsSphereCollider
// 0x0020
struct FEmbarkDynamicsSphereCollider
{
	struct FVector                                     Center;                                                   // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocalToOrigin;                                         // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.EmbarkDynamicsCapsuleCollider
// 0x0038
struct FEmbarkDynamicsCapsuleCollider
{
	struct FVector                                     Base;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tip;                                                      // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocalToOrigin;                                         // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.EmbarkPendulum
// 0x0200
struct FEmbarkPendulum
{
	struct FVector                                     PrimitiveBoxDimentions;                                   // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PrimitiveBoxOrientation;                                  // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PrimitiveRadius;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PrimitiveLength;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PendulumLength;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinimumIterationsPerSecond;                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCollisionSubstepsPerIteration;                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FEmbarkPendulumParams                       PendulumParams;                                           // 0x0048(0x0040) (Edit)
	TArray<struct FEmbarkDynamicsConeCollider>         ConeColliders;                                            // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEmbarkDynamicsBoxCollider>          BoxColliders;                                             // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEmbarkDynamicsSphereCollider>       SphereColliders;                                          // 0x00A8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEmbarkDynamicsCapsuleCollider>      CapsuleColliders;                                         // 0x00B8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x138];                                     // 0x00C8(0x0138) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.SimpleExactDamper
// 0x0014
struct FSimpleExactDamper
{
	float                                              Target;                                                   // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Velocity;                                                 // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HalfLife;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HalfDamping;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkDynamics.DoubleExactDamper
// 0x0028
struct FDoubleExactDamper
{
	struct FSimpleExactDamper                          Damper1;                                                  // 0x0000(0x0014)
	struct FSimpleExactDamper                          Damper2;                                                  // 0x0014(0x0014)
};

// ScriptStruct EmbarkDynamics.DoubleExactDamperVec
// 0x0078
struct FDoubleExactDamperVec
{
	struct FDoubleExactDamper                          X;                                                        // 0x0000(0x0028)
	struct FDoubleExactDamper                          Y;                                                        // 0x0028(0x0028)
	struct FDoubleExactDamper                          Z;                                                        // 0x0050(0x0028)
};

// ScriptStruct EmbarkDynamics.SODSpringFloat
// 0x0034
struct FSODSpringFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x000C(0x0028) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.SODSpringVector
// 0x0088
struct FSODSpringVector
{
	struct FVector                                     Value;                                                    // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.MinJerk
// 0x00D0
struct FMinJerk
{
	double                                             Target;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             Value;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             Speed;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             Accel;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0020(0x00B0) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.MinJerkVec
// 0x0270
struct FMinJerkVec
{
	struct FMinJerk                                    MinJerkX;                                                 // 0x0000(0x00D0) (Edit)
	struct FMinJerk                                    MinJerkY;                                                 // 0x00D0(0x00D0) (Edit)
	struct FMinJerk                                    MinJerkZ;                                                 // 0x01A0(0x00D0) (Edit)
};

// ScriptStruct EmbarkDynamics.MinJerkVec2D
// 0x01A0
struct FMinJerkVec2D
{
	struct FMinJerk                                    MinJerkX;                                                 // 0x0000(0x00D0) (Edit)
	struct FMinJerk                                    MinJerkY;                                                 // 0x00D0(0x00D0) (Edit)
};

// ScriptStruct EmbarkDynamics.SecondOrderDynamicParameters
// 0x000C
struct FSecondOrderDynamicParameters
{
	float                                              Frequency;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Response;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkDynamics.ConeParameters
// 0x0028
struct FConeParameters
{
	float                                              Angle;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     Direction;                                                // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocalToOrigin;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSoftConstraint;                                        // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              SoftConstrainTime;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkDynamics.EulerIntegrationParameters
// 0x0040
struct FEulerIntegrationParameters
{
	float                                              Damping;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tension;                                                  // 0x0020(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTensionIsLocalToOrigin;                                  // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.SpringPlot
// 0x02E0
struct FSpringPlot
{
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0000(0x02E0) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.SODSpringPlotInterface
// 0x0028
struct FSODSpringPlotInterface
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.SIEPendulumTransform
// 0x0180
struct FSIEPendulumTransform
{
	struct FTransform                                  Result;                                                   // 0x0000(0x0060) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0060(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x0078(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0090(0x00F0) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.SIEPendulumChainTransforms
// 0x0140
struct FSIEPendulumChainTransforms
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x130];                                     // 0x0010(0x0130) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.RigUnit_EmbarkPendulumItem
// 0x0350 (0x0420 - 0x00D0)
struct FRigUnit_EmbarkPendulumItem : public FRigUnit_HighlevelBaseMutable
{
	struct FTransform                                  CharacterWorld;                                           // 0x00D0(0x0060) (IsPlainOldData)
	float                                              WorldInfluence;                                           // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinimumIterations;                                        // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FEulerIntegrationParameters                 PhysicsParameters;                                        // 0x0140(0x0040)
	TArray<struct FVector>                             ExternalForces;                                           // 0x0180(0x0010) (ZeroConstructor)
	TArray<struct FConeParameters>                     ConeConstraints;                                          // 0x0190(0x0010) (ZeroConstructor)
	bool                                               bDebugDrawing;                                            // 0x01A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	struct FRigElementKey                              OriginItem;                                               // 0x01A4(0x000C)
	struct FRigElementKey                              AlignmentItem;                                            // 0x01B0(0x000C)
	struct FRigElementKey                              SimulatedItem;                                            // 0x01BC(0x000C)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
	struct FSIEPendulumTransform                       SimulationObject;                                         // 0x01D0(0x0180) (Transient)
	struct FCachedRigElement                           CachedOriginItem;                                         // 0x0350(0x0020) (Transient)
	struct FCachedRigElement                           CachedAlignmentItem;                                      // 0x0370(0x0020) (Transient)
	struct FCachedRigElement                           CachedSimulatedItem;                                      // 0x0390(0x0020) (Transient)
	struct FTransform                                  AlignmentToSimulatedCorrection;                           // 0x03B0(0x0060) (Transient, IsPlainOldData)
	bool                                               bIsInitialized;                                           // 0x0410(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0411(0x000F) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.RigUnit_EmbarkRigJiggler_Bone
// 0x0020
struct FRigUnit_EmbarkRigJiggler_Bone
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WeightedAxes;                                             // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkDynamics.RigUnit_EmbarkRigJiggler_Section
// 0x0040
struct FRigUnit_EmbarkRigJiggler_Section
{
	struct FVector                                     Target;                                                   // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FSecondOrderDynamicParameters               Parameters;                                               // 0x0018(0x000C)
	float                                              Influence;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LOD;                                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_EmbarkRigJiggler_Bone>      JiggleBones;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkDynamics.RigUnit_BonesData
// 0x0050
struct FRigUnit_BonesData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.RigUnit_EmbarkRigJiggler
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_EmbarkRigJiggler : public FRigUnit_HighlevelBaseMutable
{
	int                                                CurrentLOD;                                               // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bResetAll;                                                // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00D5(0x000B) MISSED OFFSET
	struct FTransform                                  SimulationRelativeSpace;                                  // 0x00E0(0x0060) (IsPlainOldData)
	TArray<struct FRigUnit_EmbarkRigJiggler_Section>   Sections;                                                 // 0x0140(0x0010) (ZeroConstructor)
	struct FRigUnit_BonesData                          BonesData;                                                // 0x0150(0x0050) (Transient)
	bool                                               bIsInitialized;                                           // 0x01A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	TArray<struct FSODSpringVector>                    Solvers;                                                  // 0x01A8(0x0010) (ZeroConstructor, Transient)
	TArray<bool>                                       SolversToReset;                                           // 0x01B8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.RigUnit_EmbarkSODFloat
// 0x0630 (0x0700 - 0x00D0)
struct FRigUnit_EmbarkSODFloat : public FRigUnit_HighlevelBaseMutable
{
	float                                              Target;                                                   // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSecondOrderDynamicParameters               Parameters;                                               // 0x00D4(0x000C)
	struct FSODSpringFloat                             Result;                                                   // 0x00E0(0x0034)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FSpringPlot                                 InPlot;                                                   // 0x0118(0x02E0)
	struct FSpringPlot                                 OutPlot;                                                  // 0x03F8(0x02E0)
	struct FSODSpringPlotInterface                     PlotInterface;                                            // 0x06D8(0x0028) (Transient)
};

// ScriptStruct EmbarkDynamics.RigUnit_EmbarkSODVector
// 0x06A0 (0x0770 - 0x00D0)
struct FRigUnit_EmbarkSODVector : public FRigUnit_HighlevelBaseMutable
{
	struct FVector                                     Target;                                                   // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FSecondOrderDynamicParameters               Parameters;                                               // 0x00E8(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FSODSpringVector                            Result;                                                   // 0x00F8(0x0088)
	struct FSpringPlot                                 InPlot;                                                   // 0x0180(0x02E0)
	struct FSpringPlot                                 OutPlot;                                                  // 0x0460(0x02E0)
	struct FSODSpringPlotInterface                     PlotInterface;                                            // 0x0740(0x0028) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0768(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkDynamics.RigUnit_EmbarkSpringGraph
// 0x0330 (0x0400 - 0x00D0)
struct FRigUnit_EmbarkSpringGraph : public FRigUnit_HighlevelBaseMutable
{
	struct FVector                                     GraphOrigin;                                              // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              FirstThickness;                                           // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastThickness;                                            // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FirstColor;                                               // 0x00F0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LastColor;                                                // 0x0100(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              GraphSize;                                                // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FSpringPlot                                 InPlot;                                                   // 0x0118(0x02E0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
