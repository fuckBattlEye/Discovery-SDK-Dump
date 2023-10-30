#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	NotOnSale                      = 0,
	Percentage                     = 1,
	DiscountAmount                 = 2,
	PayAmount                      = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4
};


// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
	Invalid                        = 0,
	Failed                         = 1,
	Deferred                       = 2,
	Canceled                       = 3,
	Purchased                      = 4,
	Restored                       = 5,
	EInAppPurchaseStatus_MAX       = 6
};


// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ReservationRemoveMembers       = 6,
	AddOrUpdateReservation         = 7,
	EClientRequestType_MAX         = 8
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX    = 16
};


// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ESpectatorClientRequestType_MAX = 6
};


// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	SpectatorLimitReached          = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x0108
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0000(0x0108) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// 0x0018
struct FInAppPurchaseProductRequest2
{
	struct FString                                     ProductIdentifier;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsConsumable;                                            // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Token;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Transient)
	struct FString                                     Type;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              TokenBytes;                                               // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0058
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0030) (Transient)
	struct FString                                     ValidationStr;                                            // 0x0030(0x0010) (ZeroConstructor, Transient)
	struct FString                                     Platform;                                                 // 0x0040(0x0010) (ZeroConstructor, Transient)
	bool                                               bAllowCrossplay;                                          // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0058
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0030) (Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0038(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPlayerReservation>                  RemovedPartyMembers;                                      // 0x0048(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
// 0x0020
struct FPartyBeaconCrossplayPlatformMapping
{
	struct FString                                     PlatformName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlatformType;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// 0x0088
struct FSpectatorReservation
{
	struct FUniqueNetIdRepl                            SpectatorId;                                              // 0x0000(0x0030) (Transient)
	struct FPlayerReservation                          Spectator;                                                // 0x0030(0x0058) (Transient)
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// 0x0110
struct FOnlineProxyStoreOffer
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       LongDescription;                                          // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RegularPriceText;                                         // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                RegularPrice;                                             // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FText                                       PriceText;                                                // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                NumericPrice;                                             // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     CurrencyCode;                                             // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   ReleaseDate;                                              // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   ExpirationDate;                                           // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	TMap<struct FString, struct FString>               DynamicFields;                                            // 0x00C0(0x0050) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// 0x0030
struct FInAppPurchaseRestoreInfo2
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ValidationInfo;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// 0x0030
struct FInAppPurchaseReceiptInfo2
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ValidationInfo;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// 0x0030
struct FInAppPurchaseReceiptInfo
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ValidationInfo;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// 0x00F8
struct FInAppPurchaseProductInfo2
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TransactionIdentifier;                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              RawPrice;                                                 // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     CurrencyCode;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CurrencySymbol;                                           // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DecimalSeparator;                                         // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GroupingSeparator;                                        // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ReceiptData;                                              // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FString>               DynamicFields;                                            // 0x00A8(0x0050) (BlueprintVisible, BlueprintReadOnly)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
