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

// Class UdpMessaging.UdpMessagingSettings
// 0x0080 (0x00A8 - 0x0028)
class UUdpMessagingSettings : public UObject
{
public:
	bool                                               EnabledByDefault;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableTransport;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoRepair;                                              // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              MaxSendRate;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           AutoRepairAttemptLimit;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStopServiceWhenAppDeactivates;                           // 0x0034(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     UnicastEndpoint;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     MulticastEndpoint;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	enum class EUdpMessageFormat                       MessageFormat;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      MulticastTimeToLive;                                      // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	TArray<struct FString>                             StaticEndpoints;                                          // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               EnableTunnel;                                             // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     TunnelUnicastEndpoint;                                    // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     TunnelMulticastEndpoint;                                  // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             RemoteTunnelEndpoints;                                    // 0x0098(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UdpMessaging.UdpMessagingSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
