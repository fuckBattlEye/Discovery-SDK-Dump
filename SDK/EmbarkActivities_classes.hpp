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

// Class EmbarkActivities.ActivitiesSettings
// 0x0010 (0x0038 - 0x0028)
class UActivitiesSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: ActivityList

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.ActivitiesSettings"));
		return ptr;
	}

};


// Class EmbarkActivities.ActivityAsset
// 0x0010 (0x0040 - 0x0030)
class UActivityAsset : public UDataAsset
{
public:
	struct FName                                       ActivityId;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActivityInstanceClass;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.ActivityAsset"));
		return ptr;
	}

};


// Class EmbarkActivities.ActivityInstance
// 0x0010 (0x0038 - 0x0028)
class UActivityInstance : public UObject
{
public:
	class ULocalPlayer*                                LocalPlayer;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ActivityId;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.ActivityInstance"));
		return ptr;
	}


	void Initialize(class UActivityAsset* InActivityAsset, class ULocalPlayer* InLocalPlayer);//Offset:Discovery.exe+0x1D4DAA0
	class APlayerController* GetPlayerController();//Offset:Discovery.exe+0x1D4DA70
	class AEmbarkGameStateBase* GetGameState();//Offset:Discovery.exe+0x1D4DA40
};


// Class EmbarkActivities.ActivitySave
// 0x0010 (0x0038 - 0x0028)
class UActivitySave : public USaveGame
{
public:
	struct FString                                     SaveSlot;                                                 // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.ActivitySave"));
		return ptr;
	}

};


// Class EmbarkActivities.CompetitiveActivitySave
// 0x0028 (0x0060 - 0x0038)
class UCompetitiveActivitySave : public UActivitySave
{
public:
	TArray<struct FString>                             ManagedMatches;                                           // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     MatchInProgress;                                          // 0x0048(0x0010) (ZeroConstructor)
	bool                                               bHasAnotherPlatformPlayers;                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.CompetitiveActivitySave"));
		return ptr;
	}

};


// Class EmbarkActivities.ActivityTask
// 0x0030 (0x0058 - 0x0028)
class UActivityTask : public UObject
{
public:
	class UIEmbarkOnlineClientServices*                ClientServices;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInProcess;                                             // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UActivityInstance*                           ActivityInstance;                                         // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UActivityTask*                               BoundTask;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       Pipeline;                                                 // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNeedsRepeat;                                             // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.ActivityTask"));
		return ptr;
	}

};


// Class EmbarkActivities.CancelPreviousMatchesTask
// 0x0010 (0x0068 - 0x0058)
class UCancelPreviousMatchesTask : public UActivityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.CancelPreviousMatchesTask"));
		return ptr;
	}

};


// Class EmbarkActivities.CheckLoginStatus
// 0x0000 (0x0058 - 0x0058)
class UCheckLoginStatus : public UActivityTask
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.CheckLoginStatus"));
		return ptr;
	}


	void HandleOnLoginComplete(bool bWasSuccessful, enum class EAuthErrorCode ErrorCode);//Offset:Discovery.exe+0x1D4E390
};


// Class EmbarkActivities.CheckPlatformLeader
// 0x0010 (0x0068 - 0x0058)
class UCheckPlatformLeader : public UActivityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.CheckPlatformLeader"));
		return ptr;
	}

};


// Class EmbarkActivities.CheckScenarioNameTask
// 0x0000 (0x0058 - 0x0058)
class UCheckScenarioNameTask : public UActivityTask
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.CheckScenarioNameTask"));
		return ptr;
	}


	void HandleOnSquadsChanged();//Offset:Discovery.exe+0x1D4E880
	void HandleOnMatchStatusChanged(enum class EMatchStatus InNewMatchStatus);//Offset:Discovery.exe+0x1D4E8A0
	void HandleOnMatchStatsChanged();//Offset:Discovery.exe+0x1D4E880
	void HandleOnGameModeChanged(const struct FName& InNewGameModeName);//Offset:Discovery.exe+0x1D4E930
};


