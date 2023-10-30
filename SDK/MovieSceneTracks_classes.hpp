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

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0060 (0x0148 - 0x00E8)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FBoolParameterNameAndCurve>          BoolParameterNamesAndCurves;                              // 0x00E8(0x0010) (ZeroConstructor)
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FVector2DParameterNameAndCurves>     Vector2DParameterNamesAndCurves;                          // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x0118(0x0010) (ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                             // 0x0128(0x0010) (ZeroConstructor)
	TArray<struct FTransformParameterNameAndCurves>    TransformParameterNamesAndCurves;                         // 0x0138(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneParameterSection"));
		return ptr;
	}


	bool RemoveVectorParameter(const struct FName& InParameterName);//Offset:Discovery.exe+0x4A65AB0
	bool RemoveVector2DParameter(const struct FName& InParameterName);//Offset:Discovery.exe+0x4A65B50
	bool RemoveTransformParameter(const struct FName& InParameterName);//Offset:Discovery.exe+0x4A65970
	bool RemoveScalarParameter(const struct FName& InParameterName);//Offset:Discovery.exe+0x4A65C90
	bool RemoveColorParameter(const struct FName& InParameterName);//Offset:Discovery.exe+0x4A65A10
	bool RemoveBoolParameter(const struct FName& InParameterName);//Offset:Discovery.exe+0x4A65BF0
	void GetParameterNames();//Offset:Discovery.exe+0x4A65820
	void AddVectorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue);//Offset:Discovery.exe+0x4A65FF0
	void AddVector2DParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue);//Offset:Discovery.exe+0x4A66130
	void AddTransformParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue);//Offset:Discovery.exe+0x4A65D30
	void AddScalarParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, float InValue);//Offset:Discovery.exe+0x4A66390
	void AddColorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue);//Offset:Discovery.exe+0x4A65EC0
	void AddBoolParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, bool InValue);//Offset:Discovery.exe+0x4A66260
};


// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCameraShakeEvaluator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraShakeEvaluator"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0030 (0x00C0 - 0x0090)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                          SectionToKey;                                             // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMovieScenePropertyBinding                  PropertyBinding;                                          // 0x0098(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00B0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePropertyTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.ByteChannelEvaluatorSystem
// 0x0000 (0x0040 - 0x0040)
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.ByteChannelEvaluatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
// 0x0000 (0x0040 - 0x0040)
class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.DoubleChannelEvaluatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// 0x0000 (0x0040 - 0x0040)
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.FloatChannelEvaluatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTransformOrigin : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneTransformOrigin"));
		return ptr;
	}


	struct FTransform BP_GetTransformOrigin();//Offset:Discovery.exe+0x327F8B0
};


// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// 0x0000 (0x0040 - 0x0040)
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.IntegerChannelEvaluatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0028 (0x0110 - 0x00E8)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                             // 0x00E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  ConstraintBindingID;                                      // 0x00F8(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DConstraintSection"));
		return ptr;
	}


	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);//Offset:Discovery.exe+0x4A59A30
	struct FMovieSceneObjectBindingID GetConstraintBindingID();//Offset:Discovery.exe+0x4A59B10
};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0020 (0x0130 - 0x0110)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FName                                       AttachSocketName;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachComponentName;                                      // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EAttachmentRule                         AttachmentLocationRule;                                   // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EAttachmentRule                         AttachmentRotationRule;                                   // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EAttachmentRule                         AttachmentScaleRule;                                      // 0x012A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EDetachmentRule                         DetachmentLocationRule;                                   // 0x012B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EDetachmentRule                         DetachmentRotationRule;                                   // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EDetachmentRule                         DetachmentScaleRule;                                      // 0x012D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x012E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DAttachSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                       // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DConstraintTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x00A0 - 0x00A0)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DAttachTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x00F0 (0x0200 - 0x0110)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel                     TimingCurve;                                              // 0x0110(0x00E8)
	enum class EMovieScene3DPathSection_Axis           FrontAxisEnum;                                            // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EMovieScene3DPathSection_Axis           UpAxisEnum;                                               // 0x01F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01FA(0x0002) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x01FC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReverse : 1;                                             // 0x01FC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceUpright : 1;                                        // 0x01FC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DPathSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0008 (0x00A8 - 0x00A0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DPathTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertySystem
