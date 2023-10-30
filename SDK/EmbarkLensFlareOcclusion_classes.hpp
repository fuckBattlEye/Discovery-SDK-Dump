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

// Class EmbarkLensFlareOcclusion.EmbarkLensFlareOcclusionSubsystem
// 0x0068 (0x0098 - 0x0030)
class UEmbarkLensFlareOcclusionSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       LensFlareActor;                                           // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ULightComponent>              LightComponent;                                           // 0x0040(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SamplingRadius;                                           // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x004C(0x000C) MISSED OFFSET
	class UTextureRenderTarget2D*                      OcclusionTarget;                                          // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkLensFlareOcclusion.EmbarkLensFlareOcclusionSubsystem"));
		return ptr;
	}


	class UTextureRenderTarget2D* GetOcclusionResultTexture();//Offset:Discovery.exe+0x1B8BB20
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
