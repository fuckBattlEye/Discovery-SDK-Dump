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

// Class EmbarkDynamics.EmbarkDynamicsExactDamper
// 0x0000 (0x0028 - 0x0028)
class UEmbarkDynamicsExactDamper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.EmbarkDynamicsExactDamper"));
		return ptr;
	}

};


// Class EmbarkDynamics.EmbarkDynamicsEulerIntegrationUtils
// 0x0000 (0x0028 - 0x0028)
class UEmbarkDynamicsEulerIntegrationUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.EmbarkDynamicsEulerIntegrationUtils"));
		return ptr;
	}

};


// Class EmbarkDynamics.EmbarkDynamicsCollision
// 0x0000 (0x0028 - 0x0028)
class UEmbarkDynamicsCollision : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.EmbarkDynamicsCollision"));
		return ptr;
	}

};


// Class EmbarkDynamics.EmbarkDynamicsDebugDraw
// 0x0000 (0x0028 - 0x0028)
class UEmbarkDynamicsDebugDraw : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.EmbarkDynamicsDebugDraw"));
		return ptr;
	}


	void STATIC_DrawSpringGraph(class UWorld* World, const struct FSpringPlot& LastPlot, const struct FVector& GraphOrigin, const struct FLinearColor& FirstColor, const struct FLinearColor& LastColor, float FirstLineThickness, float LastLineThickness, float GraphSize);//Offset:Discovery.exe+0x1C184F0
	void STATIC_DrawOverlappingCones(class UWorld* World, const struct FTransform& Origin, TArray<struct FConeParameters> ConeConstraints, float Length, int NumSegments);//Offset:Discovery.exe+0x1C182A0
};


// Class EmbarkDynamics.EmbarkPendulumMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkPendulumMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.EmbarkPendulumMixinLibrary"));
		return ptr;
	}


	struct FTransform STATIC_Update(const struct FTransform& Origin, float DeltaSeconds, const struct FVector& ExternalForces, struct FEmbarkPendulum* Pend);//Offset:Discovery.exe+0x1C19F30
	void STATIC_SetVelocity(const struct FVector& InVelocity, struct FEmbarkPendulum* Pend);//Offset:Discovery.exe+0x1C19100
	void STATIC_Reset(const struct FTransform& Origin, struct FEmbarkPendulum* Pend);//Offset:Discovery.exe+0x1C1A3E0
	void STATIC_PushParticle(const struct FVector& PushVector, struct FEmbarkPendulum* Pend);//Offset:Discovery.exe+0x1C18D80
	struct FVector STATIC_GetVelocity(const struct FEmbarkPendulum& Pend);//Offset:Discovery.exe+0x1C19440
	struct FTransform STATIC_GetResult(const struct FEmbarkPendulum& Pend);//Offset:Discovery.exe+0x1C19720
	void STATIC_DebugDraw(class UWorld* World, const struct FTransform& Origin, const struct FTransform& WorldOffset, struct FEmbarkPendulum* Pend);//Offset:Discovery.exe+0x1C19AB0
};


// Class EmbarkDynamics.SimpleExactDamperMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class USimpleExactDamperMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.SimpleExactDamperMixinLibrary"));
		return ptr;
	}


	float STATIC_UpdateWithTarget(float NewTarget, float DeltaSeconds, struct FSimpleExactDamper* SED);//Offset:Discovery.exe+0x1C1AD80
	float STATIC_Update(float DeltaSeconds, struct FSimpleExactDamper* SED);//Offset:Discovery.exe+0x1C1B050
	void STATIC_SetVelocity(float InVelocity, struct FSimpleExactDamper* SED);//Offset:Discovery.exe+0x1C1B3A0
	void STATIC_SetValue(float InValue, struct FSimpleExactDamper* SED);//Offset:Discovery.exe+0x1C1B770
	void STATIC_SetHalfLife(float InHalfLife, struct FSimpleExactDamper* SED);//Offset:Discovery.exe+0x1C1B560
	void STATIC_Reset(struct FSimpleExactDamper* SED);//Offset:Discovery.exe+0x1C1B2D0
	void STATIC_Init(float InitValue, float InitVelocity, struct FSimpleExactDamper* SED);//Offset:Discovery.exe+0x1C1B940
	float STATIC_GetVelocity(const struct FSimpleExactDamper& SED);//Offset:Discovery.exe+0x1C1B4A0
	float STATIC_GetValue(const struct FSimpleExactDamper& SED);//Offset:Discovery.exe+0x1C1B880
	float STATIC_GetHalfLife(const struct FSimpleExactDamper& SED);//Offset:Discovery.exe+0x1C1B6B0
};


