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

// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMetaSoundAssetDirectory> Directories                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories"));

	UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params params;
	params.Directories = Directories;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMetaSoundAssetDirectory> Directories                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories"));

	UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params params;
	params.Directories = Directories;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