// 0x0018 (0x0058 - 0x0040)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	class UMovieScenePropertyInstantiatorSystem*       InstantiatorSystem;                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DTransformPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0970 (0x0A58 - 0x00E8)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x00F0(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FMovieSceneDoubleChannel                    Translation[0x3];                                         // 0x00F8(0x00F0)
	struct FMovieSceneDoubleChannel                    Rotation[0x3];                                            // 0x03C8(0x00F0)
	struct FMovieSceneDoubleChannel                    Scale[0x3];                                               // 0x0698(0x00F0)
	struct FMovieSceneFloatChannel                     ManualWeight;                                             // 0x0968(0x00E8)
	bool                                               bUseQuaternionInterpolation;                              // 0x0A50(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DTransformSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScene3DTransformTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0188 (0x0270 - 0x00E8)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData               ActorReferenceData;                                       // 0x00E8(0x00F8)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      // 0x01E0(0x0080) (Deprecated)
	TArray<struct FString>                             ActorGuidStrings;                                         // 0x0260(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneActorReferenceSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneActorReferenceTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x04B8 (0x05A0 - 0x00E8)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                    // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x00F0(0x0004) (Edit)
	float                                              StartOffset;                                              // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioVolume;                                              // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     SoundVolume;                                              // 0x0108(0x00E8)
	struct FMovieSceneFloatChannel                     PitchMultiplier;                                          // 0x01F0(0x00E8)
	TMap<struct FName, struct FMovieSceneFloatChannel> Inputs_Float;                                             // 0x02D8(0x0050)
	TMap<struct FName, struct FMovieSceneStringChannel> Inputs_String;                                            // 0x0328(0x0050)
	TMap<struct FName, struct FMovieSceneBoolChannel>  Inputs_Bool;                                              // 0x0378(0x0050)
	TMap<struct FName, struct FMovieSceneIntegerChannel> Inputs_Int;                                               // 0x03C8(0x0050)
	TMap<struct FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger;                                           // 0x0418(0x0050)
	struct FMovieSceneActorReferenceData               AttachActorData;                                          // 0x0468(0x00F8)
	bool                                               bLooping;                                                 // 0x0560(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressSubtitles;                                       // 0x0561(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAttenuation;                                     // 0x0562(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0563(0x0005) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0568(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnQueueSubtitles;                                         // 0x0570(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          // 0x0580(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                   // 0x0590(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneAudioSection"));
		return ptr;
	}


	void SetStartOffset(const struct FFrameNumber& InStartOffset);//Offset:Discovery.exe+0x4A5AA90
	void SetSound(class USoundBase* InSound);//Offset:Discovery.exe+0x4A5AB50
	struct FFrameNumber GetStartOffset();//Offset:Discovery.exe+0x4A5AA60
	class USoundBase* GetSound();//Offset:Discovery.exe+0x4A5AB30
};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  AudioSections;                                            // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneAudioTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneBoolPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneBoolTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBytePropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneBytePropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x00E8 (0x01D0 - 0x00E8)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneByteChannel                      ByteCurve;                                                // 0x00F0(0x00E0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneByteSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneByteTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (0x0128 - 0x00E8)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                 // 0x00E8(0x0020) (Edit)
	class UCameraAnim*                                 CameraAnim;                                               // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0118(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x011C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0120(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraAnimSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                       // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraAnimTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x00A8 (0x0190 - 0x00E8)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	bool                                               bLockPreviousCamera;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FGuid                                       CameraGuid;                                               // 0x00F4(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  CameraBindingID;                                          // 0x0104(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FTransform                                  InitialCameraCutTransform;                                // 0x0120(0x0060) (IsPlainOldData)
	bool                                               bHasInitialCameraCutTransform;                            // 0x0180(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0181(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraCutSection"));
		return ptr;
	}


	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);//Offset:Discovery.exe+0x4A5BAE0
	struct FMovieSceneObjectBindingID GetCameraBindingID();//Offset:Discovery.exe+0x4A5BBC0
};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	bool                                               bCanBlend;                                                // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraCutTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// 0x0078 (0x00C8 - 0x0050)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0050(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraCutTrackInstance"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0050 (0x0138 - 0x00E8)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                // 0x00E8(0x0028) (Edit)
	class UClass*                                      ShakeClass;                                               // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0118(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	enum class ECameraShakePlaySpace                   PlaySpace;                                                // 0x011C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0120(0x0018) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraShakeSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// 0x0028 (0x0110 - 0x00E8)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                // 0x00E8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                      // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// 0x00D0 (0x01B8 - 0x00E8)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSourceTriggerChannel  Channel;                                                  // 0x00E8(0x00D0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                      // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCameraShakeTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0028 (0x0150 - 0x0128)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	struct FString                                     ShotDisplayName;                                          // 0x0128(0x0010) (ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0138(0x0018) (Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCinematicShotSection"));
		return ptr;
	}


	void SetShotDisplayName(const struct FString& InShotDisplayName);//Offset:Discovery.exe+0x4A5E190
	struct FString GetShotDisplayName();//Offset:Discovery.exe+0x4A5E310
};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x00A0 - 0x00A0)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCinematicShotTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneColorPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x03A8 (0x0490 - 0x00E8)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneFloatChannel                     RedCurve;                                                 // 0x00F0(0x00E8)
	struct FMovieSceneFloatChannel                     GreenCurve;                                               // 0x01D8(0x00E8)
	struct FMovieSceneFloatChannel                     BlueCurve;                                                // 0x02C0(0x00E8)
	struct FMovieSceneFloatChannel                     AlphaCurve;                                               // 0x03A8(0x00E8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneColorSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                            // 0x00C0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneColorTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// 0x0180 (0x01C0 - 0x0040)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0040(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneComponentAttachmentSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// 0x01E0 (0x0220 - 0x0040)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0040(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneComponentMobilitySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneComponentTransformSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCVarSection
