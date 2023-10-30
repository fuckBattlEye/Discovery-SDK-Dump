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

// Enum FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8_t
{
	Free                           = 0,
	Limit                          = 1,
	Locked                         = 2,
	EFBIKBoneLimitType_MAX         = 3
};


// Enum FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8_t
{
	Direction                      = 0,
	Location                       = 1,
	EPoleVectorOption_MAX          = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FullBodyIK.FBIKBoneLimit
// 0x0020
struct FFBIKBoneLimit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector                                     Limit;                                                    // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FullBodyIK.FBIKConstraintOption
// 0x00A0
struct FFBIKConstraintOption
{
	struct FRigElementKey                              Item;                                                     // 0x0000(0x000C) (Edit)
	bool                                               bEnabled;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStiffness;                                            // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FVector                                     LinearStiffness;                                          // 0x0010(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularStiffness;                                         // 0x0028(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAngularLimit;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FFBIKBoneLimit                              AngularLimit;                                             // 0x0048(0x0020) (Edit)
	bool                                               bUsePoleVector;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FVector                                     PoleVector;                                               // 0x0070(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0088(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FullBodyIK.MotionProcessInput
// 0x0002
struct FMotionProcessInput
{
	bool                                               bForceEffectorRotationTarget;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyApplyWhenReachedToTarget;                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FullBodyIK.FBIKDebugOption
// 0x0080
struct FFBIKDebugOption
{
	bool                                               bDrawDebugHierarchy;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bColorAngularMotionStrength;                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bColorLinearMotionStrength;                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugAxes;                                           // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugEffector;                                       // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugConstraints;                                    // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x0006(0x000A) MISSED OFFSET
	struct FTransform                                  DrawWorldOffset;                                          // 0x0010(0x0060) (Edit, IsPlainOldData)
	float                                              DrawSize;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
};

// ScriptStruct FullBodyIK.SolverInput
// 0x0024
struct FSolverInput
{
	float                                              LinearMotionStrength;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLinearMotionStrength;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularMotionStrength;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAngularMotionStrength;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultTargetClamp;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Precision;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseJacobianTranspose;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct FullBodyIK.FBIKEndEffector
// 0x0060
struct FFBIKEndEffector
{
	struct FRigElementKey                              Item;                                                     // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              PositionAlpha;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PositionDepth;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x0030(0x0020) (IsPlainOldData)
	float                                              RotationAlpha;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationDepth;                                            // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pull;                                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
// 0x0198
struct FRigUnit_FullbodyIK_WorkData
{
	unsigned char                                      UnknownData00[0x198];                                     // 0x0000(0x0198) MISSED OFFSET
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
// 0x0280 (0x0350 - 0x00D0)
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Root;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FFBIKEndEffector>                    Effectors;                                                // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FFBIKConstraintOption>               Constraints;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor)
	struct FSolverInput                                SolverProperty;                                           // 0x0100(0x0024)
	struct FMotionProcessInput                         MotionProperty;                                           // 0x0124(0x0002)
	bool                                               bPropagateToChildren;                                     // 0x0126(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x0127(0x0009) MISSED OFFSET
	struct FFBIKDebugOption                            DebugOption;                                              // 0x0130(0x0080)
	struct FRigUnit_FullbodyIK_WorkData                WorkData;                                                 // 0x01B0(0x0198) (Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0348(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
