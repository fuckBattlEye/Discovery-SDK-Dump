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

// Enum AudioWidgets.EAudioRadialSliderLayout
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                = 0,
	Layout_LabelCenter             = 1,
	Layout_LabelBottom             = 2,
	Layout_MAX                     = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioWidgets.MeterChannelInfo
// 0x000C
struct FMeterChannelInfo
{
	float                                              MeterValue;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PeakValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClippingValue;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioWidgets.AudioMeterStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FAudioMeterStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 MeterValueImage;                                          // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImage;                                          // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MeterBackgroundImage;                                     // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MeterValueBackgroundImage;                                // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MeterPeakImage;                                           // 0x0350(0x00D0) (Edit, BlueprintVisible)
	struct FVector2D                                   MeterSize;                                                // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MeterPadding;                                             // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeterValuePadding;                                        // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PeakValueWidth;                                           // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ValueRangeDb;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowScale;                                               // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleSide;                                               // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x045A(0x0002) MISSED OFFSET
	float                                              ScaleHashOffset;                                          // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleHashWidth;                                           // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleHashHeight;                                          // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DecibelsPerHash;                                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0470(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
};

// ScriptStruct AudioWidgets.AudioTextBoxStyle
// 0x00F8 (0x0100 - 0x0008)
struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x00E0(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct AudioWidgets.AudioSliderStyle
// 0x0748 (0x0750 - 0x0008)
struct FAudioSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSliderStyle                                SliderStyle;                                              // 0x0010(0x0500) (Edit, BlueprintVisible)
	struct FAudioTextBoxStyle                          TextBoxStyle;                                             // 0x0510(0x0100) (Edit, BlueprintVisible)
	struct FSlateBrush                                 WidgetBackgroundImage;                                    // 0x0610(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 SliderBackgroundColor;                                    // 0x06E0(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FVector2D                                   SliderBackgroundSize;                                     // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LabelPadding;                                             // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SliderBarColor;                                           // 0x070C(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 SliderThumbColor;                                         // 0x0720(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 WidgetBackgroundColor;                                    // 0x0734(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0748(0x0008) MISSED OFFSET
};

// ScriptStruct AudioWidgets.AudioRadialSliderStyle
// 0x0158 (0x0160 - 0x0008)
struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FAudioTextBoxStyle                          TextBoxStyle;                                             // 0x0010(0x0100) (Edit, BlueprintVisible)
	struct FSlateColor                                 CenterBackgroundColor;                                    // 0x0110(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 SliderBarColor;                                           // 0x0124(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 SliderProgressColor;                                      // 0x0138(0x0014) (Edit, BlueprintVisible)
	float                                              LabelPadding;                                             // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSliderRadius;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0154(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