// 0x0058 (0x0140 - 0x00E8)
class UMovieSceneCVarSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneCVarOverrides                    ConsoleVariables;                                         // 0x00F0(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCVarSection"));
		return ptr;
	}


	void SetFromString(const struct FString& InString);//Offset:Discovery.exe+0x4A5F050
	struct FString GetString();//Offset:Discovery.exe+0x4A5EFD0
};


// Class MovieSceneTracks.MovieSceneCVarTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneCVarTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCVarTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCVarTrackInstance
// 0x0050 (0x00A0 - 0x0050)
class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneCVarTrackInstance"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDataLayerSection
// 0x0020 (0x0108 - 0x00E8)
class UMovieSceneDataLayerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	TArray<struct FActorDataLayer>                     DataLayers;                                               // 0x00F0(0x0010) (Edit, ZeroConstructor)
	enum class EDataLayerRuntimeState                  DesiredState;                                             // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EDataLayerRuntimeState                  PrerollState;                                             // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlushOnUnload;                                           // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0103(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDataLayerSection"));
		return ptr;
	}


	void SetPrerollState(enum class EDataLayerRuntimeState InPrerollState);//Offset:Discovery.exe+0x4A5F910
	void SetFlushOnUnload(bool bFlushOnUnload);//Offset:Discovery.exe+0x4A5F840
	void SetDesiredState(enum class EDataLayerRuntimeState InDesiredState);//Offset:Discovery.exe+0x4A5F9D0
	void SetDataLayers(TArray<struct FActorDataLayer> InDataLayers);//Offset:Discovery.exe+0x4A5F640
	enum class EDataLayerRuntimeState GetPrerollState();//Offset:Discovery.exe+0x4A5F9A0
	bool GetFlushOnUnload();//Offset:Discovery.exe+0x4A5F8E0
	enum class EDataLayerRuntimeState GetDesiredState();//Offset:Discovery.exe+0x44CD220
	TArray<struct FActorDataLayer> GetDataLayers();//Offset:Discovery.exe+0x4A5F7C0
};


