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

// Class MediaAssets.MediaSource
// 0x0058 (0x0080 - 0x0028)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaSource"));
		return ptr;
	}


	bool Validate();//Offset:Discovery.exe+0x1EE8800
	void SetMediaOptionString(const struct FName& Key, const struct FString& Value);//Offset:Discovery.exe+0x4D2A600
	void SetMediaOptionInt64(const struct FName& Key, int64_t Value);//Offset:Discovery.exe+0x4D2A710
	void SetMediaOptionFloat(const struct FName& Key, float Value);//Offset:Discovery.exe+0x4D2A800
	void SetMediaOptionBool(const struct FName& Key, bool Value);//Offset:Discovery.exe+0x4D2A8F0
	struct FString GetURL();//Offset:Discovery.exe+0x2423EB0
};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0088 - 0x0080)
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                               // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.BaseMediaSource"));
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0028 (0x00B0 - 0x0088)
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0099(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.FileMediaSource"));
		return ptr;
	}


	void SetFilePath(const struct FString& Path);//Offset:Discovery.exe+0x4D22220
};


// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaBlueprintFunctionLibrary"));
		return ptr;
	}


	void STATIC_EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);//Offset:Discovery.exe+0x4D22840
	void STATIC_EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);//Offset:Discovery.exe+0x4D229A0
	void STATIC_EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);//Offset:Discovery.exe+0x4D22B00
};


// Class MediaAssets.MediaComponent
// 0x0010 (0x00C8 - 0x00B8)
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                               MediaTexture;                                             // 0x00B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaComponent"));
		return ptr;
	}


	class UMediaTexture* GetMediaTexture();//Offset:Discovery.exe+0x4D22FE0
	class UMediaPlayer* GetMediaPlayer();//Offset:Discovery.exe+0x4D23010
};


// Class MediaAssets.MediaTimeStampInfo
// 0x0010 (0x0038 - 0x0028)
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                                   Time;                                                     // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            SequenceIndex;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaTimeStampInfo"));
		return ptr;
	}

};


