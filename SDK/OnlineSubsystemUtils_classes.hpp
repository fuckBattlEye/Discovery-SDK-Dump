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

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0070 (0x07D8 - 0x0768)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                       // 0x0768(0x0001) (Config)
	unsigned char                                      AllowPlayerPortUnreach : 1;                               // 0x0768(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	uint32_t                                           MaxPortCountToTry;                                        // 0x076C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0770(0x000C) MISSED OFFSET
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                    // 0x077C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                       // 0x0780(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                    // 0x0784(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                       // 0x0788(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	double                                             MaxSecondsInReceive;                                      // 0x0790(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int                                                NbPacketsBetweenReceiveTimeTest;                          // 0x0798(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ResolutionConnectionTimeout;                              // 0x079C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x07A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.IpNetDriver"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.AchievementBlueprintLibrary"));
		return ptr;
	}


	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementId, bool* bFoundID, float* Progress);//Offset:Discovery.exe+0x1F90B90
	void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementId, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);//Offset:Discovery.exe+0x1F907C0
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (0x0068 - 0x0030)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy"));
		return ptr;
	}


	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F91150
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F91070
};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (0x0080 - 0x0030)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy"));
		return ptr;
	}


	class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);//Offset:Discovery.exe+0x1F91580
};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.ConnectionCallbackProxy"));
		return ptr;
	}


	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F91A10
};


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0068 (0x0098 - 0x0030)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.CreateSessionCallbackProxy"));
		return ptr;
	}


	class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);//Offset:Discovery.exe+0x1F91D80
};


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.DestroySessionCallbackProxy"));
		return ptr;
	}


	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F92190
};


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (0x0080 - 0x0030)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.EndMatchCallbackProxy"));
		return ptr;
	}


	class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchId, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome);//Offset:Discovery.exe+0x1F92500
};


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.EndTurnCallbackProxy"));
		return ptr;
	}


	class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchId, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);//Offset:Discovery.exe+0x1F92980
};


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (0x0090 - 0x0030)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.FindSessionsCallbackProxy"));
		return ptr;
	}


	struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);//Offset:Discovery.exe+0x1F930F0
	int STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);//Offset:Discovery.exe+0x1F932A0
	int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);//Offset:Discovery.exe+0x1F92E10
	int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);//Offset:Discovery.exe+0x1F92F80
	class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);//Offset:Discovery.exe+0x1F93410
};


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (0x0088 - 0x0030)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy"));
		return ptr;
	}


	class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);//Offset:Discovery.exe+0x1F93A50
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy"));
		return ptr;
	}


	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);//Offset:Discovery.exe+0x1F93F50
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// 0x0080 (0x00A8 - 0x0028)
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2"));
		return ptr;
	}


	class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F945A0
	class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F94500
	class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest);//Offset:Discovery.exe+0x1F94640
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy"));
		return ptr;
	}


	class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);//Offset:Discovery.exe+0x1F94B10
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// 0x0040 (0x0068 - 0x0028)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2"));
		return ptr;
	}


	class UInAppPurchaseQueryCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);//Offset:Discovery.exe+0x1F95010
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy"));
		return ptr;
	}


	class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F95400
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// 0x0088 (0x00B0 - 0x0028)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2"));
		return ptr;
	}


	class UInAppPurchaseRestoreCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F96A70
};


// Class OnlineSubsystemUtils.IpConnection
// 0x00A0 (0x32E0 - 0x3240)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x3240(0x0050) MISSED OFFSET
	float                                              SocketErrorDisconnectDelay;                               // 0x3290(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x3294(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.IpConnection"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0150 (0x0180 - 0x0030)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x130];                                     // 0x0050(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.JoinSessionCallbackProxy"));
		return ptr;
	}


	class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);//Offset:Discovery.exe+0x1F97040
};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary"));
		return ptr;
	}


	bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);//Offset:Discovery.exe+0x1F974E0
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy"));
		return ptr;
	}


	class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);//Offset:Discovery.exe+0x1F978C0
};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0070 (0x0098 - 0x0028)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy"));
		return ptr;
	}


	class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);//Offset:Discovery.exe+0x1F97C50
};


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (0x0068 - 0x0030)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.LogoutCallbackProxy"));
		return ptr;
	}


	class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);//Offset:Discovery.exe+0x1F97FE0
};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0030 (0x02F8 - 0x02C8)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	float                                              BeaconConnectionInitialTimeout;                           // 0x02D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BeaconConnectionTimeout;                                  // 0x02D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlineBeacon"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0060 (0x0358 - 0x02F8)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                              // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetConnection*                              BeaconConnection;                                         // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	enum class EBeaconConnectionState                  ConnectionState;                                          // 0x0308(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0309(0x004F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlineBeaconClient"));
		return ptr;
	}


	void ClientOnConnected();//Offset:Discovery.exe+0x157BE70
};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x0110 (0x0408 - 0x02F8)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                               // 0x02F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAuthRequired;                                            // 0x02FC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	uint32_t                                           MaxAuthTokenSize;                                         // 0x0300(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0304(0x0054) MISSED OFFSET
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0358(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0368(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlineBeaconHost"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (0x02F0 - 0x02C8)
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                           // 0x02C8(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      ClientBeaconActorClass;                                   // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x02E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlineBeaconHostObject"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0160 (0x0188 - 0x0028)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<struct FName, struct FName>                   MappedUniqueNetIdTypes;                                   // 0x0028(0x0050) (Config)
	TArray<struct FName>                               CompatibleUniqueNetIdTypes;                               // 0x0078(0x0010) (ZeroConstructor, Config)
	struct FName                                       VoiceSubsystemNameOverride;                               // 0x0088(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0090(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (0x0050 - 0x0038)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlinePIESettings"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
// 0x0000 (0x0028 - 0x0028)
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x01A0 (0x01C8 - 0x0028)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET
	bool                                               bIsFromInvite;                                            // 0x01C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHandlingDisconnect;                                      // 0x01C1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01C2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.OnlineSessionClient"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00C8 (0x0420 - 0x0358)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0358(0x0030) MISSED OFFSET
	struct FString                                     DestSessionId;                                            // 0x0388(0x0010) (ZeroConstructor)
	struct FPartyReservation                           PendingReservation;                                       // 0x0398(0x0058)
	enum class EClientRequestType                      RequestType;                                              // 0x03F0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReservationSent;                                  // 0x03F1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReservation;                                       // 0x03F2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x03F3(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.PartyBeaconClient"));
		return ptr;
	}


	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);//Offset:Discovery.exe+0x1F99570
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);//Offset:Discovery.exe+0x1F99800
	void ServerRemoveMemberFromReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);//Offset:Discovery.exe+0x1F99050
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);//Offset:Discovery.exe+0x1F98F40
	void ServerAddOrUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);//Offset:Discovery.exe+0x1F992E0
	void ClientSendReservationUpdates(int NumRemainingReservations);//Offset:Discovery.exe+0x1F99A90
	void ClientSendReservationFull();//Offset:Discovery.exe+0x154F3A0
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);//Offset:Discovery.exe+0x1F99BD0
	void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);//Offset:Discovery.exe+0x1F99B30
};


// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0078 (0x0368 - 0x02F0)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                    // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x02F8(0x0060) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x0358(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x035C(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x0360(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.PartyBeaconHost"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0078 (0x00A0 - 0x0028)
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumTeams;                                                 // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumPlayersPerTeam;                                        // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       TeamAssignmentMethod;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReservedHostTeamNum;                                      // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ForceTeamNum;                                             // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestrictCrossConsole;                                    // 0x0050(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<struct FString>                             PlatformCrossplayRestrictions;                            // 0x0058(0x0010) (ZeroConstructor, Config)
	TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                                      // 0x0068(0x0010) (ZeroConstructor, Config)
	bool                                               bEnableRemovalRequests;                                   // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0080(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.PartyBeaconState"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (0x0078 - 0x0030)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.QuitMatchCallbackProxy"));
		return ptr;
	}


	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchId, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);//Offset:Discovery.exe+0x1F9B5F0
};


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (0x0060 - 0x0030)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy"));
		return ptr;
	}


	class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);//Offset:Discovery.exe+0x1F9BAB0
};


// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x00F8 (0x0450 - 0x0358)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0358(0x0030) MISSED OFFSET
	struct FString                                     DestSessionId;                                            // 0x0388(0x0010) (ZeroConstructor)
	struct FSpectatorReservation                       PendingReservation;                                       // 0x0398(0x0088)
	enum class ESpectatorClientRequestType             RequestType;                                              // 0x0420(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReservationSent;                                  // 0x0421(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReservation;                                       // 0x0422(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x0423(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.SpectatorBeaconClient"));
		return ptr;
	}


	void ServerReservationRequest(const struct FString& SessionId, const struct FSpectatorReservation& Reservation);//Offset:Discovery.exe+0x1F9CB90
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);//Offset:Discovery.exe+0x1F98F40
	void ClientSendReservationUpdates(int NumRemainingReservations);//Offset:Discovery.exe+0x1F9CDA0
	void ClientSendReservationFull();//Offset:Discovery.exe+0x1582540
	void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);//Offset:Discovery.exe+0x1F9CEE0
	void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);//Offset:Discovery.exe+0x1F9CE40
};


// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x0078 (0x0368 - 0x02F0)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                       State;                                                    // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x02F8(0x0060) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x0358(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x035C(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x0360(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.SpectatorBeaconHost"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x0038 (0x0060 - 0x0028)
class USpectatorBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestrictCrossConsole;                                    // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FSpectatorReservation>               Reservations;                                             // 0x0040(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.SpectatorBeaconState"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (0x0358 - 0x0358)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.TestBeaconClient"));
		return ptr;
	}


	void ServerPong();//Offset:Discovery.exe+0x1F9DCE0
	void ClientPing();//Offset:Discovery.exe+0x1F9DD30
};


// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (0x02F0 - 0x02F0)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.TestBeaconHost"));
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary"));
		return ptr;
	}


	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);//Offset:Discovery.exe+0x1F9E400
	void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchId, int PlayerIndex, struct FString* PlayerDisplayName);//Offset:Discovery.exe+0x1F9E1B0
	void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchId, int* PlayerIndex);//Offset:Discovery.exe+0x1F9E530
	void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchId, bool* bIsMyTurn);//Offset:Discovery.exe+0x1F9E710
};


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0060 (0x0820 - 0x07C0)
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x07C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemUtils.VoipListenerSynthComponent"));
		return ptr;
	}


	bool IsIdling();//Offset:Discovery.exe+0x1F9ED00
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
