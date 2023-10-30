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

// Function AudioWidgets.AudioMeter.SetMeterValueColor
struct UAudioMeter_SetMeterValueColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
struct UAudioMeter_SetMeterScaleLabelColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioMeter.SetMeterScaleColor
struct UAudioMeter_SetMeterScaleColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioMeter.SetMeterPeakColor
struct UAudioMeter_SetMeterPeakColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioMeter.SetMeterClippingColor
struct UAudioMeter_SetMeterClippingColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioMeter.SetMeterChannelInfo
struct UAudioMeter_SetMeterChannelInfo_Params
{
	TArray<struct FMeterChannelInfo>                   InMeterChannelInfo;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
struct UAudioMeter_SetMeterBackgroundColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioMeter.SetBackgroundColor
struct UAudioMeter_SetBackgroundColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
struct UAudioMeter_GetMeterChannelInfo__DelegateSignature_Params
{
	TArray<struct FMeterChannelInfo>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AudioWidgets.AudioMeter.GetMeterChannelInfo
struct UAudioMeter_GetMeterChannelInfo_Params
{
	TArray<struct FMeterChannelInfo>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
struct UAudioRadialSlider_SetWidgetLayout_Params
{
	TEnumAsByte<EAudioRadialSliderLayout>              InLayout;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
struct UAudioRadialSlider_SetValueTextReadOnly_Params
{
	bool                                               bIsReadOnly;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
struct UAudioRadialSlider_SetUnitsTextReadOnly_Params
{
	bool                                               bIsReadOnly;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetUnitsText
struct UAudioRadialSlider_SetUnitsText_Params
{
	struct FText                                       Units;                                                    // (ConstParm, Parm)
};

// Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
struct UAudioRadialSlider_SetTextLabelBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                  // (Parm)
};

// Function AudioWidgets.AudioRadialSlider.SetSliderThickness
struct UAudioRadialSlider_SetSliderThickness_Params
{
	float                                              InThickness;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
struct UAudioRadialSlider_SetSliderProgressColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetSliderBarColor
struct UAudioRadialSlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetShowUnitsText
struct UAudioRadialSlider_SetShowUnitsText_Params
{
	bool                                               bShowUnitsText;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
struct UAudioRadialSlider_SetShowLabelOnlyOnHover_Params
{
	bool                                               bShowLabelOnlyOnHover;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetOutputRange
struct UAudioRadialSlider_SetOutputRange_Params
{
	struct FVector2D                                   InOutputRange;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
struct UAudioRadialSlider_SetHandStartEndRatio_Params
{
	struct FVector2D                                   InHandStartEndRatio;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
struct UAudioRadialSlider_SetCenterBackgroundColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
struct UAudioSliderBase_SetWidgetBackgroundColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
struct UAudioSliderBase_SetValueTextReadOnly_Params
{
	bool                                               bIsReadOnly;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
struct UAudioSliderBase_SetUnitsTextReadOnly_Params
{
	bool                                               bIsReadOnly;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetUnitsText
struct UAudioSliderBase_SetUnitsText_Params
{
	struct FText                                       Units;                                                    // (ConstParm, Parm)
};

// Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
struct UAudioSliderBase_SetTextLabelBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                  // (Parm)
};

// Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
struct UAudioSliderBase_SetSliderThumbColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetSliderBarColor
struct UAudioSliderBase_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
struct UAudioSliderBase_SetSliderBackgroundColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetShowUnitsText
struct UAudioSliderBase_SetShowUnitsText_Params
{
	bool                                               bShowUnitsText;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
struct UAudioSliderBase_SetShowLabelOnlyOnHover_Params
{
	bool                                               bShowLabelOnlyOnHover;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.GetOutputValue
struct UAudioSliderBase_GetOutputValue_Params
{
	float                                              LinValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioWidgets.AudioSliderBase.GetLinValue
struct UAudioSliderBase_GetLinValue_Params
{
	float                                              OutputValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
