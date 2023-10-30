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

// SMBlueprintGeneratedClass DSM_UseItemGeneric.DSM_UseItemGeneric_C
// 0x0660 (0x0D78 - 0x0718)
class UDSM_UseItemGeneric_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop;// 0x0720(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop_1;// 0x08B0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop;// 0x0A38(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop_4;// 0x0BC0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop_3;// 0x0C08(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop_2;// 0x0C50(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop_1;// 0x0C98(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_LD_Prop;// 0x0CE0(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     ObjectTagsToBucketMap;                                    // 0x0D28(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_UseItemGeneric.DSM_UseItemGeneric_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_18B59905CC6FAC8B56897726853844BB();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1171F3CF4F172CB47D28AB9C398A4C9B_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1171F3CF4F172CB47D28AB9C398A4C9B_PlayDialogue_BFC7A06B47192CB1752919B3573D4205();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1171F3CF4F172CB47D28AB9C398A4C9B_Logic_State_FC6653DB4EFAEF9CAE58FFB796940E53();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_UseItemGeneric(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
