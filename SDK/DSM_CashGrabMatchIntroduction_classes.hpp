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

// SMBlueprintGeneratedClass DSM_CashGrabMatchIntroduction.DSM_CashGrabMatchIntroduction_C
// 0x02B0 (0x09C8 - 0x0718)
class UDSM_CashGrabMatchIntroduction_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1D56120E4836F5CE918480A00FF9F52F_LD_Prop;// 0x0720(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_LD_Prop_3;// 0x08A8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_LD_Prop_2;// 0x08F0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_LD_Prop_1;// 0x0938(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_LD_Prop;// 0x0980(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_CashGrabMatchIntroduction.DSM_CashGrabMatchIntroduction_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1D56120E4836F5CE918480A00FF9F52F_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1D56120E4836F5CE918480A00FF9F52F_Play_On_CoHost_76A554594179EBFF388FC1AAAE80F5D6();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_CashGrabMatchIntroduction(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
