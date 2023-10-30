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

// Class EmbarkUserSettings.MotionBlurSetting
// 0x0030 (0x0070 - 0x0040)
class UMotionBlurSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       DisabledText;                                             // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EnabledText;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.MotionBlurSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.LensDistortionSetting
// 0x0030 (0x0070 - 0x0040)
class ULensDistortionSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       DisabledText;                                             // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EnabledText;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.LensDistortionSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.RenderingModeSetting
// 0x0030 (0x0070 - 0x0040)
class URenderingModeSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       EnabledText;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisabledText;                                             // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.RenderingModeSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.FSR2TemporalUpscalingSetting
// 0x0088 (0x00C8 - 0x0040)
class UFSR2TemporalUpscalingSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       OffText;                                                  // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       QualityText;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       BalancedText;                                             // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       PerformanceText;                                          // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       UltraPerformanceText;                                     // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.FSR2TemporalUpscalingSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.XeSSTemporalUpscalingSetting
// 0x0090 (0x00D0 - 0x0040)
class UXeSSTemporalUpscalingSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       PerformanceText;                                          // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       BalancedText;                                             // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       QualityText;                                              // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       UltraQualityText;                                         // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       OffText;                                                  // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.XeSSTemporalUpscalingSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.ResolutionScalingMethodSetting
// 0x0090 (0x00D0 - 0x0040)
class UResolutionScalingMethodSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       TAAUText;                                                 // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TSRText;                                                  // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DLSSText;                                                 // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       FSR2Text;                                                 // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       XeSSText;                                                 // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.ResolutionScalingMethodSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.EmbarkGameUserSettings
// 0x0030 (0x0158 - 0x0128)
class UEmbarkGameUserSettings : public UGameUserSettings
{
public:
	uint32_t                                           EmbarkVersion;                                            // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	enum class EUStreamlineReflexMode                  NvReflexMode;                                             // 0x012C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	enum class EUStreamlineDLSSGMode                   DLSSFrameGenerationMode;                                  // 0x012D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	enum class EResolutionScalingMethod                ResolutionScalingMethod;                                  // 0x012E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bResolutionScalingMethodSelectedByUser;                   // 0x012F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	enum class EDLSSModeOption                         DLSSMode;                                                 // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	enum class EFSR2Mode                               FSR2Mode;                                                 // 0x0131(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	enum class EXeSSQualityMode                        XeSSMode;                                                 // 0x0132(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               MotionBlurEnabled;                                        // 0x0133(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               LensDistortionEnabled;                                    // 0x0134(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIQuality                           RTXGIQuality;                                             // 0x0135(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0136(0x0002) MISSED OFFSET
	int                                                RTXGIResolutionQuality;                                   // 0x0138(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UEmbarkGameUserSettings*                     DefaultGameUserSettings;                                  // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.EmbarkGameUserSettings"));
		return ptr;
	}


	void SetXeSSMode(enum class EXeSSQualityMode Mode);//Offset:Discovery.exe+0x1C5A3F0
	void SetRTXGIResolutionQuality(int Value);//Offset:Discovery.exe+0x1C59C00
	void SetRTXGIQuality(enum class ERTXGIQuality Quality);//Offset:Discovery.exe+0x1C59D00
	void SetResolutionScalingMethod(enum class EResolutionScalingMethod Method, bool bSetByUser);//Offset:Discovery.exe+0x1C5A250
	void SetNvReflexMode(enum class EUStreamlineReflexMode Mode);//Offset:Discovery.exe+0x1C5A940
	void SetMotionBlurEnabled(bool bEnabled);//Offset:Discovery.exe+0x1C59F20
	void SetLensDistortionEnabled(bool bEnabled);//Offset:Discovery.exe+0x1C59E20
	void SetInGameEnabled(bool bEnabled);//Offset:Discovery.exe+0x1C59FF0
	void SetFSR2Mode(enum class EFSR2Mode Mode);//Offset:Discovery.exe+0x1C5A620
	void SetDLSSMode(enum class EDLSSModeOption Mode);//Offset:Discovery.exe+0x1C5AAC0
	void SetDLSSFrameGenerationMode(enum class EUStreamlineDLSSGMode Mode);//Offset:Discovery.exe+0x1C5A7A0
	void SetD3D12Enabled(bool bEnabled);//Offset:Discovery.exe+0x1C5A0F0
	bool IsXeSSSupported();//Offset:Discovery.exe+0x1C5A500
	bool IsXeSSModeDirty();//Offset:Discovery.exe+0x1C5A330
	bool IsXeSSLoaded();//Offset:Discovery.exe+0x1C5A530
	bool IsRTXGIResolutionQualityDirty();//Offset:Discovery.exe+0x1C59BD0
	bool IsRTXGIQualityDirty();//Offset:Discovery.exe+0x1C59CD0
	bool IsResolutionScalingMethodDirty();//Offset:Discovery.exe+0x1C5A1F0
	bool IsRayTracingSupported();//Offset:Discovery.exe+0x1C5AC30
	bool IsPCSettingsAvailable();//Offset:Discovery.exe+0x1B14430
	bool IsNvReflexSupported();//Offset:Discovery.exe+0x1C5A9D0
	bool IsNvReflexModeDirty();//Offset:Discovery.exe+0x1C5A8E0
	bool IsMotionBlurDirty();//Offset:Discovery.exe+0x1C59EF0
	bool IsFSR2Supported();//Offset:Discovery.exe+0x1C5A6B0
	bool IsFSR2ModeDirty();//Offset:Discovery.exe+0x1C5A560
	bool IsFSR2Loaded();//Offset:Discovery.exe+0x1C5A6E0
	bool IsDLSSSupported();//Offset:Discovery.exe+0x1C5ABD0
	bool IsDLSSModeDirty();//Offset:Discovery.exe+0x1C5AA00
	bool IsDLSSLoaded();//Offset:Discovery.exe+0x1C5AC00
	bool IsDLSSFrameGenerationSupported();//Offset:Discovery.exe+0x1C5A8B0
	bool IsDLSSFrameGenerationDirty();//Offset:Discovery.exe+0x1C5A710
	bool IsD3D12Supported();//Offset:Discovery.exe+0x1C5A190
	bool IsD3D12Dirty();//Offset:Discovery.exe+0x1C5A090
	enum class EXeSSQualityMode GetXeSSMode();//Offset:Discovery.exe+0x1C5A3C0
	TArray<enum class EXeSSQualityMode> GetSupportedXeSSModes();//Offset:Discovery.exe+0x1C5A480
	TArray<enum class EDLSSModeOption> GetSupportedDLSSModes();//Offset:Discovery.exe+0x1C5AB50
	TArray<enum class EUStreamlineDLSSGMode> GetSupportedDLSSFrameGenerationModes();//Offset:Discovery.exe+0x1C5A830
	int GetRTXGIResolutionQuality();//Offset:Discovery.exe+0x1C59CA0
	enum class ERTXGIQuality GetRTXGIQuality();//Offset:Discovery.exe+0x1C59DF0
	enum class EResolutionScalingMethod GetResolutionScalingMethod();//Offset:Discovery.exe+0x1C5A220
	enum class EUStreamlineReflexMode GetNvReflexMode();//Offset:Discovery.exe+0x1C5A910
	bool GetMotionBlurEnabled();//Offset:Discovery.exe+0x1C59FC0
	bool GetLensDistortionEnabled();//Offset:Discovery.exe+0x1C59EC0
	enum class EFSR2Mode GetFSR2Mode();//Offset:Discovery.exe+0x1C5A5F0
	class UEmbarkGameUserSettings* STATIC_GetEmbarkGameUserSettingsWithDefaultSettings();//Offset:Discovery.exe+0x1C5AC60
	enum class EXeSSQualityMode GetEffectiveXeSSMode();//Offset:Discovery.exe+0x1C5A390
	enum class ERTXGIQuality GetEffectiveRTXGIQuality();//Offset:Discovery.exe+0x1C59DC0
	enum class EFSR2Mode GetEffectiveFSR2Mode();//Offset:Discovery.exe+0x1C5A5C0
	enum class EDLSSModeOption GetEffectiveDLSSMode();//Offset:Discovery.exe+0x1C5AA60
	enum class EUStreamlineDLSSGMode GetEffectiveDLSSFrameGenerationMode();//Offset:Discovery.exe+0x1C5A740
	enum class EDLSSModeOption GetDLSSMode();//Offset:Discovery.exe+0x1C5AA90
	enum class EUStreamlineDLSSGMode GetDLSSFrameGenerationMode();//Offset:Discovery.exe+0x1C5A770
	enum class EResolutionScalingMethod GetDefaultResolutionScalingMethod();//Offset:Discovery.exe+0x1C5A1C0
	bool GetD3D12Enabled();//Offset:Discovery.exe+0x1C5A0C0
	enum class EXeSSQualityMode GetAppliedXeSSMode();//Offset:Discovery.exe+0x1C5A360
	enum class ERTXGIQuality GetAppliedRTXGIQuality();//Offset:Discovery.exe+0x1C59D90
	enum class EFSR2Mode GetAppliedFSR2Mode();//Offset:Discovery.exe+0x1C5A590
	enum class EDLSSModeOption GetAppliedDLSSMode();//Offset:Discovery.exe+0x1C5AA30
	class UEmbarkGameUserSettings* STATIC_Get();//Offset:Discovery.exe+0x1C5AC90
	void AutoDetectScalabilitySettings();//Offset:Discovery.exe+0x1C59BB0
};


