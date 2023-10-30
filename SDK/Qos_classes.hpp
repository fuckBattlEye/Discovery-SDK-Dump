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

// Class Qos.QosBeaconClient
// 0x0038 (0x0390 - 0x0358)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0358(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Qos.QosBeaconClient"));
		return ptr;
	}


	void ServerQosRequest(const struct FString& InSessionId);//Offset:Discovery.exe+0x1FAD520
	void ClientQosResponse(enum class EQosResponseType Response);//Offset:Discovery.exe+0x1FAD480
};


// Class Qos.QosBeaconHost
// 0x0010 (0x0300 - 0x02F0)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Qos.QosBeaconHost"));
		return ptr;
	}

};


// Class Qos.QosEvaluator
// 0x0058 (0x0080 - 0x0028)
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	bool                                               bInProgress;                                              // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelOperation;                                         // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<struct FDatacenterQosInstance>              Datacenters;                                              // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Qos.QosEvaluator"));
		return ptr;
	}

};


// Class Qos.QosRegionManager
// 0x00B8 (0x00E0 - 0x0028)
class UQosRegionManager : public UObject
{
public:
	int                                                NumTestsPerRegion;                                        // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PingTimeout;                                              // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableSubspaceBiasOrder;                                 // 0x0030(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     SubspaceDelimiter;                                        // 0x0038(0x0010) (ZeroConstructor, Config)
	TArray<struct FQosRegionInfo>                      RegionDefinitions;                                        // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FQosDatacenterInfo>                  DatacenterDefinitions;                                    // 0x0058(0x0010) (ZeroConstructor, Config)
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0068(0x0008) (ZeroConstructor)
	class UQosEvaluator*                               Evaluator;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	enum class EQosCompletionResult                    QosEvalResult;                                            // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<struct FRegionQosInstance>                  RegionOptions;                                            // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     ForceRegionId;                                            // 0x0090(0x0010) (ZeroConstructor)
	bool                                               bRegionForcedViaCommandline;                              // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FString                                     SelectedRegionId;                                         // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Qos.QosRegionManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