// Class EmbarkDynamics.DoubleExactDamperMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UDoubleExactDamperMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.DoubleExactDamperMixinLibrary"));
		return ptr;
	}


	float STATIC_UpdateWithTarget(float NewTarget, float DeltaSeconds, struct FDoubleExactDamper* DED);//Offset:Discovery.exe+0x1C1C250
	float STATIC_Update(float DeltaSeconds, struct FDoubleExactDamper* DED);//Offset:Discovery.exe+0x1C1C530
	void STATIC_Teleport(float InValue, struct FDoubleExactDamper* DED);//Offset:Discovery.exe+0x1C1CCE0
	void STATIC_SetTarget(float Target, struct FDoubleExactDamper* DED);//Offset:Discovery.exe+0x1C1CF10
	void STATIC_SetSmoothness(float InSmoothness, struct FDoubleExactDamper* DED);//Offset:Discovery.exe+0x1C1C990
	void STATIC_Reset(struct FDoubleExactDamper* DED);//Offset:Discovery.exe+0x1C1C7C0
	void STATIC_Init(float InitValue, float InitVelocity, struct FDoubleExactDamper* DED);//Offset:Discovery.exe+0x1C1D040
	float STATIC_GetVelocity(const struct FDoubleExactDamper& DED);//Offset:Discovery.exe+0x1C1C8B0
	float STATIC_GetValue(const struct FDoubleExactDamper& DED);//Offset:Discovery.exe+0x1C1CC00
	float STATIC_GetTarget(const struct FDoubleExactDamper& DED);//Offset:Discovery.exe+0x1C1CE30
	float STATIC_GetSmoothness(const struct FDoubleExactDamper& DED);//Offset:Discovery.exe+0x1C1CB20
};


// Class EmbarkDynamics.DoubleExactDamperVecMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UDoubleExactDamperVecMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.DoubleExactDamperVecMixinLibrary"));
		return ptr;
	}


	struct FVector STATIC_UpdateWithTarget(const struct FVector& NewTarget, float DeltaSeconds, struct FDoubleExactDamperVec* DED);//Offset:Discovery.exe+0x1C1DA00
	struct FVector STATIC_Update(float DeltaSeconds, struct FDoubleExactDamperVec* DED);//Offset:Discovery.exe+0x1C1DC40
	void STATIC_SetTarget(const struct FVector& Target, struct FDoubleExactDamperVec* DED);//Offset:Discovery.exe+0x1C1E830
	void STATIC_SetSmoothness(const struct FVector& InSmoothness, struct FDoubleExactDamperVec* DED);//Offset:Discovery.exe+0x1C1E130
	void STATIC_Reset(struct FDoubleExactDamperVec* DED);//Offset:Discovery.exe+0x1C1DE10
	void STATIC_Init(const struct FVector& InitValue, const struct FVector& InitVelocity, struct FDoubleExactDamperVec* DED);//Offset:Discovery.exe+0x1C1EA20
	struct FVector STATIC_GetVelocity(const struct FDoubleExactDamperVec& DED);//Offset:Discovery.exe+0x1C1DFA0
	struct FVector STATIC_GetValue(const struct FDoubleExactDamperVec& DED);//Offset:Discovery.exe+0x1C1E510
	struct FVector STATIC_GetTarget(const struct FDoubleExactDamperVec& DED);//Offset:Discovery.exe+0x1C1E6A0
	struct FVector STATIC_GetSmoothness(const struct FDoubleExactDamperVec& DED);//Offset:Discovery.exe+0x1C1E380
};


