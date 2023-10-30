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

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSignedObject"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0098 (0x00E8 - 0x0050)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x0050(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x0058(0x0038) (Edit)
	struct FMovieSceneFrameRange                       SectionRange;                                             // 0x0090(0x0010) (Edit)
	struct FFrameNumber                                PreRollFrames;                                            // 0x00A0(0x0004) (Edit)
	struct FFrameNumber                                PostRollFrames;                                           // 0x00A4(0x0004) (Edit)
	int                                                RowIndex;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x00B0(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00C4(0x0001) (Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	bool                                               bSupportsInfiniteRange;                                   // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x00C9(0x0002)
	unsigned char                                      UnknownData03[0x1D];                                      // 0x00CB(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSection"));
		return ptr;
	}


	void SetRowIndex(int NewRowIndex);//Offset:Discovery.exe+0x487A890
	void SetPreRollFrames(int InPreRollFrames);//Offset:Discovery.exe+0x487A4A0
	void SetPostRollFrames(int InPostRollFrames);//Offset:Discovery.exe+0x487A3D0
	void SetOverlapPriority(int NewPriority);//Offset:Discovery.exe+0x487A7D0
	void SetIsLocked(bool bInIsLocked);//Offset:Discovery.exe+0x487A5A0
	void SetIsActive(bool bInIsActive);//Offset:Discovery.exe+0x487A6A0
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode);//Offset:Discovery.exe+0x487AA00
	void SetBlendType(enum class EMovieSceneBlendType InBlendType);//Offset:Discovery.exe+0x487A930
	bool IsLocked();//Offset:Discovery.exe+0x487A570
	bool IsActive();//Offset:Discovery.exe+0x487A670
	int GetRowIndex();//Offset:Discovery.exe+0x487A870
	int GetPreRollFrames();//Offset:Discovery.exe+0x19F99D0
	int GetPostRollFrames();//Offset:Discovery.exe+0x19F99A0
	int GetOverlapPriority();//Offset:Discovery.exe+0x487A7A0
	enum class EMovieSceneCompletionMode GetCompletionMode();//Offset:Discovery.exe+0x487AAA0
	struct FOptionalMovieSceneBlendType GetBlendType();//Offset:Discovery.exe+0x487A9D0
};


// Class MovieScene.MovieSceneHookSection
// 0x0018 (0x0100 - 0x00E8)
class UMovieSceneHookSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET
	unsigned char                                      bRequiresRangedHook : 1;                                  // 0x00F8(0x0001)
	unsigned char                                      bRequiresTriggerHooks : 1;                                // 0x00F8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneHookSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0040 (0x0090 - 0x0050)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0054(0x0001) MISSED OFFSET
	bool                                               bIsEvalDisabled;                                          // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	TArray<int>                                        RowsDisabled;                                             // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0068(0x0004) MISSED OFFSET
	struct FGuid                                       EvaluationFieldGuid;                                      // 0x006C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FMovieSceneTrackEvaluationField             EvaluationField;                                          // 0x0080(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneTrack"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0090 - 0x0090)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneNameableTrack"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*                     CompiledData;                                             // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class EMovieSceneCompletionMode               DefaultCompletionMode;                                    // 0x0058(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bParentContextsAreSignificant;                            // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayableDirectly;                                        // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class EMovieSceneSequenceFlags                SequenceFlags;                                            // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSequence"));
		return ptr;
	}


	struct FMovieSceneTimecodeSource GetEarliestTimecodeSource();//Offset:Discovery.exe+0x487B7F0
	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const struct FName& InBindingName);//Offset:Discovery.exe+0x487B850
	struct FMovieSceneObjectBindingID FindBindingByTag(const struct FName& InBindingName);//Offset:Discovery.exe+0x487B930
};


