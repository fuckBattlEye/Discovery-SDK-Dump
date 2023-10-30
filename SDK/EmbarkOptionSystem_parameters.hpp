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

// Function EmbarkOptionSystem.IEmbarkUserSetting.SetValue
struct UIEmbarkUserSetting_SetValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.IsDefault
struct UIEmbarkUserSetting_IsDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.IsAvailable
struct UIEmbarkUserSetting_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.Initialize
struct UIEmbarkUserSetting_Initialize_Params
{
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.GetValueIndex
struct UIEmbarkUserSetting_GetValueIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.GetNumOptions
struct UIEmbarkUserSetting_GetNumOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.GetDisplayText
struct UIEmbarkUserSetting_GetDisplayText_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.GetDefaultIndex
struct UIEmbarkUserSetting_GetDefaultIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkUserSetting.CanChange
struct UIEmbarkUserSetting_CanChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.Store
struct UEmbarkOptionBase_Store_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.SendOptionChangeTelemetry
struct UEmbarkOptionBase_SendOptionChangeTelemetry_Params
{
	struct FString                                     OldValue;                                                 // (Parm, ZeroConstructor)
	struct FString                                     NewValue;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.Restore
struct UEmbarkOptionBase_Restore_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.ResetToPreviousValue
struct UEmbarkOptionBase_ResetToPreviousValue_Params
{
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.ResetToDefault
struct UEmbarkOptionBase_ResetToDefault_Params
{
};

// Function EmbarkOptionSystem.EmbarkOptionBase.NotifyOnExternalEvent
struct UEmbarkOptionBase_NotifyOnExternalEvent_Params
{
	enum class EEmbarkOptionExternalEvent              Event;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.IsDefault
struct UEmbarkOptionBase_IsDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.IsAvailable
struct UEmbarkOptionBase_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.Initialize
struct UEmbarkOptionBase_Initialize_Params
{
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkOptionSystem.EmbarkOptionBase.CanChange
struct UEmbarkOptionBase_CanChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionFloat.SetValue
struct UIEmbarkOptionFloat_SetValue_Params
{
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionFloat.SetNormalizedValue
struct UIEmbarkOptionFloat_SetNormalizedValue_Params
{
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetValue
struct UIEmbarkOptionFloat_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetNormalizedValue
struct UIEmbarkOptionFloat_GetNormalizedValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetMinValue
struct UIEmbarkOptionFloat_GetMinValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetMaxValue
struct UIEmbarkOptionFloat_GetMaxValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetNumOptions
struct UIEmbarkDynamicEnum_GetNumOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetNameByIndex
struct UIEmbarkDynamicEnum_GetNameByIndex_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetIndexByName
struct UIEmbarkDynamicEnum_GetIndexByName_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetDisplayName
struct UIEmbarkDynamicEnum_GetDisplayName_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetDefaultIndex
struct UIEmbarkDynamicEnum_GetDefaultIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionEnum.SetIndex
struct UIEmbarkOptionEnum_SetIndex_Params
{
	int                                                NewIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionEnum.GetMaxIndexInclusive
struct UIEmbarkOptionEnum_GetMaxIndexInclusive_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionEnum.GetIndex
struct UIEmbarkOptionEnum_GetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionEnum.GetDisplayText
struct UIEmbarkOptionEnum_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkOptionSystem.IEmbarkOptionBool.SetValue
struct UIEmbarkOptionBool_SetValue_Params
{
	bool                                               bNewValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionBool.GetValue
struct UIEmbarkOptionBool_GetValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionInt.SetValue
struct UIEmbarkOptionInt_SetValue_Params
{
	int                                                NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionInt.GetValue
struct UIEmbarkOptionInt_GetValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.IEmbarkOptionString.SetValue
struct UIEmbarkOptionString_SetValue_Params
{
	struct FString                                     NewValue;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkOptionSystem.IEmbarkOptionString.GetValue
struct UIEmbarkOptionString_GetValue_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkOptionSystem.IEmbarkOptionGameplayTag.SetValue
struct UIEmbarkOptionGameplayTag_SetValue_Params
{
	struct FGameplayTag                                NewValue;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkOptionSystem.IEmbarkOptionGameplayTag.GetValue
struct UIEmbarkOptionGameplayTag_GetValue_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionString
struct UEmbarkOptionManager_SetOptionString_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     NewString;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionInt
struct UEmbarkOptionManager_SetOptionInt_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionGameplayTag
struct UEmbarkOptionManager_SetOptionGameplayTag_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                NewValue;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionFloat
struct UEmbarkOptionManager_SetOptionFloat_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionEnum
struct UEmbarkOptionManager_SetOptionEnum_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                NewIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionBool
struct UEmbarkOptionManager_SetOptionBool_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bNewValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.SaveAll
struct UEmbarkOptionManager_SaveAll_Params
{
};

// Function EmbarkOptionSystem.EmbarkOptionManager.Save
struct UEmbarkOptionManager_Save_Params
{
	struct FGameplayTag                                TagCategory;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.RestartRequiredToTakeEffect
struct UEmbarkOptionManager_RestartRequiredToTakeEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.ResetUnsavedOptions
struct UEmbarkOptionManager_ResetUnsavedOptions_Params
{
};

// Function EmbarkOptionSystem.EmbarkOptionManager.ResetOptionsToDefault
struct UEmbarkOptionManager_ResetOptionsToDefault_Params
{
	struct FGameplayTag                                TagCategory;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.HasUnsavedOptions
struct UEmbarkOptionManager_HasUnsavedOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionString
struct UEmbarkOptionManager_GetOptionString_Params
{
	class UEmbarkOptionManager*                        Manager;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionString*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionInt
struct UEmbarkOptionManager_GetOptionInt_Params
{
	class UEmbarkOptionManager*                        Manager;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionInt*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionGameplayTag
struct UEmbarkOptionManager_GetOptionGameplayTag_Params
{
	class UEmbarkOptionManager*                        Manager;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionGameplayTag*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionFloat
struct UEmbarkOptionManager_GetOptionFloat_Params
{
	class UEmbarkOptionManager*                        Manager;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionFloat*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionEnum
struct UEmbarkOptionManager_GetOptionEnum_Params
{
	class UEmbarkOptionManager*                        Manager;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionEnum*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionBool
struct UEmbarkOptionManager_GetOptionBool_Params
{
	class UEmbarkOptionManager*                        Manager;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionBool*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionString
struct UEmbarkOptionManager_FindOptionString_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionString*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionInt
struct UEmbarkOptionManager_FindOptionInt_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionInt*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionGameplayTag
struct UEmbarkOptionManager_FindOptionGameplayTag_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionGameplayTag*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionFloat
struct UEmbarkOptionManager_FindOptionFloat_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionFloat*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionEnum
struct UEmbarkOptionManager_FindOptionEnum_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionEnum*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionBool
struct UEmbarkOptionManager_FindOptionBool_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UIEmbarkOptionBool*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.FindOption
struct UEmbarkOptionManager_FindOption_Params
{
	struct FGameplayTag                                OptionTag;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UEmbarkOptionBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkOptionSystem.EmbarkOptionManager.AddOption
struct UEmbarkOptionManager_AddOption_Params
{
	class UEmbarkOptionBase*                           Option;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
