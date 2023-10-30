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

// Class EmbarkAnimationRuntime.AnimNotify_EmbarkPlaySound
// 0x0000 (0x0058 - 0x0058)
class UAnimNotify_EmbarkPlaySound : public UAnimNotify_PlaySound
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.AnimNotify_EmbarkPlaySound"));
		return ptr;
	}


	void PlaySound(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);//Offset:Discovery.exe+0x1B32670
};


// Class EmbarkAnimationRuntime.AnimSequenceMixer
// 0x0018 (0x01E8 - 0x01D0)
class UAnimSequenceMixer : public UAnimSequence
{
public:
	bool                                               bHasValidBakedTracks;                                     // 0x01D0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	TArray<struct FSequenceMixerEntry>                 MixerEntries;                                             // 0x01D8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.AnimSequenceMixer"));
		return ptr;
	}

};


// Class EmbarkAnimationRuntime.AnimBlueprintCompiledPinExpressionsSettings
// 0x0028 (0x0060 - 0x0038)
class UAnimBlueprintCompiledPinExpressionsSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                              VariableContainerClass;                                   // 0x0038(0x0018) (Edit, ZeroConstructor, Config)
	TArray<int>                                        PropertyIndexToByteOffset;                                // 0x0050(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.AnimBlueprintCompiledPinExpressionsSettings"));
		return ptr;
	}

};


// Class EmbarkAnimationRuntime.BoneWeightsBlendArrayAsset
// 0x0038 (0x0068 - 0x0030)
class UBoneWeightsBlendArrayAsset : public UBoneWeightsBlendArrayAssetBase
{
public:
	TArray<struct FBoneWeightsBlendArrayEntry>         Entries;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              ArrayMin;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrayMax;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneWeightsBlendArrayEntry>         SortedEntries;                                            // 0x0048(0x0010) (ZeroConstructor)
	TArray<class UBoneWeightsAsset*>                   AllUniqueBoneWeightsAssets;                               // 0x0058(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.BoneWeightsBlendArrayAsset"));
		return ptr;
	}

};


// Class EmbarkAnimationRuntime.EmbarkAnimInstance_Base
// 0x0010 (0x0360 - 0x0350)
class UEmbarkAnimInstance_Base : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.EmbarkAnimInstance_Base"));
		return ptr;
	}


	void SetVariableContainerObjectForCompiledPinExpressions(class UObject* ContainerObject);//Offset:Discovery.exe+0x1B333E0
	int RandomIntInRange_Threadsafe(int Min, int Max);//Offset:Discovery.exe+0x1B332F0
	float RandomFloatInRange_Threadsafe(float Min, float Max);//Offset:Discovery.exe+0x1B33200
	bool IsValid_Threadsafe(class UObject* InObject);//Offset:Discovery.exe+0x1B32F70
	class UAnimSequence* GetAdditiveBaseSequence(class UAnimSequence* InSequence, float* Time);//Offset:Discovery.exe+0x1B33010
	float CalculatePlayRateToSpecifiedPoint(float Duration, float Endpoint);//Offset:Discovery.exe+0x1B33110
	void BlueprintPreUpdateAnimationGameThread(float DeltaTimeX);//Offset:Discovery.exe+0x327F8B0
	void BlueprintPreUpdateAnimationAnyThread(float DeltaTimeX);//Offset:Discovery.exe+0x327F8B0
	void BlueprintPostUpdateAnimationGameThread(float DeltaTimeX);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent
// 0x0008 (0x00C0 - 0x00B8)
class UEmbarkAnimStateUpdaterComponent : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      PairedMeshComponent;                                      // 0x00B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent"));
		return ptr;
	}


	void StartTicking();//Offset:Discovery.exe+0x327F8B0
	void SetPairedMeshComponent(class USkeletalMeshComponent* Comp);//Offset:Discovery.exe+0x1B33BB0
	void ParallelTick(float DeltaSeconds);//Offset:Discovery.exe+0x327F8B0
	void MainThreadPreParallelTick(float DeltaSeconds);//Offset:Discovery.exe+0x327F8B0
	void MainThreadDebugDraw(float DeltaSeconds);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem
// 0x0010 (0x02E0 - 0x02D0)
class AEmbarkAnimStateUpdaterSystem : public AEmbarkGlobalActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem"));
		return ptr;
	}


	void RegisterStateUpdaterComponent(class UEmbarkAnimStateUpdaterComponent* StateUpdaterComponent, class USkeletalMeshComponent* MeshComponent);//Offset:Discovery.exe+0x1B34190
	void DeregisterStateUpdaterComponent(class UEmbarkAnimStateUpdaterComponent* StateUpdaterComponent);//Offset:Discovery.exe+0x1B340F0
};


// Class EmbarkAnimationRuntime.MockEmbarkAnimStateUpdaterComponent
// 0x0000 (0x00C0 - 0x00C0)
class UMockEmbarkAnimStateUpdaterComponent : public UEmbarkAnimStateUpdaterComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationRuntime.MockEmbarkAnimStateUpdaterComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
