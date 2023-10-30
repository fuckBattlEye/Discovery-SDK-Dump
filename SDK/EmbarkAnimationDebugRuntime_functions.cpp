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

// Function EmbarkAnimationDebugRuntime.EmbarkAnimationFunctionLibrary.GetAllActiveAnimations
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FActiveAnimInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveAnimInfo> UEmbarkAnimationFunctionLibrary::STATIC_GetAllActiveAnimations(class UAnimInstance* AnimInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationDebugRuntime.EmbarkAnimationFunctionLibrary.GetAllActiveAnimations"));

	UEmbarkAnimationFunctionLibrary_GetAllActiveAnimations_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.StartToRecord
// (Final, Native, Static, Public)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnimDebugRuntimeLibrary::STATIC_StartToRecord(class UAnimInstance* AnimInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.StartToRecord"));

	UAnimDebugRuntimeLibrary_StartToRecord_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.AddCustomEntryCharacter
// (Final, Native, Static, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UAnimDebugRuntimeLibrary::STATIC_AddCustomEntryCharacter(class ACharacter* Character, const struct FString& Name, const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.AddCustomEntryCharacter"));

	UAnimDebugRuntimeLibrary_AddCustomEntryCharacter_Params params;
	params.Character = Character;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.AddCustomEntry
// (Final, Native, Static, Public)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// bool                           bMainInstanceOnly              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimDebugRuntimeLibrary::STATIC_AddCustomEntry(class UAnimInstance* AnimInstance, const struct FString& Name, const struct FString& Value, bool bMainInstanceOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary.AddCustomEntry"));

	UAnimDebugRuntimeLibrary_AddCustomEntry_Params params;
	params.AnimInstance = AnimInstance;
	params.Name = Name;
	params.Value = Value;
	params.bMainInstanceOnly = bMainInstanceOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
