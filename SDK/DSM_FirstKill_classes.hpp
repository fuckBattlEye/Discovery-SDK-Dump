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

// SMBlueprintGeneratedClass DSM_FirstKill.DSM_FirstKill_C
// 0x0A90 (0x11A8 - 0x0718)
class UDSM_FirstKill_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_9;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_8;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_7;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_6;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_5;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_4;// 0x1040(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_3;// 0x1088(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_2;// 0x10D0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop_1;// 0x1118(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_LD_Prop;// 0x1160(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_FirstKill.DSM_FirstKill_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_DF7CC22DE6FE46E5F65D04F537E7042F_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_7029191DC382CD1DEADCCBBCD33EDE2E_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_26AE8674113BF0F399A68E15984CFCED_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_96B795C34CF8ECE4812C3463ABFBCDDF_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1FC88DB14A9FD942A9A6538763047025_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1FC88DB14A9FD942A9A6538763047025__CoHost___First_Kill_BA240B3143A0536EF67515A810EB7F7D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1FC88DB14A9FD942A9A6538763047025_Commentator___First_Kill_Answer_6E4E21D54E3C25FD430C5C8BBD13D004();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1FC88DB14A9FD942A9A6538763047025_Wait_7977917F40134E392A14EC8C28ECEA24();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_FirstKill(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
