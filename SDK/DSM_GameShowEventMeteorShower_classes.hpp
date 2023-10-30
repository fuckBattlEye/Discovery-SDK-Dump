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

// SMBlueprintGeneratedClass DSM_GameShowEventMeteorShower.DSM_GameShowEventMeteorShower_C
// 0x0970 (0x1088 - 0x0718)
class UDSM_GameShowEventMeteorShower_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_LD_Prop;// 0x1040(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_GameShowEventMeteorShower.DSM_GameShowEventMeteorShower_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0EBB88614B30D685D4CCBA80F076C9B9_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_0EBB88614B30D685D4CCBA80F076C9B9_CoHost___Game_Show_Event_Meteor_Shower_C1FE4A964B9FB875AC101999481F7D20();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_0EBB88614B30D685D4CCBA80F076C9B9_Trigger_Mid_Gameshow_Line_764483464A8833BEF864A5AE9C2C9B9F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_0EBB88614B30D685D4CCBA80F076C9B9_Wait_C29210874B52042A4CAE42B88F954785();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_GameShowEventMeteorShower(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
