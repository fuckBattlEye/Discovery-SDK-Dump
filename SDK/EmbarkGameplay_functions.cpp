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

// Function EmbarkGameplay.EmbarkCheatManager.PrintDebug_AbilitySystem
// (Final, Exec, Native, Public, BlueprintCallable)

void UEmbarkCheatManager::PrintDebug_AbilitySystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkCheatManager.PrintDebug_AbilitySystem"));

	UEmbarkCheatManager_PrintDebug_AbilitySystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkCheatManager.ForceCrash
// (Final, Exec, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkCheatManager::ForceCrash(TArray<struct FString> Args)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkCheatManager.ForceCrash"));

	UEmbarkCheatManager_ForceCrash_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkCheatManager.ExecuteCheat_Server
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkCheatManager::ExecuteCheat_Server(TArray<struct FString> Args)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkCheatManager.ExecuteCheat_Server"));

	UEmbarkCheatManager_ExecuteCheat_Server_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkCheatManager.DeleteLocalSaveGames
// (Final, Exec, Native, Public)

void UEmbarkCheatManager::DeleteLocalSaveGames()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkCheatManager.DeleteLocalSaveGames"));

	UEmbarkCheatManager_DeleteLocalSaveGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkCheatManager.DebugCameraEnded
// (Event, Public, BlueprintEvent)

void UEmbarkCheatManager::DebugCameraEnded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkCheatManager.DebugCameraEnded"));

	UEmbarkCheatManager_DebugCameraEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkCheatManager.AddInfImpulse
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)

