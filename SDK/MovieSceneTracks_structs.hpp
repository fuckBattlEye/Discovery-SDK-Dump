#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6
};


// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3
};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// 0x00E0
struct FBoolParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneBoolChannel                      ParameterCurve;                                           // 0x0008(0x00D8)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x00F0
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     ParameterCurve;                                           // 0x0008(0x00E8)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// 0x01D8
struct FVector2DParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     XCurve;                                                   // 0x0008(0x00E8)
	struct FMovieSceneFloatChannel                     YCurve;                                                   // 0x00F0(0x00E8)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x02C0
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     XCurve;                                                   // 0x0008(0x00E8)
	struct FMovieSceneFloatChannel                     YCurve;                                                   // 0x00F0(0x00E8)
	struct FMovieSceneFloatChannel                     ZCurve;                                                   // 0x01D8(0x00E8)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x03A8
struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     RedCurve;                                                 // 0x0008(0x00E8)
	struct FMovieSceneFloatChannel                     GreenCurve;                                               // 0x00F0(0x00E8)
	struct FMovieSceneFloatChannel                     BlueCurve;                                                // 0x01D8(0x00E8)
	struct FMovieSceneFloatChannel                     AlphaCurve;                                               // 0x02C0(0x00E8)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// 0x0830
struct FTransformParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     Translation[0x3];                                         // 0x0008(0x00E8)
	struct FMovieSceneFloatChannel                     Rotation[0x3];                                            // 0x02C0(0x00E8)
	struct FMovieSceneFloatChannel                     Scale[0x3];                                               // 0x0578(0x00E8)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x0004
struct FMovieSceneTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// 0x0028
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID                  Object;                                                   // 0x0000(0x0018) (Edit)
	struct FName                                       ComponentName;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// 0x00A8 (0x00F8 - 0x0050)
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                 // 0x0050(0x0010) (ZeroConstructor)
	struct FMovieSceneActorReferenceKey                DefaultValue;                                             // 0x0060(0x0028)
	TArray<struct FMovieSceneActorReferenceKey>        KeyValues;                                                // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0098(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// 0x0098 (0x00E8 - 0x0050)
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Values;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     DefaultValue;                                             // 0x0070(0x0010) (ZeroConstructor)
	bool                                               bHasDefaultValue;                                         // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x0081(0x0067) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayScale;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0028
