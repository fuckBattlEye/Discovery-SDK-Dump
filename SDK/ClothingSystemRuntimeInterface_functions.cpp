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

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NumSubsteps                    (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractor::SetNumSubsteps(int NumSubsteps)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps"));

	UClothingSimulationInteractor_SetNumSubsteps_Params params;
	params.NumSubsteps = NumSubsteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NumIterations                  (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractor::SetNumIterations(int NumIterations)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations"));

	UClothingSimulationInteractor_SetNumIterations_Params params;
	params.NumIterations = NumIterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxNumIterations               (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractor::SetMaxNumIterations(int MaxNumIterations)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations"));

	UClothingSimulationInteractor_SetMaxNumIterations_Params params;
	params.MaxNumIterations = MaxNumIterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness"));

	UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated"));

	UClothingSimulationInteractor_PhysicsAssetUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UClothingSimulationInteractor::GetSimulationTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime"));

	UClothingSimulationInteractor_GetSimulationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumSubsteps()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps"));

	UClothingSimulationInteractor_GetNumSubsteps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumKinematicParticles()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles"));

	UClothingSimulationInteractor_GetNumKinematicParticles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumIterations()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations"));

	UClothingSimulationInteractor_GetNumIterations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumDynamicParticles()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles"));

	UClothingSimulationInteractor_GetNumDynamicParticles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumCloths()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths"));

	UClothingSimulationInteractor_GetNumCloths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ClothingAssetName              (Parm, ZeroConstructor)
// class UClothingInteractor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClothingInteractor* UClothingSimulationInteractor::GetClothingInteractor(const struct FString& ClothingAssetName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor"));

	UClothingSimulationInteractor_GetClothingInteractor_Params params;
	params.ClothingAssetName = ClothingAssetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride"));

	UClothingSimulationInteractor_EnableGravityOverride_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride"));

	UClothingSimulationInteractor_DisableGravityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated"));

	UClothingSimulationInteractor_ClothConfigUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
