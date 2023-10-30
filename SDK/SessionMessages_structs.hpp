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

// ScriptStruct SessionMessages.SessionServicePing
// 0x0010
struct FSessionServicePing
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0090
struct FSessionServicePong
{
	bool                                               Authorized;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     BuildDate;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DeviceName;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FString                                     PlatformName;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0058(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SessionName;                                              // 0x0068(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SessionOwner;                                             // 0x0078(0x0010) (Edit, ZeroConstructor)
	bool                                               Standalone;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
