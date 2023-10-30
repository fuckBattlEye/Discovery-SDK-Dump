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

// Function EmbarkAnimationDebugRuntime.EmbarkAnimationFunctionLibrary.GetAllActiveAnimations
struct UEmbarkAnimationFunctionLibrary_GetAllActiveAnimations_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveAnimInfo>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.StartToRecord
struct UAnimDebugRuntimeLibrary_StartToRecord_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.AddCustomEntryCharacter
struct UAnimDebugRuntimeLibrary_AddCustomEntryCharacter_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.AddCustomEntry
struct UAnimDebugRuntimeLibrary_AddCustomEntry_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	bool                                               bMainInstanceOnly;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
