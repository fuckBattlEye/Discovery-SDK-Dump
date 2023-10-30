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

// SMBlueprintGeneratedClass DSM_10SecondsLeftWarning.DSM_10SecondsLeftWarning_C
// 0x02B0 (0x09C8 - 0x0718)
class UDSM_10SecondsLeftWarning_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_LD_Prop;// 0x0720(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_LD_Prop_3;// 0x08A8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_LD_Prop_2;// 0x08F0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_LD_Prop_1;// 0x0938(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_LD_Prop;// 0x0980(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_10SecondsLeftWarning.DSM_10SecondsLeftWarning_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_30DF8B184BF2E3C2C5AC24B0BEF0A9EB_Commentator___10_Second_Warning_20F84B684C1A19B0A98CB3842A0BCDFE();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_10SecondsLeftWarning(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
