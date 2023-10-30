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

// SMBlueprintGeneratedClass DSM_VaultOpenStart.DSM_VaultOpenStart_C
// 0x0B18 (0x1230 - 0x0718)
class UDSM_VaultOpenStart_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_LD_Prop;// 0x1040(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     GenericVaultSquadTagMap;                                  // 0x1088(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     Vault1SquadTagMap;                                        // 0x10D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     Vault2SquadTagMap;                                        // 0x1128(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        VaultTagMap;                                              // 0x1178(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SquadBucketSequence;                                      // 0x1188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FGameplayTag, struct FGameplayTag>     Vault3SquadTagMap;                                        // 0x1190(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     Vault4SquadTagMap;                                        // 0x11E0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_VaultOpenStart.DSM_VaultOpenStart_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_8BD656DF424D12A3CB97EAA27495BD07_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_8BD656DF424D12A3CB97EAA27495BD07_Commentator___Vault_Open_Start_Generic_61C61CE5461ACFC5A8FF57937A8EC815();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_8BD656DF424D12A3CB97EAA27495BD07_What_Team_Is_Opening_Vault_CDCD00C64FFBE04503C57B90935EA411();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_8BD656DF424D12A3CB97EAA27495BD07_Wait_5CC900E44A6CBEEF58F2B89E6DE3F01F();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_VaultOpenStart(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
