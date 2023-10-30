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

// Enum ControlRigSpline.ESplineType
enum class ESplineType : uint8_t
{
	BSpline                        = 0,
	Hermite                        = 1,
	Max                            = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ControlRigSpline.ControlRigSplineImpl
// 0x0060
struct FControlRigSplineImpl
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.ControlRigSpline
// 0x0018
struct FControlRigSpline
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_ControlRigSplineBase : public FRigUnit
{

};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
	TArray<struct FVector>                             Points;                                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	int                                                SamplesPerSegment;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Compression;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Stretch;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FControlRigSpline                           Spline;                                                   // 0x0028(0x0018)
};

// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
	TArray<struct FVector>                             Points;                                                   // 0x00D0(0x0010) (ZeroConstructor)
	struct FControlRigSpline                           Spline;                                                   // 0x00E0(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline                           Spline;                                                   // 0x0008(0x0018)
	float                                              U;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline                           Spline;                                                   // 0x0008(0x0018)
	struct FVector                                     UpVector;                                                 // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0040(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline                           Spline;                                                   // 0x0008(0x0018)
	float                                              U;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     Tangent;                                                  // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
	struct FControlRigSpline                           Spline;                                                   // 0x00D0(0x0018)
	struct FLinearColor                                Color;                                                    // 0x00E8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
	struct FControlRigSpline                           Spline;                                                   // 0x0008(0x0018)
	float                                              Length;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
// 0x01D0 (0x02A0 - 0x00D0)
struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	struct FControlRigSpline                           Spline;                                                   // 0x00E0(0x0018)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F8(0x0004) MISSED OFFSET
	float                                              Minimum;                                                  // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SamplingPrecision;                                        // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0108(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0120(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVectorPosition;                                       // 0x0138(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_FitChainToCurve_Rotation>   Rotations;                                                // 0x0150(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0160(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FRigUnit_FitChainToCurve_DebugSettings      DebugSettings;                                            // 0x0170(0x0090)
	struct FRigUnit_FitChainToCurve_WorkData           WorkData;                                                 // 0x0200(0x0098) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// 0x01D0 (0x02A0 - 0x00D0)
struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	struct FControlRigSpline                           Spline;                                                   // 0x00E0(0x0018)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F8(0x0004) MISSED OFFSET
	float                                              Minimum;                                                  // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SamplingPrecision;                                        // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0108(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0120(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVectorPosition;                                       // 0x0138(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_FitChainToCurve_Rotation>   Rotations;                                                // 0x0150(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0160(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FRigUnit_FitChainToCurve_DebugSettings      DebugSettings;                                            // 0x0170(0x0090)
	struct FRigUnit_FitChainToCurve_WorkData           WorkData;                                                 // 0x0200(0x0098) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	struct FControlRigSpline                           Spline;                                                   // 0x00E0(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	struct FControlRigSpline                           Spline;                                                   // 0x00E0(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline                           Spline;                                                   // 0x0008(0x0018)
	struct FVector                                     Position;                                                 // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline                           Spline;                                                   // 0x0008(0x0018)
	float                                              Percentage;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
