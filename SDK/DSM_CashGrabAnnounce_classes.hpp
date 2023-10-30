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

// SMBlueprintGeneratedClass DSM_CashGrabAnnounce.DSM_CashGrabAnnounce_C
// 0x0EE8 (0x1600 - 0x0718)
class UDSM_CashGrabAnnounce_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_2;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_1;// 0x08B0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop;// 0x0A40(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_3;// 0x0BD0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_2;// 0x0D58(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_1;// 0x0EE0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop;// 0x1068(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_10;// 0x11F0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_9;// 0x1238(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_8;// 0x1280(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_7;// 0x12C8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_6;// 0x1310(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_5;// 0x1358(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_4;// 0x13A0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_3;// 0x13E8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_2;// 0x1430(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop_1;// 0x1478(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_LD_Prop;// 0x14C0(0x0048)
	struct FName                                       ScottyAndJune;                                            // 0x1508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FGameplayTag, struct FGameplayTag>     BucketMap;                                                // 0x1510(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, double>                  BucketCooldownMap;                                        // 0x1560(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, bool>                    BucketRandomGenericMap;                                   // 0x15B0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_CashGrabAnnounce.DSM_CashGrabAnnounce_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_C0E87BED3A8C440D54C1F0487381B037();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_02D5906F5425ECAF722F7DA1584049D9();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_F19F329464824ECFC19C1C85BBBA1878();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_821886401B02B36F1D78B27C283FFA49();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_18B59905CC6FAC8B56897726853844BB();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_358C3E8D494DE0FE1DED638DC6BB99E6_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_Get_Buckets_272AEAD54EDDA3107D21D89BA39BB624();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_Get_Scotty_and_June_031DDEAE443AB2ADFBC0879FDEE386F7();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_PlayDialogue_54C2D65C49EAF60A684810AD4C083544();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_358C3E8D494DE0FE1DED638DC6BB99E6_Wait_374EB8DB44D46AA449A7F68DB851A767();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_CashGrabAnnounce(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
