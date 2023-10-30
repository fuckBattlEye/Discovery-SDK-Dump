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

// Class OnlineSubsystemEOS.EOSArtifactSettings
// 0x0000 (0x0030 - 0x0030)
class UEOSArtifactSettings : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEOS.EOSArtifactSettings"));
		return ptr;
	}

};


// Class OnlineSubsystemEOS.EOSSettings
// 0x0058 (0x0090 - 0x0038)
class UEOSSettings : public URuntimeOptionsBase
{
public:
	struct FString                                     CacheDir;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     DefaultArtifactName;                                      // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                TickBudgetInMilliseconds;                                 // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableOverlay;                                           // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableSocialOverlay;                                     // 0x005D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldEnforceBeingLaunchedByEGS;                         // 0x005E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	TArray<struct FString>                             TitleStorageTags;                                         // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                TitleStorageReadChunkLength;                              // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FArtifactSettings>                   Artifacts;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	bool                                               bUseEAS;                                                  // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseEOSConnect;                                           // 0x0089(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMirrorStatsToEOS;                                        // 0x008A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMirrorAchievementsToEOS;                                 // 0x008B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseEOSSessions;                                          // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMirrorPresenceToEAS;                                     // 0x008D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEOS.EOSSettings"));
		return ptr;
	}

};


// Class OnlineSubsystemEOS.NetDriverEOS
// 0x0000 (0x07E0 - 0x07E0)
class UNetDriverEOS : public UNetDriverEOSBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEOS.NetDriverEOS"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
