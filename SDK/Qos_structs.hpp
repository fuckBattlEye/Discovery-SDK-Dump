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

// Enum Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{
	NoResponse                     = 0,
	Success                        = 1,
	Failure                        = 2,
	EQosResponseType_MAX           = 3
};


// Enum Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8_t
{
	Invalid                        = 0,
	Success                        = 1,
	Incomplete                     = 2,
	EQosDatacenterResult_MAX       = 3
};


// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{
	Invalid                        = 0,
	Success                        = 1,
	Failure                        = 2,
	Canceled                       = 3,
	EQosCompletionResult_MAX       = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosPingServerInfo
// 0x0018
struct FQosPingServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Qos.QosDatacenterInfo
// 0x0038
struct FQosDatacenterInfo
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RegionId;                                                 // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FQosPingServerInfo>                  Servers;                                                  // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Qos.DatacenterQosInstance
// 0x0068
struct FDatacenterQosInstance
{
	struct FQosDatacenterInfo                          Definition;                                               // 0x0000(0x0038) (Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	int                                                AvgPingMs;                                                // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<int>                                        PingResults;                                              // 0x0040(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0058(0x0008) (ZeroConstructor, Transient)
	bool                                               bUsable;                                                  // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Qos.QosSubspaceComparisonParams
// 0x0010
struct FQosSubspaceComparisonParams
{
	int                                                MaxNonSubspacePingMs;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinSubspacePingMs;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ConstantMaxToleranceMs;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ScaledMaxTolerancePct;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Qos.QosRegionInfo
// 0x0040
struct FQosRegionInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018)
	struct FString                                     RegionId;                                                 // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAssignable;                                          // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSubspaceBias;                                       // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FQosSubspaceComparisonParams                SubspaceBiasParams;                                       // 0x002C(0x0010)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Qos.RegionQosInstance
// 0x0050
struct FRegionQosInstance
{
	struct FQosRegionInfo                              Definition;                                               // 0x0000(0x0040) (Transient)
	TArray<struct FDatacenterQosInstance>              DatacenterOptions;                                        // 0x0040(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