// Class MediaAssets.MediaPlayer
// 0x0118 (0x0140 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEndReached;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                      // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSeekCompleted;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTracksChanged;                                          // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FTimespan                                   CacheAhead;                                               // 0x00A8(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehind;                                              // 0x00B0(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehindGame;                                          // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor)
	bool                                               NativeAudioOut;                                           // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnOpen;                                               // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	unsigned char                                      Shuffle : 1;                                              // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      Loop : 1;                                                 // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	class UMediaPlaylist*                              Playlist;                                                 // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FTimespan                                   TimeDelay;                                                // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              HorizontalFieldOfView;                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalFieldOfView;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // 0x00E8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0100(0x0028) MISSED OFFSET
	struct FGuid                                       PlayerGuid;                                               // 0x0128(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaPlayer"));
		return ptr;
	}


	bool SupportsSeeking();//Offset:Discovery.exe+0x4D23630
	bool SupportsScrubbing();//Offset:Discovery.exe+0x4D23660
	bool SupportsRate(float Rate, bool Unthinned);//Offset:Discovery.exe+0x4D23690
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);//Offset:Discovery.exe+0x4D23820
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);//Offset:Discovery.exe+0x4D23920
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);//Offset:Discovery.exe+0x4D23A60
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D23B90
	void SetTimeDelay(const struct FTimespan& TimeDelay);//Offset:Discovery.exe+0x4D23780
	bool SetRate(float Rate);//Offset:Discovery.exe+0x4D23D60
	bool SetNativeVolume(float Volume);//Offset:Discovery.exe+0x4D23CC0
	void SetMediaOptions(class UMediaSource* Options);//Offset:Discovery.exe+0x4D23E00
	bool SetLooping(bool Looping);//Offset:Discovery.exe+0x4D23EA0
	void SetDesiredPlayerName(const struct FName& PlayerName);//Offset:Discovery.exe+0x4D23F40
	void SetBlockOnTime(const struct FTimespan& Time);//Offset:Discovery.exe+0x4D23FE0
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int TrackIndex);//Offset:Discovery.exe+0x4D24090
	bool Seek(const struct FTimespan& Time);//Offset:Discovery.exe+0x4D24180
	bool Rewind();//Offset:Discovery.exe+0x4D24230
	bool Reopen();//Offset:Discovery.exe+0x4D24260
	bool Previous();//Offset:Discovery.exe+0x4D24290
	void PlayAndSeek();//Offset:Discovery.exe+0x4D242C0
	bool Play();//Offset:Discovery.exe+0x4D242E0
	bool Pause();//Offset:Discovery.exe+0x4D24310
	bool OpenUrl(const struct FString& URL);//Offset:Discovery.exe+0x4D24340
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);//Offset:Discovery.exe+0x4D24650
	void OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess);//Offset:Discovery.exe+0x4D243F0
	bool OpenSource(class UMediaSource* MediaSource);//Offset:Discovery.exe+0x4D24770
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);//Offset:Discovery.exe+0x4D24810
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);//Offset:Discovery.exe+0x4D24900
	bool OpenFile(const struct FString& FilePath);//Offset:Discovery.exe+0x4D249B0
	bool Next();//Offset:Discovery.exe+0x4D24A60
	bool IsReady();//Offset:Discovery.exe+0x4D24A90
	bool IsPreparing();//Offset:Discovery.exe+0x4D24AF0
	bool IsPlaying();//Offset:Discovery.exe+0x4D24B20
	bool IsPaused();//Offset:Discovery.exe+0x4D24B50
	bool IsLooping();//Offset:Discovery.exe+0x4D24B80
	bool IsConnecting();//Offset:Discovery.exe+0x4D24BB0
	bool IsClosed();//Offset:Discovery.exe+0x4D24AC0
	bool IsBuffering();//Offset:Discovery.exe+0x4D24BE0
	bool HasError();//Offset:Discovery.exe+0x4D24C10
	struct FRotator GetViewRotation();//Offset:Discovery.exe+0x4D24C90
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D24CF0
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D24E10
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D24F00
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D24FF0
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D250E0
	float GetVerticalFieldOfView();//Offset:Discovery.exe+0x4D251D0
	struct FString GetURL();//Offset:Discovery.exe+0x4D25200
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int TrackIndex);//Offset:Discovery.exe+0x4D25270
	int GetTrackFormat(enum class EMediaPlayerTrack TrackType, int TrackIndex);//Offset:Discovery.exe+0x4D25390
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int TrackIndex);//Offset:Discovery.exe+0x4D25480
	class UMediaTimeStampInfo* GetTimeStamp();//Offset:Discovery.exe+0x4D255B0
	struct FTimespan GetTimeDelay();//Offset:Discovery.exe+0x4D24C40
	struct FTimespan GetTime();//Offset:Discovery.exe+0x4D255E0
	void GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates);//Offset:Discovery.exe+0x4D25630
	int GetSelectedTrack(enum class EMediaPlayerTrack TrackType);//Offset:Discovery.exe+0x4D25740
	float GetRate();//Offset:Discovery.exe+0x4D257E0
	int GetPlaylistIndex();//Offset:Discovery.exe+0x4D25810
	class UMediaPlaylist* GetPlaylist();//Offset:Discovery.exe+0x4D25830
	struct FName GetPlayerName();//Offset:Discovery.exe+0x4D25890
	int GetNumTracks(enum class EMediaPlayerTrack TrackType);//Offset:Discovery.exe+0x4D259D0
	int GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int TrackIndex);//Offset:Discovery.exe+0x4D258E0
	struct FText GetMediaName();//Offset:Discovery.exe+0x4D25A70
	float GetHorizontalFieldOfView();//Offset:Discovery.exe+0x4D25B10
	struct FTimespan GetDuration();//Offset:Discovery.exe+0x4D25B40
	struct FName GetDesiredPlayerName();//Offset:Discovery.exe+0x4D25B90
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D25BE0
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D25D00
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);//Offset:Discovery.exe+0x4D25DF0
	void Close();//Offset:Discovery.exe+0x4D25EE0
	bool CanPlayUrl(const struct FString& URL);//Offset:Discovery.exe+0x4D25F00
	bool CanPlaySource(class UMediaSource* MediaSource);//Offset:Discovery.exe+0x4D25FB0
	bool CanPause();//Offset:Discovery.exe+0x4D26050
};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                        Items;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaPlaylist"));
		return ptr;
	}


	bool Replace(int Index, class UMediaSource* Replacement);//Offset:Discovery.exe+0x4D287B0
	bool RemoveAt(int Index);//Offset:Discovery.exe+0x4D288A0
	bool Remove(class UMediaSource* MediaSource);//Offset:Discovery.exe+0x4D28940
	int Num();//Offset:Discovery.exe+0x4D289E0
	void Insert(class UMediaSource* MediaSource, int Index);//Offset:Discovery.exe+0x4D28A00
	class UMediaSource* GetRandom(int* OutIndex);//Offset:Discovery.exe+0x4D28AE0
	class UMediaSource* GetPrevious(int* InOutIndex);//Offset:Discovery.exe+0x4D28B90
	class UMediaSource* GetNext(int* InOutIndex);//Offset:Discovery.exe+0x4D28C40
	class UMediaSource* Get(int Index);//Offset:Discovery.exe+0x4D28CF0
	bool AddUrl(const struct FString& URL);//Offset:Discovery.exe+0x4D28D90
	bool AddFile(const struct FString& FilePath);//Offset:Discovery.exe+0x4D28E40
	bool Add(class UMediaSource* MediaSource);//Offset:Discovery.exe+0x4D28EF0
};


