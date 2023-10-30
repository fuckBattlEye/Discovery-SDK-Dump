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

// SMBlueprintGeneratedClass DSM_TimeLeftCommentator.DSM_TimeLeftCommentator_C
// 0x09E0 (0x10F8 - 0x0718)
class UDSM_TimeLeftCommentator_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_534B8D5346489584138672BEE1F59057_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_534B8D5346489584138672BEE1F59057_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_534B8D5346489584138672BEE1F59057_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_534B8D5346489584138672BEE1F59057_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_534B8D5346489584138672BEE1F59057_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_LD_Prop;// 0x1040(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     TimeTagMap;                                               // 0x1088(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        IsEncouragementArray;                                     // 0x10D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                NewVar_0;                                                 // 0x10E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementGameplayTag;                                 // 0x10F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_TimeLeftCommentator.DSM_TimeLeftCommentator_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_534B8D5346489584138672BEE1F59057_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_534B8D5346489584138672BEE1F59057_Logic_State_48D7288B41423CF513654CA8C0828E25();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_534B8D5346489584138672BEE1F59057_Commentator___Time_Left_60sec_and_30sec_74101E1C43CD429BAA5B05B51E28FB6C();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_534B8D5346489584138672BEE1F59057_Wait_2503D3354FF431BDC0DD8FADEEB9E2CE();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_TimeLeftCommentator(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