struct FMovieSceneCameraShakeSectionData
{
	class UClass*                                      ShakeClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0010(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// 0x0028
struct FMovieSceneCameraShakeSourceTrigger
{
	class UClass*                                      ShakeClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// 0x0080 (0x00D0 - 0x0050)
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                 // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0070(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCVarOverrides
// 0x0050
struct FMovieSceneCVarOverrides
{
	TMap<struct FString, struct FString>               ValuesByCVar;                                             // 0x0000(0x0050) (Edit)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// 0x0028
struct FMovieSceneEventPtrs
{
	class UFunction*                                   Function;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) UNKNOWN PROPERTY: BoundObjectProperty
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// 0x0028
struct FMovieSceneEvent
{
	struct FMovieSceneEventPtrs                        Ptrs;                                                     // 0x0000(0x0028)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0028
struct FMovieSceneEventParameters
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0030
struct FEventPayload
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneEventParameters                  Parameters;                                               // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0080 (0x00D0 - 0x0050)
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FEventPayload>                       KeyValues;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0070(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// 0x0080 (0x00D0 - 0x0050)
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                 // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvent>                    KeyValues;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0070(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// 0x0000 (0x00E0 - 0x00E0)
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x0128
struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                FirstLoopStartFrameOffset;                                // 0x0008(0x0004) (Edit, BlueprintVisible)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x000C(0x0004) (Edit, BlueprintVisible)
	struct FFrameNumber                                EndFrameOffset;                                           // 0x0010(0x0004) (Edit, BlueprintVisible)
	float                                              PlayRate;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UMirrorDataTable*                            MirrorDataTable;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0030(0x00E8)
	bool                                               bSkipAnimNotifiers;                                       // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceCustomMode;                                         // 0x0119(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	float                                              StartOffset;                                              // 0x011C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x0120(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// 0x0030
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0060 (0x0080 - 0x0020)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FScalarParameterNameAndCurve>        Scalars;                                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FBoolParameterNameAndCurve>          Bools;                                                    // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FVector2DParameterNameAndCurves>     Vector2Ds;                                                // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       Vectors;                                                  // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        Colors;                                                   // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FTransformParameterNameAndCurves>    Transforms;                                               // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x0108 (0x0128 - 0x0020)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID                  PathBindingID;                                            // 0x0020(0x0018)
	struct FMovieSceneFloatChannel                     TimingCurve;                                              // 0x0038(0x00E8)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0120(0x0004) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x0124(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x0124(0x0001)
	unsigned char                                      bForceUpright : 1;                                        // 0x0124(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0038 (0x0040 - 0x0008)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0020(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0024(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0038 (0x0040 - 0x0008)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                 // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0020(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0024(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector3f                                   Scale;                                                    // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0014(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0058 (0x0060 - 0x0008)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   Scale;                                                    // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0044(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x0110 (0x0130 - 0x0020)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0020(0x0018)
	struct FMovieSceneActorReferenceData               ActorReferenceData;                                       // 0x0038(0x00F8)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAudioSection*                     AudioSection;                                             // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraAnimSectionData            SourceData;                                               // 0x0020(0x0020)
	struct FFrameNumber                                SectionStartTime;                                         // 0x0040(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData           SourceData;                                               // 0x0020(0x0028)
	struct FFrameNumber                                SectionStartTime;                                         // 0x0048(0x0004)
	struct FFrameNumber                                SectionEndTime;                                           // 0x004C(0x0004)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FFrameNumber>                        TriggerTimes;                                             // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;                                            // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData           SourceData;                                               // 0x0020(0x0028)
	struct FFrameNumber                                SectionStartTime;                                         // 0x0048(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0030 (0x0038 - 0x0008)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x03A8 (0x03E0 - 0x0038)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     Curves[0x4];                                              // 0x0038(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// 0x0010
struct FMovieSceneEventPayloadVariable
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
// 0x0048
struct FMovieSceneEventTriggerData
{
	struct FMovieSceneEventPtrs                        Ptrs;                                                     // 0x0000(0x0028)
	struct FGuid                                       ObjectBindingID;                                          // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x00D8 (0x00F8 - 0x0020)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData                 EventData;                                                // 0x0020(0x00D0)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x00F0(0x0001)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x00F0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x0100 (0x0120 - 0x0020)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     FadeCurve;                                                // 0x0020(0x00E8)
	struct FLinearColor                                FadeColor;                                                // 0x0108(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFadeAudio : 1;                                           // 0x0118(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x0008 (0x0088 - 0x0080)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
	class UMaterialParameterCollection*                MPC;                                                      // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// 0x0108 (0x0140 - 0x0038)
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel                ObjectChannel;                                            // 0x0038(0x0108)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0088 - 0x0080)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	int                                                MaterialIndex;                                            // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0080 - 0x0080)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x00E0 (0x0100 - 0x0020)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel                  ParticleKeys;                                             // 0x0020(0x00E0)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// 0x0110 (0x0130 - 0x0020)
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
	int                                                MaterialIndex;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FMovieSceneObjectPathChannel                MaterialChannel;                                          // 0x0028(0x0108)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x00D8 (0x0110 - 0x0038)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel                      BoolCurve;                                                // 0x0038(0x00D8)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x00E8 (0x0120 - 0x0038)
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel                    StringCurve;                                              // 0x0038(0x00E8)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x0130 - 0x0128)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	struct FFrameNumber                                SectionStartTime;                                         // 0x0128(0x0004)
	struct FFrameNumber                                SectionEndTime;                                           // 0x012C(0x0004)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x0130 (0x0150 - 0x0020)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                   // 0x0020(0x0130)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x00E8 (0x0108 - 0x0020)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     SlomoCurve;                                               // 0x0020(0x00E8)
};

// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
// 0x0008
struct FLevelVisibilityComponentData
{
	class UMovieSceneLevelVisibilitySection*           Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneDataLayerComponentData
// 0x0008
struct FMovieSceneDataLayerComponentData
{
	class UMovieSceneDataLayerSection*                 Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2fKeyStruct
// 0x0008 (0x0030 - 0x0028)
struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
	struct FVector2f                                   Vector;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector3fKeyStruct
// 0x0010 (0x0038 - 0x0028)
struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
	struct FVector3f                                   Vector;                                                   // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4fKeyStruct
// 0x0018 (0x0040 - 0x0028)
struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector4f                                   Vector;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0010 (0x0038 - 0x0028)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector3dKeyStruct
// 0x0018 (0x0040 - 0x0028)
struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
	struct FVector3d                                   Vector;                                                   // 0x0028(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4dKeyStruct
// 0x0028 (0x0050 - 0x0028)
struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector4d                                   Vector;                                                   // 0x0030(0x0020) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0000 (0x0110 - 0x0110)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
