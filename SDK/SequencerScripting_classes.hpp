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

// Class SequencerScripting.MovieSceneBindingExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneBindingExtensions"));
		return ptr;
	}


	void STATIC_SetParent(const struct FSequencerBindingProxy& InBinding, const struct FSequencerBindingProxy& InParentBinding);//Offset:Discovery.exe+0x241F280
	void STATIC_SetName(const struct FSequencerBindingProxy& InBinding, const struct FString& InName);//Offset:Discovery.exe+0x241FCB0
	void STATIC_SetDisplayName(const struct FSequencerBindingProxy& InBinding, const struct FText& InDisplayName);//Offset:Discovery.exe+0x241FEB0
	void STATIC_RemoveTrack(const struct FSequencerBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);//Offset:Discovery.exe+0x241F850
	void STATIC_Remove(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241F7A0
	void STATIC_MoveBindingContents(const struct FSequencerBindingProxy& SourceBindingId, const struct FSequencerBindingProxy& DestinationBindingId);//Offset:Discovery.exe+0x241F170
	bool STATIC_IsValid(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x24201B0
	TArray<class UMovieSceneTrack*> STATIC_GetTracks(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241FBC0
	class UClass* STATIC_GetPossessedObjectClass(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241F450
	struct FSequencerBindingProxy STATIC_GetParent(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241F390
	class UObject* STATIC_GetObjectTemplate(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241F500
	struct FString STATIC_GetName(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241FDC0
	struct FGuid STATIC_GetId(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x24200F0
	struct FText STATIC_GetDisplayName(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241FFF0
	TArray<struct FSequencerBindingProxy> STATIC_GetChildPossessables(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x241F5B0
	TArray<class UMovieSceneTrack*> STATIC_FindTracksByType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);//Offset:Discovery.exe+0x241FA80
	TArray<class UMovieSceneTrack*> STATIC_FindTracksByExactType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);//Offset:Discovery.exe+0x241F940
	class UMovieSceneTrack* STATIC_AddTrack(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);//Offset:Discovery.exe+0x241F6A0
};


// Class SequencerScripting.MovieSceneEventTrackExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneEventTrackExtensions"));
		return ptr;
	}


	class UClass* STATIC_GetBoundObjectPropertyClass(const struct FMovieSceneEvent& EventKey);//Offset:Discovery.exe+0x2420DC0
	class UMovieSceneEventTriggerSection* STATIC_AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);//Offset:Discovery.exe+0x2420EA0
	class UMovieSceneEventRepeaterSection* STATIC_AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);//Offset:Discovery.exe+0x2420F40
};


// Class SequencerScripting.MovieSceneFolderExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneFolderExtensions"));
		return ptr;
	}


	bool STATIC_SetFolderName(class UMovieSceneFolder* Folder, const struct FName& InFolderName);//Offset:Discovery.exe+0x2421CD0
	bool STATIC_SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor);//Offset:Discovery.exe+0x2421B50
	bool STATIC_RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding);//Offset:Discovery.exe+0x2421360
	bool STATIC_RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);//Offset:Discovery.exe+0x2421630
	bool STATIC_RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);//Offset:Discovery.exe+0x24218C0
	struct FName STATIC_GetFolderName(class UMovieSceneFolder* Folder);//Offset:Discovery.exe+0x2421DB0
	struct FColor STATIC_GetFolderColor(class UMovieSceneFolder* Folder);//Offset:Discovery.exe+0x2421C30
	TArray<struct FSequencerBindingProxy> STATIC_GetChildObjectBindings(class UMovieSceneFolder* Folder);//Offset:Discovery.exe+0x2421560
	TArray<class UMovieSceneTrack*> STATIC_GetChildMasterTracks(class UMovieSceneFolder* Folder);//Offset:Discovery.exe+0x24217F0
	TArray<class UMovieSceneFolder*> STATIC_GetChildFolders(class UMovieSceneFolder* Folder);//Offset:Discovery.exe+0x2421A80
	bool STATIC_AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding);//Offset:Discovery.exe+0x2421460
	bool STATIC_AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);//Offset:Discovery.exe+0x2421710
	bool STATIC_AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);//Offset:Discovery.exe+0x24219A0
};


