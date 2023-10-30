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

// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	Transform                      = 0,
	Aim                            = 1,
	MAX                            = 2
};


// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Parent                         = 3,
	ETransformConstraintType_MAX   = 4
};


// Enum AnimationCore.EEulerRotationOrder
enum class EEulerRotationOrder : uint8_t
{
	XYZ                            = 0,
	XZY                            = 1,
	YXZ                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	ZYX                            = 5,
	EEulerRotationOrder_MAX        = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003
struct FFilterOptionPerAxis
{
	bool                                               bX;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bY;                                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bZ;                                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D
struct FConstraintDescription
{
	bool                                               bTranslation;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotation;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScale;                                                   // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bParent;                                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        TranslationAxes;                                          // 0x0004(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        RotationAxes;                                             // 0x0007(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        ScaleAxes;                                                // 0x000A(0x0003) (Edit, BlueprintVisible)
};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0028
struct FTransformConstraint
{
	struct FConstraintDescription                      Operator;                                                 // 0x0000(0x000D) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       SourceNode;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetNode;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainOffset;                                          // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x00C0
struct FConstraintOffset
{
	struct FVector                                     Translation;                                              // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0020) (IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FTransform                                  Parent;                                                   // 0x0060(0x0060) (IsPlainOldData)
};

// ScriptStruct AnimationCore.NodeObject
// 0x0010
struct FNodeObject
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070
struct FNodeHierarchyData
{
	TArray<struct FNodeObject>                         Nodes;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          Transforms;                                               // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FName, int>                            NodeNameToIndexMapping;                                   // 0x0020(0x0050)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078
struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FNodeHierarchyData                          Hierarchy;                                                // 0x0008(0x0070)
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010
struct FConstraintDescriptor
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintData
// 0x00E0
struct FConstraintData
{
	struct FConstraintDescriptor                       Constraint;                                               // 0x0000(0x0010)
	float                                              Weight;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainOffset;                                          // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0020(0x0060) (IsPlainOldData)
	struct FTransform                                  CurrentTransform;                                         // 0x0080(0x0060) (Transient, IsPlainOldData)
};

// ScriptStruct AnimationCore.TransformFilter
// 0x0009
struct FTransformFilter
{
	struct FFilterOptionPerAxis                        TranslationFilter;                                        // 0x0000(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        RotationFilter;                                           // 0x0003(0x0003) (Edit, BlueprintVisible)
	struct FFilterOptionPerAxis                        ScaleFilter;                                              // 0x0006(0x0003) (Edit, BlueprintVisible)
};

// ScriptStruct AnimationCore.CCDIKChainLink
// 0x00E0
struct FCCDIKChainLink
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct AnimationCore.EulerTransform
// 0x0048
struct FEulerTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.FABRIKChainLink
// 0x0050
struct FFABRIKChainLink
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AnimationCore.Axis
// 0x0020
struct FAxis
{
	struct FVector                                     Axis;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInLocalSpace;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010
struct FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FFilterOptionPerAxis                        AxesFilterOption;                                         // 0x0008(0x0003) (Edit)
	unsigned char                                      UnknownData01[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0060 (0x0070 - 0x0010)
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
	struct FAxis                                       LookAt_Axis;                                              // 0x0010(0x0020) (Edit)
	struct FAxis                                       LookUp_Axis;                                              // 0x0030(0x0020) (Edit)
	bool                                               bUseLookUp;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FVector                                     LookUpTarget;                                             // 0x0058(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationCore.NodeChain
// 0x0010
struct FNodeChain
{
	TArray<struct FName>                               Nodes;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AnimationCore.TransformNoScale
// 0x0040
struct FTransformNoScale
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0020) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
