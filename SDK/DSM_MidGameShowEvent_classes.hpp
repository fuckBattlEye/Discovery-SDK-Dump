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

// SMBlueprintGeneratedClass DSM_MidGameShowEvent.DSM_MidGameShowEvent_C
// 0x09C0 (0x10D8 - 0x0718)
class UDSM_MidGameShowEvent_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_698D428C42094DE4C912429308661ADC_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_698D428C42094DE4C912429308661ADC_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_698D428C42094DE4C912429308661ADC_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_698D428C42094DE4C912429308661ADC_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_698D428C42094DE4C912429308661ADC_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_LD_Prop;// 0x1040(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     GameShowEventTagMap;                                      // 0x1088(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_MidGameShowEvent.DSM_MidGameShowEvent_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_698D428C42094DE4C912429308661ADC_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_698D428C42094DE4C912429308661ADC_Logic_State_C6250A2B406A861E627AD7A4D0D530C4();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_698D428C42094DE4C912429308661ADC_Commentator___MidGameShow_9088FE29430952EDBD1ED495F7BD6360();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_698D428C42094DE4C912429308661ADC_Wait_F25CACD043F9B063565BD89E479F77EA();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_MidGameShowEvent(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
