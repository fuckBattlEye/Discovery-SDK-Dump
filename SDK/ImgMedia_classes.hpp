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

// Class ImgMedia.ImgMediaSource
// 0x0048 (0x00D0 - 0x0088)
class UImgMediaSource : public UBaseMediaSource
{
public:
	bool                                               IsPathRelativeToProjectRoot;                              // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FFrameRate                                  FrameRateOverride;                                        // 0x008C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     ProxyOverride;                                            // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bFillGapsInSequence;                                      // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FDirectoryPath                              SequencePath;                                             // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ImgMedia.ImgMediaSource"));
		return ptr;
	}


	void SetSequencePath(const struct FString& Path);//Offset:Discovery.exe+0x2E191F0
	void SetMipLevelDistance(float Distance);//Offset:Discovery.exe+0x2E18E90
	void RemoveTargetObject(class AActor* InActor);//Offset:Discovery.exe+0x2E18F30
	void RemoveGlobalCamera(class AActor* InActor);//Offset:Discovery.exe+0x2E190B0
	struct FString GetSequencePath();//Offset:Discovery.exe+0x2E192A0
	void GetProxies(TArray<struct FString>* OutProxies);//Offset:Discovery.exe+0x2E193C0
	void AddTargetObject(class AActor* InActor, float Width);//Offset:Discovery.exe+0x2E18FD0
	void AddGlobalCamera(class AActor* InActor);//Offset:Discovery.exe+0x2E19150
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
