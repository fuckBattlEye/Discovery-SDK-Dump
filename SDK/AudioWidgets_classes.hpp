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

// Class AudioWidgets.AudioMeter
// 0x0588 (0x06B0 - 0x0128)
class UAudioMeter : public UWidget
{
public:
	TArray<struct FMeterChannelInfo>                   MeterChannelInfo;                                         // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FScriptDelegate                             MeterChannelInfoDelegate;                                 // 0x0138(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FAudioMeterStyle                            WidgetStyle;                                              // 0x0150(0x04D0) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0620(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	struct FLinearColor                                BackgroundColor;                                          // 0x0624(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeterBackgroundColor;                                     // 0x0634(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeterValueColor;                                          // 0x0644(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeterPeakColor;                                           // 0x0654(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeterClippingColor;                                       // 0x0664(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeterScaleColor;                                          // 0x0674(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeterScaleLabelColor;                                     // 0x0684(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0694(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioMeter"));
		return ptr;
	}


	void SetMeterValueColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AA3C0
	void SetMeterScaleLabelColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AA140
	void SetMeterScaleColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AA1E0
	void SetMeterPeakColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AA320
	void SetMeterClippingColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AA280
	void SetMeterChannelInfo(TArray<struct FMeterChannelInfo> InMeterChannelInfo);//Offset:Discovery.exe+0x29AA5A0
	void SetMeterBackgroundColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AA460
	void SetBackgroundColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AA500
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo();//Offset:Discovery.exe+0x29AA650
};


// Class AudioWidgets.AudioRadialSlider
// 0x0218 (0x0340 - 0x0128)
class UAudioRadialSlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x012C(0x0010) (ZeroConstructor, InstancedReference)
	TEnumAsByte<EAudioRadialSliderLayout>              WidgetLayout;                                             // 0x013C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FLinearColor                                CenterBackgroundColor;                                    // 0x0140(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderProgressColor;                                      // 0x0150(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderBarColor;                                           // 0x0160(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HandStartEndRatio;                                        // 0x0170(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       UnitsText;                                                // 0x0180(0x0018) (Edit)
	struct FLinearColor                                TextLabelBackgroundColor;                                 // 0x0198(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowLabelOnlyOnHover;                                     // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowUnitsText;                                            // 0x01A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnitsTextReadOnly;                                      // 0x01AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsValueTextReadOnly;                                      // 0x01AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderThickness;                                          // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutputRange;                                              // 0x01B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x170];                                     // 0x01D0(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioRadialSlider"));
		return ptr;
	}


	void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);//Offset:Discovery.exe+0x29AB670
	void SetValueTextReadOnly(bool bIsReadOnly);//Offset:Discovery.exe+0x29AB110
	void SetUnitsTextReadOnly(bool bIsReadOnly);//Offset:Discovery.exe+0x29AB1B0
	void SetUnitsText(const struct FText& Units);//Offset:Discovery.exe+0x29AB250
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);//Offset:Discovery.exe+0x29AB340
	void SetSliderThickness(float InThickness);//Offset:Discovery.exe+0x29AAF30
	void SetSliderProgressColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AB530
	void SetSliderBarColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AB490
	void SetShowUnitsText(bool bShowUnitsText);//Offset:Discovery.exe+0x29AAFD0
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);//Offset:Discovery.exe+0x29AB070
	void SetOutputRange(const struct FVector2D& InOutputRange);//Offset:Discovery.exe+0x29AAE90
	void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);//Offset:Discovery.exe+0x29AB3F0
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AB5D0
};


// Class AudioWidgets.AudioVolumeRadialSlider
// 0x0000 (0x0340 - 0x0340)
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioVolumeRadialSlider"));
		return ptr;
	}

};


// Class AudioWidgets.AudioFrequencyRadialSlider
// 0x0000 (0x0340 - 0x0340)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioFrequencyRadialSlider"));
		return ptr;
	}

};


// Class AudioWidgets.AudioSliderBase
// 0x0848 (0x0970 - 0x0128)
class UAudioSliderBase : public UWidget
{
public:
	float                                              Value;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FText                                       UnitsText;                                                // 0x0130(0x0018) (Edit)
	struct FLinearColor                                TextLabelBackgroundColor;                                 // 0x0148(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             TextLabelBackgroundColorDelegate;                         // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               ShowLabelOnlyOnHover;                                     // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowUnitsText;                                            // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnitsTextReadOnly;                                      // 0x016A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsValueTextReadOnly;                                      // 0x016B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x016C(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                SliderBackgroundColor;                                    // 0x017C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             SliderBackgroundColorDelegate;                            // 0x018C(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                SliderBarColor;                                           // 0x019C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             SliderBarColorDelegate;                                   // 0x01AC(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                SliderThumbColor;                                         // 0x01BC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             SliderThumbColorDelegate;                                 // 0x01CC(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                WidgetBackgroundColor;                                    // 0x01DC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             WidgetBackgroundColorDelegate;                            // 0x01EC(0x0010) (ZeroConstructor, InstancedReference)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x01FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x760];                                     // 0x0210(0x0760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioSliderBase"));
		return ptr;
	}


	void SetWidgetBackgroundColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AC220
	void SetValueTextReadOnly(bool bIsReadOnly);//Offset:Discovery.exe+0x29AC5E0
	void SetUnitsTextReadOnly(bool bIsReadOnly);//Offset:Discovery.exe+0x29AC680
	void SetUnitsText(const struct FText& Units);//Offset:Discovery.exe+0x29AC720
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);//Offset:Discovery.exe+0x29AC810
	void SetSliderThumbColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AC2C0
	void SetSliderBarColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AC360
	void SetSliderBackgroundColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x29AC400
	void SetShowUnitsText(bool bShowUnitsText);//Offset:Discovery.exe+0x29AC4A0
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);//Offset:Discovery.exe+0x29AC540
	float GetOutputValue(float LinValue);//Offset:Discovery.exe+0x29AC960
	float GetLinValue(float OutputValue);//Offset:Discovery.exe+0x29AC8C0
};


// Class AudioWidgets.AudioSlider
// 0x0010 (0x0980 - 0x0970)
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>                  LinToOutputCurve;                                         // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UCurveFloat>                  OutputToLinCurve;                                         // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioSlider"));
		return ptr;
	}

};


// Class AudioWidgets.AudioVolumeSlider
// 0x0000 (0x0980 - 0x0980)
class UAudioVolumeSlider : public UAudioSlider
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioVolumeSlider"));
		return ptr;
	}

};


// Class AudioWidgets.AudioFrequencySlider
// 0x0010 (0x0980 - 0x0970)
class UAudioFrequencySlider : public UAudioSliderBase
{
public:
	struct FVector2D                                   OutputRange;                                              // 0x0970(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioWidgets.AudioFrequencySlider"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
