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

// SMBlueprintGeneratedClass DSM_Halfway.DSM_Halfway_C
// 0x06C8 (0x0DE0 - 0x0718)
class UDSM_Halfway_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_37E42E424BD3A808773E9B9786079683_LD_Prop;// 0x0720(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_37E42E424BD3A808773E9B9786079683_LD_Prop_1;// 0x08B0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_37E42E424BD3A808773E9B9786079683_LD_Prop;// 0x0A38(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_LD_Prop_5;// 0x0BC0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_LD_Prop_4;// 0x0C08(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_LD_Prop_3;// 0x0C50(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_LD_Prop_2;// 0x0C98(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_LD_Prop_1;// 0x0CE0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_LD_Prop;// 0x0D28(0x0048)
	struct FGameplayTagContainer                       TimeBucket;                                               // 0x0D70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     TimeLeftMap;                                              // 0x0D90(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_Halfway.DSM_Halfway_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_37E42E424BD3A808773E9B9786079683_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_37E42E424BD3A808773E9B9786079683_Commentator___Halftime_DC2F1E0A4E3EAE10B833AF89D0ABA111();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_37E42E424BD3A808773E9B9786079683_Wait_977C00BD4256EB4DCFDFCA9FA39D4A9B();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_Halfway(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
