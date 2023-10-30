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

// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
struct UDataRegistrySubsystem_NotEqual_DataRegistryType_Params
{
	struct FDataRegistryType                           A;                                                        // (Parm, ZeroConstructor)
	struct FDataRegistryType                           B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
struct UDataRegistrySubsystem_NotEqual_DataRegistryId_Params
{
	struct FDataRegistryId                             A;                                                        // (Parm, ZeroConstructor)
	struct FDataRegistryId                             B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
struct UDataRegistrySubsystem_IsValidDataRegistryType_Params
{
	struct FDataRegistryType                           DataRegistryType;                                         // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
struct UDataRegistrySubsystem_IsValidDataRegistryId_Params
{
	struct FDataRegistryId                             DataRegistryId;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
struct UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params
{
	struct FDataRegistryId                             ItemId;                                                   // (Parm, ZeroConstructor)
	struct FDataRegistryLookup                         ResolvedLookup;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTableRowBase                               OutItem;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
struct UDataRegistrySubsystem_GetCachedItemBP_Params
{
	struct FDataRegistryId                             ItemId;                                                   // (Parm, ZeroConstructor)
	struct FTableRowBase                               OutItem;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
struct UDataRegistrySubsystem_FindCachedItemBP_Params
{
	struct FDataRegistryId                             ItemId;                                                   // (Parm, ZeroConstructor)
	enum class EDataRegistrySubsystemGetItemResult     OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTableRowBase                               OutItem;                                                  // (Parm, OutParm)
};

// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
struct UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params
{
	struct FDataRegistryId                             ItemId;                                                   // (Parm, ZeroConstructor)
	float                                              InputValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EDataRegistrySubsystemGetItemResult     OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
struct UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params
{
	struct FDataRegistryType                           A;                                                        // (Parm, ZeroConstructor)
	struct FDataRegistryType                           B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
struct UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params
{
	struct FDataRegistryId                             A;                                                        // (Parm, ZeroConstructor)
	struct FDataRegistryId                             B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
struct UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params
{
	struct FDataRegistryType                           DataRegistryType;                                         // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
struct UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params
{
	struct FDataRegistryId                             DataRegistryId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
struct UDataRegistrySubsystem_AcquireItemBP_Params
{
	struct FDataRegistryId                             ItemId;                                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             AcquireCallback;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