// Class MediaAssets.MediaSoundComponent
// 0x01B0 (0x0970 - 0x07C0)
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels                     Channels;                                                 // 0x07C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07C0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               DynamicRateAdjustment;                                    // 0x07C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	float                                              RateAdjustmentFactor;                                     // 0x07C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 RateAdjustmentRange;                                      // 0x07CC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x07E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x188];                                     // 0x07E8(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaSoundComponent"));
		return ptr;
	}


	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize);//Offset:Discovery.exe+0x4D29B30
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);//Offset:Discovery.exe+0x4D29D10
	void SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec);//Offset:Discovery.exe+0x4D298B0
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);//Offset:Discovery.exe+0x4D29C70
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);//Offset:Discovery.exe+0x4D29990
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();//Offset:Discovery.exe+0x4D29AB0
	TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData();//Offset:Discovery.exe+0x4D29A30
	class UMediaPlayer* GetMediaPlayer();//Offset:Discovery.exe+0x4D29DB0
	float GetEnvelopeValue();//Offset:Discovery.exe+0x4D29880
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);//Offset:Discovery.exe+0x4D29DE0
};


// Class MediaAssets.MediaTexture
// 0x00E0 (0x02D0 - 0x01F0)
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x01F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoClear;                                                // 0x01F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01F3(0x0001) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x01F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGenMips;                                            // 0x0204(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumMips;                                                  // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewStyleOutput;                                           // 0x0206(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMediaTextureOutputFormat>             OutputFormat;                                             // 0x0207(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAspectRatio;                                       // 0x0208(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EMediaTextureOrientation>              CurrentOrientation;                                       // 0x020C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x0218(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.MediaTexture"));
		return ptr;
	}


	void UpdateResource();//Offset:Discovery.exe+0x4B5B1A0
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);//Offset:Discovery.exe+0x4D2AF60
	int GetWidth();//Offset:Discovery.exe+0x4D2B060
	int GetTextureNumMips();//Offset:Discovery.exe+0x4D2B030
	class UMediaPlayer* GetMediaPlayer();//Offset:Discovery.exe+0x4D2B000
	int GetHeight();//Offset:Discovery.exe+0x4D2B090
	float GetAspectRatio();//Offset:Discovery.exe+0x4D2B0C0
};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0088 - 0x0080)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.PlatformMediaSource"));
		return ptr;
	}

};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0098 - 0x0088)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.StreamMediaSource"));
		return ptr;
	}

};


// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0010 (0x0098 - 0x0088)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                               bUseTimeSynchronization;                                  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                FrameDelay;                                               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimeDelay;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaAssets.TimeSynchronizableMediaSource"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
