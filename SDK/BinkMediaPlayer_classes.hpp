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

// Class BinkMediaPlayer.BinkFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class BinkMediaPlayer.BinkFunctionLibrary"));
		return ptr;
	}


	struct FTimespan STATIC_BinkLoadingMovie_GetTime();//Offset:Discovery.exe+0x2C75E10
	struct FTimespan STATIC_BinkLoadingMovie_GetDuration();//Offset:Discovery.exe+0x2C75E60
	void STATIC_Bink_DrawOverlays();//Offset:Discovery.exe+0x2C75EB0
};


// Class BinkMediaPlayer.BinkMediaPlayer
// 0x00E0 (0x0108 - 0x0028)
class UBinkMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaReachedEnd;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                      // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      Looping : 1;                                              // 0x0070(0x0001) (Edit)
	unsigned char                                      StartImmediately : 1;                                     // 0x0070(0x0001) (Edit)
	unsigned char                                      DelayedOpen : 1;                                          // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FVector2D                                   BinkDestinationUpperLeft;                                 // 0x0078(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BinkDestinationLowerRight;                                // 0x0088(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // 0x0098(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBinkMediaPlayerBinkBufferModes>       BinkBufferMode;                                           // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBinkMediaPlayerBinkSoundTrack>        BinkSoundTrack;                                           // 0x00A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	int                                                BinkSoundTrackStart;                                      // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBinkMediaPlayerBinkDrawStyle>         BinkDrawStyle;                                            // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                BinkLayerDepth;                                           // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class BinkMediaPlayer.BinkMediaPlayer"));
		return ptr;
	}


	bool SupportsSeeking();//Offset:Discovery.exe+0x1B14430
	bool SupportsScrubbing();//Offset:Discovery.exe+0x1B14430
	bool SupportsRate(float Rate, bool Unthinned);//Offset:Discovery.exe+0x2C766E0
	void Stop();//Offset:Discovery.exe+0x2C767D0
	void SetVolume(float Rate);//Offset:Discovery.exe+0x2C76800
	bool SetRate(float Rate);//Offset:Discovery.exe+0x2C768A0
	bool SetLooping(bool InLooping);//Offset:Discovery.exe+0x2C76940
	bool Seek(const struct FTimespan& InTime);//Offset:Discovery.exe+0x2C769E0
	bool Rewind();//Offset:Discovery.exe+0x2C76A90
	bool Play();//Offset:Discovery.exe+0x2C76AC0
	bool Pause();//Offset:Discovery.exe+0x2C76AF0
	bool OpenUrl(const struct FString& NewURL);//Offset:Discovery.exe+0x2C76B40
	bool IsStopped();//Offset:Discovery.exe+0x2C76BF0
	bool IsPlaying();//Offset:Discovery.exe+0x2C76C20
	bool IsPaused();//Offset:Discovery.exe+0x2C76C50
	bool IsLooping();//Offset:Discovery.exe+0x2C76C80
	bool IsInitialized();//Offset:Discovery.exe+0x2C766C0
	struct FString GetURL();//Offset:Discovery.exe+0x2C76CB0
	struct FTimespan GetTime();//Offset:Discovery.exe+0x2C76D20
	float GetRate();//Offset:Discovery.exe+0x2C76D70
	struct FTimespan GetDuration();//Offset:Discovery.exe+0x2C76DA0
	void Draw(class UTexture* Texture, bool tonemap, int out_nits, float Alpha, bool srgb_decode, bool hdr);//Offset:Discovery.exe+0x2C76490
	void CloseUrl();//Offset:Discovery.exe+0x2C76B20
	bool CanPlay();//Offset:Discovery.exe+0x2C76DF0
	bool CanPause();//Offset:Discovery.exe+0x2C76C20
};


// Class BinkMediaPlayer.BinkMediaTexture
// 0x0040 (0x0230 - 0x01F0)
class UBinkMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x01F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01F2(0x0006) MISSED OFFSET
	class UBinkMediaPlayer*                            MediaPlayer;                                              // 0x01F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPixelFormat>                          PixelFormat;                                              // 0x0200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               tonemap;                                                  // 0x0201(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0202(0x0002) MISSED OFFSET
	float                                              OutputNits;                                               // 0x0204(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DecodeSRGB;                                               // 0x020C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x23];                                      // 0x020D(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class BinkMediaPlayer.BinkMediaTexture"));
		return ptr;
	}


	void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);//Offset:Discovery.exe+0x2C77D40
	void Clear();//Offset:Discovery.exe+0x2C77D20
};


// Class BinkMediaPlayer.BinkMoviePlayerSettings
// 0x0030 (0x0058 - 0x0028)
class UBinkMoviePlayerSettings : public UObject
{
public:
	TEnumAsByte<EBinkMoviePlayerBinkBufferModes>       BinkBufferMode;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EBinkMoviePlayerBinkSoundTrack>        BinkSoundTrack;                                           // 0x0029(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                BinkSoundTrackStart;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FVector2D                                   BinkDestinationUpperLeft;                                 // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FVector2D                                   BinkDestinationLowerRight;                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EPixelFormat>                          BinkPixelFormat;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class BinkMediaPlayer.BinkMoviePlayerSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
