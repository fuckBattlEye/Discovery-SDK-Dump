//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EmbarkAI.BTDecorator_UtilityBlueprintBase.CalculateUtility
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTDecorator_UtilityBlueprintBase::CalculateUtility(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.BTDecorator_UtilityBlueprintBase.CalculateUtility"));

	UBTDecorator_UtilityBlueprintBase_CalculateUtility_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIPerceiver.GetAIPerceivedActors
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIPerceiveResult       Result                         (Parm, OutParm)
// struct FActorPerceptionBlueprintInfo PerceptionInfoTemp             (Parm, OutParm)
// TArray<class AActor*>          PerceivedActors                (Parm, OutParm, ZeroConstructor)
// struct FActorPerceptionBlueprintInfo EmptyPerceptionInfo            (ConstParm, Parm, OutParm, ReferenceParm)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAIPerceiver::GetAIPerceivedActors(const struct FActorPerceptionBlueprintInfo& EmptyPerceptionInfo, class UAIPerceptionComponent* PerceptionComponent, struct FAIPerceiveResult* Result, struct FActorPerceptionBlueprintInfo* PerceptionInfoTemp, TArray<class AActor*>* PerceivedActors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIPerceiver.GetAIPerceivedActors"));

	UAIPerceiver_GetAIPerceivedActors_Params params;
	params.EmptyPerceptionInfo = EmptyPerceptionInfo;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PerceptionInfoTemp != nullptr)
		*PerceptionInfoTemp = params.PerceptionInfoTemp;
	if (PerceivedActors != nullptr)
		*PerceivedActors = params.PerceivedActors;
}


// Function EmbarkAI.AITargetComponent.UpdateAITargeting
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAITargetingParams      TargetingParams                (Parm, OutParm)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetComponent::UpdateAITargeting(float DeltaSeconds, struct FAITargetingParams* TargetingParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.UpdateAITargeting"));

	UAITargetComponent_UpdateAITargeting_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetingParams != nullptr)
		*TargetingParams = params.TargetingParams;
}


