#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (0x02D0 - 0x02C8)
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                     // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldSystemActor"));
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystem
// 0x0010 (0x0038 - 0x0028)
class UFieldSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldSystem"));
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemComponent
// 0x00D0 (0x0660 - 0x0590)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                                FieldSystem;                                              // 0x0590(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWorldField;                                            // 0x0598(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsChaosField;                                            // 0x0599(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x059A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x059A(0x0010) UNKNOWN PROPERTY: SupportedSolvers
	struct FFieldObjectCommands                        ConstructionCommands;                                     // 0x05B0(0x0030)
	struct FFieldObjectCommands                        BufferCommands;                                           // 0x05E0(0x0030)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0610(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldSystemComponent"));
		return ptr;
	}


	void ResetFieldSystem();//Offset:Discovery.exe+0x5E18350
	void RemovePersistentFields();//Offset:Discovery.exe+0x5E184F0
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);//Offset:Discovery.exe+0x5E18A00
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations);//Offset:Discovery.exe+0x5E18810
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);//Offset:Discovery.exe+0x5E18F00
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);//Offset:Discovery.exe+0x5E18C20
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);//Offset:Discovery.exe+0x5E18DC0
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);//Offset:Discovery.exe+0x5E18690
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);//Offset:Discovery.exe+0x5E19040
	void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);//Offset:Discovery.exe+0x5E18510
	void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);//Offset:Discovery.exe+0x5E18370
};


// Class FieldSystemEngine.FieldSystemMetaData
// 0x0000 (0x00B8 - 0x00B8)
class UFieldSystemMetaData : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldSystemMetaData"));
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0008 (0x00C0 - 0x00B8)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int                                                Iterations;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldSystemMetaDataIteration"));
		return ptr;
	}


	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int Iterations);//Offset:Discovery.exe+0x5E19A80
};


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0008 (0x00C0 - 0x00B8)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                           // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution"));
		return ptr;
	}


	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType);//Offset:Discovery.exe+0x5E19DD0
};


// Class FieldSystemEngine.FieldSystemMetaDataFilter
// 0x0008 (0x00C0 - 0x00B8)
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	TEnumAsByte<EFieldFilterType>                      FilterType;                                               // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldObjectType>                      ObjectType;                                               // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldPositionType>                    PositionType;                                             // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00BB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldSystemMetaDataFilter"));
		return ptr;
	}


	class UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType, TEnumAsByte<EFieldObjectType> ObjectType, TEnumAsByte<EFieldPositionType> PositionType);//Offset:Discovery.exe+0x5E1A120
};


// Class FieldSystemEngine.FieldNodeBase
// 0x0000 (0x00B8 - 0x00B8)
class UFieldNodeBase : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldNodeBase"));
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeInt
// 0x0000 (0x00B8 - 0x00B8)
class UFieldNodeInt : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldNodeInt"));
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeFloat
// 0x0000 (0x00B8 - 0x00B8)
class UFieldNodeFloat : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldNodeFloat"));
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeVector
// 0x0000 (0x00B8 - 0x00B8)
class UFieldNodeVector : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.FieldNodeVector"));
		return ptr;
	}

};


// Class FieldSystemEngine.UniformInteger
// 0x0008 (0x00C0 - 0x00B8)
class UUniformInteger : public UFieldNodeInt
{
public:
	int                                                Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.UniformInteger"));
		return ptr;
	}


	class UUniformInteger* SetUniformInteger(int Magnitude);//Offset:Discovery.exe+0x5E19A80
};


// Class FieldSystemEngine.RadialIntMask
// 0x0030 (0x00E8 - 0x00B8)
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                              Radius;                                                   // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x00C0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InteriorValue;                                            // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExteriorValue;                                            // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                         // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.RadialIntMask"));
		return ptr;
	}


	class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn);//Offset:Discovery.exe+0x5E1AB50
};


