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

// Class EmbarkPostProcessLensFlare.EmbarkPostProcessLensFlareAsset
// 0x0128 (0x0158 - 0x0030)
class UEmbarkPostProcessLensFlareAsset : public UDataAsset
{
public:
	float                                              Intensity;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UTexture2D*                                  Gradient;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdLevel;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdRange;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClampIntensity;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              MaxIntensityValue;                                        // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GhostIntensity;                                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GhostChromaShift;                                         // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLensFlareGhostSettings                     Ghost1;                                                   // 0x0068(0x0014) (Edit)
	struct FLensFlareGhostSettings                     Ghost2;                                                   // 0x007C(0x0014) (Edit)
	struct FLensFlareGhostSettings                     Ghost3;                                                   // 0x0090(0x0014) (Edit)
	struct FLensFlareGhostSettings                     Ghost4;                                                   // 0x00A4(0x0014) (Edit)
	struct FLensFlareGhostSettings                     Ghost5;                                                   // 0x00B8(0x0014) (Edit)
	struct FLensFlareGhostSettings                     Ghost6;                                                   // 0x00CC(0x0014) (Edit)
	struct FLensFlareGhostSettings                     Ghost7;                                                   // 0x00E0(0x0014) (Edit)
	struct FLensFlareGhostSettings                     Ghost8;                                                   // 0x00F4(0x0014) (Edit)
	float                                              HaloIntensity;                                            // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HaloWidth;                                                // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HaloMask;                                                 // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HaloCompression;                                          // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HaloChromaShift;                                          // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlareIntensity;                                           // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlareDivider;                                             // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FVector                                     GlareScale;                                               // 0x0128(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GlareTint;                                                // 0x0140(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  GlareLineMask;                                            // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkPostProcessLensFlare.EmbarkPostProcessLensFlareAsset"));
		return ptr;
	}

};


// Class EmbarkPostProcessLensFlare.EmbarkPostProcessLensFlareConfigLoaderActor
// 0x0010 (0x02D8 - 0x02C8)
class AEmbarkPostProcessLensFlareConfigLoaderActor : public AActor
{
public:
	class UEmbarkPostProcessLensFlareAsset*            ConfigAsset;                                              // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkPostProcessLensFlare.EmbarkPostProcessLensFlareConfigLoaderActor"));
		return ptr;
	}

};


// Class EmbarkPostProcessLensFlare.EmbarkPostProcessLensFlareSubsystem
// 0x01B0 (0x01E0 - 0x0030)
class UEmbarkPostProcessLensFlareSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FSoftObjectPath                             DefaultConfigAssetPath;                                   // 0x0040(0x0018) (ZeroConstructor, Config)
	TArray<class AEmbarkPostProcessLensFlareConfigLoaderActor*> ConfigLoaderActors;                                       // 0x0058(0x0010) (ZeroConstructor)
	class UEmbarkPostProcessLensFlareAsset*            DefaultConfigAsset;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x170];                                     // 0x0070(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkPostProcessLensFlare.EmbarkPostProcessLensFlareSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