// Class SequencerScripting.MovieScenePropertyTrackExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieScenePropertyTrackExtensions"));
		return ptr;
	}


	void STATIC_SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, const struct FName& InPropertyName, const struct FString& InPropertyPath);//Offset:Discovery.exe+0x2422A90
	void STATIC_SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);//Offset:Discovery.exe+0x24227A0
	struct FName STATIC_GetUniqueTrackName(class UMovieScenePropertyTrack* Track);//Offset:Discovery.exe+0x2422880
	struct FString STATIC_GetPropertyPath(class UMovieScenePropertyTrack* Track);//Offset:Discovery.exe+0x2422920
	struct FName STATIC_GetPropertyName(class UMovieScenePropertyTrack* Track);//Offset:Discovery.exe+0x24229F0
	class UClass* STATIC_GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);//Offset:Discovery.exe+0x2422700
};


// Class SequencerScripting.MovieSceneScriptingKey
// 0x0018 (0x0040 - 0x0028)
class UMovieSceneScriptingKey : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingKey"));
		return ptr;
	}

};


// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingActorReferenceKey"));
		return ptr;
	}


	void SetValue(const struct FMovieSceneObjectBindingID& InNewValue);//Offset:Discovery.exe+0x24230F0
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	struct FMovieSceneObjectBindingID GetValue();//Offset:Discovery.exe+0x2423290
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
};


// Class SequencerScripting.MovieSceneScriptingChannel
// 0x0008 (0x0030 - 0x0028)
class UMovieSceneScriptingChannel : public UObject
{
public:
	struct FName                                       ChannelName;                                              // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingChannel"));
		return ptr;
	}

};


// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingActorReferenceChannel"));
		return ptr;
	}


	void SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue);//Offset:Discovery.exe+0x2423C90
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x2423B00
	bool HasDefault();//Offset:Discovery.exe+0x24239F0
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	struct FMovieSceneObjectBindingID GetDefault();//Offset:Discovery.exe+0x2423B90
	class UMovieSceneScriptingActorReferenceKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423FD0
};


// Class SequencerScripting.MovieSceneScriptingBoolKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingBoolKey"));
		return ptr;
	}


	void SetValue(bool InNewValue);//Offset:Discovery.exe+0x24248A0
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	bool GetValue();//Offset:Discovery.exe+0x2424950
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
};


// Class SequencerScripting.MovieSceneScriptingBoolChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingBoolChannel"));
		return ptr;
	}


	void SetDefault(bool InDefaultValue);//Offset:Discovery.exe+0x24251C0
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x2424EF0
	bool HasDefault();//Offset:Discovery.exe+0x2424DA0
	int GetNumKeys();//Offset:Discovery.exe+0x2425680
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	bool GetDefault();//Offset:Discovery.exe+0x2425040
	TArray<bool> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);//Offset:Discovery.exe+0x2425460
	struct FSequencerScriptingRange ComputeEffectiveRange();//Offset:Discovery.exe+0x2425360
	class UMovieSceneScriptingBoolKey* AddKey(const struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2425710
};


// Class SequencerScripting.MovieSceneScriptingByteKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingByteKey"));
		return ptr;
	}


	void SetValue(unsigned char InNewValue);//Offset:Discovery.exe+0x2428BD0
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	unsigned char GetValue();//Offset:Discovery.exe+0x2428D30
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
};


// Class SequencerScripting.MovieSceneScriptingByteChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingByteChannel"));
		return ptr;
	}


	void SetDefault(unsigned char InDefaultValue);//Offset:Discovery.exe+0x2429320
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x2424EF0
	bool HasDefault();//Offset:Discovery.exe+0x2424DA0
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	unsigned char GetDefault();//Offset:Discovery.exe+0x24291B0
	class UMovieSceneScriptingByteKey* AddKey(const struct FFrameNumber& InTime, unsigned char NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation);//Offset:Discovery.exe+0x2429420
};