// Class EmbarkDynamics.SODSpringFloatMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class USODSpringFloatMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.SODSpringFloatMixinLibrary"));
		return ptr;
	}


	void STATIC_Update(float NewTarget, float DeltaSeconds, struct FSODSpringFloat* SOD);//Offset:Discovery.exe+0x1C1F4E0
	void STATIC_TeleportTo(float NewValue, struct FSODSpringFloat* SOD);//Offset:Discovery.exe+0x1C1F870
	void STATIC_SetVelocity(float InVelocity, struct FSODSpringFloat* SOD);//Offset:Discovery.exe+0x1C1FB30
	void STATIC_SetValue(float InValue, struct FSODSpringFloat* SOD);//Offset:Discovery.exe+0x1C1FD10
	void STATIC_Reset(struct FSODSpringFloat* SOD);//Offset:Discovery.exe+0x1C1F990
	float STATIC_GetVelocity(const struct FSODSpringFloat& SOD);//Offset:Discovery.exe+0x1C1FC40
	float STATIC_GetValue(const struct FSODSpringFloat& SOD);//Offset:Discovery.exe+0x1C1FE20
	float STATIC_GetAcceleration(const struct FSODSpringFloat& SOD);//Offset:Discovery.exe+0x1C1FA60
	void STATIC_Compute(float Frequency, float Damping, float Response, struct FSODSpringFloat* SOD);//Offset:Discovery.exe+0x1C1F650
};


// Class EmbarkDynamics.SODSpringVectorMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class USODSpringVectorMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.SODSpringVectorMixinLibrary"));
		return ptr;
	}


	void STATIC_Update(const struct FVector& NewTarget, float DeltaSeconds, struct FSODSpringVector* SOD);//Offset:Discovery.exe+0x1C20580
	void STATIC_TeleportTo(const struct FVector& NewValue, struct FSODSpringVector* SOD);//Offset:Discovery.exe+0x1C209D0
	void STATIC_SetVelocity(const struct FVector& InVelocity, struct FSODSpringVector* SOD);//Offset:Discovery.exe+0x1C20DA0
	void STATIC_SetValue(const struct FVector& InValue, struct FSODSpringVector* SOD);//Offset:Discovery.exe+0x1C21020
	void STATIC_Reset(struct FSODSpringVector* SOD);//Offset:Discovery.exe+0x1C20B80
	struct FVector STATIC_GetVelocity(const struct FSODSpringVector& SOD);//Offset:Discovery.exe+0x1C20F00
	struct FVector STATIC_GetValue(const struct FSODSpringVector& SOD);//Offset:Discovery.exe+0x1C21170
	struct FVector STATIC_GetAcceleration(const struct FSODSpringVector& SOD);//Offset:Discovery.exe+0x1C20C80
	void STATIC_Compute(float Frequency, float Damping, float Response, struct FSODSpringVector* SOD);//Offset:Discovery.exe+0x1C20780
};


// Class EmbarkDynamics.MinJerkMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UMinJerkMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.MinJerkMixinLibrary"));
		return ptr;
	}


	double STATIC_Update(double Target, double TimeHorizon, double DeltaSeconds, struct FMinJerk* MinJerk);//Offset:Discovery.exe+0x1C21B40
	void STATIC_Reset(struct FMinJerk* MinJerk);//Offset:Discovery.exe+0x1C21F10
	bool STATIC_IsSleeping(const struct FMinJerk& MinJerk);//Offset:Discovery.exe+0x1C219A0
	void STATIC_Init(double ResetValue, double ResetSpeed, double ResetAccel, struct FMinJerk* MinJerk);//Offset:Discovery.exe+0x1C21D20
};


