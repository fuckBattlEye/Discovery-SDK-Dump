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

// Class AdvancedWidgets.RadialSlider
// 0x0688 (0x07B0 - 0x0128)
class URadialSlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x012C(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bUseCustomDefaultValue;                                   // 0x013C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              CustomDefaultValue;                                       // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          SliderRange;                                              // 0x0148(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<float>                                      ValueTags;                                                // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              SliderHandleStartAngle;                                   // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SliderHandleEndAngle;                                     // 0x01E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularOffset;                                            // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	struct FVector2D                                   HandStartEndRatio;                                        // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSliderStyle                                WidgetStyle;                                              // 0x0200(0x0500) (Edit, BlueprintVisible)
	struct FLinearColor                                SliderBarColor;                                           // 0x0700(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderProgressColor;                                      // 0x0710(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0720(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CenterBackgroundColor;                                    // 0x0730(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x0740(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               MouseUsesStep;                                            // 0x0741(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresControllerLock;                                   // 0x0742(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0743(0x0001) MISSED OFFSET
	float                                              StepSize;                                                 // 0x0744(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseVerticalDrag;                                          // 0x0749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowSliderHandle;                                         // 0x074A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowSliderHand;                                           // 0x074B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x0760(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x0770(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x0780(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0790(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AdvancedWidgets.RadialSlider"));
		return ptr;
	}


	void SetValueTags(TArray<float> InValueTags);//Offset:Discovery.exe+0x5E0C360
	void SetValue(float InValue);//Offset:Discovery.exe+0x5E0C590
	void SetUseVerticalDrag(bool InUseVerticalDrag);//Offset:Discovery.exe+0x5E0BC80
	void SetStepSize(float InValue);//Offset:Discovery.exe+0x5E0BFA0
	void SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange);//Offset:Discovery.exe+0x5E0C410
	void SetSliderProgressColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x5E0BE60
	void SetSliderHandleStartAngle(float InValue);//Offset:Discovery.exe+0x5E0C2C0
	void SetSliderHandleEndAngle(float InValue);//Offset:Discovery.exe+0x5E0C220
	void SetSliderHandleColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x5E0BDC0
	void SetSliderBarColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x5E0BF00
	void SetShowSliderHandle(bool InShowSliderHandle);//Offset:Discovery.exe+0x5E0BBE0
	void SetShowSliderHand(bool InShowSliderHand);//Offset:Discovery.exe+0x5E0BB40
	void SetLocked(bool InValue);//Offset:Discovery.exe+0x5E0C040
	void SetHandStartEndRatio(const struct FVector2D& InValue);//Offset:Discovery.exe+0x5E0C0E0
	void SetCustomDefaultValue(float InValue);//Offset:Discovery.exe+0x5E0C4F0
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x5E0BD20
	void SetAngularOffset(float InValue);//Offset:Discovery.exe+0x5E0C180
	float GetValue();//Offset:Discovery.exe+0x5E0C690
	float GetNormalizedSliderHandlePosition();//Offset:Discovery.exe+0x5E0C630
	float GetCustomDefaultValue();//Offset:Discovery.exe+0x5E0C660
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