// Class SequencerScripting.MovieSceneScriptingDoubleKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingDoubleKey"));
		return ptr;
	}


	void SetValue(double InNewValue);//Offset:Discovery.exe+0x242ADF0
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);//Offset:Discovery.exe+0x242A310
	void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);//Offset:Discovery.exe+0x242A970
	void SetLeaveTangentWeight(float InNewValue);//Offset:Discovery.exe+0x2429EF0
	void SetLeaveTangent(float InNewValue);//Offset:Discovery.exe+0x242A550
	void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);//Offset:Discovery.exe+0x242ABB0
	void SetArriveTangentWeight(float InNewValue);//Offset:Discovery.exe+0x242A100
	void SetArriveTangent(float InNewValue);//Offset:Discovery.exe+0x242A760
	double GetValue();//Offset:Discovery.exe+0x242AF60
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
	TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();//Offset:Discovery.exe+0x242A4B0
	TEnumAsByte<ERichCurveTangentMode> GetTangentMode();//Offset:Discovery.exe+0x242AB10
	float GetLeaveTangentWeight();//Offset:Discovery.exe+0x242A050
	float GetLeaveTangent();//Offset:Discovery.exe+0x242A6B0
	TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();//Offset:Discovery.exe+0x242AD50
	float GetArriveTangentWeight();//Offset:Discovery.exe+0x242A260
	float GetArriveTangent();//Offset:Discovery.exe+0x242A8C0
};


// Class SequencerScripting.MovieSceneScriptingDoubleChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingDoubleChannel"));
		return ptr;
	}


	void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);//Offset:Discovery.exe+0x242C2D0
	void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);//Offset:Discovery.exe+0x242C140
	void SetDefault(double InDefaultValue);//Offset:Discovery.exe+0x242BF80
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x242BCB0
	bool HasDefault();//Offset:Discovery.exe+0x242BB50
	TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();//Offset:Discovery.exe+0x242C3D0
	TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();//Offset:Discovery.exe+0x242C240
	int GetNumKeys();//Offset:Discovery.exe+0x242C780
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	double GetDefault();//Offset:Discovery.exe+0x242BE00
	TArray<double> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);//Offset:Discovery.exe+0x242C560
	struct FSequencerScriptingRange ComputeEffectiveRange();//Offset:Discovery.exe+0x242C460
	class UMovieSceneScriptingDoubleKey* AddKey(const struct FFrameNumber& InTime, double NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation);//Offset:Discovery.exe+0x242C810
};


// Class SequencerScripting.MovieSceneScriptingEventKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingEventKey"));
		return ptr;
	}


	void SetValue(const struct FMovieSceneEvent& InNewValue);//Offset:Discovery.exe+0x242D470
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	struct FMovieSceneEvent GetValue();//Offset:Discovery.exe+0x242D5B0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
};


// Class SequencerScripting.MovieSceneScriptingEventChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingEventChannel"));
		return ptr;
	}


	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	class UMovieSceneScriptingEventKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x242DA50
};


// Class SequencerScripting.MovieSceneScriptingFloatKey
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingFloatKey"));
		return ptr;
	}


	void SetValue(float InNewValue);//Offset:Discovery.exe+0x21BF160
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x242E4C0
	void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);//Offset:Discovery.exe+0x242E1E0
	void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);//Offset:Discovery.exe+0x242E350
	void SetLeaveTangentWeight(float InNewValue);//Offset:Discovery.exe+0x242E110
	void SetLeaveTangent(float InNewValue);//Offset:Discovery.exe+0x1EE73C0
	void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);//Offset:Discovery.exe+0x242E3F0
	void SetArriveTangentWeight(float InNewValue);//Offset:Discovery.exe+0x1EE74F0
	void SetArriveTangent(float InNewValue);//Offset:Discovery.exe+0x242E280
	float GetValue();//Offset:Discovery.exe+0x242E490
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
	TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();//Offset:Discovery.exe+0x147F910
	TEnumAsByte<ERichCurveTangentMode> GetTangentMode();//Offset:Discovery.exe+0x1DC1450
	float GetLeaveTangentWeight();//Offset:Discovery.exe+0x242E1B0
	float GetLeaveTangent();//Offset:Discovery.exe+0x1EE7390
	TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();//Offset:Discovery.exe+0x1461930
	float GetArriveTangentWeight();//Offset:Discovery.exe+0x1EE74C0
	float GetArriveTangent();//Offset:Discovery.exe+0x242E320
};


