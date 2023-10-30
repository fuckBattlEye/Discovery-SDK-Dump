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

// Class LevelSequence.LevelSequence
// 0x0168 (0x01C8 - 0x0060)
class ULevelSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	class UMovieScene*                                 MovieScene;                                               // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0070(0x0050)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x00C0(0x00A0)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x0160(0x0050) (Deprecated)
	class UClass*                                      DirectorClass;                                            // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x01B8(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequence"));
		return ptr;
	}


	void RemoveMetaDataByClass(class UClass* InClass);//Offset:Discovery.exe+0x4D38570
	class UObject* FindOrAddMetaDataByClass(class UClass* InClass);//Offset:Discovery.exe+0x4D38600
	class UObject* FindMetaDataByClass(class UClass* InClass);//Offset:Discovery.exe+0x4D38600
	class UObject* CopyMetaData(class UObject* InMetaData);//Offset:Discovery.exe+0x4D38600
};


// Class LevelSequence.AnimSequenceLevelSequenceLink
// 0x0028 (0x0050 - 0x0028)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
	struct FGuid                                       SkelTrackGuid;                                            // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             PathToLevelSequence;                                      // 0x0038(0x0018) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.AnimSequenceLevelSequenceLink"));
		return ptr;
	}

};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0078 (0x00A0 - 0x0028)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0040(0x0060) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.DefaultLevelSequenceInstanceData"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceMetaData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceMetaData"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceBurnInInitSettings"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceBurnInOptions"));
		return ptr;
	}


	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);//Offset:Discovery.exe+0x4D38C70
};


// Class LevelSequence.LevelSequenceActor
// 0x0078 (0x0340 - 0x02C8)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02C8(0x0018) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x02E0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ULevelSequence*                              LevelSequenceAsset;                                       // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLevelSequenceCameraSettings                CameraSettings;                                           // 0x0308(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x6];                                       // 0x030A(0x0006) MISSED OFFSET
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bAutoPlay : 1;                                            // 0x0320(0x0001) (Deprecated)
	unsigned char                                      bOverrideInstanceData : 1;                                // 0x0320(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReplicatePlayback : 1;                                   // 0x0320(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	class UObject*                                     DefaultInstanceData;                                      // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowBurnin;                                              // 0x0338(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0339(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceActor"));
		return ptr;
	}


	void ShowBurnin();//Offset:Discovery.exe+0x4D399E0
	void SetSequence(class ULevelSequence* InSequence);//Offset:Discovery.exe+0x4D39AF0
	void SetReplicatePlayback(bool ReplicatePlayback);//Offset:Discovery.exe+0x4D39A50
	void SetBindingByTag(const struct FName& BindingTag, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);//Offset:Discovery.exe+0x4D39710
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);//Offset:Discovery.exe+0x4D39860
	void ResetBindings();//Offset:Discovery.exe+0x4D391B0
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);//Offset:Discovery.exe+0x4D391D0
	void RemoveBindingByTag(const struct FName& Tag, class AActor* Actor);//Offset:Discovery.exe+0x4D39290
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);//Offset:Discovery.exe+0x4D39370
	void OnLevelSequenceLoaded__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	class ULevelSequence* LoadSequence();//Offset:Discovery.exe+0x4D39B90
	void HideBurnin();//Offset:Discovery.exe+0x4D39A00
	class ULevelSequencePlayer* GetSequencePlayer();//Offset:Discovery.exe+0x4D39A20
	class ULevelSequence* GetSequence();//Offset:Discovery.exe+0x4D39B90
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(const struct FName& Tag);//Offset:Discovery.exe+0x4D39020
	struct FMovieSceneObjectBindingID FindNamedBinding(const struct FName& Tag);//Offset:Discovery.exe+0x4D39100
	void AddBindingByTag(const struct FName& BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);//Offset:Discovery.exe+0x4D39480
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);//Offset:Discovery.exe+0x4D395B0
};


// Class LevelSequence.LevelSequenceAnimSequenceLink
// 0x0010 (0x0038 - 0x0028)
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem>  AnimSequenceLinks;                                        // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceAnimSequenceLink"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnIn
// 0x00B0 (0x0340 - 0x0290)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0290(0x00A8) (BlueprintVisible, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceBurnIn"));
		return ptr;
	}


	void SetSettings(class UObject* InSettings);//Offset:Discovery.exe+0x327F8B0
	class UClass* GetSettingsClass();//Offset:Discovery.exe+0x4D3AC60
};


// Class LevelSequence.LevelSequenceDirector
// 0x0010 (0x0038 - 0x0028)
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SubSequenceID;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MovieScenePlayerIndex;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceDirector"));
		return ptr;
	}


	void OnCreated();//Offset:Discovery.exe+0x327F8B0
	class UMovieSceneSequence* GetSequence();//Offset:Discovery.exe+0x4D3AFD0
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);//Offset:Discovery.exe+0x4D3B2A0
	class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);//Offset:Discovery.exe+0x4D3B1D0
	TArray<class AActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);//Offset:Discovery.exe+0x4D3B0D0
	class AActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);//Offset:Discovery.exe+0x4D3B000
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0100 (0x05D0 - 0x04D0)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                              // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x04E0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequencePlayer"));
		return ptr;
	}


	class UCameraComponent* GetActiveCameraComponent();//Offset:Discovery.exe+0x4D3BCE0
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);//Offset:Discovery.exe+0x4D3BD20
};


// Class LevelSequence.LevelSequenceProjectSettings
// 0x0030 (0x0068 - 0x0038)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                               bDefaultLockEngineToDisplayRate;                          // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     DefaultDisplayRate;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultTickResolution;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	enum class EUpdateClockSource                      DefaultClockSource;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceProjectSettings"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceMediaController
// 0x0028 (0x02F0 - 0x02C8)
class ALevelSequenceMediaController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	class ALevelSequenceActor*                         Sequence;                                                 // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaComponent*                             MediaComponent;                                           // 0x02D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              ServerStartTimeSeconds;                                   // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LevelSequence.LevelSequenceMediaController"));
		return ptr;
	}


	void SynchronizeToServer(float DesyncThresholdSeconds);//Offset:Discovery.exe+0x4D3C240
	void Play();//Offset:Discovery.exe+0x4D3C310
	void OnRep_ServerStartTimeSeconds();//Offset:Discovery.exe+0x4D3C220
	class ALevelSequenceActor* GetSequence();//Offset:Discovery.exe+0x4D3C2E0
	class UMediaComponent* GetMediaComponent();//Offset:Discovery.exe+0x2DC2F40
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
