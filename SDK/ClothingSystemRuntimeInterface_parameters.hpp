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

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
struct UClothingSimulationInteractor_SetNumSubsteps_Params
{
	int                                                NumSubsteps;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
struct UClothingSimulationInteractor_SetNumIterations_Params
{
	int                                                NumIterations;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
struct UClothingSimulationInteractor_SetMaxNumIterations_Params
{
	int                                                MaxNumIterations;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
struct UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
struct UClothingSimulationInteractor_PhysicsAssetUpdated_Params
{
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
struct UClothingSimulationInteractor_GetSimulationTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
struct UClothingSimulationInteractor_GetNumSubsteps_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
struct UClothingSimulationInteractor_GetNumKinematicParticles_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
struct UClothingSimulationInteractor_GetNumIterations_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
struct UClothingSimulationInteractor_GetNumDynamicParticles_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
struct UClothingSimulationInteractor_GetNumCloths_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
struct UClothingSimulationInteractor_GetClothingInteractor_Params
{
	struct FString                                     ClothingAssetName;                                        // (Parm, ZeroConstructor)
	class UClothingInteractor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
struct UClothingSimulationInteractor_EnableGravityOverride_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
struct UClothingSimulationInteractor_DisableGravityOverride_Params
{
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
struct UClothingSimulationInteractor_ClothConfigUpdated_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