void UEmbarkCheatManager::AddInfImpulse()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkCheatManager.AddInfImpulse"));

	UEmbarkCheatManager_AddInfImpulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.WasUsingMouse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkPlayerController::WasUsingMouse()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.WasUsingMouse"));

	AEmbarkPlayerController_WasUsingMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerController.WasUsingKeyboard
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkPlayerController::WasUsingKeyboard()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.WasUsingKeyboard"));

	AEmbarkPlayerController_WasUsingKeyboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerController.WasUsingGamepad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkPlayerController::WasUsingGamepad()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.WasUsingGamepad"));

	AEmbarkPlayerController_WasUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerController.TriggerInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InputAction                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::TriggerInputAction(const struct FName& InputAction, TEnumAsByte<EInputEvent> InputEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.TriggerInputAction"));

	AEmbarkPlayerController_TriggerInputAction_Params params;
	params.InputAction = InputAction;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EEmbarkTeamId       NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::SetTeam(enum class EEmbarkTeamId NewTeam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.SetTeam"));

	AEmbarkPlayerController_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.SetStartSpot
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::SetStartSpot(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.SetStartSpot"));

	AEmbarkPlayerController_SetStartSpot_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ServerSetMatchId
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FName                   InPlatformKey                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 InMatchId                      (Parm, ZeroConstructor)

void AEmbarkPlayerController::ServerSetMatchId(const struct FName& InPlatformKey, const struct FString& InMatchId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ServerSetMatchId"));

	AEmbarkPlayerController_ServerSetMatchId_Params params;
	params.InPlatformKey = InPlatformKey;
	params.InMatchId = InMatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ServerNotifyHasReplicatedPlayerState
// (Net, NetReliable, Native, Event, Public, NetServer)

void AEmbarkPlayerController::ServerNotifyHasReplicatedPlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ServerNotifyHasReplicatedPlayerState"));

	AEmbarkPlayerController_ServerNotifyHasReplicatedPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ServerLogConsoleCommandFromClient
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FString                 Cmd                            (Parm, ZeroConstructor)

void AEmbarkPlayerController::ServerLogConsoleCommandFromClient(const struct FString& Cmd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ServerLogConsoleCommandFromClient"));

	AEmbarkPlayerController_ServerLogConsoleCommandFromClient_Params params;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceiveSetupInputComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInputComponent*         PlayerInputComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkPlayerController::ReceiveSetupInputComponent(class UInputComponent* PlayerInputComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceiveSetupInputComponent"));

	AEmbarkPlayerController_ReceiveSetupInputComponent_Params params;
	params.PlayerInputComponent = PlayerInputComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceiveSeamlessTravelTo
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::ReceiveSeamlessTravelTo(class APlayerController* NewPC)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceiveSeamlessTravelTo"));

	AEmbarkPlayerController_ReceiveSeamlessTravelTo_Params params;
	params.NewPC = NewPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceiveSeamlessTravelFrom
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       OldPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::ReceiveSeamlessTravelFrom(class APlayerController* OldPC)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceiveSeamlessTravelFrom"));

	AEmbarkPlayerController_ReceiveSeamlessTravelFrom_Params params;
	params.OldPC = OldPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceivePreClientTravel
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 PendingURL                     (Parm, ZeroConstructor)
// TEnumAsByte<ETravelType>       TravelType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSeamlessTravel              (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::ReceivePreClientTravel(const struct FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceivePreClientTravel"));

	AEmbarkPlayerController_ReceivePreClientTravel_Params params;
	params.PendingURL = PendingURL;
	params.TravelType = TravelType;
	params.bIsSeamlessTravel = bIsSeamlessTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceivePostSeamlessTravel
// (Event, Public, BlueprintEvent)

void AEmbarkPlayerController::ReceivePostSeamlessTravel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceivePostSeamlessTravel"));

	AEmbarkPlayerController_ReceivePostSeamlessTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceiveOnSquadVoiceChannelInfoReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVoiceChannelInfo       VoiceChannelInfo               (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkPlayerController::ReceiveOnSquadVoiceChannelInfoReceived(const struct FVoiceChannelInfo& VoiceChannelInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceiveOnSquadVoiceChannelInfoReceived"));

	AEmbarkPlayerController_ReceiveOnSquadVoiceChannelInfoReceived_Params params;
	params.VoiceChannelInfo = VoiceChannelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceiveOnRep_ControlledPawn
// (Event, Public, BlueprintEvent)

void AEmbarkPlayerController::ReceiveOnRep_ControlledPawn()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceiveOnRep_ControlledPawn"));

	AEmbarkPlayerController_ReceiveOnRep_ControlledPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceiveNotifyLoadedWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   WorldPackageName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFinalDest                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::ReceiveNotifyLoadedWorld(const struct FName& WorldPackageName, bool bFinalDest)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceiveNotifyLoadedWorld"));

	AEmbarkPlayerController_ReceiveNotifyLoadedWorld_Params params;
	params.WorldPackageName = WorldPackageName;
	params.bFinalDest = bFinalDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ReceiveGetSeamlessTravelActorList
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bToEntry                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorList                      (Parm, OutParm, ZeroConstructor)

void AEmbarkPlayerController::ReceiveGetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ReceiveGetSeamlessTravelActorList"));

	AEmbarkPlayerController_ReceiveGetSeamlessTravelActorList_Params params;
	params.bToEntry = bToEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function EmbarkGameplay.EmbarkPlayerController.OnServerKick
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Reason                         (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkPlayerController::OnServerKick(const struct FText& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.OnServerKick"));

	AEmbarkPlayerController_OnServerKick_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction EmbarkGameplay.EmbarkPlayerController.OnEmbarkInputDeviceChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EEmbarkInputDevice  NewInputDevice                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::OnEmbarkInputDeviceChanged__DelegateSignature(enum class EEmbarkInputDevice NewInputDevice)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkGameplay.EmbarkPlayerController.OnEmbarkInputDeviceChanged__DelegateSignature"));

	AEmbarkPlayerController_OnEmbarkInputDeviceChanged__DelegateSignature_Params params;
	params.NewInputDevice = NewInputDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.LocalPawnChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPlayerController::LocalPawnChanged(class APawn* NewPawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.LocalPawnChanged"));

	AEmbarkPlayerController_LocalPawnChanged_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.HasLocalPlayerSubsystem
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Subsystem                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkPlayerController::HasLocalPlayerSubsystem(class UClass* Subsystem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.HasLocalPlayerSubsystem"));

	AEmbarkPlayerController_HasLocalPlayerSubsystem_Params params;
	params.Subsystem = Subsystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerController.GetUniqueNetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUniqueNetIdRepl        ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FUniqueNetIdRepl AEmbarkPlayerController::GetUniqueNetId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.GetUniqueNetId"));

	AEmbarkPlayerController_GetUniqueNetId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerController.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEmbarkTeamId       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkTeamId AEmbarkPlayerController::GetTeam()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.GetTeam"));

	AEmbarkPlayerController_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerController.GetRotationInput
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AEmbarkPlayerController::GetRotationInput()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.GetRotationInput"));

	AEmbarkPlayerController_GetRotationInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerController.EnableTabNavigation
// (Final, Native, Public, BlueprintCallable)

void AEmbarkPlayerController::EnableTabNavigation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.EnableTabNavigation"));

	AEmbarkPlayerController_EnableTabNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.DisableTabNavigation
// (Final, Native, Public, BlueprintCallable)

void AEmbarkPlayerController::DisableTabNavigation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.DisableTabNavigation"));

	AEmbarkPlayerController_DisableTabNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerController.ClientReceiveSquadVoiceChannelInfo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FVoiceChannelInfo       VoiceChannelInfo               (Parm)

void AEmbarkPlayerController::ClientReceiveSquadVoiceChannelInfo(const struct FVoiceChannelInfo& VoiceChannelInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerController.ClientReceiveSquadVoiceChannelInfo"));

	AEmbarkPlayerController_ClientReceiveSquadVoiceChannelInfo_Params params;
	params.VoiceChannelInfo = VoiceChannelInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerStateBase.SetUniqueId
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetIdRepl        NetId                          (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkPlayerStateBase::SetUniqueId(const struct FUniqueNetIdRepl& NetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerStateBase.SetUniqueId"));

	AEmbarkPlayerStateBase_SetUniqueId_Params params;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerStateBase.OnRep_Squad
// (Final, Native, Private, Const)

void AEmbarkPlayerStateBase::OnRep_Squad()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerStateBase.OnRep_Squad"));

	AEmbarkPlayerStateBase_OnRep_Squad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerStateBase.HandleOnReactivate
// (Event, Public, BlueprintEvent)

void AEmbarkPlayerStateBase::HandleOnReactivate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerStateBase.HandleOnReactivate"));

	AEmbarkPlayerStateBase_HandleOnReactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerStateBase.HandleOnDeactivate
// (Event, Public, BlueprintEvent)

void AEmbarkPlayerStateBase::HandleOnDeactivate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerStateBase.HandleOnDeactivate"));

	AEmbarkPlayerStateBase_HandleOnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPlayerStateBase.GetReplicatedPing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkPlayerStateBase::GetReplicatedPing()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerStateBase.GetReplicatedPing"));

	AEmbarkPlayerStateBase_GetReplicatedPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPlayerStateBase.GetExactPing_Server
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkPlayerStateBase::GetExactPing_Server()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPlayerStateBase.GetExactPing_Server"));

	AEmbarkPlayerStateBase_GetExactPing_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkFovHelpers.GetViewProjectionMatrix
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FMatrix UEmbarkFovHelpers::STATIC_GetViewProjectionMatrix(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkFovHelpers.GetViewProjectionMatrix"));

	UEmbarkFovHelpers_GetViewProjectionMatrix_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkFovHelpers.GetModelViewProjectionMatrix
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FMatrix UEmbarkFovHelpers::STATIC_GetModelViewProjectionMatrix(class UObject* WorldContextObject, const struct FTransform& Transform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkFovHelpers.GetModelViewProjectionMatrix"));

	UEmbarkFovHelpers_GetModelViewProjectionMatrix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkFovHelpers.GetMatrixFromTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FMatrix UEmbarkFovHelpers::STATIC_GetMatrixFromTransform(const struct FTransform& Transform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkFovHelpers.GetMatrixFromTransform"));

	UEmbarkFovHelpers_GetMatrixFromTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkFovHelpers.GetInverseMatrix
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMatrix                 Matrix                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FMatrix UEmbarkFovHelpers::STATIC_GetInverseMatrix(const struct FMatrix& Matrix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkFovHelpers.GetInverseMatrix"));

	UEmbarkFovHelpers_GetInverseMatrix_Params params;
	params.Matrix = Matrix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkFovHelpers.GetCustomFovWorldTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          HorizontalFOV                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkFovHelpers::STATIC_GetCustomFovWorldTransform(class UObject* WorldContextObject, const struct FTransform& Transform, float HorizontalFOV)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkFovHelpers.GetCustomFovWorldTransform"));

	UEmbarkFovHelpers_GetCustomFovWorldTransform_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Transform = Transform;
	params.HorizontalFOV = HorizontalFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkFovHelpers.GetCustomFovModelViewProjectionMatrix
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FMatrix                 TransformMatrix                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HorizontalFOV                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FMatrix UEmbarkFovHelpers::STATIC_GetCustomFovModelViewProjectionMatrix(class UObject* WorldContextObject, const struct FMatrix& TransformMatrix, float HorizontalFOV)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkFovHelpers.GetCustomFovModelViewProjectionMatrix"));

	UEmbarkFovHelpers_GetCustomFovModelViewProjectionMatrix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TransformMatrix = TransformMatrix;
	params.HorizontalFOV = HorizontalFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActor.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EEmbarkTeamId       NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkActor::SetTeam(enum class EEmbarkTeamId NewTeam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.SetTeam"));

	AEmbarkActor_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.SetDefaultNetDormancy
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<ENetDormancy>      DefaultNetDormancy             (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkActor::SetDefaultNetDormancy(TEnumAsByte<ENetDormancy> DefaultNetDormancy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.SetDefaultNetDormancy"));

	AEmbarkActor_SetDefaultNetDormancy_Params params;
	params.DefaultNetDormancy = DefaultNetDormancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.ReceiveTakeDamage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkActor::ReceiveTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.ReceiveTakeDamage"));

	AEmbarkActor_ReceiveTakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActor.ReceivePreInitializeComponents
// (Event, Protected, BlueprintEvent)

void AEmbarkActor::ReceivePreInitializeComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.ReceivePreInitializeComponents"));

	AEmbarkActor_ReceivePreInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.ReceivePostInitializeComponents
// (Event, Protected, BlueprintEvent)

void AEmbarkActor::ReceivePostInitializeComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.ReceivePostInitializeComponents"));

	AEmbarkActor_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.ReceiveOnRepOwner
// (Event, Protected, BlueprintEvent)

void AEmbarkActor::ReceiveOnRepOwner()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.ReceiveOnRepOwner"));

	AEmbarkActor_ReceiveOnRepOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.ReceiveOnGameplayTagUpdated
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           TagExists                      (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkActor::ReceiveOnGameplayTagUpdated(const struct FGameplayTag& Tag, bool TagExists)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.ReceiveOnGameplayTagUpdated"));

	AEmbarkActor_ReceiveOnGameplayTagUpdated_Params params;
	params.Tag = Tag;
	params.TagExists = TagExists;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.ReceiveOnAbilitySystemDestroyed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UEmbarkAbilitySystemComponent* EmbarkASC                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkActor::ReceiveOnAbilitySystemDestroyed(class UEmbarkAbilitySystemComponent* EmbarkASC)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.ReceiveOnAbilitySystemDestroyed"));

	AEmbarkActor_ReceiveOnAbilitySystemDestroyed_Params params;
	params.EmbarkASC = EmbarkASC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.ReceiveOnAbilitySystemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UEmbarkAbilitySystemComponent* EmbarkASC                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkActor::ReceiveOnAbilitySystemCreated(class UEmbarkAbilitySystemComponent* EmbarkASC)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.ReceiveOnAbilitySystemCreated"));

	AEmbarkActor_ReceiveOnAbilitySystemCreated_Params params;
	params.EmbarkASC = EmbarkASC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.OnRep_AbilitySystem
// (Final, Native, Public, Const)

void AEmbarkActor::OnRep_AbilitySystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.OnRep_AbilitySystem"));

	AEmbarkActor_OnRep_AbilitySystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.OnGameplayTagUpdated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           TagExists                      (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkActor::OnGameplayTagUpdated(const struct FGameplayTag& Tag, bool TagExists)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.OnGameplayTagUpdated"));

	AEmbarkActor_OnGameplayTagUpdated_Params params;
	params.Tag = Tag;
	params.TagExists = TagExists;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.IntializeEmbarkActor
// (Event, Protected, BlueprintEvent)

void AEmbarkActor::IntializeEmbarkActor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.IntializeEmbarkActor"));

	AEmbarkActor_IntializeEmbarkActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.HasASC
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkActor::HasASC()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.HasASC"));

	AEmbarkActor_HasASC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActor.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEmbarkTeamId       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkTeamId AEmbarkActor::GetTeam()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.GetTeam"));

	AEmbarkActor_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActor.GetOrCreateASC_Server
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEmbarkAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEmbarkAbilitySystemComponent* AEmbarkActor::GetOrCreateASC_Server()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.GetOrCreateASC_Server"));

	AEmbarkActor_GetOrCreateASC_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActor.GetASC
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEmbarkAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEmbarkAbilitySystemComponent* AEmbarkActor::GetASC()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.GetASC"));

	AEmbarkActor_GetASC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActor.BP_OutsideWorldBoundsEvent
// (Native, Event, Protected, BlueprintEvent)

void AEmbarkActor::BP_OutsideWorldBoundsEvent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.BP_OutsideWorldBoundsEvent"));

	AEmbarkActor_BP_OutsideWorldBoundsEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActor.BP_FellOutOfWorldEvent
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UDamageType*             dmgType                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkActor::BP_FellOutOfWorldEvent(class UDamageType* dmgType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActor.BP_FellOutOfWorldEvent"));

	AEmbarkActor_BP_FellOutOfWorldEvent_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorComponent.ReceiveInitializeComponent
// (Event, Protected, BlueprintEvent)

void UEmbarkActorComponent::ReceiveInitializeComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorComponent.ReceiveInitializeComponent"));

	UEmbarkActorComponent_ReceiveInitializeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedTransform
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorTransformInterpolatorComponent::TryGetInterpolatedTransform(struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedTransform"));

	UEmbarkActorTransformInterpolatorComponent_TryGetInterpolatedTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedLinearVelocity
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 OutLinearVelocity              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorTransformInterpolatorComponent::TryGetInterpolatedLinearVelocity(struct FVector* OutLinearVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedLinearVelocity"));

	UEmbarkActorTransformInterpolatorComponent_TryGetInterpolatedLinearVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLinearVelocity != nullptr)
		*OutLinearVelocity = params.OutLinearVelocity;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedAngularVelocity
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 OutAngularVelocity             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorTransformInterpolatorComponent::TryGetInterpolatedAngularVelocity(struct FVector* OutAngularVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedAngularVelocity"));

	UEmbarkActorTransformInterpolatorComponent_TryGetInterpolatedAngularVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngularVelocity != nullptr)
		*OutAngularVelocity = params.OutAngularVelocity;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.StopUsingPredictedTransform
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorTransformInterpolatorComponent::StopUsingPredictedTransform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.StopUsingPredictedTransform"));

	UEmbarkActorTransformInterpolatorComponent_StopUsingPredictedTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetShouldUpdateActorTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorTransformInterpolatorComponent::SetShouldUpdateActorTransform(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetShouldUpdateActorTransform"));

	UEmbarkActorTransformInterpolatorComponent_SetShouldUpdateActorTransform_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetInterpolatorEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkipSetTransformRightAway     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorTransformInterpolatorComponent::SetInterpolatorEnabled(bool bEnabled, bool bSkipSetTransformRightAway)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetInterpolatorEnabled"));

	UEmbarkActorTransformInterpolatorComponent_SetInterpolatorEnabled_Params params;
	params.bEnabled = bEnabled;
	params.bSkipSetTransformRightAway = bSkipSetTransformRightAway;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetEnableFastReplicationDefault
// (Final, Native, Public)
// Parameters:
// bool                           bInCanSimulatePhysics          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInStartsInSleeping            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorTransformInterpolatorComponent::SetEnableFastReplicationDefault(bool bInCanSimulatePhysics, bool bInStartsInSleeping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetEnableFastReplicationDefault"));

	UEmbarkActorTransformInterpolatorComponent_SetEnableFastReplicationDefault_Params params;
	params.bInCanSimulatePhysics = bInCanSimulatePhysics;
	params.bInStartsInSleeping = bInStartsInSleeping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.ResetInterpolationState
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorTransformInterpolatorComponent::ResetInterpolationState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.ResetInterpolationState"));

	UEmbarkActorTransformInterpolatorComponent_ResetInterpolationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnWake_Server
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   bone                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorTransformInterpolatorComponent::OnWake_Server(class UPrimitiveComponent* Component, const struct FName& bone)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnWake_Server"));

	UEmbarkActorTransformInterpolatorComponent_OnWake_Server_Params params;
	params.Component = Component;
	params.bone = bone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnSleep_Server
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   bone                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorTransformInterpolatorComponent::OnSleep_Server(class UPrimitiveComponent* Component, const struct FName& bone)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnSleep_Server"));

	UEmbarkActorTransformInterpolatorComponent_OnSleep_Server_Params params;
	params.Component = Component;
	params.bone = bone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnRep_RootTransform
// (Final, Native, Private)

void UEmbarkActorTransformInterpolatorComponent::OnRep_RootTransform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnRep_RootTransform"));

	UEmbarkActorTransformInterpolatorComponent_OnRep_RootTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.IsInterpolatorEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorTransformInterpolatorComponent::IsInterpolatorEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.IsInterpolatorEnabled"));

	UEmbarkActorTransformInterpolatorComponent_IsInterpolatorEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.InterpolateFromNewTransformWithTransitionPeriod
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          InPredictedTransformTransitionPeriod (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InPredictedTransformDelegate   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 PredictedVelocity              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LinearVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 AngularVelocity                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bEnableInterpolatorIfDisabled  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorTransformInterpolatorComponent::InterpolateFromNewTransformWithTransitionPeriod(const struct FTransform& NewTransform, float InPredictedTransformTransitionPeriod, const struct FScriptDelegate& InPredictedTransformDelegate, const struct FVector& PredictedVelocity, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, bool bEnableInterpolatorIfDisabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.InterpolateFromNewTransformWithTransitionPeriod"));

	UEmbarkActorTransformInterpolatorComponent_InterpolateFromNewTransformWithTransitionPeriod_Params params;
	params.NewTransform = NewTransform;
	params.InPredictedTransformTransitionPeriod = InPredictedTransformTransitionPeriod;
	params.InPredictedTransformDelegate = InPredictedTransformDelegate;
	params.PredictedVelocity = PredictedVelocity;
	params.LinearVelocity = LinearVelocity;
	params.AngularVelocity = AngularVelocity;
	params.bEnableInterpolatorIfDisabled = bEnableInterpolatorIfDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.InterpolateFromNewTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LinearVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 AngularVelocity                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bEnableInterpolatorIfDisabled  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisablePredictionIfEnabled    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorTransformInterpolatorComponent::InterpolateFromNewTransform(const struct FTransform& NewTransform, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, bool bEnableInterpolatorIfDisabled, bool bDisablePredictionIfEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.InterpolateFromNewTransform"));

	UEmbarkActorTransformInterpolatorComponent_InterpolateFromNewTransform_Params params;
	params.NewTransform = NewTransform;
	params.LinearVelocity = LinearVelocity;
	params.AngularVelocity = AngularVelocity;
	params.bEnableInterpolatorIfDisabled = bEnableInterpolatorIfDisabled;
	params.bDisablePredictionIfEnabled = bDisablePredictionIfEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.WidgetMixinLibrary.SetRenderAngle
// (Final, Native, Static, Public)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UWidgetMixinLibrary::STATIC_SetRenderAngle(class UWidget* Widget, float Angle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WidgetMixinLibrary.SetRenderAngle"));

	UWidgetMixinLibrary_SetRenderAngle_Params params;
	params.Widget = Widget;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.ActorMixinLibrary.TakeDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UActorMixinLibrary::STATIC_TakeDamage(class AActor* Actor, float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ActorMixinLibrary.TakeDamage"));

	UActorMixinLibrary_TakeDamage_Params params;
	params.Actor = Actor;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.ActorMixinLibrary.GetInstigatorController
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* UActorMixinLibrary::STATIC_GetInstigatorController(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ActorMixinLibrary.GetInstigatorController"));

	UActorMixinLibrary_GetInstigatorController_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.ActorMixinLibrary.GetInstigator
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UActorMixinLibrary::STATIC_GetInstigator(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ActorMixinLibrary.GetInstigator"));

	UActorMixinLibrary_GetInstigator_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.PlayerStateMixinLibrary.SetScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewScore                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateMixinLibrary::STATIC_SetScore(class APlayerState* PlayerState, float NewScore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.PlayerStateMixinLibrary.SetScore"));

	UPlayerStateMixinLibrary_SetScore_Params params;
	params.PlayerState = PlayerState;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.ActorComponentMixinLibrary.SetCanEverAffectNavigation
// (Final, Native, Static, Public)
// Parameters:
// class UActorComponent*         ActorComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UActorComponentMixinLibrary::STATIC_SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ActorComponentMixinLibrary.SetCanEverAffectNavigation"));

	UActorComponentMixinLibrary_SetCanEverAffectNavigation_Params params;
	params.ActorComponent = ActorComponent;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.ActorComponentMixinLibrary.RegisterComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ComponentToRegister            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UActorComponentMixinLibrary::STATIC_RegisterComponent(class UActorComponent* ComponentToRegister)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ActorComponentMixinLibrary.RegisterComponent"));

	UActorComponentMixinLibrary_RegisterComponent_Params params;
	params.ComponentToRegister = ComponentToRegister;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.InputComponentMixinLibrary.HasBindings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInputComponent*         InputComponent                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputComponentMixinLibrary::STATIC_HasBindings(class UInputComponent* InputComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.InputComponentMixinLibrary.HasBindings"));

	UInputComponentMixinLibrary_HasBindings_Params params;
	params.InputComponent = InputComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.InputComponentMixinLibrary.ClearBindingValues
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputComponent*         InputComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInputComponentMixinLibrary::STATIC_ClearBindingValues(class UInputComponent* InputComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.InputComponentMixinLibrary.ClearBindingValues"));

	UInputComponentMixinLibrary_ClearBindingValues_Params params;
	params.InputComponent = InputComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.DataTableMixinLibrary.FindTableCellAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColumnName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutResultString                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataTableMixinLibrary::STATIC_FindTableCellAsString(class UDataTable* DataTable, const struct FName& RowName, const struct FName& ColumnName, struct FString* OutResultString)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.DataTableMixinLibrary.FindTableCellAsString"));

	UDataTableMixinLibrary_FindTableCellAsString_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.ColumnName = ColumnName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResultString != nullptr)
		*OutResultString = params.OutResultString;

	return params.ReturnValue;
}


// Function EmbarkGameplay.DataTableMixinLibrary.FindTableCellAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColumnName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutResultFloat                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataTableMixinLibrary::STATIC_FindTableCellAsFloat(class UDataTable* DataTable, const struct FName& RowName, const struct FName& ColumnName, float* OutResultFloat)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.DataTableMixinLibrary.FindTableCellAsFloat"));

	UDataTableMixinLibrary_FindTableCellAsFloat_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.ColumnName = ColumnName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResultFloat != nullptr)
		*OutResultFloat = params.OutResultFloat;

	return params.ReturnValue;
}


// Function EmbarkGameplay.StringMixinLibrary.RemoveAt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StringToChange                 (Parm, OutParm, ZeroConstructor)
// int                            StartIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UStringMixinLibrary::STATIC_RemoveAt(int StartIdx, int Count, struct FString* StringToChange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.StringMixinLibrary.RemoveAt"));

	UStringMixinLibrary_RemoveAt_Params params;
	params.StartIdx = StartIdx;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringToChange != nullptr)
		*StringToChange = params.StringToChange;
}


// Function EmbarkGameplay.SoundWaveMixinLibrary.SetSubtitlesText
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USoundWaveMixinLibrary::STATIC_SetSubtitlesText(class USoundWave* SoundWave, int Index, const struct FText& Text)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SoundWaveMixinLibrary.SetSubtitlesText"));

	USoundWaveMixinLibrary_SetSubtitlesText_Params params;
	params.SoundWave = SoundWave;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.SoundWaveMixinLibrary.SetIsMature
// (Final, Native, Static, Public)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMature                        (Parm, ZeroConstructor, IsPlainOldData)

void USoundWaveMixinLibrary::STATIC_SetIsMature(class USoundWave* SoundWave, bool bMature)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SoundWaveMixinLibrary.SetIsMature"));

	USoundWaveMixinLibrary_SetIsMature_Params params;
	params.SoundWave = SoundWave;
	params.bMature = bMature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.SoundWaveMixinLibrary.GetIsMature
// (Final, Native, Static, Public)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundWaveMixinLibrary::STATIC_GetIsMature(class USoundWave* SoundWave)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SoundWaveMixinLibrary.GetIsMature"));

	USoundWaveMixinLibrary_GetIsMature_Params params;
	params.SoundWave = SoundWave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.SubtitleCueMixinLibrary.SetText
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSubtitleCue            SubtitleCue                    (Parm, OutParm)
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USubtitleCueMixinLibrary::STATIC_SetText(const struct FText& Text, struct FSubtitleCue* SubtitleCue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SubtitleCueMixinLibrary.SetText"));

	USubtitleCueMixinLibrary_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubtitleCue != nullptr)
		*SubtitleCue = params.SubtitleCue;
}


// Function EmbarkGameplay.WorldMixinLibrary.GetWorldComposition
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWorldComposition*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorldComposition* UWorldMixinLibrary::STATIC_GetWorldComposition(class UWorld* World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldMixinLibrary.GetWorldComposition"));

	UWorldMixinLibrary_GetWorldComposition_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.WorldMixinLibrary.GetEnvQueryManager
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQueryManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEnvQueryManager* UWorldMixinLibrary::STATIC_GetEnvQueryManager(class UWorld* World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldMixinLibrary.GetEnvQueryManager"));

	UWorldMixinLibrary_GetEnvQueryManager_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.PawnMixinLibrary.SetPlayerState
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPawnMixinLibrary::STATIC_SetPlayerState(class APawn* Pawn, class APlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.PawnMixinLibrary.SetPlayerState"));

	UPawnMixinLibrary_SetPlayerState_Params params;
	params.Pawn = Pawn;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.PawnMixinLibrary.GetAutoPossessAI
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EAutoPossessAI      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EAutoPossessAI UPawnMixinLibrary::STATIC_GetAutoPossessAI(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.PawnMixinLibrary.GetAutoPossessAI"));

	UPawnMixinLibrary_GetAutoPossessAI_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.MaterialParameterCollectionMixinLibrary.SetVectorDefaultValue
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// class UMaterialParameterCollection* MaterialParameterCollection    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UMaterialParameterCollectionMixinLibrary::STATIC_SetVectorDefaultValue(class UMaterialParameterCollection* MaterialParameterCollection, int Index, const struct FLinearColor& DefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.MaterialParameterCollectionMixinLibrary.SetVectorDefaultValue"));

	UMaterialParameterCollectionMixinLibrary_SetVectorDefaultValue_Params params;
	params.MaterialParameterCollection = MaterialParameterCollection;
	params.Index = Index;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.AIControllerMixinLibrary.GetPerceptionComponent
// (Final, Native, Static, Public)
// Parameters:
// class AAIController*           AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAIPerceptionComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIPerceptionComponent* UAIControllerMixinLibrary::STATIC_GetPerceptionComponent(class AAIController* AIController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.AIControllerMixinLibrary.GetPerceptionComponent"));

	UAIControllerMixinLibrary_GetPerceptionComponent_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.ConeConstraintMixinLibrary.SetIsSoftConstraint
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConeConstraint         Constraint                     (Parm, OutParm)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UConeConstraintMixinLibrary::STATIC_SetIsSoftConstraint(bool bValue, struct FConeConstraint* Constraint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ConeConstraintMixinLibrary.SetIsSoftConstraint"));

	UConeConstraintMixinLibrary_SetIsSoftConstraint_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Constraint != nullptr)
		*Constraint = params.Constraint;
}


// Function EmbarkGameplay.TwistConstraintMixinLibrary.SetIsSoftConstraint
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FTwistConstraint        Constraint                     (Parm, OutParm)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UTwistConstraintMixinLibrary::STATIC_SetIsSoftConstraint(bool bValue, struct FTwistConstraint* Constraint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.TwistConstraintMixinLibrary.SetIsSoftConstraint"));

	UTwistConstraintMixinLibrary_SetIsSoftConstraint_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Constraint != nullptr)
		*Constraint = params.Constraint;
}


// Function EmbarkGameplay.LinearConstraintMixinLibrary.SetIsSoftConstraint
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FLinearConstraint       Constraint                     (Parm, OutParm)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ULinearConstraintMixinLibrary::STATIC_SetIsSoftConstraint(bool bValue, struct FLinearConstraint* Constraint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.LinearConstraintMixinLibrary.SetIsSoftConstraint"));

	ULinearConstraintMixinLibrary_SetIsSoftConstraint_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Constraint != nullptr)
		*Constraint = params.Constraint;
}


// Function EmbarkGameplay.ConstraintInstanceMixinLibrary.SetScaleLinearLimits
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstraintInstance     ConstraintInstance             (Parm, OutParm)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UConstraintInstanceMixinLibrary::STATIC_SetScaleLinearLimits(bool bValue, struct FConstraintInstance* ConstraintInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ConstraintInstanceMixinLibrary.SetScaleLinearLimits"));

	UConstraintInstanceMixinLibrary_SetScaleLinearLimits_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstraintInstance != nullptr)
		*ConstraintInstance = params.ConstraintInstance;
}


// Function EmbarkGameplay.ConstraintProfilePropertiesMixinLibrary.SetParentDominates
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstraintProfileProperties ConstraintProfileProperties    (Parm, OutParm)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UConstraintProfilePropertiesMixinLibrary::STATIC_SetParentDominates(bool bValue, struct FConstraintProfileProperties* ConstraintProfileProperties)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ConstraintProfilePropertiesMixinLibrary.SetParentDominates"));

	UConstraintProfilePropertiesMixinLibrary_SetParentDominates_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstraintProfileProperties != nullptr)
		*ConstraintProfileProperties = params.ConstraintProfileProperties;
}


// Function EmbarkGameplay.BTServiceMixinLibrary.SetIntervalAndRandomDeviation
// (Final, Native, Static, Public)
// Parameters:
// class UBTService*              BTService                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Interval                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RandomDeviation                (Parm, ZeroConstructor, IsPlainOldData)

void UBTServiceMixinLibrary::STATIC_SetIntervalAndRandomDeviation(class UBTService* BTService, float Interval, float RandomDeviation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.BTServiceMixinLibrary.SetIntervalAndRandomDeviation"));

	UBTServiceMixinLibrary_SetIntervalAndRandomDeviation_Params params;
	params.BTService = BTService;
	params.Interval = Interval;
	params.RandomDeviation = RandomDeviation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.AIStimulusMixinLibrary.IsSensedBy
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIStimulus             AIStimulus                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  SenseClass                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStimulusMixinLibrary::STATIC_IsSensedBy(const struct FAIStimulus& AIStimulus, class UClass* SenseClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.AIStimulusMixinLibrary.IsSensedBy"));

	UAIStimulusMixinLibrary_IsSensedBy_Params params;
	params.AIStimulus = AIStimulus;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.AIPerceptionComponentLibrary.GetActorLocation
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// class UAIPerceptionComponent*  AIPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAIPerceptionComponentLibrary::STATIC_GetActorLocation(class UAIPerceptionComponent* AIPerceptionComponent, class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.AIPerceptionComponentLibrary.GetActorLocation"));

	UAIPerceptionComponentLibrary_GetActorLocation_Params params;
	params.AIPerceptionComponent = AIPerceptionComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.AnimInstanceScriptMixinLibrary.GetCurveValueDefault
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAnimInstance*           AnimInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimInstanceScriptMixinLibrary::STATIC_GetCurveValueDefault(class UAnimInstance* AnimInstance, const struct FName& CurveName, float* OutValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.AnimInstanceScriptMixinLibrary.GetCurveValueDefault"));

	UAnimInstanceScriptMixinLibrary_GetCurveValueDefault_Params params;
	params.AnimInstance = AnimInstance;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function EmbarkGameplay.CharacterMovementComponentScriptMixinLibrary.ResetToDefaultMovementMode
// (Final, Native, Static, Public)
// Parameters:
// class UCharacterMovementComponent* MovementComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCharacterMovementComponentScriptMixinLibrary::STATIC_ResetToDefaultMovementMode(class UCharacterMovementComponent* MovementComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.CharacterMovementComponentScriptMixinLibrary.ResetToDefaultMovementMode"));

	UCharacterMovementComponentScriptMixinLibrary_ResetToDefaultMovementMode_Params params;
	params.MovementComponent = MovementComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyLinearVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBodyInstance           BodyInstance                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UBodyInstanceMixinLibrary::STATIC_GetPhysicsBodyLinearVelocity(const struct FBodyInstance& BodyInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyLinearVelocity"));

	UBodyInstanceMixinLibrary_GetPhysicsBodyLinearVelocity_Params params;
	params.BodyInstance = BodyInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBodyInstance           BodyInstance                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBox UBodyInstanceMixinLibrary::STATIC_GetPhysicsBodyBounds(const struct FBodyInstance& BodyInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyBounds"));

	UBodyInstanceMixinLibrary_GetPhysicsBodyBounds_Params params;
	params.BodyInstance = BodyInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyAngularVelocityRad
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBodyInstance           BodyInstance                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UBodyInstanceMixinLibrary::STATIC_GetPhysicsBodyAngularVelocityRad(const struct FBodyInstance& BodyInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyAngularVelocityRad"));

	UBodyInstanceMixinLibrary_GetPhysicsBodyAngularVelocityRad_Params params;
	params.BodyInstance = BodyInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.SimpleConstructionScriptMixinLibrary.GetAllNodes
// (Final, Native, Static, Private, HasOutParms)
// Parameters:
// class USimpleConstructionScript* Script                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USCS_Node*>       Nodes                          (Parm, OutParm, ZeroConstructor)

void USimpleConstructionScriptMixinLibrary::STATIC_GetAllNodes(class USimpleConstructionScript* Script, TArray<class USCS_Node*>* Nodes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SimpleConstructionScriptMixinLibrary.GetAllNodes"));

	USimpleConstructionScriptMixinLibrary_GetAllNodes_Params params;
	params.Script = Script;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nodes != nullptr)
		*Nodes = params.Nodes;
}


// Function EmbarkGameplay.ClassScriptMixinLibrary.GetSuperStruct
// (Final, Native, Static, Private)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UStruct*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStruct* UClassScriptMixinLibrary::STATIC_GetSuperStruct(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ClassScriptMixinLibrary.GetSuperStruct"));

	UClassScriptMixinLibrary_GetSuperStruct_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.ClassScriptMixinLibrary.GetSimpleConstructionScript
// (Final, Native, Static, Private)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class USimpleConstructionScript* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USimpleConstructionScript* UClassScriptMixinLibrary::STATIC_GetSimpleConstructionScript(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ClassScriptMixinLibrary.GetSimpleConstructionScript"));

	UClassScriptMixinLibrary_GetSimpleConstructionScript_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.SCSNodeScriptMixinLibrary.GetActualComponentTemplate
// (Final, Native, Static, Private)
// Parameters:
// class USCS_Node*               Node                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* USCSNodeScriptMixinLibrary::STATIC_GetActualComponentTemplate(class USCS_Node* Node, class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SCSNodeScriptMixinLibrary.GetActualComponentTemplate"));

	USCSNodeScriptMixinLibrary_GetActualComponentTemplate_Params params;
	params.Node = Node;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.FBoxScriptMixinLibrary.GetBoxPoints
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FBox                    Box                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UFBoxScriptMixinLibrary::STATIC_GetBoxPoints(const struct FBox& Box)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.FBoxScriptMixinLibrary.GetBoxPoints"));

	UFBoxScriptMixinLibrary_GetBoxPoints_Params params;
	params.Box = Box;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.QuatScriptMixinLibrary.ShortestDelta
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FQuat                   Source                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   Target                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UQuatScriptMixinLibrary::STATIC_ShortestDelta(const struct FQuat& Source, const struct FQuat& Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.QuatScriptMixinLibrary.ShortestDelta"));

	UQuatScriptMixinLibrary_ShortestDelta_Params params;
	params.Source = Source;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.QuatScriptMixinLibrary.DotProduct
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FQuat                   A                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   B                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuatScriptMixinLibrary::STATIC_DotProduct(const struct FQuat& A, const struct FQuat& B)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.QuatScriptMixinLibrary.DotProduct"));

	UQuatScriptMixinLibrary_DotProduct_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.CameraComponentMixinLibrary.RemoveBlendable
// (Final, Native, Static, Public)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInterface*      MaterialInterface              (Parm, ZeroConstructor, IsPlainOldData)

void UCameraComponentMixinLibrary::STATIC_RemoveBlendable(class UCameraComponent* CameraComponent, class UMaterialInterface* MaterialInterface)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.CameraComponentMixinLibrary.RemoveBlendable"));

	UCameraComponentMixinLibrary_RemoveBlendable_Params params;
	params.CameraComponent = CameraComponent;
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.CameraComponentMixinLibrary.AddOrUpdateBlendable
// (Final, Native, Static, Public)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInterface*      MaterialInterface              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UCameraComponentMixinLibrary::STATIC_AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInterface* MaterialInterface, float Weight)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.CameraComponentMixinLibrary.AddOrUpdateBlendable"));

	UCameraComponentMixinLibrary_AddOrUpdateBlendable_Params params;
	params.CameraComponent = CameraComponent;
	params.MaterialInterface = MaterialInterface;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkComponentSelectionMixinLibrary.GetComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkComponentSelection ComponentSelection             (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkComponentSelectionMixinLibrary::STATIC_GetComponent(const struct FEmbarkComponentSelection& ComponentSelection, class UObject* WorldContextObject, class AActor* Owner)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkComponentSelectionMixinLibrary.GetComponent"));

	UEmbarkComponentSelectionMixinLibrary_GetComponent_Params params;
	params.ComponentSelection = ComponentSelection;
	params.WorldContextObject = WorldContextObject;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.UpdateConvexVolume
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkConvexVolume     ConvexVolume                   (Parm, OutParm)
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UEmbarkConvexVolumeMixinLibrary::STATIC_UpdateConvexVolume(const struct FTransform& NewTransform, struct FEmbarkConvexVolume* ConvexVolume)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.UpdateConvexVolume"));

	UEmbarkConvexVolumeMixinLibrary_UpdateConvexVolume_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvexVolume != nullptr)
		*ConvexVolume = params.ConvexVolume;
}


// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectSphere
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkConvexVolume     ConvexVolume                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkConvexVolumeMixinLibrary::STATIC_IntersectSphere(const struct FEmbarkConvexVolume& ConvexVolume, const struct FVector& Origin, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectSphere"));

	UEmbarkConvexVolumeMixinLibrary_IntersectSphere_Params params;
	params.ConvexVolume = ConvexVolume;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectLineSegment
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkConvexVolume     ConvexVolume                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkConvexVolumeMixinLibrary::STATIC_IntersectLineSegment(const struct FEmbarkConvexVolume& ConvexVolume, const struct FVector& Start, const struct FVector& End)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectLineSegment"));

	UEmbarkConvexVolumeMixinLibrary_IntersectLineSegment_Params params;
	params.ConvexVolume = ConvexVolume;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectBox
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkConvexVolume     ConvexVolume                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Translation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Extent                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkConvexVolumeMixinLibrary::STATIC_IntersectBox(const struct FEmbarkConvexVolume& ConvexVolume, const struct FVector& Origin, const struct FVector& Translation, const struct FVector& Extent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectBox"));

	UEmbarkConvexVolumeMixinLibrary_IntersectBox_Params params;
	params.ConvexVolume = ConvexVolume;
	params.Origin = Origin;
	params.Translation = Translation;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.GetConvexVolumePlanes
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkConvexVolume     ConvexVolume                   (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FPlane>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPlane> UEmbarkConvexVolumeMixinLibrary::STATIC_GetConvexVolumePlanes(const struct FEmbarkConvexVolume& ConvexVolume)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.GetConvexVolumePlanes"));

	UEmbarkConvexVolumeMixinLibrary_GetConvexVolumePlanes_Params params;
	params.ConvexVolume = ConvexVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.CreateConvexVolume
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          HalfFOVX                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfFOVY                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxZ                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkConvexVolume     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkConvexVolume UEmbarkConvexVolumeMixinLibrary::STATIC_CreateConvexVolume(const struct FTransform& Transform, float HalfFOVX, float HalfFOVY, float MinZ, float MaxZ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.CreateConvexVolume"));

	UEmbarkConvexVolumeMixinLibrary_CreateConvexVolume_Params params;
	params.Transform = Transform;
	params.HalfFOVX = HalfFOVX;
	params.HalfFOVY = HalfFOVY;
	params.MinZ = MinZ;
	params.MaxZ = MaxZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkEngineSubsystem.OnInitialized
// (Event, Public, BlueprintEvent)

void UEmbarkEngineSubsystem::OnInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkEngineSubsystem.OnInitialized"));

	UEmbarkEngineSubsystem_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkEngineSubsystem.OnDeinitialized
// (Event, Public, BlueprintEvent)

void UEmbarkEngineSubsystem::OnDeinitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkEngineSubsystem.OnDeinitialized"));

	UEmbarkEngineSubsystem_OnDeinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkBlackBoardFastReplicatorBucketTransformInterpolator.OnRep_ActorTransformCollection
// (Final, Native, Public)

void AEmbarkBlackBoardFastReplicatorBucketTransformInterpolator::OnRep_ActorTransformCollection()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkBlackBoardFastReplicatorBucketTransformInterpolator.OnRep_ActorTransformCollection"));

	AEmbarkBlackBoardFastReplicatorBucketTransformInterpolator_OnRep_ActorTransformCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameInstance.SetUserEncryptionKey
// (Final, Native, Public)
// Parameters:
// struct FString                 UserIdString                   (Parm, ZeroConstructor)
// struct FString                 Base64Bytes                    (Parm, ZeroConstructor)

void UEmbarkGameInstance::SetUserEncryptionKey(const struct FString& UserIdString, const struct FString& Base64Bytes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameInstance.SetUserEncryptionKey"));

	UEmbarkGameInstance_SetUserEncryptionKey_Params params;
	params.UserIdString = UserIdString;
	params.Base64Bytes = Base64Bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameInstance.SetQuilkinRoutingToken
// (Final, Native, Public)
// Parameters:
// struct FString                 Base64Bytes                    (Parm, ZeroConstructor)

void UEmbarkGameInstance::SetQuilkinRoutingToken(const struct FString& Base64Bytes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameInstance.SetQuilkinRoutingToken"));

	UEmbarkGameInstance_SetQuilkinRoutingToken_Params params;
	params.Base64Bytes = Base64Bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameInstance.SetLocalEncryptionKey
// (Final, Native, Public)
// Parameters:
// struct FString                 Base64Bytes                    (Parm, ZeroConstructor)

void UEmbarkGameInstance::SetLocalEncryptionKey(const struct FString& Base64Bytes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameInstance.SetLocalEncryptionKey"));

	UEmbarkGameInstance_SetLocalEncryptionKey_Params params;
	params.Base64Bytes = Base64Bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameInstance.IsGameplayMap
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameInstance::IsGameplayMap()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameInstance.IsGameplayMap"));

	UEmbarkGameInstance_IsGameplayMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkGameInstance.BP_ReturnToMainMenu
// (Final, Native, Public, BlueprintCallable)

void UEmbarkGameInstance::BP_ReturnToMainMenu()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameInstance.BP_ReturnToMainMenu"));

	UEmbarkGameInstance_BP_ReturnToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveStartPlay
// (Event, Protected, BlueprintEvent)

void AEmbarkGameMode::ReceiveStartPlay()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveStartPlay"));

	AEmbarkGameMode_ReceiveStartPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceivePreRestartPlayer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkGameMode::ReceivePreRestartPlayer(class AController* NewController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceivePreRestartPlayer"));

	AEmbarkGameMode_ReceivePreRestartPlayer_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceivePreLogin
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 Options                        (Parm, ZeroConstructor)
// struct FString                 Address                        (Parm, ZeroConstructor)
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ErrorMessage                   (Parm, OutParm, ZeroConstructor)

void AEmbarkGameMode::ReceivePreLogin(const struct FString& Options, const struct FString& Address, const struct FUniqueNetIdRepl& UniqueId, struct FString* ErrorMessage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceivePreLogin"));

	AEmbarkGameMode_ReceivePreLogin_Params params;
	params.Options = Options;
	params.Address = Address;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceivePostInitializeComponents
// (Event, Protected, BlueprintEvent)

void AEmbarkGameMode::ReceivePostInitializeComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceivePostInitializeComponents"));

	AEmbarkGameMode_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveNotifyPendingConnectionLost
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        ConnectionUniqueId             (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkGameMode::ReceiveNotifyPendingConnectionLost(const struct FUniqueNetIdRepl& ConnectionUniqueId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveNotifyPendingConnectionLost"));

	AEmbarkGameMode_ReceiveNotifyPendingConnectionLost_Params params;
	params.ConnectionUniqueId = ConnectionUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveInitSeamlessTravelPlayer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkGameMode::ReceiveInitSeamlessTravelPlayer(class AController* NewController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveInitSeamlessTravelPlayer"));

	AEmbarkGameMode_ReceiveInitSeamlessTravelPlayer_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveInitPlayer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkGameMode::ReceiveInitPlayer(class AController* NewController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveInitPlayer"));

	AEmbarkGameMode_ReceiveInitPlayer_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchIsWaitingToStart
// (Event, Protected, BlueprintEvent)

void AEmbarkGameMode::ReceiveHandleMatchIsWaitingToStart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchIsWaitingToStart"));

	AEmbarkGameMode_ReceiveHandleMatchIsWaitingToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchHasStarted
// (Event, Protected, BlueprintEvent)

void AEmbarkGameMode::ReceiveHandleMatchHasStarted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchHasStarted"));

	AEmbarkGameMode_ReceiveHandleMatchHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchHasEnded
// (Event, Protected, BlueprintEvent)

void AEmbarkGameMode::ReceiveHandleMatchHasEnded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchHasEnded"));

	AEmbarkGameMode_ReceiveHandleMatchHasEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchAborted
// (Event, Protected, BlueprintEvent)

void AEmbarkGameMode::ReceiveHandleMatchAborted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchAborted"));

	AEmbarkGameMode_ReceiveHandleMatchAborted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleLeavingMap
// (Event, Protected, BlueprintEvent)

void AEmbarkGameMode::ReceiveHandleLeavingMap()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleLeavingMap"));

	AEmbarkGameMode_ReceiveHandleLeavingMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.ReceiveGetSeamlessTravelActorList
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bToTransition                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorList                      (Parm, OutParm, ZeroConstructor)

void AEmbarkGameMode::ReceiveGetSeamlessTravelActorList(bool bToTransition, TArray<class AActor*>* ActorList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.ReceiveGetSeamlessTravelActorList"));

	AEmbarkGameMode_ReceiveGetSeamlessTravelActorList_Params params;
	params.bToTransition = bToTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function EmbarkGameplay.EmbarkGameMode.PreLogout
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AController*             Exiting                        (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkGameMode::PreLogout(class AController* Exiting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.PreLogout"));

	AEmbarkGameMode_PreLogout_Params params;
	params.Exiting = Exiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameMode.KickPlayer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       KickedPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   KickReason                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkGameMode::KickPlayer(class APlayerController* KickedPlayer, const struct FText& KickReason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.KickPlayer"));

	AEmbarkGameMode_KickPlayer_Params params;
	params.KickedPlayer = KickedPlayer;
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkGameMode.GetInactivePlayers
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class APlayerState*>    OutPlayerStates                (Parm, OutParm, ZeroConstructor)

void AEmbarkGameMode::GetInactivePlayers(TArray<class APlayerState*>* OutPlayerStates)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameMode.GetInactivePlayers"));

	AEmbarkGameMode_GetInactivePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerStates != nullptr)
		*OutPlayerStates = params.OutPlayerStates;
}


// DelegateFunction EmbarkGameplay.EmbarkGameStateBase.OnSquadsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void AEmbarkGameStateBase::OnSquadsChanged__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkGameplay.EmbarkGameStateBase.OnSquadsChanged__DelegateSignature"));

	AEmbarkGameStateBase_OnSquadsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_Squads
// (Final, Native, Private)

void AEmbarkGameStateBase::OnRep_Squads()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameStateBase.OnRep_Squads"));

	AEmbarkGameStateBase_OnRep_Squads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_ReplicatedRealtimeWorldTimeSeconds
// (Final, Native, Private)

void AEmbarkGameStateBase::OnRep_ReplicatedRealtimeWorldTimeSeconds()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameStateBase.OnRep_ReplicatedRealtimeWorldTimeSeconds"));

	AEmbarkGameStateBase_OnRep_ReplicatedRealtimeWorldTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_OnlineTweakablesContainer
// (Final, Native, Private)

void AEmbarkGameStateBase::OnRep_OnlineTweakablesContainer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameStateBase.OnRep_OnlineTweakablesContainer"));

	AEmbarkGameStateBase_OnRep_OnlineTweakablesContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_MatchesId
// (Final, Native, Private, Const)

void AEmbarkGameStateBase::OnRep_MatchesId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameStateBase.OnRep_MatchesId"));

	AEmbarkGameStateBase_OnRep_MatchesId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameStateBase.OnOnlineTweakablesRegistered
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FOnlineTweakablesContainer InOnlineTweakablesContainer    (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkGameStateBase::OnOnlineTweakablesRegistered(const struct FOnlineTweakablesContainer& InOnlineTweakablesContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameStateBase.OnOnlineTweakablesRegistered"));

	AEmbarkGameStateBase_OnOnlineTweakablesRegistered_Params params;
	params.InOnlineTweakablesContainer = InOnlineTweakablesContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameStateBase.OnMod_Squads
// (Final, Native, Private)

void AEmbarkGameStateBase::OnMod_Squads()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameStateBase.OnMod_Squads"));

	AEmbarkGameStateBase_OnMod_Squads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction EmbarkGameplay.EmbarkGameStateBase.OnMatchIdChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void AEmbarkGameStateBase::OnMatchIdChanged__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkGameplay.EmbarkGameStateBase.OnMatchIdChanged__DelegateSignature"));

	AEmbarkGameStateBase_OnMatchIdChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkGameStateBase.GetRealtimeServerWorldTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkGameStateBase::GetRealtimeServerWorldTimeSeconds()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkGameStateBase.GetRealtimeServerWorldTimeSeconds"));

	AEmbarkGameStateBase_GetRealtimeServerWorldTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkItemSubsystem.OnAssetsReady
// (Event, Public, BlueprintEvent)

void UEmbarkItemSubsystem::OnAssetsReady()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkItemSubsystem.OnAssetsReady"));

	UEmbarkItemSubsystem_OnAssetsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkItemSubsystem.OnAssetsChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FAssetData              AssetData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkItemSubsystem::OnAssetsChanged(const struct FAssetData& AssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkItemSubsystem.OnAssetsChanged"));

	UEmbarkItemSubsystem_OnAssetsChanged_Params params;
	params.AssetData = AssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.LevelInstanceSubsystemMixinLibrary.GetLevelInstanceLevel
// (Final, Native, Static, Public)
// Parameters:
// class ULevelInstanceSubsystem* LevelInstanceSubsystem         (Parm, ZeroConstructor, IsPlainOldData)
// class ALevelInstance*          LevelInstanceActor             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevel*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevel* ULevelInstanceSubsystemMixinLibrary::STATIC_GetLevelInstanceLevel(class ULevelInstanceSubsystem* LevelInstanceSubsystem, class ALevelInstance* LevelInstanceActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.LevelInstanceSubsystemMixinLibrary.GetLevelInstanceLevel"));

	ULevelInstanceSubsystemMixinLibrary_GetLevelInstanceLevel_Params params;
	params.LevelInstanceSubsystem = LevelInstanceSubsystem;
	params.LevelInstanceActor = LevelInstanceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnShouldCreateSubsystem
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkLocalPlayerSubsystem::OnShouldCreateSubsystem(class UObject* Outer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnShouldCreateSubsystem"));

	UEmbarkLocalPlayerSubsystem_OnShouldCreateSubsystem_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnInitialized
// (Event, Public, BlueprintEvent)

void UEmbarkLocalPlayerSubsystem::OnInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnInitialized"));

	UEmbarkLocalPlayerSubsystem_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnDeinitialized
// (Event, Public, BlueprintEvent)

void UEmbarkLocalPlayerSubsystem::OnDeinitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnDeinitialized"));

	UEmbarkLocalPlayerSubsystem_OnDeinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.GetDependencies
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<class UClass*>          Dependencies                   (Parm, OutParm, ZeroConstructor)

void UEmbarkLocalPlayerSubsystem::GetDependencies(TArray<class UClass*>* Dependencies)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.GetDependencies"));

	UEmbarkLocalPlayerSubsystem_GetDependencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dependencies != nullptr)
		*Dependencies = params.Dependencies;
}


// Function EmbarkGameplay.EmbarkNiagaraDebugComponent.DisplayDebugDataFor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkNiagaraDebugComponent::DisplayDebugDataFor(class UNiagaraComponent* Comp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkNiagaraDebugComponent.DisplayDebugDataFor"));

	UEmbarkNiagaraDebugComponent_DisplayDebugDataFor_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.TeardownOptimizedTick
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (Parm, OutParm)
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOptimizedTickMixinLibrary::STATIC_TeardownOptimizedTick(class UObject* WorldContextObject, struct FEmbarkOptimizedTick* OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.TeardownOptimizedTick"));

	UEmbarkOptimizedTickMixinLibrary_TeardownOptimizedTick_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimizedTick != nullptr)
		*OptimizedTick = params.OptimizedTick;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.SetupOptimizedTick
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (Parm, OutParm)
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 TickObject                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOptimizedTickMixinLibrary::STATIC_SetupOptimizedTick(class UObject* WorldContextObject, class UObject* TickObject, const struct FName& FunctionName, struct FEmbarkOptimizedTick* OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.SetupOptimizedTick"));

	UEmbarkOptimizedTickMixinLibrary_SetupOptimizedTick_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TickObject = TickObject;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimizedTick != nullptr)
		*OptimizedTick = params.OptimizedTick;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.SetTickEnabled
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (Parm, OutParm)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOptimizedTickMixinLibrary::STATIC_SetTickEnabled(bool bValue, struct FEmbarkOptimizedTick* OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.SetTickEnabled"));

	UEmbarkOptimizedTickMixinLibrary_SetTickEnabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimizedTick != nullptr)
		*OptimizedTick = params.OptimizedTick;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.HasTickOptimizedObject
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptimizedTickMixinLibrary::STATIC_HasTickOptimizedObject(const struct FEmbarkOptimizedTick& OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.HasTickOptimizedObject"));

	UEmbarkOptimizedTickMixinLibrary_HasTickOptimizedObject_Params params;
	params.OptimizedTick = OptimizedTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddTickPrerequisiteComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (Parm, OutParm)
// class UActorComponent*         PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkOptimizedTickMixinLibrary::STATIC_AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent, struct FEmbarkOptimizedTick* OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddTickPrerequisiteComponent"));

	UEmbarkOptimizedTickMixinLibrary_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimizedTick != nullptr)
		*OptimizedTick = params.OptimizedTick;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddTickPrerequisiteActor
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (Parm, OutParm)
// class AActor*                  PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOptimizedTickMixinLibrary::STATIC_AddTickPrerequisiteActor(class AActor* PrerequisiteActor, struct FEmbarkOptimizedTick* OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddTickPrerequisiteActor"));

	UEmbarkOptimizedTickMixinLibrary_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimizedTick != nullptr)
		*OptimizedTick = params.OptimizedTick;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddAsTickPrerequisiteForComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (Parm, OutParm)
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkOptimizedTickMixinLibrary::STATIC_AddAsTickPrerequisiteForComponent(class UActorComponent* Component, struct FEmbarkOptimizedTick* OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddAsTickPrerequisiteForComponent"));

	UEmbarkOptimizedTickMixinLibrary_AddAsTickPrerequisiteForComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimizedTick != nullptr)
		*OptimizedTick = params.OptimizedTick;
}


// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddAsTickPrerequisiteForActor
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkOptimizedTick    OptimizedTick                  (Parm, OutParm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOptimizedTickMixinLibrary::STATIC_AddAsTickPrerequisiteForActor(class AActor* Actor, struct FEmbarkOptimizedTick* OptimizedTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddAsTickPrerequisiteForActor"));

	UEmbarkOptimizedTickMixinLibrary_AddAsTickPrerequisiteForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimizedTick != nullptr)
		*OptimizedTick = params.OptimizedTick;
}


// Function EmbarkGameplay.ParallelUpdateBaseClass.InitComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ActorComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ETickingGroup>     TickGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsSyncPre                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsPreTickGameThread       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsTickAnyThread           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsPostTickGameThread      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsSyncPost                (Parm, ZeroConstructor, IsPlainOldData)

void UParallelUpdateBaseClass::InitComponent(class UActorComponent* ActorComp, TEnumAsByte<ETickingGroup> TickGroup, bool InNeedsSyncPre, bool InNeedsPreTickGameThread, bool InNeedsTickAnyThread, bool InNeedsPostTickGameThread, bool InNeedsSyncPost)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ParallelUpdateBaseClass.InitComponent"));

	UParallelUpdateBaseClass_InitComponent_Params params;
	params.ActorComp = ActorComp;
	params.TickGroup = TickGroup;
	params.InNeedsSyncPre = InNeedsSyncPre;
	params.InNeedsPreTickGameThread = InNeedsPreTickGameThread;
	params.InNeedsTickAnyThread = InNeedsTickAnyThread;
	params.InNeedsPostTickGameThread = InNeedsPostTickGameThread;
	params.InNeedsSyncPost = InNeedsSyncPost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.ParallelUpdateBaseClass.InitActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETickingGroup>     TickGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsSyncPre                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsPreTickGameThread       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsTickAnyThread           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsPostTickGameThread      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNeedsSyncPost                (Parm, ZeroConstructor, IsPlainOldData)

void UParallelUpdateBaseClass::InitActor(class AActor* Actor, TEnumAsByte<ETickingGroup> TickGroup, bool InNeedsSyncPre, bool InNeedsPreTickGameThread, bool InNeedsTickAnyThread, bool InNeedsPostTickGameThread, bool InNeedsSyncPost)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ParallelUpdateBaseClass.InitActor"));

	UParallelUpdateBaseClass_InitActor_Params params;
	params.Actor = Actor;
	params.TickGroup = TickGroup;
	params.InNeedsSyncPre = InNeedsSyncPre;
	params.InNeedsPreTickGameThread = InNeedsPreTickGameThread;
	params.InNeedsTickAnyThread = InNeedsTickAnyThread;
	params.InNeedsPostTickGameThread = InNeedsPostTickGameThread;
	params.InNeedsSyncPost = InNeedsSyncPost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.ParallelUpdateBaseClass.Deinit
// (Final, Native, Public, BlueprintCallable)

void UParallelUpdateBaseClass::Deinit()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.ParallelUpdateBaseClass.Deinit"));

	UParallelUpdateBaseClass_Deinit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPawn.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EEmbarkTeamId       NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkPawn::SetTeam(enum class EEmbarkTeamId NewTeam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.SetTeam"));

	AEmbarkPawn_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPawn.RegisterClassToBlackBoard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Clazz                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* AEmbarkPawn::RegisterClassToBlackBoard(class UClass* Clazz)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.RegisterClassToBlackBoard"));

	AEmbarkPawn_RegisterClassToBlackBoard_Params params;
	params.Clazz = Clazz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPawn.ReceiveSetupPlayerInputComponent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UInputComponent*         PlayerInputComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkPawn::ReceiveSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.ReceiveSetupPlayerInputComponent"));

	AEmbarkPawn_ReceiveSetupPlayerInputComponent_Params params;
	params.PlayerInputComponent = PlayerInputComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPawn.ReceiveRestart
// (Event, Protected, BlueprintEvent)

void AEmbarkPawn::ReceiveRestart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.ReceiveRestart"));

	AEmbarkPawn_ReceiveRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPawn.ReceivePostInitializeComponents
// (Event, Protected, BlueprintEvent)

void AEmbarkPawn::ReceivePostInitializeComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.ReceivePostInitializeComponents"));

	AEmbarkPawn_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkPawn.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEmbarkTeamId       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkTeamId AEmbarkPawn::GetTeam()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.GetTeam"));

	AEmbarkPawn_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPawn.GetFirstStateOfTypeFromBlackBoard
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Clazz                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* AEmbarkPawn::GetFirstStateOfTypeFromBlackBoard(class UClass* Clazz)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.GetFirstStateOfTypeFromBlackBoard"));

	AEmbarkPawn_GetFirstStateOfTypeFromBlackBoard_Params params;
	params.Clazz = Clazz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkPawn.EditFirstStateOfTypeFromBlackBoard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Clazz                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* AEmbarkPawn::EditFirstStateOfTypeFromBlackBoard(class UClass* Clazz)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkPawn.EditFirstStateOfTypeFromBlackBoard"));

	AEmbarkPawn_EditFirstStateOfTypeFromBlackBoard_Params params;
	params.Clazz = Clazz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkProxyTransform   ProxyTransform                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkProxyTransformMixinLibrary::STATIC_GetRelativeTransform(const struct FEmbarkProxyTransform& ProxyTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeTransform"));

	UEmbarkProxyTransformMixinLibrary_GetRelativeTransform_Params params;
	params.ProxyTransform = ProxyTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeRotationQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkProxyTransform   ProxyTransform                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UEmbarkProxyTransformMixinLibrary::STATIC_GetRelativeRotationQuat(const struct FEmbarkProxyTransform& ProxyTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeRotationQuat"));

	UEmbarkProxyTransformMixinLibrary_GetRelativeRotationQuat_Params params;
	params.ProxyTransform = ProxyTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkProxyTransform   ProxyTransform                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UEmbarkProxyTransformMixinLibrary::STATIC_GetRelativeRotation(const struct FEmbarkProxyTransform& ProxyTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeRotation"));

	UEmbarkProxyTransformMixinLibrary_GetRelativeRotation_Params params;
	params.ProxyTransform = ProxyTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkProxyTransform   ProxyTransform                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkProxyTransformMixinLibrary::STATIC_GetRelativeLocation(const struct FEmbarkProxyTransform& ProxyTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeLocation"));

	UEmbarkProxyTransformMixinLibrary_GetRelativeLocation_Params params;
	params.ProxyTransform = ProxyTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetComponentName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkProxyTransform   ProxyTransform                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkProxyTransformMixinLibrary::STATIC_GetComponentName(const struct FEmbarkProxyTransform& ProxyTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetComponentName"));

	UEmbarkProxyTransformMixinLibrary_GetComponentName_Params params;
	params.ProxyTransform = ProxyTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetComponentDisplayName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkProxyTransform   ProxyTransform                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkProxyTransformMixinLibrary::STATIC_GetComponentDisplayName(const struct FEmbarkProxyTransform& ProxyTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetComponentDisplayName"));

	UEmbarkProxyTransformMixinLibrary_GetComponentDisplayName_Params params;
	params.ProxyTransform = ProxyTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkScreenFadeProxy.FadeScreenToColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkScreenFadeProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkScreenFadeProxy* UEmbarkScreenFadeProxy::STATIC_FadeScreenToColor(class UObject* WorldContextObject, const struct FLinearColor& Color, float Duration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkScreenFadeProxy.FadeScreenToColor"));

	UEmbarkScreenFadeProxy_FadeScreenToColor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkScreenFadeProxy.FadeScreenFromAndToColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FromColor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ToColor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkScreenFadeProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkScreenFadeProxy* UEmbarkScreenFadeProxy::STATIC_FadeScreenFromAndToColor(class UObject* WorldContextObject, const struct FLinearColor& FromColor, const struct FLinearColor& ToColor, float Duration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkScreenFadeProxy.FadeScreenFromAndToColor"));

	UEmbarkScreenFadeProxy_FadeScreenFromAndToColor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FromColor = FromColor;
	params.ToColor = ToColor;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkScreenFadeProxy.ClearScreenFade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkScreenFadeProxy::STATIC_ClearScreenFade(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkScreenFadeProxy.ClearScreenFade"));

	UEmbarkScreenFadeProxy_ClearScreenFade_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkNetScriptStruct_Test.Multicast_TestRPCWithScriptStruct
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FEmbarkScriptStruct     ScriptStruct                   (ConstParm, Parm, ReferenceParm)

void AEmbarkNetScriptStruct_Test::Multicast_TestRPCWithScriptStruct(const struct FEmbarkScriptStruct& ScriptStruct)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkNetScriptStruct_Test.Multicast_TestRPCWithScriptStruct"));

	AEmbarkNetScriptStruct_Test_Multicast_TestRPCWithScriptStruct_Params params;
	params.ScriptStruct = ScriptStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkNetScriptStruct_Test.Multicast_ScriptStruct
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FEmbarkScriptStruct     ScriptStruct                   (ConstParm, Parm, ReferenceParm)

void AEmbarkNetScriptStruct_Test::Multicast_ScriptStruct(const struct FEmbarkScriptStruct& ScriptStruct)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkNetScriptStruct_Test.Multicast_ScriptStruct"));

	AEmbarkNetScriptStruct_Test_Multicast_ScriptStruct_Params params;
	params.ScriptStruct = ScriptStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkStructObject_Test.StructOut
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// int                            __ANY_STRUCT_REF               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmbarkStructObject_Test::StructOut(int* __ANY_STRUCT_REF)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkStructObject_Test.StructOut"));

	UEmbarkStructObject_Test_StructOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (__ANY_STRUCT_REF != nullptr)
		*__ANY_STRUCT_REF = params.__ANY_STRUCT_REF;
}


// Function EmbarkGameplay.EmbarkStructObject_Test.StructInit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            __ANY_STRUCT_REF               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmbarkStructObject_Test::StructInit(int* __ANY_STRUCT_REF)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkStructObject_Test.StructInit"));

	UEmbarkStructObject_Test_StructInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (__ANY_STRUCT_REF != nullptr)
		*__ANY_STRUCT_REF = params.__ANY_STRUCT_REF;
}


// Function EmbarkGameplay.EmbarkStructObject_Test.ProcessStructOut
// (Final, Native, Public)

void UEmbarkStructObject_Test::ProcessStructOut()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkStructObject_Test.ProcessStructOut"));

	UEmbarkStructObject_Test_ProcessStructOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkStructObject_Test.Init
// (Final, Native, Public)

void UEmbarkStructObject_Test::Init()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkStructObject_Test.Init"));

	UEmbarkStructObject_Test_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SuspendNewStyleUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSkeletalMeshComponent::SuspendNewStyleUpdate(bool bSuspend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SuspendNewStyleUpdate"));

	UEmbarkSkeletalMeshComponent_SuspendNewStyleUpdate_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SetRenderUpdateEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSkeletalMeshComponent::SetRenderUpdateEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SetRenderUpdateEnabled"));

	UEmbarkSkeletalMeshComponent_SetRenderUpdateEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SetAnimStateUpdaterComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEmbarkAnimStateUpdaterComponent* InAnimStateUpdaterComponent    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkSkeletalMeshComponent::SetAnimStateUpdaterComponent(class UEmbarkAnimStateUpdaterComponent* InAnimStateUpdaterComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SetAnimStateUpdaterComponent"));

	UEmbarkSkeletalMeshComponent_SetAnimStateUpdaterComponent_Params params;
	params.InAnimStateUpdaterComponent = InAnimStateUpdaterComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.RegisterParentUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEmbarkSkeletalMeshComponent* Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkSkeletalMeshComponent::RegisterParentUpdate(class UEmbarkSkeletalMeshComponent* Comp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSkeletalMeshComponent.RegisterParentUpdate"));

	UEmbarkSkeletalMeshComponent_RegisterParentUpdate_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.RefreshClothingRelationships
// (Final, Native, Public)

void UEmbarkSkeletalMeshComponent::RefreshClothingRelationships()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSkeletalMeshComponent.RefreshClothingRelationships"));

	UEmbarkSkeletalMeshComponent_RefreshClothingRelationships_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.CreateNewComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   UniqueMeshName                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldAutoRegisterWithBudgetAllocator (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkSkeletalMeshComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEmbarkSkeletalMeshComponent* UEmbarkSkeletalMeshComponent::STATIC_CreateNewComponent(class AActor* Owner, const struct FName& UniqueMeshName, bool ShouldAutoRegisterWithBudgetAllocator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSkeletalMeshComponent.CreateNewComponent"));

	UEmbarkSkeletalMeshComponent_CreateNewComponent_Params params;
	params.Owner = Owner;
	params.UniqueMeshName = UniqueMeshName;
	params.ShouldAutoRegisterWithBudgetAllocator = ShouldAutoRegisterWithBudgetAllocator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkSMInstance.UpdateStateFromStateData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkSMActiveStateData NewActiveStateData             (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkSMInstance::UpdateStateFromStateData(const struct FEmbarkSMActiveStateData& NewActiveStateData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMInstance.UpdateStateFromStateData"));

	UEmbarkSMInstance_UpdateStateFromStateData_Params params;
	params.NewActiveStateData = NewActiveStateData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMInstance.GetActiveStateData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkSMActiveStateData ActiveStateData                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkSMInstance::GetActiveStateData(struct FEmbarkSMActiveStateData* ActiveStateData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMInstance.GetActiveStateData"));

	UEmbarkSMInstance_GetActiveStateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveStateData != nullptr)
		*ActiveStateData = params.ActiveStateData;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSMStateMachineComponent::Update(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Update"));

	UEmbarkSMStateMachineComponent_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UEmbarkSMStateMachineComponent::Stop()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Stop"));

	UEmbarkSMStateMachineComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Start
// (Final, Native, Public, BlueprintCallable)

void UEmbarkSMStateMachineComponent::Start()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Start"));

	UEmbarkSMStateMachineComponent_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Shutdown
// (Final, Native, Public, BlueprintCallable)

void UEmbarkSMStateMachineComponent::Shutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Shutdown"));

	UEmbarkSMStateMachineComponent_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.OnRep_ActiveStateData
// (Final, Native, Protected)

void UEmbarkSMStateMachineComponent::OnRep_ActiveStateData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.OnRep_ActiveStateData"));

	UEmbarkSMStateMachineComponent_OnRep_ActiveStateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineUpdated
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             SMInstance                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSMStateMachineComponent::Internal_OnStateMachineUpdated(class USMInstance* SMInstance, float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineUpdated"));

	UEmbarkSMStateMachineComponent_Internal_OnStateMachineUpdated_Params params;
	params.SMInstance = SMInstance;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineTransitionTaken
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             SMInstance                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSMTransitionInfo       Transition                     (Parm)

void UEmbarkSMStateMachineComponent::Internal_OnStateMachineTransitionTaken(class USMInstance* SMInstance, const struct FSMTransitionInfo& Transition)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineTransitionTaken"));

	UEmbarkSMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Params params;
	params.SMInstance = SMInstance;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStopped
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             SMInstance                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSMStateMachineComponent::Internal_OnStateMachineStopped(class USMInstance* SMInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStopped"));

	UEmbarkSMStateMachineComponent_Internal_OnStateMachineStopped_Params params;
	params.SMInstance = SMInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStateChanged
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             SMInstance                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSMStateInfo            ToState                        (Parm)
// struct FSMStateInfo            FromState                      (Parm)

void UEmbarkSMStateMachineComponent::Internal_OnStateMachineStateChanged(class USMInstance* SMInstance, const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStateChanged"));

	UEmbarkSMStateMachineComponent_Internal_OnStateMachineStateChanged_Params params;
	params.SMInstance = SMInstance;
	params.ToState = ToState;
	params.FromState = FromState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStarted
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             SMInstance                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSMStateMachineComponent::Internal_OnStateMachineStarted(class USMInstance* SMInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStarted"));

	UEmbarkSMStateMachineComponent_Internal_OnStateMachineStarted_Params params;
	params.SMInstance = SMInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineInitializedEvent
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSMStateMachineComponent::Internal_OnStateMachineInitializedEvent(class USMInstance* Instance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineInitializedEvent"));

	UEmbarkSMStateMachineComponent_Internal_OnStateMachineInitializedEvent_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSpringArmComponent.SetIgnoreCollisionActors
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          InActors                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkSpringArmComponent::SetIgnoreCollisionActors(TArray<class AActor*> InActors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSpringArmComponent.SetIgnoreCollisionActors"));

	UEmbarkSpringArmComponent_SetIgnoreCollisionActors_Params params;
	params.InActors = InActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSpringArmComponent.RemoveActorFromIgnoreCollisionActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSpringArmComponent::RemoveActorFromIgnoreCollisionActors(class AActor* InActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSpringArmComponent.RemoveActorFromIgnoreCollisionActors"));

	UEmbarkSpringArmComponent_RemoveActorFromIgnoreCollisionActors_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSpringArmComponent.GetIgnoreCollisionActors
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)

void UEmbarkSpringArmComponent::GetIgnoreCollisionActors(TArray<class AActor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSpringArmComponent.GetIgnoreCollisionActors"));

	UEmbarkSpringArmComponent_GetIgnoreCollisionActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function EmbarkGameplay.EmbarkSquadMember.OnRep_UniqueId
// (Final, Native, Private)

void UEmbarkSquadMember::OnRep_UniqueId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSquadMember.OnRep_UniqueId"));

	UEmbarkSquadMember_OnRep_UniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSquadMember.OnRep_PlayerState
// (Final, Native, Private)

void UEmbarkSquadMember::OnRep_PlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSquadMember.OnRep_PlayerState"));

	UEmbarkSquadMember_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSquad.OnRep_Title
// (Final, Native, Private)

void AEmbarkSquad::OnRep_Title()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSquad.OnRep_Title"));

	AEmbarkSquad_OnRep_Title_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSquad.OnRep_SquadId
// (Final, Native, Private)

void AEmbarkSquad::OnRep_SquadId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSquad.OnRep_SquadId"));

	AEmbarkSquad_OnRep_SquadId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSquad.OnRep_Members
// (Final, Native, Private)

void AEmbarkSquad::OnRep_Members()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSquad.OnRep_Members"));

	AEmbarkSquad_OnRep_Members_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkSquad.OnMod_Members
// (Final, Native, Private)

void AEmbarkSquad::OnMod_Members()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkSquad.OnMod_Members"));

	AEmbarkSquad_OnMod_Members_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.SquadStatics.TryParseSquadJson
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Json                           (Parm, ZeroConstructor)
// TArray<class AEmbarkSquad*>    OutSquads                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USquadStatics::STATIC_TryParseSquadJson(class UObject* WorldContextObject, const struct FString& Json, TArray<class AEmbarkSquad*>* OutSquads)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SquadStatics.TryParseSquadJson"));

	USquadStatics_TryParseSquadJson_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Json = Json;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSquads != nullptr)
		*OutSquads = params.OutSquads;

	return params.ReturnValue;
}


// Function EmbarkGameplay.SquadStatics.ParseSquadJson
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Json                           (Parm, ZeroConstructor)
// TArray<class AEmbarkSquad*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AEmbarkSquad*> USquadStatics::STATIC_ParseSquadJson(class UObject* WorldContextObject, const struct FString& Json)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.SquadStatics.ParseSquadJson"));

	USquadStatics_ParseSquadJson_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Json = Json;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkStaticMeshComponent.SetRenderUpdateEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkStaticMeshComponent::SetRenderUpdateEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkStaticMeshComponent.SetRenderUpdateEnabled"));

	UEmbarkStaticMeshComponent_SetRenderUpdateEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetStreamingDistance
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UWorldComposition*       WorldComposition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PackageName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorldCompositionMixinLibrary::STATIC_GetStreamingDistance(class UWorldComposition* WorldComposition, const struct FName& PackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldCompositionMixinLibrary.GetStreamingDistance"));

	UWorldCompositionMixinLibrary_GetStreamingDistance_Params params;
	params.WorldComposition = WorldComposition;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UWorldComposition*       WorldComposition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PackageName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntVector UWorldCompositionMixinLibrary::STATIC_GetPosition(class UWorldComposition* WorldComposition, const struct FName& PackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldCompositionMixinLibrary.GetPosition"));

	UWorldCompositionMixinLibrary_GetPosition_Params params;
	params.WorldComposition = WorldComposition;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetParentTilePackageName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UWorldComposition*       WorldComposition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PackageName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UWorldCompositionMixinLibrary::STATIC_GetParentTilePackageName(class UWorldComposition* WorldComposition, const struct FName& PackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldCompositionMixinLibrary.GetParentTilePackageName"));

	UWorldCompositionMixinLibrary_GetParentTilePackageName_Params params;
	params.WorldComposition = WorldComposition;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetLayerName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UWorldComposition*       WorldComposition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PackageName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UWorldCompositionMixinLibrary::STATIC_GetLayerName(class UWorldComposition* WorldComposition, const struct FName& PackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldCompositionMixinLibrary.GetLayerName"));

	UWorldCompositionMixinLibrary_GetLayerName_Params params;
	params.WorldComposition = WorldComposition;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetDistanceStreamingEnabled
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UWorldComposition*       WorldComposition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PackageName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorldCompositionMixinLibrary::STATIC_GetDistanceStreamingEnabled(class UWorldComposition* WorldComposition, const struct FName& PackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldCompositionMixinLibrary.GetDistanceStreamingEnabled"));

	UWorldCompositionMixinLibrary_GetDistanceStreamingEnabled_Params params;
	params.WorldComposition = WorldComposition;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetAbsolutePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UWorldComposition*       WorldComposition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PackageName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntVector UWorldCompositionMixinLibrary::STATIC_GetAbsolutePosition(class UWorldComposition* WorldComposition, const struct FName& PackageName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.WorldCompositionMixinLibrary.GetAbsolutePosition"));

	UWorldCompositionMixinLibrary_GetAbsolutePosition_Params params;
	params.WorldComposition = WorldComposition;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGameplay.EmbarkWorldSubsystem.OnInitialized
// (Event, Public, BlueprintEvent)

void UEmbarkWorldSubsystem::OnInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkWorldSubsystem.OnInitialized"));

	UEmbarkWorldSubsystem_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkWorldSubsystem.OnDeinitialized
// (Event, Public, BlueprintEvent)

void UEmbarkWorldSubsystem::OnDeinitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkWorldSubsystem.OnDeinitialized"));

	UEmbarkWorldSubsystem_OnDeinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTickableWorldSubsystem::OnTick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnTick"));

	UEmbarkTickableWorldSubsystem_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnInitialized
// (Event, Public, BlueprintEvent)

void UEmbarkTickableWorldSubsystem::OnInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnInitialized"));

	UEmbarkTickableWorldSubsystem_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnDeinitialized
// (Event, Public, BlueprintEvent)

void UEmbarkTickableWorldSubsystem::OnDeinitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnDeinitialized"));

	UEmbarkTickableWorldSubsystem_OnDeinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.GameStateBaseMixinLibrary.RemovePlayerState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGameStateBase*          GameStateBase                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UGameStateBaseMixinLibrary::STATIC_RemovePlayerState(class AGameStateBase* GameStateBase, class APlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.GameStateBaseMixinLibrary.RemovePlayerState"));

	UGameStateBaseMixinLibrary_RemovePlayerState_Params params;
	params.GameStateBase = GameStateBase;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.GameStateBaseMixinLibrary.AddPlayerState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGameStateBase*          GameStateBase                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UGameStateBaseMixinLibrary::STATIC_AddPlayerState(class AGameStateBase* GameStateBase, class APlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.GameStateBaseMixinLibrary.AddPlayerState"));

	UGameStateBaseMixinLibrary_AddPlayerState_Params params;
	params.GameStateBase = GameStateBase;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGameplay.LevelSequenceLibrary.CreateLevelSequencePlayerWithClass
// (Final, Native, Static, Private, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          InLevelSequence                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class UClass*                  LevelSequenceActorType         (Parm, ZeroConstructor, IsPlainOldData)
// class ALevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* ULevelSequenceLibrary::STATIC_CreateLevelSequencePlayerWithClass(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class UClass* LevelSequenceActorType, class ALevelSequenceActor** OutActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGameplay.LevelSequenceLibrary.CreateLevelSequencePlayerWithClass"));

	ULevelSequenceLibrary_CreateLevelSequencePlayerWithClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InLevelSequence = InLevelSequence;
	params.Settings = Settings;
	params.LevelSequenceActorType = LevelSequenceActorType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
