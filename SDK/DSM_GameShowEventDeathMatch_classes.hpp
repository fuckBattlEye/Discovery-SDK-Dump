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

// SMBlueprintGeneratedClass DSM_GameShowEventDeathMatch.DSM_GameShowEventDeathMatch_C
// 0x0970 (0x1088 - 0x0718)
class UDSM_GameShowEventDeathMatch_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_LD_Prop;// 0x1040(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_GameShowEventDeathMatch.DSM_GameShowEventDeathMatch_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_017C29224AE59EF8A39412B9B763AB0B_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_017C29224AE59EF8A39412B9B763AB0B_CoHost___Game_Show_Event_DeathMatch_447E034247E26793076F0997197ED4BF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_017C29224AE59EF8A39412B9B763AB0B_Trigger_Mid_Gameshow_Line_B7B135D2469BF16F595F67998E2A2528();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_017C29224AE59EF8A39412B9B763AB0B_Wait_23CD39CD404FAEDE1358EA8FBD23D188();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_GameShowEventDeathMatch(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