// Class FieldSystemEngine.UniformScalar
// 0x0008 (0x00C0 - 0x00B8)
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.UniformScalar"));
		return ptr;
	}


	class UUniformScalar* SetUniformScalar(float Magnitude);//Offset:Discovery.exe+0x5E1B020
};


// Class FieldSystemEngine.WaveScalar
// 0x0030 (0x00E8 - 0x00B8)
class UWaveScalar : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x00C0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wavelength;                                               // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaveFunctionType>                     Function;                                                 // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.WaveScalar"));
		return ptr;
	}


	class UWaveScalar* SetWaveScalar(float Magnitude, const struct FVector& Position, float Wavelength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff);//Offset:Discovery.exe+0x5E1B380
};


// Class FieldSystemEngine.RadialFalloff
// 0x0038 (0x00F0 - 0x00B8)
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x00D0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.RadialFalloff"));
		return ptr;
	}


	class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<EFieldFalloffType> Falloff);//Offset:Discovery.exe+0x5E1B910
};


// Class FieldSystemEngine.PlaneFalloff
// 0x0050 (0x0108 - 0x00B8)
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x00D0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x00E8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.PlaneFalloff"));
		return ptr;
	}


	class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<EFieldFalloffType> Falloff);//Offset:Discovery.exe+0x5E1BED0
};


// Class FieldSystemEngine.BoxFalloff
// 0x0088 (0x0140 - 0x00B8)
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00D0(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0131(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.BoxFalloff"));
		return ptr;
	}


	class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<EFieldFalloffType> Falloff);//Offset:Discovery.exe+0x5E1C520
};


// Class FieldSystemEngine.NoiseField
// 0x0068 (0x0120 - 0x00B8)
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                              MinRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x00C0(0x0060) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.NoiseField"));
		return ptr;
	}


	class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);//Offset:Discovery.exe+0x5E1CB50
};


// Class FieldSystemEngine.UniformVector
// 0x0020 (0x00D8 - 0x00B8)
class UUniformVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FVector                                     Direction;                                                // 0x00C0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.UniformVector"));
		return ptr;
	}


	class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);//Offset:Discovery.exe+0x5E1D050
};


// Class FieldSystemEngine.RadialVector
// 0x0020 (0x00D8 - 0x00B8)
class URadialVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x00C0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.RadialVector"));
		return ptr;
	}


	class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);//Offset:Discovery.exe+0x5E1D050
};


// Class FieldSystemEngine.RandomVector
// 0x0008 (0x00C0 - 0x00B8)
class URandomVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.RandomVector"));
		return ptr;
	}


	class URandomVector* SetRandomVector(float Magnitude);//Offset:Discovery.exe+0x5E1B020
};


// Class FieldSystemEngine.OperatorField
// 0x0020 (0x00D8 - 0x00B8)
class UOperatorField : public UFieldNodeBase
{
public:
	float                                              Magnitude;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UFieldNodeBase*                              RightField;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              LeftField;                                                // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldOperationType>                   Operation;                                                // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.OperatorField"));
		return ptr;
	}


	class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation);//Offset:Discovery.exe+0x5E1D9D0
};


// Class FieldSystemEngine.ToIntegerField
// 0x0008 (0x00C0 - 0x00B8)
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                             FloatField;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.ToIntegerField"));
		return ptr;
	}


	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);//Offset:Discovery.exe+0x5E1DE20
};


// Class FieldSystemEngine.ToFloatField
// 0x0008 (0x00C0 - 0x00B8)
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                               IntField;                                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.ToFloatField"));
		return ptr;
	}


	class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);//Offset:Discovery.exe+0x5E1DE20
};


// Class FieldSystemEngine.CullingField
// 0x0018 (0x00D0 - 0x00B8)
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                              Culling;                                                  // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.CullingField"));
		return ptr;
	}


	class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation);//Offset:Discovery.exe+0x5E1E440
};


// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000 (0x00B8 - 0x00B8)
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class FieldSystemEngine.ReturnResultsTerminal"));
		return ptr;
	}


	class UReturnResultsTerminal* SetReturnResultsTerminal();//Offset:Discovery.exe+0x5E1E850
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
