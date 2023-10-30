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

// Class FSR2TemporalUpscaling.FSR2Settings
// 0x0050 (0x0088 - 0x0038)
class UFSR2Settings : public UDeveloperSettings
{
public:
	bool                                               bEnabled;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AutoExposure;                                             // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnabledInEditorViewport;                                  // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseSSRExperimentalDenoiser;                               // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseNativeDX12;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseNativeVulkan;                                          // 0x003D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	enum class EFSR2QualityMode                        QualityMode;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003E(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class EFSR2HistoryFormat                      HistoryFormat;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0044(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class EFSR2DeDitherMode                       DeDither;                                                 // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0048(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Sharpness;                                                // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AdjustMipBias;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ReactiveMask;                                             // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ForceVertexDeformationOutputsVelocity;                    // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	enum class EFSR2LandscapeHISMMode                  ForceLandscapeHISMMobility;                               // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0053(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ReflectionScale;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ReflectionLuminanceBias;                                  // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RoughnessScale;                                           // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RoughnessBias;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RoughnessMaxDistance;                                     // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ReactiveMaskRoughnessForceMaxDistance;                    // 0x006C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              TranslucencyBias;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TranslucencyLuminanceBias;                                // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TranslucencyMaxDistance;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PreDOFTranslucencyScale;                                  // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreDOFTranslucencyMax;                                    // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ReactiveShadingModelID;                                   // 0x0081(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              ForceReactiveMaterialValue;                               // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FSR2TemporalUpscaling.FSR2Settings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