// Class EmbarkDynamics.MinJerkVecMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UMinJerkVecMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.MinJerkVecMixinLibrary"));
		return ptr;
	}


	struct FVector STATIC_Update(const struct FVector& TargetVec, float TimeHorizon, float DeltaSeconds, struct FMinJerkVec* MinJerkVec);//Offset:Discovery.exe+0x1C22490
	void STATIC_SetTarget(const struct FVector& Target, struct FMinJerkVec* MinJerkVec);//Offset:Discovery.exe+0x1C22C30
	void STATIC_Reset(struct FMinJerkVec* MinJerkVec);//Offset:Discovery.exe+0x1C23180
	bool STATIC_IsSleeping(const struct FMinJerkVec& MinJerkVec);//Offset:Discovery.exe+0x1C22E10
	void STATIC_InitFromRotator(const struct FRotator& Rotation, const struct FRotator& Velocity, const struct FRotator& Acceleration, struct FMinJerkVec* MinJerkVec);//Offset:Discovery.exe+0x1C23330
	void STATIC_Init(const struct FVector& CurrentVector, const struct FVector& Velocity, const struct FVector& Acceleration, struct FMinJerkVec* MinJerkVec);//Offset:Discovery.exe+0x1C23330
	struct FVector STATIC_GetVelocityAsVector(const struct FMinJerkVec& MinJerkVec);//Offset:Discovery.exe+0x1C22910
	struct FVector STATIC_GetAsVector(const struct FMinJerkVec& MinJerkVec);//Offset:Discovery.exe+0x1C22AA0
	struct FRotator STATIC_GetAsRotator(const struct FMinJerkVec& MinJerkVec);//Offset:Discovery.exe+0x1C22AA0
	struct FVector STATIC_GetAccelerationAsVector(const struct FMinJerkVec& MinJerkVec);//Offset:Discovery.exe+0x1C22780
};


// Class EmbarkDynamics.MinJerkVec2DMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UMinJerkVec2DMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDynamics.MinJerkVec2DMixinLibrary"));
		return ptr;
	}


	struct FVector2D STATIC_Update(const struct FVector2D& TargetVec, float TimeHorizon, float DeltaSeconds, struct FMinJerkVec2D* MinJerkVec);//Offset:Discovery.exe+0x1C23E20
	void STATIC_Reset(struct FMinJerkVec2D* MinJerkVec);//Offset:Discovery.exe+0x1C248A0
	bool STATIC_IsSleeping(const struct FMinJerkVec2D& MinJerkVec);//Offset:Discovery.exe+0x1C24660
	void STATIC_InitFromRotator(const struct FRotator& Rotation, const struct FRotator& Velocity, const struct FRotator& Acceleration, struct FMinJerkVec2D* MinJerkVec);//Offset:Discovery.exe+0x1C249F0
	void STATIC_Init(const struct FVector2D& CurrentVector, const struct FVector2D& Velocity, const struct FVector2D& Acceleration, struct FMinJerkVec2D* MinJerkVec);//Offset:Discovery.exe+0x1C24CA0
	struct FVector2D STATIC_GetVelocityAsVector(const struct FMinJerkVec2D& MinJerkVec);//Offset:Discovery.exe+0x1C24290
	struct FVector2D STATIC_GetAsVector2D(const struct FMinJerkVec2D& MinJerkVec);//Offset:Discovery.exe+0x1C243D0
	struct FRotator STATIC_GetAsRotator(const struct FMinJerkVec2D& MinJerkVec);//Offset:Discovery.exe+0x1C24510
	struct FVector2D STATIC_GetAccelerationAsVector(const struct FMinJerkVec2D& MinJerkVec);//Offset:Discovery.exe+0x1C24150
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
