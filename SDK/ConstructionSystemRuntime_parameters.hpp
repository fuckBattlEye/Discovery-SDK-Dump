#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
struct UConstructionSystemBuildTool_SetActivePrefab_Params
{
	class UPrefabricatorAssetInterface*                InActivePrefabAsset;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
struct UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Params
{
	float                                              NumSteps;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
struct UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
struct UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
struct UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
struct UConstructionSystemComponent_ToggleConstructionSystem_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
struct UConstructionSystemComponent_ShowBuildMenu_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
struct UConstructionSystemComponent_SetActiveTool_Params
{
	enum class EConstructionSystemToolType             InToolType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
struct UConstructionSystemComponent_HideBuildMenu_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
struct UConstructionSystemComponent_GetTool_Params
{
	enum class EConstructionSystemToolType             InToolType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UConstructionSystemTool*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
struct UConstructionSystemComponent_GetActiveToolType_Params
{
	enum class EConstructionSystemToolType             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
struct UConstructionSystemComponent_GetActiveTool_Params
{
	class UConstructionSystemTool*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
struct UConstructionSystemComponent_EnableConstructionSystem_Params
{
	enum class EConstructionSystemToolType             InToolType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
struct UConstructionSystemComponent_DisableConstructionSystem_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
struct UConstructionSystemRemoveTool_HandleInput_RemoveAtCursor_Params
{
};

// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
struct UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveSlotName;                                             // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSavePlayerState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
struct UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveSlotName;                                             // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
struct UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
struct UConstructionSystemBuildUI_SetUIAsset_Params
{
	class UConstructionSystemUIAsset*                  UIAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
struct UConstructionSystemBuildUI_SetConstructionSystem_Params
{
	class UConstructionSystemComponent*                ConstructionSystem;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
