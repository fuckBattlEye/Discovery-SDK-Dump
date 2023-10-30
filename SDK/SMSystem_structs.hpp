#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SMSystem.ESMLogType
enum class ESMLogType : uint8_t
{
	Note                           = 0,
	Warning                        = 1,
	Error                          = 2,
	ESMLogType_MAX                 = 3
};


// Enum SMSystem.ESMNetworkConfigurationType
enum class ESMNetworkConfigurationType : uint8_t
{
	SM_Client                      = 0,
	SM_Server                      = 1,
	SM_ClientAndServer             = 2,
	SM_MAX                         = 3
};


// Enum SMSystem.ESMExposedFunctionExecutionType
enum class ESMExposedFunctionExecutionType : uint8_t
{
	SM_Graph                       = 0,
	SM_NodeInstance                = 1,
	SM_None                        = 2,
	SM_MAX                         = 3
};


// Enum SMSystem.ESMConditionalEvaluationType
enum class ESMConditionalEvaluationType : uint8_t
{
	SM_Graph                       = 0,
	SM_NodeInstance                = 1,
	SM_AlwaysFalse                 = 2,
	SM_AlwaysTrue                  = 3,
	SM_MAX                         = 4
};


// Enum SMSystem.ESMStateMachineInput
enum class ESMStateMachineInput : uint8_t
{
	Disabled                       = 0,
	UseContextController           = 1,
	Player0                        = 2,
	Player1                        = 3,
	Player2                        = 4,
	Player3                        = 5,
	Player4                        = 6,
	Player5                        = 7,
	Player6                        = 8,
	Player7                        = 9,
	ESMStateMachineInput_MAX       = 10
};


// Enum SMSystem.ESMNodeInput
enum class ESMNodeInput : uint8_t
{
	Disabled                       = 0,
	UseOwningStateMachine          = 1,
	UseContextController           = 2,
	Player0                        = 3,
	Player1                        = 4,
	Player2                        = 5,
	Player3                        = 6,
	Player4                        = 7,
	Player5                        = 8,
	Player6                        = 9,
	Player7                        = 10,
	ESMNodeInput_MAX               = 11
};


// Enum SMSystem.ESMExecutionEnvironment
enum class ESMExecutionEnvironment : uint8_t
{
	EditorExecution                = 0,
	GameExecution                  = 1,
	ESMExecutionEnvironment_MAX    = 2
};


// Enum SMSystem.ESMValidEditorNode
enum class ESMValidEditorNode : uint8_t
{
	IsValidEditorNode              = 0,
	IsNotValidEditorNode           = 1,
	ESMValidEditorNode_MAX         = 2
};


// Enum SMSystem.ESMCompilerLogType
enum class ESMCompilerLogType : uint8_t
{
	Note                           = 0,
	Warning                        = 1,
	Error                          = 2,
	ESMCompilerLogType_MAX         = 3
};


// Enum SMSystem.ESMThreadMode
enum class ESMThreadMode : uint8_t
{
	Blocking                       = 0,
	Async                          = 1,
	ESMThreadMode_MAX              = 2
};