// Class SequencerScripting.MovieSceneScriptingActualFloatKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingActualFloatKey"));
		return ptr;
	}

};


// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey"));
		return ptr;
	}

};


// Class SequencerScripting.MovieSceneScriptingFloatChannel
// 0x0050 (0x0080 - 0x0030)
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingFloatChannel"));
		return ptr;
	}


	void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);//Offset:Discovery.exe+0x242FBA0
	void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);//Offset:Discovery.exe+0x242F9E0
	void SetDefault(float InDefaultValue);//Offset:Discovery.exe+0x242F810
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x242F540
	bool HasDefault();//Offset:Discovery.exe+0x242F400
	TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();//Offset:Discovery.exe+0x242FCB0
	TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();//Offset:Discovery.exe+0x242FAF0
	int GetNumKeys();//Offset:Discovery.exe+0x24301F0
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	float GetDefault();//Offset:Discovery.exe+0x242F670
	TArray<float> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);//Offset:Discovery.exe+0x242FF00
	struct FSequencerScriptingRange ComputeEffectiveRange();//Offset:Discovery.exe+0x242FD60
	class UMovieSceneScriptingFloatKey* AddKey(const struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation);//Offset:Discovery.exe+0x24302C0
};


// Class SequencerScripting.MovieSceneScriptingIntegerKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingIntegerKey"));
		return ptr;
	}


	void SetValue(int InNewValue);//Offset:Discovery.exe+0x2435CB0
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	int GetValue();//Offset:Discovery.exe+0x2435E10
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
};


// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingIntegerChannel"));
		return ptr;
	}


	void SetDefault(int InDefaultValue);//Offset:Discovery.exe+0x2436660
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x24363B0
	bool HasDefault();//Offset:Discovery.exe+0x2436260
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	int GetDefault();//Offset:Discovery.exe+0x2436500
	class UMovieSceneScriptingIntegerKey* AddKey(const struct FFrameNumber& InTime, int NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2436800
};


// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingObjectPathKey"));
		return ptr;
	}


	void SetValue(class UObject* InNewValue);//Offset:Discovery.exe+0x2437070
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	class UObject* GetValue();//Offset:Discovery.exe+0x2437320
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
};


// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingObjectPathChannel"));
		return ptr;
	}


	void SetDefault(class UObject* InDefaultValue);//Offset:Discovery.exe+0x24379E0
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x2423B00
	bool HasDefault();//Offset:Discovery.exe+0x2437830
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	class UObject* GetDefault();//Offset:Discovery.exe+0x2437880
	class UMovieSceneScriptingObjectPathKey* AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2437AE0
};


// Class SequencerScripting.MovieSceneScriptingStringKey
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingStringKey"));
		return ptr;
	}


	void SetValue(const struct FString& InNewValue);//Offset:Discovery.exe+0x24383C0
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2423350
	struct FString GetValue();//Offset:Discovery.exe+0x2438550
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x24234D0
};


// Class SequencerScripting.MovieSceneScriptingStringChannel
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneScriptingStringChannel"));
		return ptr;
	}


	void SetDefault(const struct FString& InDefaultValue);//Offset:Discovery.exe+0x2438C90
	void RemoveKey(class UMovieSceneScriptingKey* Key);//Offset:Discovery.exe+0x2423F30
	void RemoveDefault();//Offset:Discovery.exe+0x242BCB0
	bool HasDefault();//Offset:Discovery.exe+0x2438A10
	TArray<class UMovieSceneScriptingKey*> GetKeys();//Offset:Discovery.exe+0x2423EB0
	struct FString GetDefault();//Offset:Discovery.exe+0x2438B30
	class UMovieSceneScriptingStringKey* AddKey(const struct FFrameNumber& InTime, const struct FString& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);//Offset:Discovery.exe+0x2438E40
};