// Class MovieScene.MovieSceneSequencePlayer
// 0x04A8 (0x04D0 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0028(0x0210) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                            // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                   // 0x0288(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	unsigned char                                      bReversePlayback : 1;                                     // 0x028C(0x0001) (Net)
	unsigned char                                      UnknownData02[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FFrameNumber                                StartTime;                                                // 0x0298(0x0004) (Net)
	int                                                DurationFrames;                                           // 0x029C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DurationSubFrames;                                        // 0x02A0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x02A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x02A8(0x0014) (Net)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x02C0(0x00E0) (Transient)
	unsigned char                                      UnknownData04[0x80];                                      // 0x03A0(0x0080) MISSED OFFSET
	struct FMovieSceneSequenceReplProperties           NetSyncProps;                                             // 0x0420(0x0010) (Net)
	TScriptInterface<class UMovieScenePlaybackClient>  PlaybackClient;                                           // 0x0430(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class UMovieSceneSequenceTickManager*              TickManager;                                              // 0x0440(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x88];                                      // 0x0448(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSequencePlayer"));
		return ptr;
	}


	void StopAtCurrentTime();//Offset:Discovery.exe+0x48808A0
	void Stop();//Offset:Discovery.exe+0x48808C0
	void SetTimeRange(float StartTime, float Duration);//Offset:Discovery.exe+0x4880410
	void SetPlayRate(float PlayRate);//Offset:Discovery.exe+0x487F3E0
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);//Offset:Discovery.exe+0x4880150
	void SetFrameRate(const struct FFrameRate& FrameRate);//Offset:Discovery.exe+0x48806E0
	void SetFrameRange(int StartFrame, int Duration, float SubFrames);//Offset:Discovery.exe+0x48804F0
	void SetDisableCameraCuts(bool bInDisableCameraCuts);//Offset:Discovery.exe+0x487F310
	void ScrubToSeconds(float TimeInSeconds);//Offset:Discovery.exe+0x487FBA0
	bool ScrubToMarkedFrame(const struct FString& InLabel);//Offset:Discovery.exe+0x487F700
	void ScrubToFrame(const struct FFrameTime& NewPosition);//Offset:Discovery.exe+0x487FF00
	void Scrub();//Offset:Discovery.exe+0x48808E0
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);//Offset:Discovery.exe+0x487EE80
	void RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime);//Offset:Discovery.exe+0x487EDE0
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);//Offset:Discovery.exe+0x487EF20
	void RestoreState();//Offset:Discovery.exe+0x4880130
	void PlayToSeconds(float TimeInSeconds);//Offset:Discovery.exe+0x487FCC0
	bool PlayToMarkedFrame(const struct FString& InLabel);//Offset:Discovery.exe+0x487F8C0
	void PlayToFrame(const struct FFrameTime& NewPosition);//Offset:Discovery.exe+0x4880020
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams);//Offset:Discovery.exe+0x4880280
	void PlayReverse();//Offset:Discovery.exe+0x48809E0
	void PlayLooping(int NumLoops);//Offset:Discovery.exe+0x4880920
	void Play();//Offset:Discovery.exe+0x4880A00
	void Pause();//Offset:Discovery.exe+0x4880900
	void JumpToSeconds(float TimeInSeconds);//Offset:Discovery.exe+0x487FA80
	bool JumpToMarkedFrame(const struct FString& InLabel);//Offset:Discovery.exe+0x487F540
	void JumpToFrame(const struct FFrameTime& NewPosition);//Offset:Discovery.exe+0x487FDE0
	bool IsReversed();//Offset:Discovery.exe+0x487F4B0
	bool IsPlaying();//Offset:Discovery.exe+0x487F510
	bool IsPaused();//Offset:Discovery.exe+0x487F4E0
	void GoToEndAndStop();//Offset:Discovery.exe+0x4880880
	struct FQualifiedFrameTime GetStartTime();//Offset:Discovery.exe+0x4880690
	struct FString GetSequenceName(bool bAddClientInfo);//Offset:Discovery.exe+0x487F000
	class UMovieSceneSequence* GetSequence();//Offset:Discovery.exe+0x487F0E0
	float GetPlayRate();//Offset:Discovery.exe+0x487F480
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);//Offset:Discovery.exe+0x487F100
	struct FFrameRate GetFrameRate();//Offset:Discovery.exe+0x4880780
	int GetFrameDuration();//Offset:Discovery.exe+0x48807B0
	struct FQualifiedFrameTime GetEndTime();//Offset:Discovery.exe+0x4880620
	struct FQualifiedFrameTime GetDuration();//Offset:Discovery.exe+0x48807E0
	bool GetDisableCameraCuts();//Offset:Discovery.exe+0x487F2E0
	struct FQualifiedFrameTime GetCurrentTime();//Offset:Discovery.exe+0x4880830
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);//Offset:Discovery.exe+0x487F1E0
	void ChangePlaybackDirection();//Offset:Discovery.exe+0x48809C0
};


