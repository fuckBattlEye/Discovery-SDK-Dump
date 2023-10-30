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

// BlueprintGeneratedClass BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C
// 0x0160 (0x0700 - 0x05A0)
class UBP_DiscoveryGameInstance_C : public UDiscoveryGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlueprintSessionResult                     CurrentSession;                                           // 0x05A8(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasSession;                                               // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    UserStatusChanged;                                        // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MatchmakingStarted;                                       // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MatchmakingEnded;                                         // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsMatchmaking;                                            // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNotMatchmaking;                                         // 0x06E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x06EA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    MatchmakingUpdated;                                       // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C"));
		return ptr;
	}


	void SetIsMatchmaking(bool Value);//Offset:Discovery.exe+0x327F8B0
	void SetCurrentSession(const struct FBlueprintSessionResult& Session, bool IsSessionValid);//Offset:Discovery.exe+0x327F8B0
	void OnFailure_7C51A29246145214228F94B2C6E7EFA0();//Offset:Discovery.exe+0x327F8B0
	void OnSuccess_7C51A29246145214228F94B2C6E7EFA0();//Offset:Discovery.exe+0x327F8B0
	void LeaveCurrentSession();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_BP_DiscoveryGameInstance(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
	void MatchmakingUpdated__DelegateSignature(unsigned char State);//Offset:Discovery.exe+0x327F8B0
	void MatchmakingEnded__DelegateSignature(bool Successful);//Offset:Discovery.exe+0x327F8B0
	void MatchmakingStarted__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	void UserStatusChanged__DelegateSignature(bool IsLoggedIn);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
