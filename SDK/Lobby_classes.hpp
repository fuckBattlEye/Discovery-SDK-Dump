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

// Class Lobby.LobbyBeaconClient
// 0x0088 (0x03E0 - 0x0358)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                           LobbyState;                                               // 0x0358(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ALobbyBeaconPlayerState*                     PlayerState;                                              // 0x0360(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0368(0x0001) MISSED OFFSET
	enum class ELobbyBeaconJoinState                   LobbyJoinServerState;                                     // 0x0369(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x76];                                      // 0x036A(0x0076) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Lobby.LobbyBeaconClient"));
		return ptr;
	}


	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);//Offset:Discovery.exe+0x200A4E0
	void ServerNotifyJoiningServer();//Offset:Discovery.exe+0x200A840
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);//Offset:Discovery.exe+0x200A8E0
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);//Offset:Discovery.exe+0x200A690
	void ServerDisconnectFromLobby();//Offset:Discovery.exe+0x200A890
	void ServerCheat(const struct FString& Msg);//Offset:Discovery.exe+0x200AAC0
	void ClientWasKicked(const struct FText& KickReason);//Offset:Discovery.exe+0x200A2D0
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);//Offset:Discovery.exe+0x200AB90
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);//Offset:Discovery.exe+0x200A070
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);//Offset:Discovery.exe+0x200A160
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);//Offset:Discovery.exe+0x200A3A0
	void ClientJoinGame();//Offset:Discovery.exe+0x200AC30
	void ClientAckJoiningServer();//Offset:Discovery.exe+0x200A820
};


// Class Lobby.LobbyBeaconHost
// 0x0038 (0x0328 - 0x02F0)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x02F0(0x0028) UNKNOWN PROPERTY: LobbyStateClass
	class ALobbyBeaconState*                           LobbyState;                                               // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Lobby.LobbyBeaconHost"));
		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x00D0 (0x0398 - 0x02C8)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x02C8(0x0018) (Net)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x02E0(0x0030) (Net)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x0310(0x0030) (Net)
	bool                                               bInLobby;                                                 // 0x0340(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class AOnlineBeaconClient*                         ClientActor;                                              // 0x0348(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0350(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Lobby.LobbyBeaconPlayerState"));
		return ptr;
	}


	void OnRep_UniqueId();//Offset:Discovery.exe+0x200C660
	void OnRep_PartyOwner();//Offset:Discovery.exe+0x200C640
	void OnRep_InLobby();//Offset:Discovery.exe+0x200C620
};


// Class Lobby.LobbyBeaconState
// 0x01B0 (0x0478 - 0x02C8)
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                               // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class UClass*                                      LobbyBeaconPlayerStateClass;                              // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
	bool                                               bLobbyStarted;                                            // 0x02E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              WaitForPlayersTimeRemaining;                              // 0x02E4(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData)
	struct FLobbyPlayerStateInfoArray                  Players;                                                  // 0x02E8(0x0128) (Net)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0410(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Lobby.LobbyBeaconState"));
		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();//Offset:Discovery.exe+0x200CCC0
	void OnRep_LobbyStarted();//Offset:Discovery.exe+0x200CCE0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
