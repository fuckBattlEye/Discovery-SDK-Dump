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

// SMBlueprintGeneratedClass DSM_HasRespawned.DSM_HasRespawned_C
// 0x09C9 (0x10E1 - 0x0718)
class UDSM_HasRespawned_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_LD_Prop;// 0x1040(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     SquadMap;                                                 // 0x1088(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SquadBucketSequence;                                      // 0x10D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFirst;                                                  // 0x10E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_HasRespawned.DSM_HasRespawned_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_1EA3BD504D5E518D8D286CB5D00FF2DA_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1EA3BD504D5E518D8D286CB5D00FF2DA_What_team__282390AB42178CE781A5A5AF112D81C6();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1EA3BD504D5E518D8D286CB5D00FF2DA_Commentator___Respawn_95C6686B488649388FF8B9A6D0CDD43B();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_1EA3BD504D5E518D8D286CB5D00FF2DA_Wait_197F760F47876237C94A61B00E1860AD();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_HasRespawned(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
