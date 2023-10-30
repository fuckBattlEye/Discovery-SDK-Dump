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

// SMBlueprintGeneratedClass DSM_DepotStarted.DSM_DepotStarted_C
// 0x16A4 (0x1DBC - 0x0718)
class UDSM_DepotStarted_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_4;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_3;// 0x08B0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_2;// 0x0A40(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_1;// 0x0BD0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_E8E510814095C848482ADF802CC0E30A_LD_Prop;// 0x0D60(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_5;// 0x0EF0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_4;// 0x1078(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_3;// 0x1200(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_2;// 0x1388(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_1;// 0x1510(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_LD_Prop;// 0x1698(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_13;// 0x1820(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_12;// 0x1868(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_11;// 0x18B0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_10;// 0x18F8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_9;// 0x1940(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_8;// 0x1988(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_7;// 0x19D0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_6;// 0x1A18(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_5;// 0x1A60(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_4;// 0x1AA8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_3;// 0x1AF0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_2;// 0x1B38(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop_1;// 0x1B80(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_LD_Prop;// 0x1BC8(0x0048)
	TArray<struct FGameplayTag>                        DepotTagArray;                                            // 0x1C10(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     GenericDepotSquadTagMap;                                  // 0x1C20(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     DepotASquadTagMap;                                        // 0x1C70(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     DepotBSquadTagMap;                                        // 0x1CC0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       SquadBucket;                                              // 0x1D10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SquadBucketSequence;                                      // 0x1D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGameplayTag>                        IsFirstDepositArray;                                      // 0x1D38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     FirstDepositStartedTeamTagMap;                            // 0x1D48(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       FinalRoundLastDepositBucketSequence;                      // 0x1D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGameplayTag>                        FinalRoundIsLastDepositArray;                             // 0x1DA0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RandomInt;                                                // 0x1DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FinalRoundLastDepositAnswerBucketSequence;                // 0x1DB4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_DepotStarted.DSM_DepotStarted_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_DF7CC22DE6FE46E5F65D04F537E7042F_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_7029191DC382CD1DEADCCBBCD33EDE2E_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_26AE8674113BF0F399A68E15984CFCED_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_96B795C34CF8ECE4812C3463ABFBCDDF_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_DF7CC22DE6FE46E5F65D04F537E7042F_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_7029191DC382CD1DEADCCBBCD33EDE2E_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_26AE8674113BF0F399A68E15984CFCED_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_E8E510814095C848482ADF802CC0E30A_96B795C34CF8ECE4812C3463ABFBCDDF_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_Logic_State_D01097BF4A476EAB19FD4680FD5EA548();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_Commentator___Cash_out_Started_13B6C6BB47F503689F927B8F0A84474E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_Wait_B329E70B428585C372C140B419A1A33B();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_Knockout_or_Final_BDF2531649C9C88B91DE6BBB934796E7();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_Play_On_CoHost_BAB3C92440AF4C7739241A82064570AC();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_E8E510814095C848482ADF802CC0E30A_Play_On_Commentator_4DC3D1244B65891AF3C3A0937A3850AC();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_DepotStarted(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