// Class EmbarkActivities.CompetitiveActivityInstance
// 0x0038 (0x0070 - 0x0038)
class UCompetitiveActivityInstance : public UActivityInstance
{
public:
	struct FScriptMulticastDelegate                    OnMatchStatusChanged;                                     // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameModeChanged;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchStatsChanged;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UActivityTask*                               RootTask;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.CompetitiveActivityInstance"));
		return ptr;
	}


	void UpdateGameStateListeners();//Offset:Discovery.exe+0x327F8B0
	void OnMatchStatusChanged__DelegateSignature(enum class EMatchStatus InNewMatchStatus);//Offset:Discovery.exe+0x327F8B0
	void OnMatchStatsChanged__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	void OnGameModeChanged__DelegateSignature(const struct FName& InNewGameModeName);//Offset:Discovery.exe+0x327F8B0
	bool IsValidScenarioName();//Offset:Discovery.exe+0x327F8B0
	bool GetTeamScore(class AEmbarkSquad* Squad, struct FScore* OutScore);//Offset:Discovery.exe+0x327F8B0
	bool GetPlayerScore(class UEmbarkSquadMember* SquadMember, struct FScore* OutScore);//Offset:Discovery.exe+0x327F8B0
	enum class EMatchStatus GetCurrentMatchStatus();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkActivities.EmbarkActivitiesStatics
// 0x0000 (0x0028 - 0x0028)
class UEmbarkActivitiesStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.EmbarkActivitiesStatics"));
		return ptr;
	}


	class UServicePlayerProfile* STATIC_GetProfile(class ULocalPlayer* InLocalPlayer, const struct FUniqueNetIdRepl& InUniqueNetId);//Offset:Discovery.exe+0x1D4FA20
	struct FString STATIC_GetPlayerName(class ULocalPlayer* InLocalPlayer, const struct FUniqueNetIdRepl& InUniqueNetId);//Offset:Discovery.exe+0x1D4F500
	struct FUniqueNetIdRepl STATIC_GetPlatformUniqueNetId(class ULocalPlayer* InLocalPlayer, const struct FUniqueNetIdRepl& InUniqueNetId);//Offset:Discovery.exe+0x1D4F7D0
	struct FUniqueNetIdRepl STATIC_GetPlatformEmptyId();//Offset:Discovery.exe+0x1D4F680
};


// Class EmbarkActivities.EmbarkActivitiesSubsystem
// 0x0010 (0x0040 - 0x0030)
class UEmbarkActivitiesSubsystem : public ULocalPlayerSubsystem
{
public:
	TArray<class UActivityInstance*>                   ActivityInstances;                                        // 0x0030(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.EmbarkActivitiesSubsystem"));
		return ptr;
	}

};


// Class EmbarkActivities.GetMatchIdTask
// 0x0010 (0x0068 - 0x0058)
class UGetMatchIdTask : public UActivityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.GetMatchIdTask"));
		return ptr;
	}


	void HandleOnMatchIdChanged();//Offset:Discovery.exe+0x1D50090
};


// Class EmbarkActivities.ReportMatchTask
// 0x0010 (0x0068 - 0x0058)
class UReportMatchTask : public UActivityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.ReportMatchTask"));
		return ptr;
	}

};


// Class EmbarkActivities.RequestPlatformIdTask
// 0x0010 (0x0068 - 0x0058)
class URequestPlatformIdTask : public UActivityTask
{
public:
	struct FScriptDelegate                             RequestCompletedDelegate;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.RequestPlatformIdTask"));
		return ptr;
	}


	void HandleOnSquadsChanged();//Offset:Discovery.exe+0x1D4E880
	void HandleOnRequestCompleted(bool bWasSuccessful);//Offset:Discovery.exe+0x1D504B0
};


// Class EmbarkActivities.UpdateMatchDetailsTask
// 0x0020 (0x0078 - 0x0058)
class UUpdateMatchDetailsTask : public UActivityTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.UpdateMatchDetailsTask"));
		return ptr;
	}

};


// Class EmbarkActivities.UpdateMatchStatusTask
// 0x0018 (0x0070 - 0x0058)
class UUpdateMatchStatusTask : public UActivityTask
{
public:
	enum class EMatchStatus                            CurrentMatchStatus;                                       // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0059(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkActivities.UpdateMatchStatusTask"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