// Class MovieSceneTracks.MovieSceneDataLayerSystem
// 0x0090 (0x00D0 - 0x0040)
class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0040(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDataLayerSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDataLayerTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDataLayerTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// 0x0018 (0x0058 - 0x0040)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDoublePropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDoublePropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDoubleSection
// 0x00F8 (0x01E0 - 0x00E8)
class UMovieSceneDoubleSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneDoubleChannel                    DoubleCurve;                                              // 0x00F0(0x00F0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDoubleSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDoubleTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDoubleTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEnumPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumSection
// 0x00E8 (0x01D0 - 0x00E8)
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneByteChannel                      EnumCurve;                                                // 0x00F0(0x00E0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEnumSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEnumTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEulerTransformTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSectionBase
// 0x0000 (0x00E8 - 0x00E8)
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEventSectionBase"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// 0x0030 (0x0118 - 0x00E8)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneEvent                            Event;                                                    // 0x00F0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEventRepeaterSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0148 (0x0230 - 0x00E8)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   // 0x00E8(0x0078) (Deprecated)
	struct FMovieSceneEventSectionData                 EventData;                                                // 0x0160(0x00D0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEventSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSystem
// 0x0050 (0x0090 - 0x0040)
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEventSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// 0x0000 (0x0090 - 0x0090)
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePreSpawnEventSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// 0x0000 (0x0090 - 0x0090)
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePostSpawnEventSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// 0x0000 (0x0090 - 0x0090)
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePostEvalEventSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0028 (0x00B8 - 0x0090)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x00A0(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	enum class EFireEventsAtPosition                   EventPosition;                                            // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00A8(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEventTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTriggerSection
// 0x00D8 (0x01C0 - 0x00E8)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneEventChannel                     EventChannel;                                             // 0x00F0(0x00D0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneEventTriggerSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0100 (0x01E8 - 0x00E8)
class UMovieSceneFadeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x00E8(0x00E8)
	struct FLinearColor                                FadeColor;                                                // 0x01D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFadeAudio : 1;                                           // 0x01E0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFadeSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFloatTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFadeTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFloatPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x00F0 (0x01D8 - 0x00E8)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x00F0(0x00E8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFloatSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneInitialValueSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneInitialValueSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneIntegerPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x00E0 (0x01C8 - 0x00E8)
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneIntegerChannel                   IntegerCurve;                                             // 0x00F0(0x00D8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneIntegerSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneIntegerTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// 0x01A8 (0x01E8 - 0x0040)
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0040(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0020 (0x0108 - 0x00E8)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	enum class ELevelVisibility                        Visibility;                                               // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<struct FName>                               LevelNames;                                               // 0x00F8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneLevelVisibilitySection"));
		return ptr;
	}


	void SetVisibility(enum class ELevelVisibility InVisibility);//Offset:Discovery.exe+0x4A64690
	void SetLevelNames(TArray<struct FName> InLevelNames);//Offset:Discovery.exe+0x4A64490
	enum class ELevelVisibility GetVisibility();//Offset:Discovery.exe+0x4A64720
	TArray<struct FName> GetLevelNames();//Offset:Discovery.exe+0x4A64610
};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// 0x0168 (0x01A8 - 0x0040)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0040(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneLevelVisibilitySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneMaterialTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0010 (0x00B0 - 0x00A0)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	class UMaterialParameterCollection*                MPC;                                                      // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0010 (0x00B0 - 0x00A0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	int                                                MaterialIndex;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneComponentMaterialTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// 0x0058 (0x0098 - 0x0040)
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneObjectPropertySection
// 0x0108 (0x01F0 - 0x00E8)
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                ObjectChannel;                                            // 0x00E8(0x0108)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneObjectPropertySection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	class UClass*                                      PropertyClass;                                            // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneObjectPropertyTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneParticleParameterTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x00E0 (0x01C8 - 0x00E8)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel                  ParticleKeys;                                             // 0x00E8(0x00E0)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneParticleSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  ParticleSections;                                         // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneParticleTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// 0x0028 (0x0090 - 0x0068)
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// 0x0028 (0x0090 - 0x0068)
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
// 0x00C0 (0x0128 - 0x0068)
class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0068(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// 0x0028 (0x0090 - 0x0068)
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// 0x00C0 (0x0128 - 0x0068)
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0068(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// 0x0048 (0x00B0 - 0x0068)
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
// 0x0050 (0x0080 - 0x0030)
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Result;                                                   // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Failure;                                                  // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	class UMovieSceneSequencePlayer*                   SequencePlayer;                                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SceneComponent;                                           // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction"));
		return ptr;
	}


	class UMovieSceneAsyncAction_SequencePrediction* STATIC_PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);//Offset:Discovery.exe+0x4A69900
	class UMovieSceneAsyncAction_SequencePrediction* STATIC_PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime);//Offset:Discovery.exe+0x4A697D0
	class UMovieSceneAsyncAction_SequencePrediction* STATIC_PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);//Offset:Discovery.exe+0x4A696A0
	class UMovieSceneAsyncAction_SequencePrediction* STATIC_PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime);//Offset:Discovery.exe+0x4A69570
};


