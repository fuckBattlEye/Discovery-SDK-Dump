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

// Class TemplateSequence.TemplateSequence
// 0x00A8 (0x0108 - 0x0060)
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: BoundActorClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x0090(0x0028) UNKNOWN PROPERTY: BoundPreviewActor
	TMap<struct FGuid, struct FName>                   BoundActorComponents;                                     // 0x00B8(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequence"));
		return ptr;
	}

};


// Class TemplateSequence.CameraAnimationSequence
// 0x0000 (0x0108 - 0x0108)
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.CameraAnimationSequence"));
		return ptr;
	}

};


// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
// 0x07E8 (0x0810 - 0x0028)
class UCameraAnimationSequenceCameraStandIn : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              FieldOfView;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x0034(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              AspectRatio;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0040(0x06C0)
	float                                              PostProcessBlendWeight;                                   // 0x0700(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FCameraFilmbackSettings                     Filmback;                                                 // 0x0704(0x000C)
	struct FCameraLensSettings                         LensSettings;                                             // 0x0710(0x0018)
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x0728(0x0068)
	float                                              CurrentFocalLength;                                       // 0x0790(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0794(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x74];                                      // 0x079C(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.CameraAnimationSequenceCameraStandIn"));
		return ptr;
	}

};


// Class TemplateSequence.CameraAnimationSequencePlayer
// 0x03D0 (0x03F8 - 0x0028)
class UCameraAnimationSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0028(0x0280) MISSED OFFSET
	class UObject*                                     BoundObjectOverride;                                      // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMovieSceneSequence*                         Sequence;                                                 // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x02B8(0x00E0) (Transient)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0398(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.CameraAnimationSequencePlayer"));
		return ptr;
	}

};


// Class TemplateSequence.CameraAnimationSequenceSubsystem
// 0x0070 (0x00A0 - 0x0030)
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.CameraAnimationSequenceSubsystem"));
		return ptr;
	}

};


// Class TemplateSequence.SequenceCameraShakePattern
// 0x0030 (0x0058 - 0x0028)
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*                    Sequence;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomSegmentDuration;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomSegment;                                           // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class UCameraAnimationSequencePlayer*              Player;                                                   // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                            // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.SequenceCameraShakePattern"));
		return ptr;
	}

};


// Class TemplateSequence.SequenceCameraShakeTestUtil
// 0x0000 (0x0028 - 0x0028)
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.SequenceCameraShakeTestUtil"));
		return ptr;
	}


	bool STATIC_GetPostProcessBlendCache(class APlayerController* PlayerController, int PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight);//Offset:Discovery.exe+0x29E0900
	struct FMinimalViewInfo STATIC_GetLastFrameCameraCachePOV(class APlayerController* PlayerController);//Offset:Discovery.exe+0x29E0AC0
	struct FMinimalViewInfo STATIC_GetCameraCachePOV(class APlayerController* PlayerController);//Offset:Discovery.exe+0x29E0CB0
};


// Class TemplateSequence.TemplateSequenceActor
// 0x0058 (0x0320 - 0x02C8)
class ATemplateSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x02D8(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class UTemplateSequencePlayer*                     SequencePlayer;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             TemplateSequence;                                         // 0x02F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTemplateSequenceBindingOverrideData        BindingOverride;                                          // 0x0310(0x000C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x4];                                       // 0x031C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequenceActor"));
		return ptr;
	}


	void SetSequence(class UTemplateSequence* InSequence);//Offset:Discovery.exe+0x29E1410
	void SetBinding(class AActor* Actor, bool bOverridesDefault);//Offset:Discovery.exe+0x29E12F0
	class UTemplateSequence* LoadSequence();//Offset:Discovery.exe+0x29E14B0
	class UTemplateSequencePlayer* GetSequencePlayer();//Offset:Discovery.exe+0x29E13E0
	class UTemplateSequence* GetSequence();//Offset:Discovery.exe+0x29E14E0
};


// Class TemplateSequence.TemplateSequencePlayer
// 0x0008 (0x04D8 - 0x04D0)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequencePlayer"));
		return ptr;
	}


	class UTemplateSequencePlayer* STATIC_CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);//Offset:Discovery.exe+0x29E1AD0
};


// Class TemplateSequence.TemplateSequenceSection
// 0x0018 (0x0140 - 0x0128)
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	TArray<struct FTemplateSectionPropertyScale>       PropertyScales;                                           // 0x0130(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequenceSection"));
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequenceSystem
// 0x0070 (0x00B0 - 0x0040)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequenceSystem"));
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// 0x0058 (0x0098 - 0x0040)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem"));
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// 0x0050 (0x0090 - 0x0040)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem"));
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequenceTrack
// 0x0000 (0x00A0 - 0x00A0)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TemplateSequence.TemplateSequenceTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
