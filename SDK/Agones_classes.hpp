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

// Class Agones.AgonesComponent
// 0x0070 (0x0128 - 0x00B8)
class UAgonesComponent : public UActorComponent
{
public:
	struct FString                                     HttpPort;                                                 // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	float                                              HealthRateSeconds;                                        // 0x00C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableAutoConnect;                                      // 0x00CC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ConnectedDelegate;                                        // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00E0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Agones.AgonesComponent"));
		return ptr;
	}


	void WatchGameServer(const struct FScriptDelegate& WatchDelegate);//Offset:Discovery.exe+0x1ECBD40
	void Shutdown(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB4F0
	void SetPlayerCapacity(int64_t Count, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECAB20
	void SetLabel(const struct FString& Key, const struct FString& Value, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB600
	void SetAnnotation(const struct FString& Key, const struct FString& Value, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB7E0
	void Reserve(int64_t Seconds, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB9C0
	void Ready(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECBB20
	void PlayerDisconnect(const struct FString& PlayerId, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECAC80
	void PlayerConnect(const struct FString& PlayerId, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECAE40
	void IsPlayerConnected(const struct FString& PlayerId, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB000
	void HealthPing(float RateSeconds);//Offset:Discovery.exe+0x1ECC030
	void Health(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECBC30
	void GetPlayerCount(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB1C0
	void GetPlayerCapacity(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB2D0
	void GetConnectedPlayers(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECB3E0
	void GameServer(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECBDF0
	void ConnectSuccess(const struct FGameServerResponse& GameServerResponse);//Offset:Discovery.exe+0x1ECA8E0
	void Connect();//Offset:Discovery.exe+0x1ECC010
	void Allocate(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate);//Offset:Discovery.exe+0x1ECBF00
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
