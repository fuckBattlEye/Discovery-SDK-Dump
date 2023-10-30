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

// SMBlueprintGeneratedClass DSM_SquadWiped.DSM_SquadWiped_C
// 0x15B8 (0x1CD0 - 0x0718)
class UDSM_SquadWiped_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_4;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_3;// 0x08B0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_2;// 0x0A40(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_1;// 0x0BD0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop;// 0x0D60(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_5;// 0x0EF0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_4;// 0x1078(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_3;// 0x1200(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_2;// 0x1388(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_1;// 0x1510(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop;// 0x1698(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_13;// 0x1820(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_12;// 0x1868(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_11;// 0x18B0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_10;// 0x18F8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_9;// 0x1940(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_8;// 0x1988(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_7;// 0x19D0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_6;// 0x1A18(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_5;// 0x1A60(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_4;// 0x1AA8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_3;// 0x1AF0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_2;// 0x1B38(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop_1;// 0x1B80(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_LD_Prop;// 0x1BC8(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     SquadMap;                                                 // 0x1C10(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     SquadAnswerMap;                                           // 0x1C60(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>               Containers;                                               // 0x1CB0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SquadBucketSequence;                                      // 0x1CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SquadAnswerBucketSequence;                                // 0x1CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_SquadWiped.DSM_SquadWiped_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_DF7CC22DE6FE46E5F65D04F537E7042F_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_7029191DC382CD1DEADCCBBCD33EDE2E_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_26AE8674113BF0F399A68E15984CFCED_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_96B795C34CF8ECE4812C3463ABFBCDDF_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_DF7CC22DE6FE46E5F65D04F537E7042F_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_7029191DC382CD1DEADCCBBCD33EDE2E_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_26AE8674113BF0F399A68E15984CFCED_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_96B795C34CF8ECE4812C3463ABFBCDDF_2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_BBDFCF4746A2777F4C6BD38293E57176_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_What_Team_Is_Wiped__60FE1530484052DB106DCB8916EA9E95();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_Commentator___Squad_Wiped_679E6CB04452AED115009F896E79FC14();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_CoHost___Squad_Wiped_Answer_5845E1F145AD8190C22E5A97F3654531();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_Trigger_Announcer_Squad_Wipe_47A5D6DD4E3685D8566228A643E77456();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_Commentator___Generic_Answer_C8BB9DEA499353B18E71A59367F55A06();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_BBDFCF4746A2777F4C6BD38293E57176_Wait_CEB2211B4B2AD4E7F267D7BAE4A89F40();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_SquadWiped(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
