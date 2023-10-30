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

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabricatorAssetInterface* InActivePrefabAsset            (Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemBuildTool::SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab"));

	UConstructionSystemBuildTool_SetActivePrefab_Params params;
	params.InActivePrefabAsset = InActivePrefabAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
// (Final, Native, Private)
// Parameters:
// float                          NumSteps                       (Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemBuildTool::HandleInput_RotateCursorStep(float NumSteps)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep"));

	UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Params params;
	params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
// (Final, Native, Private)

void UConstructionSystemBuildTool::HandleInput_CursorMovePrev()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev"));

	UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
// (Final, Native, Private)

void UConstructionSystemBuildTool::HandleInput_CursorMoveNext()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext"));

	UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
// (Final, Native, Private)

void UConstructionSystemBuildTool::HandleInput_ConstructAtCursor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor"));

	UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
// (Final, Native, Public, BlueprintCallable)

void UConstructionSystemComponent::ToggleConstructionSystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem"));

	UConstructionSystemComponent_ToggleConstructionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
// (Final, Native, Public, BlueprintCallable)

void UConstructionSystemComponent::ShowBuildMenu()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu"));

	UConstructionSystemComponent_ShowBuildMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EConstructionSystemToolType InToolType                     (Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemComponent::SetActiveTool(enum class EConstructionSystemToolType InToolType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool"));

	UConstructionSystemComponent_SetActiveTool_Params params;
	params.InToolType = InToolType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
// (Final, Native, Public, BlueprintCallable)

void UConstructionSystemComponent::HideBuildMenu()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu"));

	UConstructionSystemComponent_HideBuildMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EConstructionSystemToolType InToolType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UConstructionSystemTool* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UConstructionSystemTool* UConstructionSystemComponent::GetTool(enum class EConstructionSystemToolType InToolType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool"));

	UConstructionSystemComponent_GetTool_Params params;
	params.InToolType = InToolType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EConstructionSystemToolType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EConstructionSystemToolType UConstructionSystemComponent::GetActiveToolType()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType"));

	UConstructionSystemComponent_GetActiveToolType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UConstructionSystemTool* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UConstructionSystemTool* UConstructionSystemComponent::GetActiveTool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool"));

	UConstructionSystemComponent_GetActiveTool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EConstructionSystemToolType InToolType                     (Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemComponent::EnableConstructionSystem(enum class EConstructionSystemToolType InToolType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem"));

	UConstructionSystemComponent_EnableConstructionSystem_Params params;
	params.InToolType = InToolType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
// (Final, Native, Public, BlueprintCallable)

void UConstructionSystemComponent::DisableConstructionSystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem"));

	UConstructionSystemComponent_DisableConstructionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
// (Final, Native, Protected)

void UConstructionSystemRemoveTool::HandleInput_RemoveAtCursor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor"));

	UConstructionSystemRemoveTool_HandleInput_RemoveAtCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SaveSlotName                   (Parm, ZeroConstructor)
// int                            UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSavePlayerState               (Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemSaveSystem::STATIC_SaveConstructionSystemLevel(class UObject* WorldContextObject, const struct FString& SaveSlotName, int UserIndex, bool bSavePlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel"));

	UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SaveSlotName = SaveSlotName;
	params.UserIndex = UserIndex;
	params.bSavePlayerState = bSavePlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SaveSlotName                   (Parm, ZeroConstructor)
// int                            UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemSaveSystem::STATIC_LoadConstructionSystemLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& SaveSlotName, int UserIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel"));

	UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.bAbsolute = bAbsolute;
	params.SaveSlotName = SaveSlotName;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemSaveSystem::STATIC_HandleConstructionSystemLevelLoad(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad"));

	UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConstructionSystemUIAsset* UIAsset                        (Parm, ZeroConstructor, IsPlainOldData)

void UConstructionSystemBuildUI::SetUIAsset(class UConstructionSystemUIAsset* UIAsset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset"));

	UConstructionSystemBuildUI_SetUIAsset_Params params;
	params.UIAsset = UIAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConstructionSystemComponent* ConstructionSystem             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConstructionSystemBuildUI::SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem"));

	UConstructionSystemBuildUI_SetConstructionSystem_Params params;
	params.ConstructionSystem = ConstructionSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
