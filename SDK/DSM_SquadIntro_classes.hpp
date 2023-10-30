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

// SMBlueprintGeneratedClass DSM_SquadIntro.DSM_SquadIntro_C
// 0x0628 (0x0D40 - 0x0718)
class UDSM_SquadIntro_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_64F3486145271C3AD0E692A619546A5B_LD_Prop;// 0x0720(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_64F3486145271C3AD0E692A619546A5B_LD_Prop_1;// 0x08B0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_64F3486145271C3AD0E692A619546A5B_LD_Prop;// 0x0A38(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_LD_Prop_3;// 0x0BC0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_LD_Prop_2;// 0x0C08(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_LD_Prop_1;// 0x0C50(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_LD_Prop;// 0x0C98(0x0048)
	TArray<struct FGameplayTag>                        PresentedSquads;                                          // 0x0CE0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     SquadBucketMap;                                           // 0x0CF0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_SquadIntro.DSM_SquadIntro_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_64F3486145271C3AD0E692A619546A5B_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_64F3486145271C3AD0E692A619546A5B_Play_On_Commentator_EBC6AD984C87AA22BB451EB9A3E2234E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_64F3486145271C3AD0E692A619546A5B_Logic_State_13EAF42B4F228F30072BDAB883483821();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_SquadIntro(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
