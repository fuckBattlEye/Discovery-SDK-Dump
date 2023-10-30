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

// SMBlueprintGeneratedClass DSM_EndOfRound.DSM_EndOfRound_C
// 0x0EB0 (0x15C8 - 0x0718)
class UDSM_EndOfRound_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_2;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_1;// 0x08B0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop;// 0x0A40(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_3;// 0x0BD0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_2;// 0x0D58(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_1;// 0x0EE0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop;// 0x1068(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_9;// 0x11F0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_8;// 0x1238(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_7;// 0x1280(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_6;// 0x12C8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_5;// 0x1310(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_4;// 0x1358(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_3;// 0x13A0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_2;// 0x13E8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop_1;// 0x1430(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_LD_Prop;// 0x1478(0x0048)
	TArray<struct FGameplayTag>                        RoundTagArray;                                            // 0x14C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     CasualSquadTagMap;                                        // 0x14D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     KnockoutSquadTagMap;                                      // 0x1520(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     FinalSquadTagMap;                                         // 0x1570(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SquadBucketSequence;                                      // 0x15C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_EndOfRound.DSM_EndOfRound_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_DF7CC22DE6FE46E5F65D04F537E7042F_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_7029191DC382CD1DEADCCBBCD33EDE2E_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_26AE8674113BF0F399A68E15984CFCED_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_96B795C34CF8ECE4812C3463ABFBCDDF_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_11AF4EE74B4494E19D58088E4FC4F178_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_What_Round_and_Team__6FCECBF2465D5BC0FCB864A52678B9B1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_Commentator___End_Of_Round_and_Disable_QueueMain_After_Line_67C68BAF4625D6682A4A3585A839895A();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_Commentator___Round_Over_642ADED34C87BD66B2B02F9A473ECD68();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_11AF4EE74B4494E19D58088E4FC4F178_Wait_586883034E39C98D4A46AC871C51686E();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_EndOfRound(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
