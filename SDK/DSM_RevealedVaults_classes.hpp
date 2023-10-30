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

// SMBlueprintGeneratedClass DSM_RevealedVaults.DSM_RevealedVaults_C
// 0x1001 (0x1719 - 0x0718)
class UDSM_RevealedVaults_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_3;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_2;// 0x08B0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_1;// 0x0A40(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop;// 0x0BD0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_4;// 0x0D60(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_3;// 0x0EE8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_2;// 0x1070(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_1;// 0x11F8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop;// 0x1380(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_5;// 0x1508(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_4;// 0x1550(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_3;// 0x1598(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_2;// 0x15E0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop_1;// 0x1628(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_LD_Prop;// 0x1670(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     RevealedAmountMap;                                        // 0x16B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Base_Tag;                                                 // 0x1708(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Base_Tag_0;                                               // 0x1710(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsFirst;                                                  // 0x1718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_RevealedVaults.DSM_RevealedVaults_C"));
		return ptr;
	}


	bool CheckPrerequisites(const struct FDialogueSMRequest& Request);//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_3218FCAE4539AEE1E05113A7956D4CCE_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_How_Many_Vaults__F1A8B93747FF54E5367ACE87ACA267FD();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_Commentator___NewVault_or_NewVaults_115A1890403BAD7F891FB3B7F477A778();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_Wait_FDD25C4B457584F6F5887287D4F7017B();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_Do_Not_Play_If_First_Time_12F1E70F47C41AC12E38108FF48B5D43();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_3218FCAE4539AEE1E05113A7956D4CCE_End_4634746D42EB4E4BAFBD27B9E112C818();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_RevealedVaults(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
