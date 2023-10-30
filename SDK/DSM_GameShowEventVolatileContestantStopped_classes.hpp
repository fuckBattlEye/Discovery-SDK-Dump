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

// SMBlueprintGeneratedClass DSM_GameShowEventVolatileContestantStopped.DSM_GameShowEventVolatileContestantStopped_C
// 0x02B0 (0x09C8 - 0x0718)
class UDSM_GameShowEventVolatileContestantStopped_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_CE3CDC73455270D9A9506491CF06B6FA_LD_Prop;// 0x0720(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_LD_Prop_3;// 0x08A8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_LD_Prop_2;// 0x08F0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_LD_Prop_1;// 0x0938(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_LD_Prop;// 0x0980(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_GameShowEventVolatileContestantStopped.DSM_GameShowEventVolatileContestantStopped_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_CE3CDC73455270D9A9506491CF06B6FA_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_CE3CDC73455270D9A9506491CF06B6FA_CoHost___Volatile_Contestant_Stopped_D9C6DAAE49FA06E61DD8F6911449F1E5();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_GameShowEventVolatileContestantStopped(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