// Function EmbarkAI.AITargetComponent.StopAttackBy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Attacker                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EAITokenType        TokenType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAITargetComponent::StopAttackBy(class AActor* Attacker, enum class EAITokenType TokenType, int Cost, int ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.StopAttackBy"));

	UAITargetComponent_StopAttackBy_Params params;
	params.Attacker = Attacker;
	params.TokenType = TokenType;
	params.Cost = Cost;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AITargetComponent.StartOrQueueForAttackBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Attacker                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EAITokenType        TokenType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetComponent::StartOrQueueForAttackBy(class AActor* Attacker, enum class EAITokenType TokenType, int Cost, int ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.StartOrQueueForAttackBy"));

	UAITargetComponent_StartOrQueueForAttackBy_Params params;
	params.Attacker = Attacker;
	params.TokenType = TokenType;
	params.Cost = Cost;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.SetBaseThreat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewBaseThreat                  (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetComponent::SetBaseThreat(float NewBaseThreat)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.SetBaseThreat"));

	UAITargetComponent_SetBaseThreat_Params params;
	params.NewBaseThreat = NewBaseThreat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AITargetComponent.RemoveTargetAdjustment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AdjustmentName                 (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetComponent::RemoveTargetAdjustment(const struct FName& AdjustmentName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.RemoveTargetAdjustment"));

	UAITargetComponent_RemoveTargetAdjustment_Params params;
	params.AdjustmentName = AdjustmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AITargetComponent.ReleaseAsTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Attacker                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetComponent::ReleaseAsTarget(class AActor* Attacker, int Cost)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.ReleaseAsTarget"));

	UAITargetComponent_ReleaseAsTarget_Params params;
	params.Attacker = Attacker;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AITargetComponent.IsAcquiredAsTargetBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Attacker                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetComponent::IsAcquiredAsTargetBy(class AActor* Attacker)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.IsAcquiredAsTargetBy"));

	UAITargetComponent_IsAcquiredAsTargetBy_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.GetNumTargetingTokens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAITargetComponent::GetNumTargetingTokens()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.GetNumTargetingTokens"));

	UAITargetComponent_GetNumTargetingTokens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.GetNumAttackTokens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAITokenType        TokenType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAITargetComponent::GetNumAttackTokens(enum class EAITokenType TokenType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.GetNumAttackTokens"));

	UAITargetComponent_GetNumAttackTokens_Params params;
	params.TokenType = TokenType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.GetMaxNumTargetingTokens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAITargetComponent::GetMaxNumTargetingTokens()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.GetMaxNumTargetingTokens"));

	UAITargetComponent_GetMaxNumTargetingTokens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.GetMaxNumAttackTokens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAITokenType        TokenType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAITargetComponent::GetMaxNumAttackTokens(enum class EAITokenType TokenType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.GetMaxNumAttackTokens"));

	UAITargetComponent_GetMaxNumAttackTokens_Params params;
	params.TokenType = TokenType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.GetBaseThreat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAITargetComponent::GetBaseThreat()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.GetBaseThreat"));

	UAITargetComponent_GetBaseThreat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.GetAimDirectionOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 AimDirection                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAITargetingParams      TargetingParams                (Parm, OutParm)
// struct FAIAimParams            AimParams                      (Parm, OutParm)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAITargetComponent::GetAimDirectionOffset(const struct FVector& AimDirection, float DeltaSeconds, struct FAITargetingParams* TargetingParams, struct FAIAimParams* AimParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.GetAimDirectionOffset"));

	UAITargetComponent_GetAimDirectionOffset_Params params;
	params.AimDirection = AimDirection;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetingParams != nullptr)
		*TargetingParams = params.TargetingParams;
	if (AimParams != nullptr)
		*AimParams = params.AimParams;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.GetAccuracyFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAITargetComponent::GetAccuracyFactor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.GetAccuracyFactor"));

	UAITargetComponent_GetAccuracyFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.CanBeAcquiredAsTargetBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Attacker                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetComponent::CanBeAcquiredAsTargetBy(class AActor* Attacker)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.CanBeAcquiredAsTargetBy"));

	UAITargetComponent_CanBeAcquiredAsTargetBy_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetComponent.AddTargetAdjustment
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   AdjustmentName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTemporaryAITargetingModification TargetAdjustment               (Parm, OutParm)

void UAITargetComponent::AddTargetAdjustment(const struct FName& AdjustmentName, struct FTemporaryAITargetingModification* TargetAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.AddTargetAdjustment"));

	UAITargetComponent_AddTargetAdjustment_Params params;
	params.AdjustmentName = AdjustmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetAdjustment != nullptr)
		*TargetAdjustment = params.TargetAdjustment;
}


// Function EmbarkAI.AITargetComponent.AcquireAsTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Attacker                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetComponent::AcquireAsTarget(class AActor* Attacker, int Cost)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetComponent.AcquireAsTarget"));

	UAITargetComponent_AcquireAsTarget_Params params;
	params.Attacker = Attacker;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIFocusingInterface.SelectFocus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIAgent                        (Parm, ZeroConstructor, IsPlainOldData)

void UAIFocusingInterface::SelectFocus(float DeltaSeconds, class AAIController* AIAgent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIFocusingInterface.SelectFocus"));

	UAIFocusingInterface_SelectFocus_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.AIAgent = AIAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AIFocusingInterface.RequestFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFocusRequest           FocusRequest                   (Parm)

void UAIFocusingInterface::RequestFocus(const struct FFocusRequest& FocusRequest)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIFocusingInterface.RequestFocus"));

	UAIFocusingInterface_RequestFocus_Params params;
	params.FocusRequest = FocusRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AIFocusingInterface.IsRequestValid
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFocusRequest           Request                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIFocusingInterface::IsRequestValid(const struct FFocusRequest& Request)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIFocusingInterface.IsRequestValid"));

	UAIFocusingInterface_IsRequestValid_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIFocusingInterface.HasValidFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIFocusingInterface::HasValidFocus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIFocusingInterface.HasValidFocus"));

	UAIFocusingInterface_HasValidFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIFocusingInterface.GetCurrentFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFocusTarget            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFocusTarget UAIFocusingInterface::GetCurrentFocus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIFocusingInterface.GetCurrentFocus"));

	UAIFocusingInterface_GetCurrentFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIFocusingInterface.ClearFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAIFocusMode        FocusMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIFocusingInterface::ClearFocus(enum class EAIFocusMode FocusMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIFocusingInterface.ClearFocus"));

	UAIFocusingInterface_ClearFocus_Params params;
	params.FocusMode = FocusMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetTouch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetTouch(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetTouch"));

	UAIAgentStimuliInfoLibrary_GetTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetStimulusInfosAscendingPriority
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FAIStimulusInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAIStimulusInfo> UAIAgentStimuliInfoLibrary::STATIC_GetStimulusInfosAscendingPriority(const struct FAIAgentStimuliInfo& I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetStimulusInfosAscendingPriority"));

	UAIAgentStimuliInfoLibrary_GetStimulusInfosAscendingPriority_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetStimulusBySense
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// enum class EStimulusSense      Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetStimulusBySense(enum class EStimulusSense Sense, struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetStimulusBySense"));

	UAIAgentStimuliInfoLibrary_GetStimulusBySense_Params params;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetSight
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetSight(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetSight"));

	UAIAgentStimuliInfoLibrary_GetSight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetSensedStimulus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// struct FAIStimulus             Stimulus                       (Parm)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetSensedStimulus(const struct FAIStimulus& Stimulus, struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetSensedStimulus"));

	UAIAgentStimuliInfoLibrary_GetSensedStimulus_Params params;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetNetwork
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetNetwork(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetNetwork"));

	UAIAgentStimuliInfoLibrary_GetNetwork_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetLastSensedTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIAgentStimuliInfoLibrary::STATIC_GetLastSensedTime(const struct FAIAgentStimuliInfo& I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetLastSensedTime"));

	UAIAgentStimuliInfoLibrary_GetLastSensedTime_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetLastKnownTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UAIAgentStimuliInfoLibrary::STATIC_GetLastKnownTag(const struct FAIAgentStimuliInfo& I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetLastKnownTag"));

	UAIAgentStimuliInfoLibrary_GetLastKnownTag_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetHighestAlertness
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIAgentStimuliInfoLibrary::STATIC_GetHighestAlertness(const struct FAIAgentStimuliInfo& I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetHighestAlertness"));

	UAIAgentStimuliInfoLibrary_GetHighestAlertness_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetHearing
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetHearing(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetHearing"));

	UAIAgentStimuliInfoLibrary_GetHearing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetDamage(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetDamage"));

	UAIAgentStimuliInfoLibrary_GetDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetBypass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// struct FAIStimulusInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStimulusInfo UAIAgentStimuliInfoLibrary::STATIC_GetBypass(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.GetBypass"));

	UAIAgentStimuliInfoLibrary_GetBypass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.CombatExpiresAt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIAgentStimuliInfoLibrary::STATIC_CombatExpiresAt(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.CombatExpiresAt"));

	UAIAgentStimuliInfoLibrary_CombatExpiresAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentStimuliInfoLibrary.AlertnessExpiresAt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIAgentStimuliInfo     I                              (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIAgentStimuliInfoLibrary::STATIC_AlertnessExpiresAt(struct FAIAgentStimuliInfo* I)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentStimuliInfoLibrary.AlertnessExpiresAt"));

	UAIAgentStimuliInfoLibrary_AlertnessExpiresAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAgentTargetInfoLibrary.SetThreat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAgentTargetInfo        AgentTargetInfo                (Parm, OutParm)
// int                            Category                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIAgentTargetInfoLibrary::STATIC_SetThreat(int Category, float Value, struct FAgentTargetInfo* AgentTargetInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentTargetInfoLibrary.SetThreat"));

	UAIAgentTargetInfoLibrary_SetThreat_Params params;
	params.Category = Category;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AgentTargetInfo != nullptr)
		*AgentTargetInfo = params.AgentTargetInfo;
}


// Function EmbarkAI.AIAgentTargetInfoLibrary.GetThreat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAgentTargetInfo        AgentTargetInfo                (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Category                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIAgentTargetInfoLibrary::STATIC_GetThreat(const struct FAgentTargetInfo& AgentTargetInfo, int Category)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAgentTargetInfoLibrary.GetThreat"));

	UAIAgentTargetInfoLibrary_GetThreat_Params params;
	params.AgentTargetInfo = AgentTargetInfo;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AITargetingInterface.SelectTargets
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIAgent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAITargetComponent*> OutSelectedTargets             (Parm, OutParm, ZeroConstructor)

void UAITargetingInterface::SelectTargets(float DeltaSeconds, class AAIController* AIAgent, TArray<class UAITargetComponent*>* OutSelectedTargets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetingInterface.SelectTargets"));

	UAITargetingInterface_SelectTargets_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.AIAgent = AIAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSelectedTargets != nullptr)
		*OutSelectedTargets = params.OutSelectedTargets;
}


// Function EmbarkAI.AITargetingInterface.SelectNeutralTargets
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIAgent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAITargetComponent*> OutSelectedNeutralTargets      (Parm, OutParm, ZeroConstructor)

void UAITargetingInterface::SelectNeutralTargets(float DeltaSeconds, class AAIController* AIAgent, TArray<class UAITargetComponent*>* OutSelectedNeutralTargets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetingInterface.SelectNeutralTargets"));

	UAITargetingInterface_SelectNeutralTargets_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.AIAgent = AIAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSelectedNeutralTargets != nullptr)
		*OutSelectedNeutralTargets = params.OutSelectedNeutralTargets;
}


// Function EmbarkAI.AITargetingInterface.SelectFriendlyTargets
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIAgent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAITargetComponent*> OutSelectedFriendlyTargets     (Parm, OutParm, ZeroConstructor)

void UAITargetingInterface::SelectFriendlyTargets(float DeltaSeconds, class AAIController* AIAgent, TArray<class UAITargetComponent*>* OutSelectedFriendlyTargets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AITargetingInterface.SelectFriendlyTargets"));

	UAITargetingInterface_SelectFriendlyTargets_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.AIAgent = AIAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSelectedFriendlyTargets != nullptr)
		*OutSelectedFriendlyTargets = params.OutSelectedFriendlyTargets;
}


// Function EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary.UpdateAgentTargetInfos
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// TMap<class AAIController*, struct FAgentInfo> AgentInfoMap                   (Parm, OutParm)
// TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap                  (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FAIKnowledgebaseNativeEvent> OutEvents                      (Parm, OutParm, ZeroConstructor)

void UAIKnowledgeBaseNativeFunctionLibrary::STATIC_UpdateAgentTargetInfos(class UObject* WorldContextObject, float DeltaSeconds, TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap, TMap<class AAIController*, struct FAgentInfo>* AgentInfoMap, TArray<struct FAIKnowledgebaseNativeEvent>* OutEvents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary.UpdateAgentTargetInfos"));

	UAIKnowledgeBaseNativeFunctionLibrary_UpdateAgentTargetInfos_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DeltaSeconds = DeltaSeconds;
	params.TargetInfoMap = TargetInfoMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AgentInfoMap != nullptr)
		*AgentInfoMap = params.AgentInfoMap;
	if (OutEvents != nullptr)
		*OutEvents = params.OutEvents;
}


// Function EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary.UpdateAgentPerception
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// TMap<class AAIController*, struct FAgentInfo> AgentInfoMap                   (Parm, OutParm)
// TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap                  (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UAITargetComponent*> PerceptionBypassTargets        (Parm, OutParm, ZeroConstructor)
// class UAIPerceiver*            Perceiver                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAIKnowledgebaseNativeEvent> OutEvents                      (Parm, OutParm, ZeroConstructor)

void UAIKnowledgeBaseNativeFunctionLibrary::STATIC_UpdateAgentPerception(class UObject* WorldContextObject, float DeltaSeconds, TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap, class UAIPerceiver* Perceiver, TMap<class AAIController*, struct FAgentInfo>* AgentInfoMap, TArray<class UAITargetComponent*>* PerceptionBypassTargets, TArray<struct FAIKnowledgebaseNativeEvent>* OutEvents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary.UpdateAgentPerception"));

	UAIKnowledgeBaseNativeFunctionLibrary_UpdateAgentPerception_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DeltaSeconds = DeltaSeconds;
	params.TargetInfoMap = TargetInfoMap;
	params.Perceiver = Perceiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AgentInfoMap != nullptr)
		*AgentInfoMap = params.AgentInfoMap;
	if (PerceptionBypassTargets != nullptr)
		*PerceptionBypassTargets = params.PerceptionBypassTargets;
	if (OutEvents != nullptr)
		*OutEvents = params.OutEvents;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.IsTargetPerceivedBySense
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAITargetComponent*      TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// enum class EStimulusSense      Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_IsTargetPerceivedBySense(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent, enum class EStimulusSense Sense)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.IsTargetPerceivedBySense"));

	UAgentInfoFunctionLibrary_IsTargetPerceivedBySense_Params params;
	params.Info = Info;
	params.TargetComponent = TargetComponent;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.IsLastTimeWithin
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LastTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeWithin                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_IsLastTimeWithin(class UObject* WorldContextObject, float LastTime, float TimeWithin)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.IsLastTimeWithin"));

	UAgentInfoFunctionLibrary_IsLastTimeWithin_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LastTime = LastTime;
	params.TimeWithin = TimeWithin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.HasTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_HasTarget(const struct FAgentInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.HasTarget"));

	UAgentInfoFunctionLibrary_HasTarget_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.HasGrantedBehavior
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_HasGrantedBehavior(const struct FAgentInfo& Info, const struct FGameplayTag& Tag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.HasGrantedBehavior"));

	UAgentInfoFunctionLibrary_HasGrantedBehavior_Params params;
	params.Info = Info;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetUnsensedFriendlyTargetsWithinRange
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          MaxRange                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAITargetComponent*> OutTargets                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_GetUnsensedFriendlyTargetsWithinRange(const struct FAgentInfo& Info, float MaxRange, TArray<class UAITargetComponent*>* OutTargets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetUnsensedFriendlyTargetsWithinRange"));

	UAgentInfoFunctionLibrary_GetUnsensedFriendlyTargetsWithinRange_Params params;
	params.Info = Info;
	params.MaxRange = MaxRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargets != nullptr)
		*OutTargets = params.OutTargets;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetTimeSince
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LastTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAgentInfoFunctionLibrary::STATIC_GetTimeSince(class UObject* WorldContextObject, float LastTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetTimeSince"));

	UAgentInfoFunctionLibrary_GetTimeSince_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LastTime = LastTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectUserQueryFromAgentInfoSettings
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagQuery UAgentInfoFunctionLibrary::STATIC_GetSmartObjectUserQueryFromAgentInfoSettings(const struct FAgentInfo& AgentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectUserQueryFromAgentInfoSettings"));

	UAgentInfoFunctionLibrary_GetSmartObjectUserQueryFromAgentInfoSettings_Params params;
	params.AgentInfo = AgentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectUserQuery
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAISmartObjectQuerySettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagQuery UAgentInfoFunctionLibrary::STATIC_GetSmartObjectUserQuery(const struct FAISmartObjectQuerySettings& Settings, const struct FAgentInfo& AgentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectUserQuery"));

	UAgentInfoFunctionLibrary_GetSmartObjectUserQuery_Params params;
	params.Settings = Settings;
	params.AgentInfo = AgentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectQuerySettings
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAISmartObjectQuerySettings ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAISmartObjectQuerySettings UAgentInfoFunctionLibrary::STATIC_GetSmartObjectQuerySettings(const struct FAgentInfo& AgentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectQuerySettings"));

	UAgentInfoFunctionLibrary_GetSmartObjectQuerySettings_Params params;
	params.AgentInfo = AgentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetSelectedTargetsWithinRange
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          MaxRange                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAITargetComponent*> OutTargets                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_GetSelectedTargetsWithinRange(const struct FAgentInfo& Info, float MaxRange, TArray<class UAITargetComponent*>* OutTargets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetSelectedTargetsWithinRange"));

	UAgentInfoFunctionLibrary_GetSelectedTargetsWithinRange_Params params;
	params.Info = Info;
	params.MaxRange = MaxRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargets != nullptr)
		*OutTargets = params.OutTargets;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAITargetComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAITargetComponent* UAgentInfoFunctionLibrary::STATIC_GetMostRelevantTarget(const struct FAgentInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantTarget"));

	UAgentInfoFunctionLibrary_GetMostRelevantTarget_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantNeutralTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAITargetComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAITargetComponent* UAgentInfoFunctionLibrary::STATIC_GetMostRelevantNeutralTarget(const struct FAgentInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantNeutralTarget"));

	UAgentInfoFunctionLibrary_GetMostRelevantNeutralTarget_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantFriendlyTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAITargetComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAITargetComponent* UAgentInfoFunctionLibrary::STATIC_GetMostRelevantFriendlyTarget(const struct FAgentInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantFriendlyTarget"));

	UAgentInfoFunctionLibrary_GetMostRelevantFriendlyTarget_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetKnownTargetsBySense
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EStimulusSense      Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyCurrentlyPerceived        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAITargetComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAITargetComponent*> UAgentInfoFunctionLibrary::STATIC_GetKnownTargetsBySense(class UObject* WorldContextObject, const struct FAgentInfo& Info, enum class EStimulusSense Sense, bool bOnlyCurrentlyPerceived)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetKnownTargetsBySense"));

	UAgentInfoFunctionLibrary_GetKnownTargetsBySense_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Info = Info;
	params.Sense = Sense;
	params.bOnlyCurrentlyPerceived = bOnlyCurrentlyPerceived;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetAllSortedRelevantTargets
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UAITargetComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UAITargetComponent*> UAgentInfoFunctionLibrary::STATIC_GetAllSortedRelevantTargets(const struct FAgentInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetAllSortedRelevantTargets"));

	UAgentInfoFunctionLibrary_GetAllSortedRelevantTargets_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetAllSortedFriendlyTargets
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UAITargetComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UAITargetComponent*> UAgentInfoFunctionLibrary::STATIC_GetAllSortedFriendlyTargets(const struct FAgentInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetAllSortedFriendlyTargets"));

	UAgentInfoFunctionLibrary_GetAllSortedFriendlyTargets_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetAllNeutralTargets
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UAITargetComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UAITargetComponent*> UAgentInfoFunctionLibrary::STATIC_GetAllNeutralTargets(const struct FAgentInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetAllNeutralTargets"));

	UAgentInfoFunctionLibrary_GetAllNeutralTargets_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetAIAgentsWithinRange
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MaxRange                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AAIController*>   OutAgents                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_GetAIAgentsWithinRange(class UObject* WorldContextObject, const struct FVector& Origin, float MaxRange, TArray<class AAIController*>* OutAgents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetAIAgentsWithinRange"));

	UAgentInfoFunctionLibrary_GetAIAgentsWithinRange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.MaxRange = MaxRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAgents != nullptr)
		*OutAgents = params.OutAgents;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetAgentTargetInfoSafe
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentTargetInfo        OutAgentTargetInfo             (Parm, OutParm)
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAITargetComponent*      TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_GetAgentTargetInfoSafe(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent, struct FAgentTargetInfo* OutAgentTargetInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetAgentTargetInfoSafe"));

	UAgentInfoFunctionLibrary_GetAgentTargetInfoSafe_Params params;
	params.Info = Info;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAgentTargetInfo != nullptr)
		*OutAgentTargetInfo = params.OutAgentTargetInfo;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GetAgentTargetInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAITargetComponent*      TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAgentTargetInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAgentTargetInfo UAgentInfoFunctionLibrary::STATIC_GetAgentTargetInfo(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GetAgentTargetInfo"));

	UAgentInfoFunctionLibrary_GetAgentTargetInfo_Params params;
	params.Info = Info;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GatherPendingAgentOrders
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UAgentOrder*>     OrdersOut                      (Parm, OutParm, ZeroConstructor)

void UAgentInfoFunctionLibrary::STATIC_GatherPendingAgentOrders(const struct FAgentInfo& AgentInfo, TArray<class UAgentOrder*>* OrdersOut)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GatherPendingAgentOrders"));

	UAgentInfoFunctionLibrary_GatherPendingAgentOrders_Params params;
	params.AgentInfo = AgentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrdersOut != nullptr)
		*OrdersOut = params.OrdersOut;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GatherAllActiveOrdersOfType
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UAgentOrder*>     OrdersOut                      (Parm, OutParm, ZeroConstructor)
// class UClass*                  Type                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAgentInfoFunctionLibrary::STATIC_GatherAllActiveOrdersOfType(const struct FAgentInfo& AgentInfo, class UClass* Type, TArray<class UAgentOrder*>* OrdersOut)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GatherAllActiveOrdersOfType"));

	UAgentInfoFunctionLibrary_GatherAllActiveOrdersOfType_Params params;
	params.AgentInfo = AgentInfo;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrdersOut != nullptr)
		*OrdersOut = params.OrdersOut;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.GatherAllActiveOrders
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UAgentOrder*>     OrdersOut                      (Parm, OutParm, ZeroConstructor)

void UAgentInfoFunctionLibrary::STATIC_GatherAllActiveOrders(const struct FAgentInfo& AgentInfo, TArray<class UAgentOrder*>* OrdersOut)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.GatherAllActiveOrders"));

	UAgentInfoFunctionLibrary_GatherAllActiveOrders_Params params;
	params.AgentInfo = AgentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrdersOut != nullptr)
		*OrdersOut = params.OrdersOut;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.FindFirstPendingAgentBehaviorOrder
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UAgentBehaviorOrder*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAgentBehaviorOrder* UAgentInfoFunctionLibrary::STATIC_FindFirstPendingAgentBehaviorOrder(const struct FAgentInfo& AgentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.FindFirstPendingAgentBehaviorOrder"));

	UAgentInfoFunctionLibrary_FindFirstPendingAgentBehaviorOrder_Params params;
	params.AgentInfo = AgentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.FindActiveAgentBehaviorOrder
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UAgentBehaviorOrder*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAgentBehaviorOrder* UAgentInfoFunctionLibrary::STATIC_FindActiveAgentBehaviorOrder(const struct FAgentInfo& AgentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.FindActiveAgentBehaviorOrder"));

	UAgentInfoFunctionLibrary_FindActiveAgentBehaviorOrder_Params params;
	params.AgentInfo = AgentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.CanSeeTarget
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAgentInfo              Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAITargetComponent*      TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          TimeSinceSeen                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentInfoFunctionLibrary::STATIC_CanSeeTarget(const struct FAgentInfo& Info, class UAITargetComponent* TargetComponent, float TimeSinceSeen)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.CanSeeTarget"));

	UAgentInfoFunctionLibrary_CanSeeTarget_Params params;
	params.Info = Info;
	params.TargetComponent = TargetComponent;
	params.TimeSinceSeen = TimeSinceSeen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.CalcFocusRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFocusTarget            FocusTarget                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UAgentInfoFunctionLibrary::STATIC_CalcFocusRotator(const struct FAgentInfo& AgentInfo, const struct FFocusTarget& FocusTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.CalcFocusRotator"));

	UAgentInfoFunctionLibrary_CalcFocusRotator_Params params;
	params.AgentInfo = AgentInfo;
	params.FocusTarget = FocusTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentInfoFunctionLibrary.CalcFocusLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FAgentInfo              AgentInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFocusTarget            FocusTarget                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAgentInfoFunctionLibrary::STATIC_CalcFocusLocation(const struct FAgentInfo& AgentInfo, const struct FFocusTarget& FocusTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentInfoFunctionLibrary.CalcFocusLocation"));

	UAgentInfoFunctionLibrary_CalcFocusLocation_Params params;
	params.AgentInfo = AgentInfo;
	params.FocusTarget = FocusTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrderContextFunctionLibrary.MakeContextAndSetStructData
// (Final, Native, Static, Public)
// Parameters:
// class AAIController*           AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkGenericStruct    StructData                     (Parm)
// class UObject*                 ObjectData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAgentOrderContextBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAgentOrderContextBase* UAgentOrderContextFunctionLibrary::STATIC_MakeContextAndSetStructData(class AAIController* AIController, const struct FEmbarkGenericStruct& StructData, class UObject* ObjectData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrderContextFunctionLibrary.MakeContextAndSetStructData"));

	UAgentOrderContextFunctionLibrary_MakeContextAndSetStructData_Params params;
	params.AIController = AIController;
	params.StructData = StructData;
	params.ObjectData = ObjectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrderContextFunctionLibrary.MakeContext
// (Final, Native, Static, Public)
// Parameters:
// class AAIController*           AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAgentOrderContextBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAgentOrderContextBase* UAgentOrderContextFunctionLibrary::STATIC_MakeContext(class AAIController* AIController, class UObject* ObjectData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrderContextFunctionLibrary.MakeContext"));

	UAgentOrderContextFunctionLibrary_MakeContext_Params params;
	params.AIController = AIController;
	params.ObjectData = ObjectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrderContextBase.IsValid
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentOrderContextBase::IsValid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrderContextBase.IsValid"));

	UAgentOrderContextBase_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrderContextBase.GetContextLocation
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAgentOrderContextBase::GetContextLocation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrderContextBase.GetContextLocation"));

	UAgentOrderContextBase_GetContextLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderObjectContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           AIAgent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAgentOrderObjectContext* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAgentOrderObjectContext* UAgentOrderContextHelperFunctionLibrary::STATIC_CreateAgentOrderObjectContext(class AAIController* AIAgent, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderObjectContext"));

	UAgentOrderContextHelperFunctionLibrary_CreateAgentOrderObjectContext_Params params;
	params.AIAgent = AIAgent;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderLocationContext
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           AIAgent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UAgentOrderLocationContext* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAgentOrderLocationContext* UAgentOrderContextHelperFunctionLibrary::STATIC_CreateAgentOrderLocationContext(class AAIController* AIAgent, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderLocationContext"));

	UAgentOrderContextHelperFunctionLibrary_CreateAgentOrderLocationContext_Params params;
	params.AIAgent = AIAgent;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderActorContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           AIAgent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAgentOrderActorContext* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAgentOrderActorContext* UAgentOrderContextHelperFunctionLibrary::STATIC_CreateAgentOrderActorContext(class AAIController* AIAgent, class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderActorContext"));

	UAgentOrderContextHelperFunctionLibrary_CreateAgentOrderActorContext_Params params;
	params.AIAgent = AIAgent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrder.SetOrderHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UAgentOrder::SetOrderHandle(int ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.SetOrderHandle"));

	UAgentOrder_SetOrderHandle_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AgentOrder.OnOrderStartedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAgentOrderContextBase*  InCurrentContext               (Parm, ZeroConstructor, IsPlainOldData)

void UAgentOrder::OnOrderStartedBP(class UAgentOrderContextBase* InCurrentContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.OnOrderStartedBP"));

	UAgentOrder_OnOrderStartedBP_Params params;
	params.InCurrentContext = InCurrentContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AgentOrder.OnOrderStarted
// (Native, Event, Public, BlueprintEvent)

void UAgentOrder::OnOrderStarted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.OnOrderStarted"));

	UAgentOrder_OnOrderStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AgentOrder.OnOrderIssuedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAgentOrderContextBase*  InCurrentContext               (Parm, ZeroConstructor, IsPlainOldData)

void UAgentOrder::OnOrderIssuedBP(class UAgentOrderContextBase* InCurrentContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.OnOrderIssuedBP"));

	UAgentOrder_OnOrderIssuedBP_Params params;
	params.InCurrentContext = InCurrentContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AgentOrder.OnOrderIssued_Internal
// (Final, Native, Public, BlueprintCallable)

void UAgentOrder::OnOrderIssued_Internal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.OnOrderIssued_Internal"));

	UAgentOrder_OnOrderIssued_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AgentOrder.OnOrderIssued
// (Native, Event, Public, BlueprintEvent)

void UAgentOrder::OnOrderIssued()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.OnOrderIssued"));

	UAgentOrder_OnOrderIssued_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AgentOrder.IsValid_Internal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentOrder::IsValid_Internal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.IsValid_Internal"));

	UAgentOrder_IsValid_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrder.IsValid
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentOrder::IsValid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.IsValid"));

	UAgentOrder_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrder.HasOrderTimedout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentOrder::HasOrderTimedout()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.HasOrderTimedout"));

	UAgentOrder_HasOrderTimedout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrder.HasOrderDurationEnded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAgentOrder::HasOrderDurationEnded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.HasOrderDurationEnded"));

	UAgentOrder_HasOrderDurationEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrder.GetOrderTimeoutLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAgentOrder::GetOrderTimeoutLeft()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.GetOrderTimeoutLeft"));

	UAgentOrder_GetOrderTimeoutLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrder.GetOrderHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAgentOrder::GetOrderHandle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.GetOrderHandle"));

	UAgentOrder_GetOrderHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AgentOrder.GetOrderDurationLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAgentOrder::GetOrderDurationLeft()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AgentOrder.GetOrderDurationLeft"));

	UAgentOrder_GetOrderDurationLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIAvoidanceManager.RegisterAvoidanceObject
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLive                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            GroupMask                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            GroupsToAvoid                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            GroupsToIgnore                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkAIAvoidanceManager::RegisterAvoidanceObject(const struct FVector& Location, float Radius, float TimeToLive, float Weight, int GroupMask, int GroupsToAvoid, int GroupsToIgnore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIAvoidanceManager.RegisterAvoidanceObject"));

	UEmbarkAIAvoidanceManager_RegisterAvoidanceObject_Params params;
	params.Location = Location;
	params.Radius = Radius;
	params.TimeToLive = TimeToLive;
	params.Weight = Weight;
	params.GroupMask = GroupMask;
	params.GroupsToAvoid = GroupsToAvoid;
	params.GroupsToIgnore = GroupsToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIAvoidanceManager.GetAvoidanceManager
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkAIAvoidanceManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkAIAvoidanceManager* UEmbarkAIAvoidanceManager::STATIC_GetAvoidanceManager(class UWorld* World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIAvoidanceManager.GetAvoidanceManager"));

	UEmbarkAIAvoidanceManager_GetAvoidanceManager_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIAvoidanceManagerMixinLibrary.RemoveAvoidanceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEmbarkAIAvoidanceManager* Manager                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            AvoidanceUID                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAIAvoidanceManagerMixinLibrary::STATIC_RemoveAvoidanceObject(class UEmbarkAIAvoidanceManager* Manager, int AvoidanceUID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIAvoidanceManagerMixinLibrary.RemoveAvoidanceObject"));

	UEmbarkAIAvoidanceManagerMixinLibrary_RemoveAvoidanceObject_Params params;
	params.Manager = Manager;
	params.AvoidanceUID = AvoidanceUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EEmbarkTeamId       NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::SetTeam(enum class EEmbarkTeamId NewTeam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.SetTeam"));

	AEmbarkAIController_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.RemovePerceptionComponentByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PerceptionComponentIdx         (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::RemovePerceptionComponentByIndex(int PerceptionComponentIdx)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.RemovePerceptionComponentByIndex"));

	AEmbarkAIController_RemovePerceptionComponentByIndex_Params params;
	params.PerceptionComponentIdx = PerceptionComponentIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.RemovePerceptionComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         OwningComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkAIController::RemovePerceptionComponent(class USceneComponent* OwningComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.RemovePerceptionComponent"));

	AEmbarkAIController_RemovePerceptionComponent_Params params;
	params.OwningComponent = OwningComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.RegisterAIData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEmbarkAITemplateDataAsset* DataAsset                      (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::RegisterAIData(class UEmbarkAITemplateDataAsset* DataAsset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.RegisterAIData"));

	AEmbarkAIController_RegisterAIData_Params params;
	params.DataAsset = DataAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.ReceiveRegisterAIData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UEmbarkAITemplateDataAsset* DataAsset                      (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::ReceiveRegisterAIData(class UEmbarkAITemplateDataAsset* DataAsset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.ReceiveRegisterAIData"));

	AEmbarkAIController_ReceiveRegisterAIData_Params params;
	params.DataAsset = DataAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.ReceivePostInitializeComponents
// (Event, Protected, BlueprintEvent)

void AEmbarkAIController::ReceivePostInitializeComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.ReceivePostInitializeComponents"));

	AEmbarkAIController_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction EmbarkAI.EmbarkAIController.OnPawnChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::OnPawnChangedSignature__DelegateSignature(class AController* Controller)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkAI.EmbarkAIController.OnPawnChangedSignature__DelegateSignature"));

	AEmbarkAIController_OnPawnChangedSignature__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.OnActorPerceptionUpdated
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (Parm)

void AEmbarkAIController::OnActorPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.OnActorPerceptionUpdated"));

	AEmbarkAIController_OnActorPerceptionUpdated_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.MakeAIForgetActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToForget                  (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::STATIC_MakeAIForgetActor(class AActor* ActorToForget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.MakeAIForgetActor"));

	AEmbarkAIController_MakeAIForgetActor_Params params;
	params.ActorToForget = ActorToForget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEmbarkTeamId       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkTeamId AEmbarkAIController::GetTeam()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.GetTeam"));

	AEmbarkAIController_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIController.GetPerceptionSightConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIPerceptionComponent*  InPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UEmbarkAISenseConfig_Sight* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkAISenseConfig_Sight* AEmbarkAIController::GetPerceptionSightConfig(class UAIPerceptionComponent* InPerceptionComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.GetPerceptionSightConfig"));

	AEmbarkAIController_GetPerceptionSightConfig_Params params;
	params.InPerceptionComponent = InPerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIController.GetPerceptionNetworkConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIPerceptionComponent*  InPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UEmbarkAISenseConfig_Network* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkAISenseConfig_Network* AEmbarkAIController::GetPerceptionNetworkConfig(class UAIPerceptionComponent* InPerceptionComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.GetPerceptionNetworkConfig"));

	AEmbarkAIController_GetPerceptionNetworkConfig_Params params;
	params.InPerceptionComponent = InPerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIController.GetPerceptionHearingConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIPerceptionComponent*  InPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UEmbarkAISenseConfig_Hearing* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkAISenseConfig_Hearing* AEmbarkAIController::GetPerceptionHearingConfig(class UAIPerceptionComponent* InPerceptionComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.GetPerceptionHearingConfig"));

	AEmbarkAIController_GetPerceptionHearingConfig_Params params;
	params.InPerceptionComponent = InPerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIController.GetPerceptionDamageConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIPerceptionComponent*  InPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAISenseConfig_Damage*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAISenseConfig_Damage* AEmbarkAIController::GetPerceptionDamageConfig(class UAIPerceptionComponent* InPerceptionComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.GetPerceptionDamageConfig"));

	AEmbarkAIController_GetPerceptionDamageConfig_Params params;
	params.InPerceptionComponent = InPerceptionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIController.GetPerceptionComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAIPerceptionComponent*> OutPerceptionComponents        (Parm, OutParm, ZeroConstructor)

void AEmbarkAIController::GetPerceptionComponents(TArray<class UAIPerceptionComponent*>* OutPerceptionComponents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.GetPerceptionComponents"));

	AEmbarkAIController_GetPerceptionComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPerceptionComponents != nullptr)
		*OutPerceptionComponents = params.OutPerceptionComponents;
}


// Function EmbarkAI.EmbarkAIController.ForgetEverything
// (Final, Native, Public, BlueprintCallable)

void AEmbarkAIController::ForgetEverything()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.ForgetEverything"));

	AEmbarkAIController_ForgetEverything_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.ForgetActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToForget                  (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::ForgetActor(class AActor* ActorToForget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.ForgetActor"));

	AEmbarkAIController_ForgetActor_Params params;
	params.ActorToForget = ActorToForget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.ConfigureSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*  InPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAISenseConfig*          SenseConfig                    (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkAIController::ConfigureSense(class UAIPerceptionComponent* InPerceptionComponent, class UAISenseConfig* SenseConfig)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.ConfigureSense"));

	AEmbarkAIController_ConfigureSense_Params params;
	params.InPerceptionComponent = InPerceptionComponent;
	params.SenseConfig = SenseConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIController.AddPerceptionComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         OwningComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UAISenseConfig*>  SenseConfigs                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AEmbarkAIController::AddPerceptionComponent(class USceneComponent* OwningComponent, TArray<class UAISenseConfig*> SenseConfigs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIController.AddPerceptionComponent"));

	AEmbarkAIController_AddPerceptionComponent_Params params;
	params.OwningComponent = OwningComponent;
	params.SenseConfigs = SenseConfigs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsSuccessful
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkEnvQueryResultWrapper::IsSuccessful()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsSuccessful"));

	UEmbarkEnvQueryResultWrapper_IsSuccessful_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsFinished
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkEnvQueryResultWrapper::IsFinished()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsFinished"));

	UEmbarkEnvQueryResultWrapper_IsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsAborted
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkEnvQueryResultWrapper::IsAborted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsAborted"));

	UEmbarkEnvQueryResultWrapper_IsAborted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkEnvQueryResultWrapper.HasResult
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkEnvQueryResultWrapper::HasResult()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkEnvQueryResultWrapper.HasResult"));

	UEmbarkEnvQueryResultWrapper_HasResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkEnvQueryResultWrapper.GetQueryResult
// (Final, Native, Public, Const)
// Parameters:
// struct FEnvQueryResult         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEnvQueryResult UEmbarkEnvQueryResultWrapper::GetQueryResult()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkEnvQueryResultWrapper.GetQueryResult"));

	UEmbarkEnvQueryResultWrapper_GetQueryResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkEnvQueryResultWrapper.Clear
// (Final, Native, Public)

void UEmbarkEnvQueryResultWrapper::Clear()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkEnvQueryResultWrapper.Clear"));

	UEmbarkEnvQueryResultWrapper_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EnvQueryResultMixinLibrary.GetItemsAsLocations
// (Final, Native, Static, Private, HasOutParms)
// Parameters:
// struct FEnvQueryResult         Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         OutLocations                   (Parm, OutParm, ZeroConstructor)

void UEnvQueryResultMixinLibrary::STATIC_GetItemsAsLocations(const struct FEnvQueryResult& Result, TArray<struct FVector>* OutLocations)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EnvQueryResultMixinLibrary.GetItemsAsLocations"));

	UEnvQueryResultMixinLibrary_GetItemsAsLocations_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocations != nullptr)
		*OutLocations = params.OutLocations;
}


// Function EmbarkAI.EnvQueryManagerMixinLibrary.RunQueryWithParams
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UEnvQueryManager*        Manager                        (Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQuery*               Query                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 RequestOwner                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryRunMode>  RunMode                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkEnvQueryParams   Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UEmbarkEnvQueryResultWrapper* NotifyWrapper                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEnvQueryManagerMixinLibrary::STATIC_RunQueryWithParams(class UEnvQueryManager* Manager, class UEnvQuery* Query, class UObject* RequestOwner, TEnumAsByte<EEnvQueryRunMode> RunMode, const struct FEmbarkEnvQueryParams& Params, class UEmbarkEnvQueryResultWrapper* NotifyWrapper)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EnvQueryManagerMixinLibrary.RunQueryWithParams"));

	UEnvQueryManagerMixinLibrary_RunQueryWithParams_Params params;
	params.Manager = Manager;
	params.Query = Query;
	params.RequestOwner = RequestOwner;
	params.RunMode = RunMode;
	params.Params = Params;
	params.NotifyWrapper = NotifyWrapper;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EnvQueryManagerMixinLibrary.RunQuery
// (Final, Native, Static, Public)
// Parameters:
// class UEnvQueryManager*        Manager                        (Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQuery*               Query                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 RequestOwner                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryRunMode>  RunMode                        (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkEnvQueryResultWrapper* NotifyWrapper                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEnvQueryManagerMixinLibrary::STATIC_RunQuery(class UEnvQueryManager* Manager, class UEnvQuery* Query, class UObject* RequestOwner, TEnumAsByte<EEnvQueryRunMode> RunMode, class UEmbarkEnvQueryResultWrapper* NotifyWrapper)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EnvQueryManagerMixinLibrary.RunQuery"));

	UEnvQueryManagerMixinLibrary_RunQuery_Params params;
	params.Manager = Manager;
	params.Query = Query;
	params.RequestOwner = RequestOwner;
	params.RunMode = RunMode;
	params.NotifyWrapper = NotifyWrapper;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.UpdateGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class APawn*>           Agents                         (Parm, ZeroConstructor)
// double                         DeltaUpdateTime                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAIFlowSubsystem::UpdateGroups(TArray<class APawn*> Agents, double DeltaUpdateTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.UpdateGroups"));

	UEmbarkAIFlowSubsystem_UpdateGroups_Params params;
	params.Agents = Agents;
	params.DeltaUpdateTime = DeltaUpdateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.OnTryInitialize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAIFlowSubsystem::OnTryInitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.OnTryInitialize"));

	UEmbarkAIFlowSubsystem_OnTryInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAIFlowSubsystem::OnTick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.OnTick"));

	UEmbarkAIFlowSubsystem_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.LineValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// double                         SearchDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkipBlockedMargin              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutCollision                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UEmbarkAIFlowSubsystem::LineValue(const struct FVector& Start, const struct FVector& Direction, double SearchDistance, int SkipBlockedMargin, struct FVector* OutCollision)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.LineValue"));

	UEmbarkAIFlowSubsystem_LineValue_Params params;
	params.Start = Start;
	params.Direction = Direction;
	params.SearchDistance = SearchDistance;
	params.SkipBlockedMargin = SkipBlockedMargin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCollision != nullptr)
		*OutCollision = params.OutCollision;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.GradientDescent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Steps                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkAIFlowSubsystem::GradientDescent(const struct FVector& WorldLocation, int Steps)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.GradientDescent"));

	UEmbarkAIFlowSubsystem_GradientDescent_Params params;
	params.WorldLocation = WorldLocation;
	params.Steps = Steps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.GetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CellX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkAIFlowSubsystem::GetTime(int CellX, int CellY)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.GetTime"));

	UEmbarkAIFlowSubsystem_GetTime_Params params;
	params.CellX = CellX;
	params.CellY = CellY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.GetAgentLocations
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UEmbarkAIFlowSubsystem::GetAgentLocations()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.GetAgentLocations"));

	UEmbarkAIFlowSubsystem_GetAgentLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.FindHeight
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UEmbarkAIFlowSubsystem::FindHeight(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.FindHeight"));

	UEmbarkAIFlowSubsystem_FindHeight_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.ClosestUnblockedLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkAIFlowSubsystem::ClosestUnblockedLocation(const struct FVector& WorldLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.ClosestUnblockedLocation"));

	UEmbarkAIFlowSubsystem_ClosestUnblockedLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.CellValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UEmbarkAIFlowSubsystem::CellValue(const struct FVector& WorldLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.CellValue"));

	UEmbarkAIFlowSubsystem_CellValue_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.CalculateGroupMovement
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Centroid                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HomeLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkAIFlowSubsystem::CalculateGroupMovement(const struct FVector& Centroid, const struct FVector& TargetLocation, const struct FVector& HomeLocation, double Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.CalculateGroupMovement"));

	UEmbarkAIFlowSubsystem_CalculateGroupMovement_Params params;
	params.Centroid = Centroid;
	params.TargetLocation = TargetLocation;
	params.HomeLocation = HomeLocation;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIFlowSubsystem.Blocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CellX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellY                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAIFlowSubsystem::Blocked(int CellX, int CellY)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIFlowSubsystem.Blocked"));

	UEmbarkAIFlowSubsystem_Blocked_Params params;
	params.CellX = CellX;
	params.CellY = CellY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIGroundPathFollowingComponent.SetOverrideHasReachedCurrentTargetFunction
// (Final, Native, Public)
// Parameters:
// bool                           bOverride                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAIGroundPathFollowingComponent::SetOverrideHasReachedCurrentTargetFunction(bool bOverride)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIGroundPathFollowingComponent.SetOverrideHasReachedCurrentTargetFunction"));

	UEmbarkAIGroundPathFollowingComponent_SetOverrideHasReachedCurrentTargetFunction_Params params;
	params.bOverride = bOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAIGroundPathFollowingComponent.SetIgnoreZReachThreshold
// (Final, Native, Public)
// Parameters:
// bool                           bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAIGroundPathFollowingComponent::SetIgnoreZReachThreshold(bool bIgnore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIGroundPathFollowingComponent.SetIgnoreZReachThreshold"));

	UEmbarkAIGroundPathFollowingComponent_SetIgnoreZReachThreshold_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.GroupRoleInfoMixinLibrary.IsValid
// (Final, Native, Static, Private, HasOutParms)
// Parameters:
// struct FGroupRoleInfo          Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGroupRoleInfoMixinLibrary::STATIC_IsValid(struct FGroupRoleInfo* Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.GroupRoleInfoMixinLibrary.IsValid"));

	UGroupRoleInfoMixinLibrary_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAlertnessFunctionLibrary.ToFName
// (Final, Native, Static, Public)
// Parameters:
// enum class EAIAlertness        inAIAlertness                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAIAlertnessFunctionLibrary::STATIC_ToFName(enum class EAIAlertness inAIAlertness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAlertnessFunctionLibrary.ToFName"));

	UAIAlertnessFunctionLibrary_ToFName_Params params;
	params.inAIAlertness = inAIAlertness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIAlertnessSourceFunctionLibrary.ToFName
// (Final, Native, Static, Public)
// Parameters:
// enum class EAIAlertnessSource  inAIAlertnessSource            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAIAlertnessSourceFunctionLibrary::STATIC_ToFName(enum class EAIAlertnessSource inAIAlertnessSource)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIAlertnessSourceFunctionLibrary.ToFName"));

	UAIAlertnessSourceFunctionLibrary_ToFName_Params params;
	params.inAIAlertnessSource = inAIAlertnessSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary.GetAIKnowledgeBaseInterfaceFromGameMode
// (Final, Native, Static, Public)
// Parameters:
// class AGameModeBase*           GameMode                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAIKnowledgeBaseInterface* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIKnowledgeBaseInterface* UEmbarkAIKnowledgeBaseInterfaceFunctionLibrary::STATIC_GetAIKnowledgeBaseInterfaceFromGameMode(class AGameModeBase* GameMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary.GetAIKnowledgeBaseInterfaceFromGameMode"));

	UEmbarkAIKnowledgeBaseInterfaceFunctionLibrary_GetAIKnowledgeBaseInterfaceFromGameMode_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary.GetAIKnowledgeBaseInterface
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAIKnowledgeBaseInterface* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIKnowledgeBaseInterface* UEmbarkAIKnowledgeBaseInterfaceFunctionLibrary::STATIC_GetAIKnowledgeBaseInterface(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary.GetAIKnowledgeBaseInterface"));

	UEmbarkAIKnowledgeBaseInterfaceFunctionLibrary_GetAIKnowledgeBaseInterface_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.UnregisterAITarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActorComponent*         Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAIKnowledgeBaseInterface::UnregisterAITarget(class UActorComponent* Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.UnregisterAITarget"));

	UAIKnowledgeBaseInterface_UnregisterAITarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.UnregisterAIAgent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAIController*           Agent                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIKnowledgeBaseInterface::UnregisterAIAgent(class AAIController* Agent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.UnregisterAIAgent"));

	UAIKnowledgeBaseInterface_UnregisterAIAgent_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.RegisterAITarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActorComponent*         Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAIKnowledgeBaseInterface::RegisterAITarget(class UActorComponent* Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.RegisterAITarget"));

	UAIKnowledgeBaseInterface_RegisterAITarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.RegisterAIAgent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAIController*           Agent                          (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              Template                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIKnowledgeBaseInterface::RegisterAIAgent(class AAIController* Agent, class UDataAsset* Template)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.RegisterAIAgent"));

	UAIKnowledgeBaseInterface_RegisterAIAgent_Params params;
	params.Agent = Agent;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.HasAgentGroupInfo
// (Final, Native, Public, Const)
// Parameters:
// int                            GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIKnowledgeBaseInterface::HasAgentGroupInfo(int GroupId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.HasAgentGroupInfo"));

	UAIKnowledgeBaseInterface_HasAgentGroupInfo_Params params;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.GetTargetInfos
// (Final, Native, Public, Const)
// Parameters:
// TMap<class UAITargetComponent*, struct FTargetInfo> ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

TMap<class UAITargetComponent*, struct FTargetInfo> UAIKnowledgeBaseInterface::GetTargetInfos()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.GetTargetInfos"));

	UAIKnowledgeBaseInterface_GetTargetInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.GetTargetInfo
// (Final, Native, Public, Const)
// Parameters:
// class UAITargetComponent*      Comp                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTargetInfo             ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FTargetInfo UAIKnowledgeBaseInterface::GetTargetInfo(class UAITargetComponent* Comp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.GetTargetInfo"));

	UAIKnowledgeBaseInterface_GetTargetInfo_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfos
// (Final, Native, Public, Const)
// Parameters:
// TMap<class AAIController*, struct FAgentInfo> ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

TMap<class AAIController*, struct FAgentInfo> UAIKnowledgeBaseInterface::GetAgentInfos()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfos"));

	UAIKnowledgeBaseInterface_GetAgentInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfoNonRef
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           AIController                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAgentInfo              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAgentInfo UAIKnowledgeBaseInterface::GetAgentInfoNonRef(class AAIController* AIController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfoNonRef"));

	UAIKnowledgeBaseInterface_GetAgentInfoNonRef_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfo
// (Final, Native, Public, Const)
// Parameters:
// class AAIController*           AIController                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAgentInfo              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAgentInfo UAIKnowledgeBaseInterface::GetAgentInfo(class AAIController* AIController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfo"));

	UAIKnowledgeBaseInterface_GetAgentInfo_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentGroupInfo
// (Final, Native, Public, Const)
// Parameters:
// int                            GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FAgentGroupInfo         ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAgentGroupInfo UAIKnowledgeBaseInterface::GetAgentGroupInfo(int GroupId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentGroupInfo"));

	UAIKnowledgeBaseInterface_GetAgentGroupInfo_Params params;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.AIKnowledgeBaseInterface.AgentInfoExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           AIController                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIKnowledgeBaseInterface::AgentInfoExist(class AAIController* AIController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.AIKnowledgeBaseInterface.AgentInfoExist"));

	UAIKnowledgeBaseInterface_AgentInfoExist_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAINavigationComponentBase.StopMovement
// (Event, Public, BlueprintEvent)

void UEmbarkAINavigationComponentBase::StopMovement()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAINavigationComponentBase.StopMovement"));

	UEmbarkAINavigationComponentBase_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAINavigationComponentBase.GetMoveDestination
// (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkAINavigationComponentBase::GetMoveDestination()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAINavigationComponentBase.GetMoveDestination"));

	UEmbarkAINavigationComponentBase_GetMoveDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAINavigationComponentBase.GetImmediateMoveDestination
// (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkAINavigationComponentBase::GetImmediateMoveDestination()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAINavigationComponentBase.GetImmediateMoveDestination"));

	UEmbarkAINavigationComponentBase_GetImmediateMoveDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAINavigationComponentBase.FindPath
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkAIPathRequest    PathRequest                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         OutOptimizedPath               (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPathFollowingRequestResult> UEmbarkAINavigationComponentBase::FindPath(const struct FEmbarkAIPathRequest& PathRequest, TArray<struct FVector>* OutOptimizedPath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAINavigationComponentBase.FindPath"));

	UEmbarkAINavigationComponentBase_FindPath_Params params;
	params.PathRequest = PathRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOptimizedPath != nullptr)
		*OutOptimizedPath = params.OutOptimizedPath;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAICombatPositionQueryBase.UpdateQuery_Internal
// (Final, Native, Protected, BlueprintCallable)

void UEmbarkAICombatPositionQueryBase::UpdateQuery_Internal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAICombatPositionQueryBase.UpdateQuery_Internal"));

	UEmbarkAICombatPositionQueryBase_UpdateQuery_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAICombatPositionQueryBase.UpdateQuery
// (Native, Event, Protected, BlueprintEvent)

void UEmbarkAICombatPositionQueryBase::UpdateQuery()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAICombatPositionQueryBase.UpdateQuery"));

	UEmbarkAICombatPositionQueryBase_UpdateQuery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAICombatPositionQueryBase.RunQuery_Internal
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCombatPositionQueryInfo QueryInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAICombatPositionQueryState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EAICombatPositionQueryState UEmbarkAICombatPositionQueryBase::RunQuery_Internal(const struct FCombatPositionQueryInfo& QueryInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAICombatPositionQueryBase.RunQuery_Internal"));

	UEmbarkAICombatPositionQueryBase_RunQuery_Internal_Params params;
	params.QueryInfo = QueryInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAICombatPositionQueryBase.RunQuery
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCombatPositionQueryInfo QueryInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EAICombatPositionQueryState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EAICombatPositionQueryState UEmbarkAICombatPositionQueryBase::RunQuery(const struct FCombatPositionQueryInfo& QueryInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAICombatPositionQueryBase.RunQuery"));

	UEmbarkAICombatPositionQueryBase_RunQuery_Params params;
	params.QueryInfo = QueryInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAICombatPositionQueryBase.ReadyToRunContiniousQuery
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAICombatPositionQueryBase::ReadyToRunContiniousQuery()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAICombatPositionQueryBase.ReadyToRunContiniousQuery"));

	UEmbarkAICombatPositionQueryBase_ReadyToRunContiniousQuery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAICombatPositionQueryBase.GetQueryResult_Internal
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCombatPositionQueryResults OutPositionInfo                (Parm, OutParm)
// enum class EAICombatPositionQueryState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EAICombatPositionQueryState UEmbarkAICombatPositionQueryBase::GetQueryResult_Internal(struct FCombatPositionQueryResults* OutPositionInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAICombatPositionQueryBase.GetQueryResult_Internal"));

	UEmbarkAICombatPositionQueryBase_GetQueryResult_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPositionInfo != nullptr)
		*OutPositionInfo = params.OutPositionInfo;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAICombatPositionQueryBase.GetQueryResult
// (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FCombatPositionQueryResults OutPositionInfo                (Parm, OutParm)
// enum class EAICombatPositionQueryState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EAICombatPositionQueryState UEmbarkAICombatPositionQueryBase::GetQueryResult(struct FCombatPositionQueryResults* OutPositionInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAICombatPositionQueryBase.GetQueryResult"));

	UEmbarkAICombatPositionQueryBase_GetQueryResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPositionInfo != nullptr)
		*OutPositionInfo = params.OutPositionInfo;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkAISense_Hearing.ReportSoundEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAISense_Hearing::STATIC_ReportSoundEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Range, class AActor* Instigator, const struct FName& Tag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAISense_Hearing.ReportSoundEvent"));

	UEmbarkAISense_Hearing_ReportSoundEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NoiseLocation = NoiseLocation;
	params.Range = Range;
	params.Instigator = Instigator;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAISense_Network.ReportNetworkEvent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LastSeenLocation               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAISense_Network::STATIC_ReportNetworkEvent(class UObject* WorldContextObject, class AActor* Instigator, class AActor* TargetActor, const struct FVector& LastSeenLocation, float MaxRange, const struct FName& Tag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAISense_Network.ReportNetworkEvent"));

	UEmbarkAISense_Network_ReportNetworkEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Instigator = Instigator;
	params.TargetActor = TargetActor;
	params.LastSeenLocation = LastSeenLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkAISense_Touch.ReportTouchEvent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TouchReceiver                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EventLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkAISense_Touch::STATIC_ReportTouchEvent(class UObject* WorldContextObject, class AActor* TouchReceiver, class AActor* OtherActor, const struct FVector& EventLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkAISense_Touch.ReportTouchEvent"));

	UEmbarkAISense_Touch_ReportTouchEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TouchReceiver = TouchReceiver;
	params.OtherActor = OtherActor;
	params.EventLocation = EventLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveSelectSlot
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Querier                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AvailableSlots                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkSmartObjectComponent::ReceiveSelectSlot(class AActor* Querier, TArray<int> AvailableSlots)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveSelectSlot"));

	UEmbarkSmartObjectComponent_ReceiveSelectSlot_Params params;
	params.Querier = Querier;
	params.AvailableSlots = AvailableSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveRelease
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Querier                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSmartObjectComponent::ReceiveRelease(class AActor* Querier, int Slot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveRelease"));

	UEmbarkSmartObjectComponent_ReceiveRelease_Params params;
	params.Querier = Querier;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveClaim
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Querier                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSmartObjectComponent::ReceiveClaim(class AActor* Querier, int Slot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveClaim"));

	UEmbarkSmartObjectComponent_ReceiveClaim_Params params;
	params.Querier = Querier;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveCanBeClaimed
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Querier                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSmartObjectComponent::ReceiveCanBeClaimed(class AActor* Querier, int Slot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveCanBeClaimed"));

	UEmbarkSmartObjectComponent_ReceiveCanBeClaimed_Params params;
	params.Querier = Querier;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.Release
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSmartObjectSubsystem::Release(const struct FEmbarkSmartObjectClaimHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.Release"));

	UEmbarkSmartObjectSubsystem_Release_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.IsInitialized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSmartObjectSubsystem::IsInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.IsInitialized"));

	UEmbarkSmartObjectSubsystem_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.InitializeOctree
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                    Bounds                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkSmartObjectSubsystem::InitializeOctree(const struct FBox& Bounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.InitializeOctree"));

	UEmbarkSmartObjectSubsystem_InitializeOctree_Params params;
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSmartObjectRawPtrsInRange
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    QueryBox                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class UEmbarkSmartObjectComponent*> OutResults                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSmartObjectSubsystem::GetSmartObjectRawPtrsInRange(const struct FBox& QueryBox, TArray<class UEmbarkSmartObjectComponent*>* OutResults)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSmartObjectRawPtrsInRange"));

	UEmbarkSmartObjectSubsystem_GetSmartObjectRawPtrsInRange_Params params;
	params.QueryBox = QueryBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResults != nullptr)
		*OutResults = params.OutResults;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSmartObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UEmbarkSmartObjectComponent* ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEmbarkSmartObjectComponent* UEmbarkSmartObjectSubsystem::GetSmartObject(const struct FEmbarkSmartObjectClaimHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSmartObject"));

	UEmbarkSmartObjectSubsystem_GetSmartObject_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UEmbarkSmartObjectSubsystem::GetSlotRotation(const struct FEmbarkSmartObjectClaimHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotRotation"));

	UEmbarkSmartObjectSubsystem_GetSlotRotation_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkSmartObjectSubsystem::GetSlotLocation(const struct FEmbarkSmartObjectClaimHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotLocation"));

	UEmbarkSmartObjectSubsystem_GetSlotLocation_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkSmartObjectSubsystem::GetSlotIndex(const struct FEmbarkSmartObjectClaimHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotIndex"));

	UEmbarkSmartObjectSubsystem_GetSlotIndex_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetCurrent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkSmartObjectSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkSmartObjectSubsystem* UEmbarkSmartObjectSubsystem::STATIC_GetCurrent(class UWorld* World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetCurrent"));

	UEmbarkSmartObjectSubsystem_GetCurrent_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetClaim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkSmartObjectClaimHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkSmartObjectClaimHandle UEmbarkSmartObjectSubsystem::GetClaim(class AActor* Owner)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetClaim"));

	UEmbarkSmartObjectSubsystem_GetClaim_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetBehaviorOrder
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEmbarkSmartObjectSubsystem::GetBehaviorOrder(const struct FEmbarkSmartObjectClaimHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.GetBehaviorOrder"));

	UEmbarkSmartObjectSubsystem_GetBehaviorOrder_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindSmartObjectWithPredicate
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectRequest Request                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Predicate                      (Parm, ZeroConstructor)
// struct FEmbarkSmartObjectClaimHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkSmartObjectClaimHandle UEmbarkSmartObjectSubsystem::FindSmartObjectWithPredicate(const struct FEmbarkSmartObjectRequest& Request, const struct FScriptDelegate& Predicate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.FindSmartObjectWithPredicate"));

	UEmbarkSmartObjectSubsystem_FindSmartObjectWithPredicate_Params params;
	params.Request = Request;
	params.Predicate = Predicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindSmartObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectRequest Request                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkSmartObjectClaimHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkSmartObjectClaimHandle UEmbarkSmartObjectSubsystem::FindSmartObject(const struct FEmbarkSmartObjectRequest& Request)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.FindSmartObject"));

	UEmbarkSmartObjectSubsystem_FindSmartObject_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindClosestSmartObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectRequest Request                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkSmartObjectClaimHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkSmartObjectClaimHandle UEmbarkSmartObjectSubsystem::FindClosestSmartObject(const struct FEmbarkSmartObjectRequest& Request)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.FindClosestSmartObject"));

	UEmbarkSmartObjectSubsystem_FindClosestSmartObject_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindAllSmartObjects
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkSmartObjectRequest Request                        (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FEmbarkSmartObjectClaimHandle> OutResults                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSmartObjectSubsystem::FindAllSmartObjects(const struct FEmbarkSmartObjectRequest& Request, TArray<struct FEmbarkSmartObjectClaimHandle>* OutResults)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.FindAllSmartObjects"));

	UEmbarkSmartObjectSubsystem_FindAllSmartObjects_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResults != nullptr)
		*OutResults = params.OutResults;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.DebugDraw
// (Final, Native, Public, BlueprintCallable)

void UEmbarkSmartObjectSubsystem::DebugDraw()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.DebugDraw"));

	UEmbarkSmartObjectSubsystem_DebugDraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkSmartObjectSubsystem.Claim
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSmartObjectSubsystem::Claim(const struct FEmbarkSmartObjectClaimHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectSubsystem.Claim"));

	UEmbarkSmartObjectSubsystem_Claim_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkSmartObjectClaimHandleMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkSmartObjectClaimHandle Handle                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSmartObjectClaimHandleMixinLibrary::STATIC_IsValid(struct FEmbarkSmartObjectClaimHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkSmartObjectClaimHandleMixinLibrary.IsValid"));

	UEmbarkSmartObjectClaimHandleMixinLibrary_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkTeamFunctionLibrary.SetActorTeam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToUpdate                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkTeamId       NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTeamFunctionLibrary::STATIC_SetActorTeam(class AActor* ActorToUpdate, enum class EEmbarkTeamId NewTeam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkTeamFunctionLibrary.SetActorTeam"));

	UEmbarkTeamFunctionLibrary_SetActorTeam_Params params;
	params.ActorToUpdate = ActorToUpdate;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAI.EmbarkTeamFunctionLibrary.GetAttitudeBetweenTeams
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EEmbarkTeamId       AskingTeam                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkTeamId       TargetTeam                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETeamAttitude> UEmbarkTeamFunctionLibrary::STATIC_GetAttitudeBetweenTeams(enum class EEmbarkTeamId AskingTeam, enum class EEmbarkTeamId TargetTeam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkTeamFunctionLibrary.GetAttitudeBetweenTeams"));

	UEmbarkTeamFunctionLibrary_GetAttitudeBetweenTeams_Params params;
	params.AskingTeam = AskingTeam;
	params.TargetTeam = TargetTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkTeamFunctionLibrary.GetAttitudeBetweenActors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  AskingActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETeamAttitude> UEmbarkTeamFunctionLibrary::STATIC_GetAttitudeBetweenActors(class AActor* AskingActor, class AActor* TargetActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkTeamFunctionLibrary.GetAttitudeBetweenActors"));

	UEmbarkTeamFunctionLibrary_GetAttitudeBetweenActors_Params params;
	params.AskingActor = AskingActor;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAI.EmbarkTeamFunctionLibrary.GetActorTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TeamMember                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkTeamId       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkTeamId UEmbarkTeamFunctionLibrary::STATIC_GetActorTeam(class AActor* TeamMember)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAI.EmbarkTeamFunctionLibrary.GetActorTeam"));

	UEmbarkTeamFunctionLibrary_GetActorTeam_Params params;
	params.TeamMember = TeamMember;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
