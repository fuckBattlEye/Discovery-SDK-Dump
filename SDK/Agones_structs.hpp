#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Agones.Port
// 0x0018
struct FPort
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Agones.Status
// 0x0030
struct FStatus
{
	struct FString                                     State;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Address;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPort>                               Ports;                                                    // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Agones.ObjectMeta
// 0x00F8
struct FObjectMeta
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Namespace;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Uid;                                                      // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ResourceVersion;                                          // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            Generation;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            CreationTimestamp;                                        // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            DeletionTimestamp;                                        // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               Annotations;                                              // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly)
	TMap<struct FString, struct FString>               Labels;                                                   // 0x00A8(0x0050) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Agones.Health
// 0x0010
struct FHealth
{
	bool                                               bDisabled;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PeriodSeconds;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FailureThreshold;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InitialDelaySeconds;                                      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Agones.Spec
// 0x0010
struct FSpec
{
	struct FHealth                                     Health;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Agones.GameServerResponse
// 0x0138
struct FGameServerResponse
{
	struct FStatus                                     Status;                                                   // 0x0000(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FObjectMeta                                 ObjectMeta;                                               // 0x0030(0x00F8) (BlueprintVisible, BlueprintReadOnly)
	struct FSpec                                       Spec;                                                     // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Agones.AgonesError
// 0x0010
struct FAgonesError
{
	struct FString                                     ErrorMessage;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Agones.EmptyResponse
// 0x0001
struct FEmptyResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Agones.ConnectedPlayersResponse
// 0x0010
struct FConnectedPlayersResponse
{
	TArray<struct FString>                             ConnectedPlayers;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Agones.CountResponse
// 0x0008
struct FCountResponse
{
	int64_t                                            Count;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Agones.ConnectedResponse
// 0x0001
struct FConnectedResponse
{
	bool                                               bConnected;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Agones.DisconnectResponse
// 0x0001
struct FDisconnectResponse
{
	bool                                               bDisconnected;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Agones.KeyValuePair
// 0x0020
struct FKeyValuePair
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Agones.Duration
// 0x0008
struct FDuration
{
	int64_t                                            Seconds;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Agones.AgonesPlayer
// 0x0010
struct FAgonesPlayer
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Agones.PlayerCapacity
// 0x0008
struct FPlayerCapacity
{
	int64_t                                            Count;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