// Class MovieSceneTracks.MovieScenePredictionSystem
// 0x00B0 (0x00F0 - 0x0040)
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0040(0x0090) MISSED OFFSET
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;                                       // 0x00D0(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;                                    // 0x00E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePredictionSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// 0x0108 (0x01F0 - 0x00E8)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                MaterialChannel;                                          // 0x00E8(0x0108)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	int                                                MaterialIndex;                                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// 0x0208 (0x0248 - 0x0040)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x208];                                     // 0x0040(0x0208) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0238 (0x0320 - 0x00E8)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                   // 0x00E8(0x0128) (Edit, BlueprintVisible)
	class UAnimSequence*                               AnimSequence;                                             // 0x0210(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // 0x0218(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartOffset;                                              // 0x0220(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x0224(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0228(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x022C(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x0230(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     StartLocationOffset;                                      // 0x0238(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StartRotationOffset;                                      // 0x0250(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchWithPrevious;                                       // 0x0268(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	struct FName                                       MatchedBoneName;                                          // 0x026C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	struct FVector                                     MatchedLocationOffset;                                    // 0x0278(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MatchedRotationOffset;                                    // 0x0290(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchTranslation;                                        // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchIncludeZHeight;                                     // 0x02A9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchRotationYaw;                                        // 0x02AA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchRotationPitch;                                      // 0x02AB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchRotationRoll;                                       // 0x02AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x73];                                      // 0x02AD(0x0073) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0058 (0x00E8 - 0x0090)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0098(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bUseLegacySectionIndexBlend;                              // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;                                         // 0x00B0(0x0030)
	bool                                               bBlendFirstChildOfRoot;                                   // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x00E8 (0x01D0 - 0x00E8)
class UMovieSceneSlomoSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x00E8(0x00E8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneSlomoSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneSlomoTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringSection
// 0x00E8 (0x01D0 - 0x00E8)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel                    StringCurve;                                              // 0x00E8(0x00E8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneStringSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneStringTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// 0x0038 (0x0078 - 0x0040)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneTransformOriginSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneTransformTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatVectorSection
// 0x03B0 (0x0498 - 0x00E8)
class UMovieSceneFloatVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneFloatChannel                     Curves[0x4];                                              // 0x00F0(0x00E8)
	int                                                ChannelsUsed;                                             // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0494(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFloatVectorSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDoubleVectorSection
// 0x03D0 (0x04B8 - 0x00E8)
class UMovieSceneDoubleVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneDoubleChannel                    Curves[0x4];                                              // 0x00F0(0x00F0)
	int                                                ChannelsUsed;                                             // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDoubleVectorSection"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatVectorTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneFloatVectorTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneDoubleVectorTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x00C8 - 0x00C8)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneVisibilityTrack"));
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// 0x0050 (0x0090 - 0x0040)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem"));
		return ptr;
	}

};


// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// 0x0038 (0x0078 - 0x0040)
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneTracks.WeightAndEasingEvaluatorSystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
