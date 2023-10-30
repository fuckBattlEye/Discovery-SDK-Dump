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

// SMBlueprintGeneratedClass DSM_GameShowEventLava.DSM_GameShowEventLava_C
// 0x0970 (0x1088 - 0x0718)
class UDSM_GameShowEventLava_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_LD_Prop;// 0x1040(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_GameShowEventLava.DSM_GameShowEventLava_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_7457EECB4A1FA010C332378C3B05D08F_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_7457EECB4A1FA010C332378C3B05D08F_CoHost___Game_Show_Event_Lava_22E87A4841AC6843798016BDBCA3CD55();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_7457EECB4A1FA010C332378C3B05D08F_Trigger_Mid_Gameshow_Line_B6C9C1A84C20003C0C2DBB8CC849C1D1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_7457EECB4A1FA010C332378C3B05D08F_Wait_4A106D5F4322DE5720C9D79F54198D55();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_GameShowEventLava(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