// Class MovieScene.MovieSceneSubSection
// 0x0040 (0x0128 - 0x00E8)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               // 0x00E8(0x0024) (Edit, BlueprintVisible, Config)
	float                                              StartOffset;                                              // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      NetworkMask;                                              // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	class UMovieSceneSequence*                         SubSequence;                                              // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSubSection"));
		return ptr;
	}


	void SetSequence(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x4882F20
	class UMovieSceneSequence* GetSequence();//Offset:Discovery.exe+0x4882FC0
};


// Class MovieScene.MovieSceneEntitySystem
// 0x0018 (0x0040 - 0x0028)
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEntitySystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSubTrack"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCustomClockSource
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCustomClockSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneCustomClockSource"));
		return ptr;
	}


	void OnTick(float DeltaSeconds, float InPlayRate);//Offset:Discovery.exe+0x4870BD0
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);//Offset:Discovery.exe+0x4870A70
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);//Offset:Discovery.exe+0x4870B20
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);//Offset:Discovery.exe+0x4870960
};


// Class MovieScene.MovieSceneDeterminismSource
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneDeterminismSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneDeterminismSource"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEntityProvider
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEntityProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEntityProvider"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEvaluationHook
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEvaluationHook : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEvaluationHook"));
		return ptr;
	}

};


// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (0x0028 - 0x0028)
class UMovieScenePlaybackClient : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieScenePlaybackClient"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackTemplateProducer
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrackTemplateProducer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneTrackTemplateProducer"));
		return ptr;
	}

};


// Class MovieScene.NodeAndChannelMappings
// 0x0000 (0x0028 - 0x0028)
class UNodeAndChannelMappings : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.NodeAndChannelMappings"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneNodeGroup
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroup : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneNodeGroup"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneNodeGroupCollection
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroupCollection : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneNodeGroupCollection"));
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x00F8 (0x0148 - 0x0050)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0070(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                            // 0x0080(0x0050)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x00D0(0x0010) (ExportObject, ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMovieSceneFrameRange                       SelectionRange;                                           // 0x00E8(0x0010)
	struct FMovieSceneFrameRange                       PlaybackRange;                                            // 0x00F8(0x0010)
	struct FFrameRate                                  TickResolution;                                           // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  DisplayRate;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	enum class EMovieSceneEvaluationType               EvaluationType;                                           // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class EUpdateClockSource                      ClockSource;                                              // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FSoftObjectPath                             CustomClockSourcePath;                                    // 0x0120(0x0018) (ZeroConstructor)
	TArray<struct FMovieSceneMarkedFrame>              MarkedFrames;                                             // 0x0138(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieScene"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (0x0090 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneBindingOverrides"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneBindingOwnerInterface"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBlenderSystem
// 0x0028 (0x0068 - 0x0040)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneBlenderSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBoolSection
// 0x00E0 (0x01C8 - 0x00E8)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                               DefaultValue;                                             // 0x00E8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FMovieSceneBoolChannel                      BoolCurve;                                                // 0x00F0(0x00D8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneBoolSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEntityInstantiatorSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEntityInstantiatorSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneGenericBoundObjectInstantiator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneBoundSceneComponentInstantiator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSceneComponentImpersonator
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneSceneComponentImpersonator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSceneComponentImpersonator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCompiledData
// 0x03D0 (0x03F8 - 0x0028)
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate               EvaluationTemplate;                                       // 0x0028(0x0160)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                // 0x0188(0x0118)
	struct FMovieSceneEntityComponentField             EntityComponentField;                                     // 0x02A0(0x00F0)
	struct FMovieSceneEvaluationField                  TrackTemplateField;                                       // 0x0390(0x0030)
	TArray<struct FFrameTime>                          DeterminismFences;                                        // 0x03C0(0x0010) (ZeroConstructor)
	struct FGuid                                       CompiledSignature;                                        // 0x03D0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompilerVersion;                                          // 0x03E0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceCompilerMaskStruct       AccumulatedMask;                                          // 0x03F0(0x0001)
	struct FMovieSceneSequenceCompilerMaskStruct       AllocatedMask;                                            // 0x03F1(0x0001)
	enum class EMovieSceneSequenceFlags                AccumulatedFlags;                                         // 0x03F2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03F3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneCompiledData"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCompiledDataManager
// 0x0208 (0x0230 - 0x0028)
class UMovieSceneCompiledDataManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
	TMap<int, struct FMovieSceneSequenceHierarchy>     Hierarchies;                                              // 0x00D8(0x0050)
	TMap<int, struct FMovieSceneEvaluationTemplate>    TrackTemplates;                                           // 0x0128(0x0050)
	TMap<int, struct FMovieSceneEvaluationField>       TrackTemplateFields;                                      // 0x0178(0x0050)
	TMap<int, struct FMovieSceneEntityComponentField>  EntityComponentFields;                                    // 0x01C8(0x0050)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0218(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneCompiledDataManager"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneValueDecomposer
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneValueDecomposer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneValueDecomposer"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	enum class EMovieSceneBuiltInEasing                Type;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneBuiltInEasingFunction"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEasingExternalCurve"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEasingFunction"));
		return ptr;
	}


	float OnEvaluate(float Interp);//Offset:Discovery.exe+0x327F8B0
};