// Enum SMSystem.ESMTransactionType
enum class ESMTransactionType : uint8_t
{
	SM_Unknown                     = 0,
	SM_Transition                  = 1,
	SM_State                       = 2,
	SM_FullSync                    = 3,
	SM_Start                       = 4,
	SM_Stop                        = 5,
	SM_Initialize                  = 6,
	SM_Shutdown                    = 7,
	SM_MAX                         = 8
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SMSystem.SMReferenceContainer
// 0x0018
struct FSMReferenceContainer
{
	struct FGuid                                       PathGuid;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 Reference;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SMSystem.SMGraphProperty_Base_Runtime
// 0x0048
struct FSMGraphProperty_Base_Runtime
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       OwnerGuid;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsDefaultValueOnly : 1;                                  // 0x0038(0x0001)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0039(0x000F) MISSED OFFSET
};

// ScriptStruct SMSystem.SMGraphPropertyTemplateOwner
// 0x0010
struct FSMGraphPropertyTemplateOwner
{
	TArray<struct FSMGraphProperty_Base_Runtime>       VariableGraphProperties;                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct SMSystem.SMNode_Base
// 0x0138
struct FSMNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	float                                              TimeInState;                                              // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInEndState;                                            // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasUpdated;                                              // 0x0015(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	int                                                DuplicateId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector2D                                   NodePosition;                                             // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasInputEvents : 1;                                      // 0x0030(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0034(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       OwnerGuid;                                                // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PathGuid;                                                 // 0x0054(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0070(0x0010) (ZeroConstructor)
	struct FName                                       TemplateName;                                             // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               StackTemplateNames;                                       // 0x0088(0x0010) (ZeroConstructor)
	TArray<class USMNodeInstance*>                     StackNodeInstances;                                       // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<class UClass*>                              NodeStackClasses;                                         // 0x00A8(0x0010) (ZeroConstructor)
	class USMInstance*                                 OwningInstance;                                           // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USMNodeInstance*                             NodeInstance;                                             // 0x00C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	TMap<struct FGuid, struct FSMGraphPropertyTemplateOwner> TemplateVariableGraphProperties;                          // 0x00D8(0x0050)
	class UClass*                                      NodeInstanceClass;                                        // 0x0128(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
};

// ScriptStruct SMSystem.SMState_Base
// 0x0050 (0x0188 - 0x0138)
struct FSMState_Base : public FSMNode_Base
{
	unsigned char                                      bIsRootNode : 1;                                          // 0x0138(0x0001)
	unsigned char                                      bAlwaysUpdate : 1;                                        // 0x0138(0x0001)
	unsigned char                                      bEvalTransitionsOnStart : 1;                              // 0x0138(0x0001)
	unsigned char                                      bDisableTickTransitionEvaluation : 1;                     // 0x0138(0x0001)
	unsigned char                                      bStayActiveOnStateChange : 1;                             // 0x0138(0x0001)
	unsigned char                                      bAllowParallelReentry : 1;                                // 0x0138(0x0001)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0139(0x004F) MISSED OFFSET
};

// ScriptStruct SMSystem.SMStateMachine
// 0x0140 (0x02C8 - 0x0188)
struct FSMStateMachine : public FSMState_Base
{
	unsigned char                                      bHasAdditionalLogic : 1;                                  // 0x0188(0x0001)
	unsigned char                                      bReuseCurrentState : 1;                                   // 0x0188(0x0001)
	unsigned char                                      bOnlyReuseIfNotEndState : 1;                              // 0x0188(0x0001)
	unsigned char                                      bAllowIndependentTick : 1;                                // 0x0188(0x0001)
	unsigned char                                      bCallReferenceTickOnManualUpdate : 1;                     // 0x0188(0x0001)
	unsigned char                                      bWaitForEndState : 1;                                     // 0x0188(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	TScriptInterface<class USMStateMachineNetworkedInterface> NetworkedInterface;                                       // 0x0190(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x01A0(0x00F0) MISSED OFFSET
	class UClass*                                      ReferencedStateMachineClass;                              // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ReferencedTemplateName;                                   // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DynamicStateMachineReferenceVariable;                     // 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 ReferencedStateMachine;                                   // 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 IsReferencedByInstance;                                   // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET
};

// ScriptStruct SMSystem.SMStateHistory
// 0x0020
struct FSMStateHistory
{
	struct FGuid                                       StateGuid;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   StartTime;                                                // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TimeInState;                                              // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ServerTimeInState;                                        // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SMSystem.SMGuidMap
// 0x0050
struct FSMGuidMap
{
	TMap<struct FGuid, struct FGuid>                   NodeToPathGuids;                                          // 0x0000(0x0050)
};

// ScriptStruct SMSystem.SMExposedFunctionHandler
// 0x0018
struct FSMExposedFunctionHandler
{
	struct FName                                       BoundFunction;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	class UFunction*                                   Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SMSystem.SMNode_FunctionHandlers
// 0x0048
struct FSMNode_FunctionHandlers
{
	TArray<struct FSMExposedFunctionHandler>           NodeInitializedGraphEvaluators;                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           NodeShutdownGraphEvaluators;                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           OnRootStateMachineStartedGraphEvaluator;                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           OnRootStateMachineStoppedGraphEvaluator;                  // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct SMSystem.SMState_FunctionHandlers
// 0x0030 (0x0078 - 0x0048)
struct FSMState_FunctionHandlers : public FSMNode_FunctionHandlers
{
	TArray<struct FSMExposedFunctionHandler>           BeginStateGraphEvaluator;                                 // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           UpdateStateGraphEvaluator;                                // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           EndStateGraphEvaluator;                                   // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct SMSystem.SMConduit_FunctionHandlers
// 0x0020 (0x0068 - 0x0048)
struct FSMConduit_FunctionHandlers : public FSMNode_FunctionHandlers
{
	TArray<struct FSMExposedFunctionHandler>           CanEnterConduitGraphEvaluator;                            // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           ConduitEnteredGraphEvaluator;                             // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct SMSystem.SMTransition_FunctionHandlers
// 0x0040 (0x0088 - 0x0048)
struct FSMTransition_FunctionHandlers : public FSMNode_FunctionHandlers
{
	TArray<struct FSMExposedFunctionHandler>           CanEnterTransitionGraphEvaluator;                         // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           TransitionEnteredGraphEvaluator;                          // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           TransitionPreEvaluateGraphEvaluator;                      // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FSMExposedFunctionHandler>           TransitionPostEvaluateGraphEvaluator;                     // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct SMSystem.SMExposedFunctionContainer
// 0x0010
struct FSMExposedFunctionContainer
{
	TArray<struct FSMExposedFunctionHandler>           ExposedFunctionHandlers;                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct SMSystem.SMExposedNodeFunctions
// 0x0080
struct FSMExposedNodeFunctions
{
	TArray<struct FSMState_FunctionHandlers>           FSMState_FunctionHandlers;                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSMConduit_FunctionHandlers>         FSMConduit_FunctionHandlers;                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FSMTransition_FunctionHandlers>      FSMTransition_FunctionHandlers;                           // 0x0020(0x0010) (ZeroConstructor)
	TMap<struct FGuid, struct FSMExposedFunctionContainer> GraphPropertyFunctionHandlers;                            // 0x0030(0x0050)
};

// ScriptStruct SMSystem.SMInfo_Base
// 0x0060
struct FSMInfo_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGuid                                       Guid;                                                     // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       OwnerGuid;                                                // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NodeGuid;                                                 // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       OwnerNodeGuid;                                            // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USMNodeInstance*                             NodeInstance;                                             // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SMSystem.SMTransitionInfo
// 0x0038 (0x0098 - 0x0060)
struct FSMTransitionInfo : public FSMInfo_Base
{
	struct FGuid                                       FromStateGuid;                                            // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ToStateGuid;                                              // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FDateTime                                   LastNetworkTimestamp;                                     // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct SMSystem.SMStateInfo
// 0x0020 (0x0080 - 0x0060)
struct FSMStateInfo : public FSMInfo_Base
{
	TArray<struct FSMTransitionInfo>                   OutgoingTransitions;                                      // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsEndState;                                              // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0071(0x000F) MISSED OFFSET
};

// ScriptStruct SMSystem.SMTransaction_Base
// 0x0003
struct FSMTransaction_Base
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
	unsigned char                                      bOriginatedFromServer : 1;                                // 0x0002(0x0001)
};

// ScriptStruct SMSystem.SMTransitionTransaction
// 0x0035 (0x0038 - 0x0003)
struct FSMTransitionTransaction : public FSMTransaction_Base
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FGuid                                       BaseGuid;                                                 // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGuid>                               AdditionalGuids;                                          // 0x0018(0x0010) (ZeroConstructor)
	struct FDateTime                                   Timestamp;                                                // 0x0028(0x0008) (ZeroConstructor)
	float                                              ActiveTime;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct SMSystem.SMInitializeTransaction
// 0x000D (0x0010 - 0x0003)
struct FSMInitializeTransaction : public FSMTransaction_Base
{
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class UObject*                                     Context;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SMSystem.SMFullSyncStateTransaction
// 0x0015 (0x0018 - 0x0003)
struct FSMFullSyncStateTransaction : public FSMTransaction_Base
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FGuid                                       BaseGuid;                                                 // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInState;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SMSystem.SMFullSyncTransaction
// 0x001D (0x0020 - 0x0003)
struct FSMFullSyncTransaction : public FSMTransaction_Base
{
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	TArray<struct FSMFullSyncStateTransaction>         ActiveStates;                                             // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      bHasStarted : 1;                                          // 0x0018(0x0001)
	unsigned char                                      bFromUserLoad : 1;                                        // 0x0018(0x0001)
	unsigned char                                      bForceFullRefresh : 1;                                    // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct SMSystem.SMActivateStateTransaction
// 0x0019 (0x001C - 0x0003)
struct FSMActivateStateTransaction : public FSMTransaction_Base
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FGuid                                       BaseGuid;                                                 // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInState;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x0018(0x0001)
	unsigned char                                      bSetAllParents : 1;                                       // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct SMSystem.SMConduit
// 0x0008 (0x0190 - 0x0188)
struct FSMConduit : public FSMState_Base
{
	unsigned char                                      bCanEnterTransition : 1;                                  // 0x0188(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanEvaluate : 1;                                         // 0x0188(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEvalWithTransitions : 1;                                 // 0x0188(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
};

// ScriptStruct SMSystem.SMGraphProperty_Runtime
// 0x0000 (0x0048 - 0x0048)
struct FSMGraphProperty_Runtime : public FSMGraphProperty_Base_Runtime
{

};

// ScriptStruct SMSystem.SMGraphProperty_Base
// 0x00C0 (0x0108 - 0x0048)
struct FSMGraphProperty_Base : public FSMGraphProperty_Base_Runtime
{
	struct FName                                       VariableName;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEdGraphPinType                             VariableType;                                             // 0x0050(0x0058)
	struct FMemberReference                            MemberReference;                                          // 0x00A8(0x0038)
	bool                                               bIsInArray;                                               // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReadOnly;                                                // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00E3(0x0001) MISSED OFFSET
	struct FGuid                                       GuidUnmodified;                                           // 0x00E4(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       TemplateGuid;                                             // 0x00F4(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                GuidIndex;                                                // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SMSystem.SMGraphProperty
// 0x0000 (0x0108 - 0x0108)
struct FSMGraphProperty : public FSMGraphProperty_Base
{

};

// ScriptStruct SMSystem.SMDebugStateMachine
// 0x0001
struct FSMDebugStateMachine
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SMSystem.SMNodeDescription
// 0x0038
struct FSMNodeDescription
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Category;                                                 // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct SMSystem.SMNodeClassRule
// 0x0010
struct FSMNodeClassRule
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	bool                                               bIncludeChildren;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNOT;                                                     // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct SMSystem.SMStateClassRule
// 0x0028 (0x0038 - 0x0010)
struct FSMStateClassRule : public FSMNodeClassRule
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: StateClass
};

// ScriptStruct SMSystem.SMStateMachineClassRule
// 0x0028 (0x0038 - 0x0010)
struct FSMStateMachineClassRule : public FSMNodeClassRule
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: StateMachineClass
};

// ScriptStruct SMSystem.SMNodeConnectionRule
// 0x00A8
struct FSMNodeConnectionRule
{
	struct FSMStateClassRule                           FromState;                                                // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FSMStateClassRule                           ToState;                                                  // 0x0038(0x0038) (Edit, DisableEditOnInstance)
	struct FSMStateMachineClassRule                    InStateMachine;                                           // 0x0070(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct SMSystem.SMConnectionValidator
// 0x0001
struct FSMConnectionValidator
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SMSystem.SMTransitionConnectionValidator
// 0x000F (0x0010 - 0x0001)
struct FSMTransitionConnectionValidator : public FSMConnectionValidator
{
	TArray<struct FSMNodeConnectionRule>               AllowedConnections;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct SMSystem.SMStateConnectionValidator
// 0x002F (0x0030 - 0x0001)
struct FSMStateConnectionValidator : public FSMConnectionValidator
{
	TArray<struct FSMStateClassRule>                   AllowedInboundStates;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSMStateClassRule>                   AllowedOutboundStates;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSMStateMachineClassRule>            AllowedInStateMachines;                                   // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct SMSystem.SMStateMachineNodePlacementValidator
// 0x003F (0x0040 - 0x0001)
struct FSMStateMachineNodePlacementValidator : public FSMConnectionValidator
{
	TArray<struct FSMStateClassRule>                   AllowedStates;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAllowReferences;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowParents;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSubStateMachines;                                   // 0x0012(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0013(0x0028) UNKNOWN PROPERTY: DefaultSubStateMachineClass
};

// ScriptStruct SMSystem.SMNodeWidgetInfo
// 0x0001
struct FSMNodeWidgetInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SMSystem.SMTextDisplayWidgetInfo
// 0x0000 (0x0001 - 0x0001)
struct FSMTextDisplayWidgetInfo : public FSMNodeWidgetInfo
{

};

// ScriptStruct SMSystem.SMState
// 0x0000 (0x0188 - 0x0188)
struct FSMState : public FSMState_Base
{

};

// ScriptStruct SMSystem.SMTransition
// 0x0058 (0x0190 - 0x0138)
struct FSMTransition : public FSMNode_Base
{
	int                                                Priority;                                                 // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanEnterTransition : 1;                                  // 0x013C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanEnterTransitionFromEvent : 1;                         // 0x013C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsEvaluating : 1;                                        // 0x013C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanEvaluate : 1;                                         // 0x013C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanEvaluateFromEvent : 1;                                // 0x013C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRunParallel : 1;                                         // 0x013C(0x0001)
	unsigned char                                      bEvalIfNextStateActive : 1;                               // 0x013C(0x0001)
	unsigned char                                      bCanEvalWithStartState : 1;                               // 0x013C(0x0001)
	unsigned char                                      bAlwaysFalse : 1;                                         // 0x013D(0x0001)
	unsigned char                                      bFromAnyState : 1;                                        // 0x013D(0x0001)
	unsigned char                                      bFromLinkState : 1;                                       // 0x013D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	struct FGuid                                       FromGuid;                                                 // 0x0140(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ToGuid;                                                   // 0x0150(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0160(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
