#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AdvancedWidgets.RadialSlider.SetValueTags
struct URadialSlider_SetValueTags_Params
{
	TArray<float>                                      InValueTags;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AdvancedWidgets.RadialSlider.SetValue
struct URadialSlider_SetValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag
struct URadialSlider_SetUseVerticalDrag_Params
{
	bool                                               InUseVerticalDrag;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetStepSize
struct URadialSlider_SetStepSize_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetSliderRange
struct URadialSlider_SetSliderRange_Params
{
	struct FRuntimeFloatCurve                          InSliderRange;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AdvancedWidgets.RadialSlider.SetSliderProgressColor
struct URadialSlider_SetSliderProgressColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
struct URadialSlider_SetSliderHandleStartAngle_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
struct URadialSlider_SetSliderHandleEndAngle_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetSliderHandleColor
struct URadialSlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetSliderBarColor
struct URadialSlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetShowSliderHandle
struct URadialSlider_SetShowSliderHandle_Params
{
	bool                                               InShowSliderHandle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetShowSliderHand
struct URadialSlider_SetShowSliderHand_Params
{
	bool                                               InShowSliderHand;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetLocked
struct URadialSlider_SetLocked_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio
struct URadialSlider_SetHandStartEndRatio_Params
{
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue
struct URadialSlider_SetCustomDefaultValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
struct URadialSlider_SetCenterBackgroundColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.SetAngularOffset
struct URadialSlider_SetAngularOffset_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.GetValue
struct URadialSlider_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
struct URadialSlider_GetNormalizedSliderHandlePosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue
struct URadialSlider_GetCustomDefaultValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