// Class MovieScene.MovieSceneEntitySystemLinker
// 0x0628 (0x0650 - 0x0028)
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x0028(0x0270) MISSED OFFSET
	struct FMovieSceneEntitySystemGraph                SystemGraph;                                              // 0x0298(0x0138)
	unsigned char                                      UnknownData01[0x280];                                     // 0x03D0(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEntitySystemLinker"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEvalTimeSystem
// 0x0010 (0x0050 - 0x0040)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEvalTimeSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEvaluationHookSystem
// 0x0050 (0x0090 - 0x0040)
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                              // 0x0040(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneEvaluationHookSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneFolder"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneKeyProxy : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneKeyProxy"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneMasterInstantiatorSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneMasterInstantiatorSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieScenePreAnimatedStateSystemInterface"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneCachePreAnimatedStateSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// 0x0010 (0x0050 - 0x0040)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneRestorePreAnimatedStateSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequenceActor
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneSequenceActor : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSequenceActor"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequenceTickManager
// 0x00A0 (0x00C8 - 0x0028)
class UMovieSceneSequenceTickManager : public UObject
{
public:
	TArray<struct FMovieSceneSequenceActorPointers>    SequenceActors;                                           // 0x0028(0x0010) (ZeroConstructor, Transient)
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0040(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSequenceTickManager"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnablesSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSpawnablesSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnSection
// 0x0008 (0x01D0 - 0x01C8)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSpawnSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnTrack
// 0x0020 (0x00B0 - 0x0090)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)
	struct FGuid                                       ObjectGuid;                                               // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneSpawnTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneTrack
// 0x0020 (0x00B0 - 0x0090)
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	bool                                               bHighPassFilter;                                          // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.TestMovieSceneTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSection
// 0x0000 (0x00E8 - 0x00E8)
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.TestMovieSceneSection"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSequence
// 0x0008 (0x0068 - 0x0060)
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.TestMovieSceneSequence"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubTrack
// 0x0010 (0x00B0 - 0x00A0)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.TestMovieSceneSubTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubSection
// 0x0000 (0x0128 - 0x0128)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.TestMovieSceneSubSection"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneEvalHookTrack
// 0x0010 (0x00A0 - 0x0090)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.TestMovieSceneEvalHookTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneEvalHookSection
// 0x0018 (0x0118 - 0x0100)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.TestMovieSceneEvalHookSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstance
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneTrackInstance : public UObject
{
public:
	class UObject*                                     AnimatedObject;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsMasterTrackInstance;                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UMovieSceneEntitySystemLinker*               PrivateLinker;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneTrackInstanceInput>       Inputs;                                                   // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneTrackInstance"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstanceInstantiator
// 0x00B0 (0x00F0 - 0x0040)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0040(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneTrackInstanceInstantiator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstanceSystem
// 0x0008 (0x0048 - 0x0040)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*        Instantiator;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieScene.MovieSceneTrackInstanceSystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
