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

// Class Party.SocialManager
// 0x0180 (0x01A8 - 0x0028)
class USocialManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TArray<class USocialToolkit*>                      SocialToolkits;                                           // 0x0050(0x0010) (ZeroConstructor)
	class USocialDebugTools*                           SocialDebugTools;                                         // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0068(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialManager"));
		return ptr;
	}

};


// Class Party.SocialParty
// 0x0328 (0x0350 - 0x0028)
class USocialParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
	class UClass*                                      ReservationBeaconClientClass;                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpectatorBeaconClientClass;                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	struct FUniqueNetIdRepl                            OwningLocalUserId;                                        // 0x0080(0x0030)
	struct FUniqueNetIdRepl                            CurrentLeaderId;                                          // 0x00B0(0x0030)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                         // 0x00E0(0x0050)
	bool                                               bEnableAutomaticPartyRejoin;                              // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x57];                                      // 0x0131(0x0057) MISSED OFFSET
	double                                             PlatformUserInviteCooldown;                               // 0x0188(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	double                                             PrimaryUserInviteCooldown;                                // 0x0190(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x78];                                      // 0x0198(0x0078) MISSED OFFSET
	class APartyBeaconClient*                          ReservationBeaconClient;                                  // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class ASpectatorBeaconClient*                      SpectatorBeaconClient;                                    // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x128];                                     // 0x0228(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialParty"));
		return ptr;
	}

};


// Class Party.PartyMember
// 0x00D0 (0x00F8 - 0x0028)
class UPartyMember : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	class USocialUser*                                 SocialUser;                                               // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.PartyMember"));
		return ptr;
	}

};


// Class Party.SocialToolkit
// 0x0280 (0x02A8 - 0x0028)
class USocialToolkit : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	class USocialUser*                                 LocalUser;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USocialUser*>                         AllUsers;                                                 // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) MISSED OFFSET
	class ULocalPlayer*                                LocalPlayerOwner;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USocialChatManager*                          SocialChatManager;                                        // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C8];                                     // 0x00E0(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialToolkit"));
		return ptr;
	}

};


// Class Party.SocialUser
// 0x0198 (0x01C0 - 0x0028)
class USocialUser : public UObject
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialUser"));
		return ptr;
	}

};


// Class Party.Chatroom
// 0x0030 (0x0058 - 0x0028)
class UChatroom : public UObject
{
public:
	struct FString                                     CurrentChatRoomId;                                        // 0x0028(0x0010) (ZeroConstructor)
	int                                                MaxChatRoomRetries;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumChatRoomRetries;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.Chatroom"));
		return ptr;
	}

};


// Class Party.SocialChatManager
// 0x01F8 (0x0220 - 0x0028)
class USocialChatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                               // 0x0078(0x0050)
	TMap<struct FString, class USocialChatRoom*>       ChatRoomsById;                                            // 0x00C8(0x0050)
	TMap<struct FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                            // 0x0118(0x0050)
	bool                                               bEnableChatSlashCommands;                                 // 0x0168(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                            // 0x0170(0x0050)
	unsigned char                                      UnknownData02[0x60];                                      // 0x01C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialChatManager"));
		return ptr;
	}

};


// Class Party.SocialChatChannel
// 0x00C0 (0x00E8 - 0x0028)
class USocialChatChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialChatChannel"));
		return ptr;
	}

};


// Class Party.SocialChatRoom
// 0x0010 (0x00F8 - 0x00E8)
class USocialChatRoom : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialChatRoom"));
		return ptr;
	}

};


// Class Party.SocialDebugTools
// 0x0060 (0x0088 - 0x0028)
class USocialDebugTools : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialDebugTools"));
		return ptr;
	}

};


// Class Party.SocialGroupChannel
// 0x0070 (0x0098 - 0x0028)
class USocialGroupChannel : public UObject
{
public:
	class USocialUser*                                 SocialUser;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            GroupId;                                                  // 0x0030(0x0030)
	struct FText                                       DisplayName;                                              // 0x0060(0x0018)
	TArray<class USocialUser*>                         Members;                                                  // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialGroupChannel"));
		return ptr;
	}

};


// Class Party.SocialPartyChatRoom
// 0x0000 (0x00F8 - 0x00F8)
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialPartyChatRoom"));
		return ptr;
	}

};


// Class Party.SocialPrivateMessageChannel
// 0x0008 (0x00F0 - 0x00E8)
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                                 TargetUser;                                               // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialPrivateMessageChannel"));
		return ptr;
	}

};


// Class Party.SocialReadOnlyChatChannel
// 0x0000 (0x00E8 - 0x00E8)
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialReadOnlyChatChannel"));
		return ptr;
	}

};


// Class Party.SocialSettings
// 0x0038 (0x0060 - 0x0028)
class USocialSettings : public UObject
{
public:
	TArray<struct FName>                               OssNamesWithEnvironmentIdPrefix;                          // 0x0028(0x0010) (ZeroConstructor, Config)
	int                                                DefaultMaxPartySize;                                      // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPreferPlatformInvites;                                   // 0x003C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMustSendPrimaryInvites;                                  // 0x003D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLeavePartyOnDisconnect;                                  // 0x003E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSetDesiredPrivacyOnLocalPlayerBecomesLeader;             // 0x003F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UserListAutoUpdateRate;                                   // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinNicknameLength;                                        // 0x0044(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNicknameLength;                                        // 0x0048(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FSocialPlatformDescription>          SocialPlatformDescriptions;                               // 0x0050(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Party.SocialSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
