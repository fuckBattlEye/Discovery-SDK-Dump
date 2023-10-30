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

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
struct UFieldSystemComponent_ResetFieldSystem_Params
{
};

// Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
struct UFieldSystemComponent_RemovePersistentFields_Params
{
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
struct UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
struct UFieldSystemComponent_ApplyStrainField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Iterations;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
struct UFieldSystemComponent_ApplyStayDynamicField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
struct UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
struct UFieldSystemComponent_ApplyRadialForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
struct UFieldSystemComponent_ApplyPhysicsField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldPhysicsType>                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaData*                        MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
struct UFieldSystemComponent_ApplyLinearForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
struct UFieldSystemComponent_AddPersistentField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldPhysicsType>                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaData*                        MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
struct UFieldSystemComponent_AddFieldCommand_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldPhysicsType>                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaData*                        MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
struct UFieldSystemMetaDataIteration_SetMetaDataIteration_Params
{
	int                                                Iterations;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaDataIteration*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
struct UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params
{
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaDataProcessingResolution*    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
struct UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params
{
	TEnumAsByte<EFieldFilterType>                      FilterType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldObjectType>                      ObjectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldPositionType>                    PositionType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaDataFilter*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.UniformInteger.SetUniformInteger
struct UUniformInteger_SetUniformInteger_Params
{
	int                                                Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniformInteger*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
struct URadialIntMask_SetRadialIntMask_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InteriorValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExteriorValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESetMaskConditionType>                 SetMaskConditionIn;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class URadialIntMask*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.UniformScalar.SetUniformScalar
struct UUniformScalar_SetUniformScalar_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniformScalar*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.WaveScalar.SetWaveScalar
struct UWaveScalar_SetWaveScalar_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wavelength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaveFunctionType>                     Function;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWaveScalar*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
struct URadialFalloff_SetRadialFalloff_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class URadialFalloff*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
struct UPlaneFalloff_SetPlaneFalloff_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlaneFalloff*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
struct UBoxFalloff_SetBoxFalloff_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UBoxFalloff*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.NoiseField.SetNoiseField
struct UNoiseField_SetNoiseField_Params
{
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	class UNoiseField*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.UniformVector.SetUniformVector
struct UUniformVector_SetUniformVector_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniformVector*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RadialVector.SetRadialVector
struct URadialVector_SetRadialVector_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class URadialVector*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RandomVector.SetRandomVector
struct URandomVector_SetRandomVector_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class URandomVector*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.OperatorField.SetOperatorField
struct UOperatorField_SetOperatorField_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldNodeBase*                              LeftField;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              RightField;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldOperationType>                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UOperatorField*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
struct UToIntegerField_SetToIntegerField_Params
{
	class UFieldNodeFloat*                             FloatField;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UToIntegerField*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.ToFloatField.SetToFloatField
struct UToFloatField_SetToFloatField_Params
{
	class UFieldNodeInt*                               IntegerField;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UToFloatField*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.CullingField.SetCullingField
struct UCullingField_SetCullingField_Params
{
	class UFieldNodeBase*                              Culling;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCullingField*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
struct UReturnResultsTerminal_SetReturnResultsTerminal_Params
{
	class UReturnResultsTerminal*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
