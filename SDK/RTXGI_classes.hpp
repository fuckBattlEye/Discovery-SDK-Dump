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

// Class RTXGI.DDGICapture
// 0x0008 (0x02D0 - 0x02C8)
class ADDGICapture : public AActor
{
public:
	class UDDGICaptureComponent*                       DDGICaptureComponent;                                     // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RTXGI.DDGICapture"));
		return ptr;
	}

};


// Class RTXGI.DDGICaptureRegistry
// 0x0018 (0x0040 - 0x0028)
class UDDGICaptureRegistry : public UObject
{
public:
	TArray<struct FDDGIVolumeCaptureData>              CapturedVolumes;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RTXGI.DDGICaptureRegistry"));
		return ptr;
	}

};


// Class RTXGI.DDGICaptureComponent
// 0x0010 (0x02E0 - 0x02D0)
class UDDGICaptureComponent : public USceneComponent
{
public:
	TArray<struct FDDGILevelCaptureData>               CapturedLevels;                                           // 0x02D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RTXGI.DDGICaptureComponent"));
		return ptr;
	}

};


// Class RTXGI.DDGIVolume
// 0x0008 (0x0308 - 0x0300)
class ADDGIVolume : public AVolume
{
public:
	class UDDGIVolumeComponent*                        DDGIVolumeComponent;                                      // 0x0300(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RTXGI.DDGIVolume"));
		return ptr;
	}

};


// Class RTXGI.DDGIVolumeComponent
// 0x0170 (0x0440 - 0x02D0)
class UDDGIVolumeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	bool                                               EnableVolume;                                             // 0x02D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	float                                              UpdatePriority;                                           // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CullFactor;                                               // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LightingPriority;                                         // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendingDistance;                                         // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendingCutoffDistance;                                   // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RuntimeStatic;                                            // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FVector                                     LastOrigin;                                               // 0x02F8(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	enum class EDDGIRaysPerProbe                       RaysPerProbe;                                             // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0310(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FIntVector                                  ProbeCounts;                                              // 0x0314(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProbeMaxRayDistance;                                      // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProbeHistoryWeight;                                       // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FProbeRelocation                            ProbeRelocation;                                          // 0x0328(0x000C) (Edit)
	bool                                               ScrollProbesInfinitely;                                   // 0x0334(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeProbes;                                          // 0x0335(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0336(0x0002) MISSED OFFSET
	struct FIntVector                                  ProbeScrollOffset;                                        // 0x0338(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              probeDistanceExponent;                                    // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              probeIrradianceEncodingGamma;                             // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              probeChangeThreshold;                                     // 0x034C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              probeBrightnessThreshold;                                 // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              probeSkyOcclusionMultiplier;                              // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              probeSkyOcclusionWeightExponent;                          // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              probeSkyOcclusionDistanceThreshold;                       // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EDDGISkyLightType                       SkyLightTypeOnRayMiss;                                    // 0x0360(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0360(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ViewBias;                                                 // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalBias;                                               // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightMultiplier;                                          // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveMultiplier;                                       // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IrradianceScalar;                                         // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0378(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	struct FGuid                                       VolumeId;                                                 // 0x037C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xB4];                                      // 0x038C(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RTXGI.DDGIVolumeComponent"));
		return ptr;
	}


	void ToggleVolume(bool IsVolumeEnabled);//Offset:Discovery.exe+0x2237C80
	void SetLightMultiplier(float NewLightMultiplier);//Offset:Discovery.exe+0x2237A10
	void SetIrradianceScalar(float NewIrradianceScalar);//Offset:Discovery.exe+0x2237BB0
	void SetEmissiveMultiplier(float NewEmissiveMultiplier);//Offset:Discovery.exe+0x2237AE0
	float GetLightMultiplier();//Offset:Discovery.exe+0x2237AB0
	float GetIrradianceScalar();//Offset:Discovery.exe+0x2237C50
	float GetEmissiveMultiplier();//Offset:Discovery.exe+0x2237B80
	void DDGIClearVolumes();//Offset:Discovery.exe+0x2237D40
	void ClearProbeData();//Offset:Discovery.exe+0x2237D20
};


// Class RTXGI.RTXGIPluginSettings
// 0x0120 (0x0158 - 0x0038)
class URTXGIPluginSettings : public UDeveloperSettings
{
public:
	enum class ERTXGIQualityPreset                     Preset;                                                   // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGISurfacesMode                      SurfacesMode;                                             // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIVolumetricsMode                   VolumetricsMode;                                          // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGICompositeMode                     CompositeMode;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              ResolutionScale;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RelativeDistanceThreshold;                                // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NormalPower;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PathsPerPixel;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                RaysPerPath;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RayMaxLength;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RayNormalBias;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RayViewBias;                                              // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RoughnessThreshold;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RadianceBoost;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIPathTraceCheckerboardMode         CheckerboardMode;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIPathTraceDenoiseMode              DenoiseMode;                                              // 0x0069(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               PTShaderExecutionReordering;                              // 0x006A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               DDGIDynamicUpdate;                                        // 0x006B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIDDGIRayDataBitDepth               DDGIRayDataBitDepth;                                      // 0x006C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIDDGIIrradianceBitDepth            DDGIProbeIrradianceBitDepth;                              // 0x006D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIDDGIDistanceBitDepth              DDGIProbeDistanceBitDepth;                                // 0x006E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x006F(0x0001) MISSED OFFSET
	float                                              DDGIVolumetricFogIrradianceScale;                         // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DDGIVolumetricFogMaxContribution;                         // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DDGIFadeTime;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DDGIFadeScreenRadiusThreshold;                            // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               DDGISkyOcclusionEnable;                                   // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              DDGISkyOcclusionExponent;                                 // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DDGIMaxRaysPerProbeInGame;                                // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DDGIMaxRayDistanceInGame;                                 // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DDGITextureMipBias;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DDGIFrameRayBudget;                                       // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DDGIMaxVolumesToAllowForUpdate;                           // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DDGIMaxVolumesToConsiderForUpdate;                        // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DDGIPriorityScreenPercentage;                             // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DDGIUpdateAllVolumesEveryFrame;                           // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               DDGIProbeSerialization;                                   // 0x00A8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               DDGIShaderExecutionReordering;                            // 0x00A9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               VisRTMaterials;                                           // 0x00AA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIVisDDGIProbeData                  VisDDGIProbeDataMode;                                     // 0x00AB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ERTXGIVisDDGIProbeView                  VisDDGIProbeViewMode;                                     // 0x00AC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              VisDDGIProbeRadius;                                       // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VisDDGIProbeDistanceScale;                                // 0x00B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x00B8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RTXGI.RTXGIPluginSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