// Class SequencerScripting.MovieSceneSectionExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneSectionExtensions"));
		return ptr;
	}


	void STATIC_SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);//Offset:Discovery.exe+0x2439EA0
	void STATIC_SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);//Offset:Discovery.exe+0x2439DC0
	void STATIC_SetStartFrame(class UMovieSceneSection* Section, int StartFrame);//Offset:Discovery.exe+0x2439F80
	void STATIC_SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);//Offset:Discovery.exe+0x243A060
	void STATIC_SetRange(class UMovieSceneSection* Section, int StartFrame, int EndFrame);//Offset:Discovery.exe+0x243A190
	void STATIC_SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);//Offset:Discovery.exe+0x2439C00
	void STATIC_SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);//Offset:Discovery.exe+0x2439B20
	void STATIC_SetEndFrame(class UMovieSceneSection* Section, int EndFrame);//Offset:Discovery.exe+0x2439CE0
	bool STATIC_HasStartFrame(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x243A5E0
	bool STATIC_HasEndFrame(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x243A400
	float STATIC_GetStartFrameSeconds(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x243A4A0
	int STATIC_GetStartFrame(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x243A540
	int STATIC_GetParentSequenceFrame(class UMovieSceneSubSection* Section, int InFrame, class UMovieSceneSequence* ParentSequence);//Offset:Discovery.exe+0x2439730
	float STATIC_GetEndFrameSeconds(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x243A2C0
	int STATIC_GetEndFrame(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x243A360
	TArray<class UMovieSceneScriptingChannel*> STATIC_GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);//Offset:Discovery.exe+0x2439860
	TArray<class UMovieSceneScriptingChannel*> STATIC_GetChannels(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x2439A50
	TArray<class UMovieSceneScriptingChannel*> STATIC_GetAllChannels(class UMovieSceneSection* Section);//Offset:Discovery.exe+0x2439980
	TArray<class UMovieSceneScriptingChannel*> STATIC_FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);//Offset:Discovery.exe+0x2439860
};


// Class SequencerScripting.MovieSceneSequenceExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneSequenceExtensions"));
		return ptr;
	}


	void STATIC_SortMarkedFrames(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243B6C0
	void STATIC_SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);//Offset:Discovery.exe+0x243CF70
	void STATIC_SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);//Offset:Discovery.exe+0x243CF70
	void STATIC_SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);//Offset:Discovery.exe+0x243CF70
	void STATIC_SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);//Offset:Discovery.exe+0x243CF70
	void STATIC_SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);//Offset:Discovery.exe+0x243D980
	void STATIC_SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);//Offset:Discovery.exe+0x243DA60
	void STATIC_SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);//Offset:Discovery.exe+0x243B2E0
	void STATIC_SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);//Offset:Discovery.exe+0x243D210
	void STATIC_SetPlaybackStart(class UMovieSceneSequence* Sequence, int StartFrame);//Offset:Discovery.exe+0x243D2F0
	void STATIC_SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);//Offset:Discovery.exe+0x243D050
	void STATIC_SetPlaybackEnd(class UMovieSceneSequence* Sequence, int EndFrame);//Offset:Discovery.exe+0x243D130
	void STATIC_SetMarkedFrame(class UMovieSceneSequence* Sequence, int InMarkIndex, const struct FFrameNumber& InFrameNumber);//Offset:Discovery.exe+0x243B8C0
	void STATIC_SetEvaluationType(class UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType);//Offset:Discovery.exe+0x243CDF0
	void STATIC_SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate);//Offset:Discovery.exe+0x243DBE0
	void STATIC_SetClockSource(class UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource);//Offset:Discovery.exe+0x243CC70
	struct FSequencerBindingProxy STATIC_ResolveBindingID(class UMovieSceneSequence* MasterSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID);//Offset:Discovery.exe+0x243BE40
	bool STATIC_RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack);//Offset:Discovery.exe+0x243DD60
	struct FSequencerScriptingRange STATIC_MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);//Offset:Discovery.exe+0x243D700
	struct FSequencerScriptingRange STATIC_MakeRange(class UMovieSceneSequence* Sequence, int StartFrame, int Duration);//Offset:Discovery.exe+0x243D840
	struct FMovieSceneObjectBindingID STATIC_MakeBindingID(class UMovieSceneSequence* MasterSequence, const struct FSequencerBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space);//Offset:Discovery.exe+0x243C180
	TArray<class UObject*> STATIC_LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FSequencerBindingProxy& InBinding, class UObject* Context);//Offset:Discovery.exe+0x243C2E0
	bool STATIC_IsReadOnly(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243B240
	float STATIC_GetWorkRangeStart(class UMovieSceneSequence* InSequence);//Offset:Discovery.exe+0x243CED0
	float STATIC_GetWorkRangeEnd(class UMovieSceneSequence* InSequence);//Offset:Discovery.exe+0x243CED0
	float STATIC_GetViewRangeStart(class UMovieSceneSequence* InSequence);//Offset:Discovery.exe+0x243CED0
	float STATIC_GetViewRangeEnd(class UMovieSceneSequence* InSequence);//Offset:Discovery.exe+0x243CED0
	struct FTimecode STATIC_GetTimecodeSource(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243CB20
	struct FFrameRate STATIC_GetTickResolution(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243DB40
	TArray<struct FSequencerBindingProxy> STATIC_GetSpawnables(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243C730
	TArray<class UMovieSceneFolder*> STATIC_GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243BD70
	TArray<struct FSequencerBindingProxy> STATIC_GetPossessables(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243C660
	struct FMovieSceneObjectBindingID STATIC_GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x243BF60
	float STATIC_GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243D510
	int STATIC_GetPlaybackStart(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243D5B0
	struct FSequencerScriptingRange STATIC_GetPlaybackRange(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243D650
	float STATIC_GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243D3D0
	int STATIC_GetPlaybackEnd(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243D470
	class UMovieScene* STATIC_GetMovieScene(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243E230
	TArray<class UMovieSceneTrack*> STATIC_GetMasterTracks(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243E160
	TArray<struct FMovieSceneMarkedFrame> STATIC_GetMarkedFrames(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243BB00
	enum class EMovieSceneEvaluationType STATIC_GetEvaluationType(class UMovieSceneSequence* InSequence);//Offset:Discovery.exe+0x243CD50
	struct FFrameRate STATIC_GetDisplayRate(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243DCC0
	enum class EUpdateClockSource STATIC_GetClockSource(class UMovieSceneSequence* InSequence);//Offset:Discovery.exe+0x243CBD0
	TArray<struct FSequencerBindingProxy> STATIC_GetBindings(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243C800
	struct FMovieSceneObjectBindingID STATIC_GetBindingID(const struct FSequencerBindingProxy& InBinding);//Offset:Discovery.exe+0x243C0C0
	int STATIC_FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward);//Offset:Discovery.exe+0x243B3C0
	TArray<class UMovieSceneTrack*> STATIC_FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);//Offset:Discovery.exe+0x243E040
	TArray<class UMovieSceneTrack*> STATIC_FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);//Offset:Discovery.exe+0x243DF20
	int STATIC_FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const struct FString& InLabel);//Offset:Discovery.exe+0x243B5D0
	int STATIC_FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber);//Offset:Discovery.exe+0x243B4F0
	struct FSequencerBindingProxy STATIC_FindBindingByName(class UMovieSceneSequence* Sequence, const struct FString& Name);//Offset:Discovery.exe+0x243C9D0
	struct FSequencerBindingProxy STATIC_FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingID);//Offset:Discovery.exe+0x243C8D0
	void STATIC_DeleteMarkedFrames(class UMovieSceneSequence* Sequence);//Offset:Discovery.exe+0x243B750
	void STATIC_DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int DeleteIndex);//Offset:Discovery.exe+0x243B7E0
	struct FSequencerBindingProxy STATIC_AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);//Offset:Discovery.exe+0x243C460
	struct FSequencerBindingProxy STATIC_AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);//Offset:Discovery.exe+0x243C460
	class UMovieSceneFolder* STATIC_AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const struct FString& NewFolderName);//Offset:Discovery.exe+0x243BC30
	struct FSequencerBindingProxy STATIC_AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);//Offset:Discovery.exe+0x243C560
	class UMovieSceneTrack* STATIC_AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);//Offset:Discovery.exe+0x243DE40
	int STATIC_AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame);//Offset:Discovery.exe+0x243B9F0
};