// Class EmbarkUserSettings.NvidiaReflexSetting
// 0x0050 (0x0090 - 0x0040)
class UNvidiaReflexSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       DisabledText;                                             // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EnabledText;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EnabledBoostText;                                         // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.NvidiaReflexSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.NvidiaDLSSFrameGenerationSetting
// 0x0040 (0x0080 - 0x0040)
class UNvidiaDLSSFrameGenerationSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       DisabledText;                                             // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EnabledText;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.NvidiaDLSSFrameGenerationSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.NvidiaDLSSSetting
// 0x00D8 (0x0118 - 0x0040)
class UNvidiaDLSSSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       OffText;                                                  // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       AutoText;                                                 // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DLAAText;                                                 // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       UltraQualityText;                                         // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       QualityText;                                              // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       BalancedText;                                             // 0x00B8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       PerformanceText;                                          // 0x00D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       UltraPerformanceText;                                     // 0x00E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.NvidiaDLSSSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.NvidiaRTXGIScalabilitySetting
// 0x0090 (0x00D0 - 0x0040)
class UNvidiaRTXGIScalabilitySetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       StaticText;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScalabilityText                            DynamicTexts;                                             // 0x0058(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.NvidiaRTXGIScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.ScalabilitySetting
// 0x0078 (0x00B8 - 0x0040)
class UScalabilitySetting : public UIEmbarkUserSetting
{
public:
	struct FScalabilityText                            Texts;                                                    // 0x0040(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.ScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.NvidiaRTXGIResolutionScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UNvidiaRTXGIResolutionScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.NvidiaRTXGIResolutionScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.OverallScalabilitySetting
// 0x0018 (0x00D0 - 0x00B8)
class UOverallScalabilitySetting : public UScalabilitySetting
{
public:
	struct FText                                       CustomQualityText;                                        // 0x00B8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.OverallScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.ViewDistanceScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UViewDistanceScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.ViewDistanceScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.AntiAliasingScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UAntiAliasingScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.AntiAliasingScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.ShadowScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UShadowScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.ShadowScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.PostProcessingScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UPostProcessingScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.PostProcessingScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.TextureScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UTextureScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.TextureScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.EffectsScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UEffectsScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.EffectsScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.FoliageScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UFoliageScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.FoliageScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.ShadingScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UShadingScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.ShadingScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.GlobalIlluminationScalabilitySetting
// 0x0000 (0x00B8 - 0x00B8)
class UGlobalIlluminationScalabilitySetting : public UScalabilitySetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.GlobalIlluminationScalabilitySetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.ResolutionScaleSetting
// 0x0008 (0x0068 - 0x0060)
class UResolutionScaleSetting : public UIEmbarkOptionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.ResolutionScaleSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.ResolutionSetting
// 0x0010 (0x0050 - 0x0040)
class UResolutionSetting : public UIEmbarkUserSetting
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.ResolutionSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.WindowModeSetting
// 0x0050 (0x0090 - 0x0040)
class UWindowModeSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       FullScreenModeText;                                       // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       WindowedModeText;                                         // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       WindowedFullScreenModeText;                               // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.WindowModeSetting"));
		return ptr;
	}

};


// Class EmbarkUserSettings.VSyncSetting
// 0x0030 (0x0070 - 0x0040)
class UVSyncSetting : public UIEmbarkUserSetting
{
public:
	struct FText                                       EnabledText;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisabledText;                                             // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUserSettings.VSyncSetting"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
