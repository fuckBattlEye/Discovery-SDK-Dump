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

// SMBlueprintGeneratedClass DSM_TimeLeft54321.DSM_TimeLeft54321_C
// 0x0618 (0x0D30 - 0x0718)
class UDSM_TimeLeft54321_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_0DF725FC48D209F89999D996CCE21747_LD_Prop;// 0x0720(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_0DF725FC48D209F89999D996CCE21747_LD_Prop_1;// 0x08B0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_0DF725FC48D209F89999D996CCE21747_LD_Prop;// 0x0A38(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_LD_Prop_3;// 0x0BC0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_LD_Prop_2;// 0x0C08(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_LD_Prop_1;// 0x0C50(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_LD_Prop;// 0x0C98(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     TimeTagMap;                                               // 0x0CE0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_TimeLeft54321.DSM_TimeLeft54321_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_0DF725FC48D209F89999D996CCE21747_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_0DF725FC48D209F89999D996CCE21747_Logic_State_36CCFCFC4EA236AA9F5D8DAB254341D2();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_0DF725FC48D209F89999D996CCE21747_Announcer___Countdown_C57755C54652A0FFB963B0A9F2B32E3E();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_TimeLeft54321(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