// Class SequencerScripting.MovieSceneTrackExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneTrackExtensions"));
		return ptr;
	}


	void STATIC_SetTrackRowDisplayName(class UMovieSceneTrack* Track, const struct FText& InName, int RowIndex);//Offset:Discovery.exe+0x2443870
	void STATIC_SetSortingOrder(class UMovieSceneTrack* Track, int SortingOrder);//Offset:Discovery.exe+0x2443370
	void STATIC_SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);//Offset:Discovery.exe+0x2443110
	void STATIC_SetDisplayName(class UMovieSceneTrack* Track, const struct FText& InName);//Offset:Discovery.exe+0x2443AC0
	void STATIC_SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint);//Offset:Discovery.exe+0x2443290
	void STATIC_RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);//Offset:Discovery.exe+0x24434F0
	struct FText STATIC_GetTrackRowDisplayName(class UMovieSceneTrack* Track, int RowIndex);//Offset:Discovery.exe+0x2443740
	int STATIC_GetSortingOrder(class UMovieSceneTrack* Track);//Offset:Discovery.exe+0x2443450
	class UMovieSceneSection* STATIC_GetSectionToKey(class UMovieSceneTrack* Track);//Offset:Discovery.exe+0x24431F0
	TArray<class UMovieSceneSection*> STATIC_GetSections(class UMovieSceneTrack* Track);//Offset:Discovery.exe+0x24435D0
	struct FText STATIC_GetDisplayName(class UMovieSceneTrack* Track);//Offset:Discovery.exe+0x24439E0
	struct FColor STATIC_GetColorTint(class UMovieSceneTrack* Track);//Offset:Discovery.exe+0x2421C30
	class UMovieSceneSection* STATIC_AddSection(class UMovieSceneTrack* Track);//Offset:Discovery.exe+0x24436A0
};


// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneFloatVectorTrackExtensions"));
		return ptr;
	}


	void STATIC_SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int InNumChannelsUsed);//Offset:Discovery.exe+0x2444570
	int STATIC_GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);//Offset:Discovery.exe+0x24444D0
};


// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions"));
		return ptr;
	}


	void STATIC_SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int InNumChannelsUsed);//Offset:Discovery.exe+0x2444570
	int STATIC_GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);//Offset:Discovery.exe+0x24444D0
};


// Class SequencerScripting.SequencerScriptingRangeExtensions
// 0x0000 (0x0028 - 0x0028)
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SequencerScripting.SequencerScriptingRangeExtensions"));
		return ptr;
	}


	void STATIC_SetStartSeconds(float Start, struct FSequencerScriptingRange* Range);//Offset:Discovery.exe+0x2445190
	void STATIC_SetStartFrame(int Start, struct FSequencerScriptingRange* Range);//Offset:Discovery.exe+0x2444E50
	void STATIC_SetEndSeconds(float End, struct FSequencerScriptingRange* Range);//Offset:Discovery.exe+0x24450A0
	void STATIC_SetEndFrame(int End, struct FSequencerScriptingRange* Range);//Offset:Discovery.exe+0x2444D60
	void STATIC_RemoveStart(struct FSequencerScriptingRange* Range);//Offset:Discovery.exe+0x2445490
	void STATIC_RemoveEnd(struct FSequencerScriptingRange* Range);//Offset:Discovery.exe+0x24453E0
	bool STATIC_HasStart(const struct FSequencerScriptingRange& Range);//Offset:Discovery.exe+0x24455F0
	bool STATIC_HasEnd(const struct FSequencerScriptingRange& Range);//Offset:Discovery.exe+0x2445540
	float STATIC_GetStartSeconds(const struct FSequencerScriptingRange& Range);//Offset:Discovery.exe+0x2445330
	int STATIC_GetStartFrame(const struct FSequencerScriptingRange& Range);//Offset:Discovery.exe+0x2444FF0
	float STATIC_GetEndSeconds(const struct FSequencerScriptingRange& Range);//Offset:Discovery.exe+0x2445280
	int STATIC_GetEndFrame(const struct FSequencerScriptingRange& Range);//Offset:Discovery.exe+0x2444F40
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
