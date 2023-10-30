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

// SMBlueprintGeneratedClass DSM_GameShowEventOrbitalLasers.DSM_GameShowEventOrbitalLasers_C
// 0x0970 (0x1088 - 0x0718)
class UDSM_GameShowEventOrbitalLasers_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_5D0995144D34E2768C1963A93939E55E_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_5D0995144D34E2768C1963A93939E55E_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_LD_Prop;// 0x1040(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_GameShowEventOrbitalLasers.DSM_GameShowEventOrbitalLasers_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_5D0995144D34E2768C1963A93939E55E_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_5D0995144D34E2768C1963A93939E55E_CoHost___Game_Show_Event_Orbital_Lasers_E45FC6174A203EFE8286828F352FDAFE();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_5D0995144D34E2768C1963A93939E55E_Trigger_Mid_Gameshow_Line_9AA3B95440361BADA7AA958336D3440D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_5D0995144D34E2768C1963A93939E55E_Wait_07064FD34EF89CA2527694BB3CF9BA09();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_GameShowEventOrbitalLasers(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
