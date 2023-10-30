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

// Class ControlRig.ControlRig
// 0x0468 (0x0490 - 0x0028)
class UControlRig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1E];                                      // 0x0028(0x001E) MISSED OFFSET
	enum class ERigExecutionType                       ExecutionType;                                            // 0x0046(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x0047(0x0009) MISSED OFFSET
	struct FRigVMRuntimeSettings                       VMRuntimeSettings;                                        // 0x0050(0x0050)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                                    // 0x00A0(0x0050)
	class URigVM*                                      VM;                                                       // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class URigHierarchy*                               DynamicHierarchy;                                         // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0100(0x0028) UNKNOWN PROPERTY: GizmoLibrary
	unsigned char                                      UnknownData03[0x10];                                      // 0x0128(0x0010) UNKNOWN PROPERTY: ShapeLibraries
	unsigned char                                      UnknownData04[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	TMap<struct FName, struct FCachedPropertyPath>     InputProperties;                                          // 0x0148(0x0050) (Deprecated)
	TMap<struct FName, struct FCachedPropertyPath>     OutputProperties;                                         // 0x0198(0x0050) (Deprecated)
	unsigned char                                      UnknownData05[0xA0];                                      // 0x01E8(0x00A0) MISSED OFFSET
	struct FControlRigDrawContainer                    DrawContainer;                                            // 0x0288(0x0018)
	unsigned char                                      UnknownData06[0x18];                                      // 0x02A0(0x0018) MISSED OFFSET
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                       // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               EventQueue;                                               // 0x02C0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0xA8];                                      // 0x02D0(0x00A8) MISSED OFFSET
	struct FRigInfluenceMapPerEvent                    Influences;                                               // 0x0378(0x0060)
	class UControlRig*                                 InteractionRig;                                           // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      InteractionRigClass;                                      // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x03E8(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData08[0x98];                                      // 0x03F8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRig"));
		return ptr;
	}


	bool SupportsEvent(const struct FName& InEventName);//Offset:Discovery.exe+0x23446E0
	bool SetVariableFromString(const struct FName& InVariableName, const struct FString& InValue);//Offset:Discovery.exe+0x2344790
	void SetInteractionRigClass(class UClass* InInteractionRigClass);//Offset:Discovery.exe+0x2344100
	void SetInteractionRig(class UControlRig* InInteractionRig);//Offset:Discovery.exe+0x23441D0
	void SetFramesPerSecond(float InFramesPerSecond);//Offset:Discovery.exe+0x2344B00
	void SetDeltaTime(float InDeltaTime);//Offset:Discovery.exe+0x2344D70
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);//Offset:Discovery.exe+0x2344C80
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);//Offset:Discovery.exe+0x2344BA0
	void SelectControl(const struct FName& InControlName, bool bSelect);//Offset:Discovery.exe+0x23443D0
	void RequestSetup();//Offset:Discovery.exe+0x2344500
	void RequestInit();//Offset:Discovery.exe+0x2344520
	bool IsControlSelected(const struct FName& InControlName);//Offset:Discovery.exe+0x23442A0
	class URigVM* GetVM();//Offset:Discovery.exe+0x23444D0
	struct FName GetVariableType(const struct FName& InVariableName);//Offset:Discovery.exe+0x2344990
	struct FString GetVariableAsString(const struct FName& InVariableName);//Offset:Discovery.exe+0x23448A0
	TArray<struct FName> GetSupportedEvents();//Offset:Discovery.exe+0x2344660
	TArray<struct FName> GetScriptAccessibleVariables();//Offset:Discovery.exe+0x2344A50
	class UClass* GetInteractionRigClass();//Offset:Discovery.exe+0x23441A0
	class UControlRig* GetInteractionRig();//Offset:Discovery.exe+0x2344270
	class URigHierarchy* GetHierarchy();//Offset:Discovery.exe+0x2344630
	float GetCurrentFramesPerSecond();//Offset:Discovery.exe+0x2344AD0
	float GetAbsoluteTime();//Offset:Discovery.exe+0x2344E10
	TArray<class UControlRig*> STATIC_FindControlRigs(class UObject* Outer, class UClass* OptionalClass);//Offset:Discovery.exe+0x2344E30
	void Execute(enum class EControlRigState State, const struct FName& InEventName);//Offset:Discovery.exe+0x2344540
	TArray<struct FName> CurrentControlSelection();//Offset:Discovery.exe+0x2344350
	bool ClearControlSelection();//Offset:Discovery.exe+0x1573AB0
	bool CanExecute();//Offset:Discovery.exe+0x14618B0
};


// Class ControlRig.AdditiveControlRig
// 0x0010 (0x04A0 - 0x0490)
class UAdditiveControlRig : public UControlRig
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.AdditiveControlRig"));
		return ptr;
	}

};


// Class ControlRig.ControlRigAnimInstance
// 0x0000 (0x0350 - 0x0350)
class UControlRigAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigAnimInstance"));
		return ptr;
	}

};


// Class ControlRig.ControlRigBlueprintGeneratedClass
// 0x0000 (0x0388 - 0x0388)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class ControlRig.ControlRigComponent
// 0x0140 (0x06D0 - 0x0590)
class UControlRigComponent : public UPrimitiveComponent
{
public:
	class UClass*                                      ControlRigClass;                                          // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPreInitializeDelegate;                                  // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostInitializeDelegate;                                 // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreSetupDelegate;                                       // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostSetupDelegate;                                      // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreForwardsSolveDelegate;                               // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostForwardsSolveDelegate;                              // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FControlRigComponentMappedElement>   MappedElements;                                           // 0x05F8(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableLazyEvaluation;                                    // 0x0608(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	float                                              LazyEvaluationPositionThreshold;                          // 0x060C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LazyEvaluationRotationThreshold;                          // 0x0610(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LazyEvaluationScaleThreshold;                             // 0x0614(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetTransformBeforeTick;                                // 0x0618(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetInitialsBeforeSetup;                                // 0x0619(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateRigOnTick;                                         // 0x061A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateInEditor;                                          // 0x061B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawBones;                                               // 0x061C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugDrawing;                                        // 0x061D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x061E(0x0002) MISSED OFFSET
	class UControlRig*                                 ControlRig;                                               // 0x0620(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0628(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigComponent"));
		return ptr;
	}


	void Update(float DeltaTime);//Offset:Discovery.exe+0x2348DA0
	void SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);//Offset:Discovery.exe+0x2348BC0
	void SetInitialSpaceTransform(const struct FName& SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x23464F0
	void SetInitialBoneTransform(const struct FName& BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);//Offset:Discovery.exe+0x2347CB0
	void SetControlVector2D(const struct FName& ControlName, const struct FVector2D& Value);//Offset:Discovery.exe+0x2347240
	void SetControlTransform(const struct FName& ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2346C90
	void SetControlScale(const struct FName& ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2346E80
	void SetControlRotator(const struct FName& ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2346FC0
	void SetControlPosition(const struct FName& ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2347100
	void SetControlOffset(const struct FName& ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2346960
	void SetControlInt(const struct FName& ControlName, int Value);//Offset:Discovery.exe+0x2347330
	void SetControlFloat(const struct FName& ControlName, float Value);//Offset:Discovery.exe+0x2347410
	void SetControlBool(const struct FName& ControlName, bool Value);//Offset:Discovery.exe+0x23474F0
	void SetBoneTransform(const struct FName& BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);//Offset:Discovery.exe+0x2347F00
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);//Offset:Discovery.exe+0x23485F0
	void OnPreSetup(class UControlRigComponent* Component);//Offset:Discovery.exe+0x2349040
	void OnPreInitialize(class UControlRigComponent* Component);//Offset:Discovery.exe+0x2349180
	void OnPreForwardsSolve(class UControlRigComponent* Component);//Offset:Discovery.exe+0x2348F00
	void OnPostSetup(class UControlRigComponent* Component);//Offset:Discovery.exe+0x2348FA0
	void OnPostInitialize(class UControlRigComponent* Component);//Offset:Discovery.exe+0x23490E0
	void OnPostForwardsSolve(class UControlRigComponent* Component);//Offset:Discovery.exe+0x2348E60
	void Initialize();//Offset:Discovery.exe+0x2348E40
	struct FTransform GetSpaceTransform(const struct FName& SpaceName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2346820
	struct FTransform GetInitialSpaceTransform(const struct FName& SpaceName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x23466E0
	struct FTransform GetInitialBoneTransform(const struct FName& BoneName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x23481B0
	TArray<struct FName> GetElementNames(enum class ERigElementType ElementType);//Offset:Discovery.exe+0x2348520
	struct FVector2D GetControlVector2D(const struct FName& ControlName);//Offset:Discovery.exe+0x2347A20
	struct FTransform GetControlTransform(const struct FName& ControlName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x23475E0
	struct FVector GetControlScale(const struct FName& ControlName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2347720
	struct FRotator GetControlRotator(const struct FName& ControlName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2347820
	class UControlRig* GetControlRig();//Offset:Discovery.exe+0x2349280
	struct FVector GetControlPosition(const struct FName& ControlName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2347920
	struct FTransform GetControlOffset(const struct FName& ControlName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x2346B50
	int GetControlInt(const struct FName& ControlName);//Offset:Discovery.exe+0x2347AD0
	float GetControlFloat(const struct FName& ControlName);//Offset:Discovery.exe+0x2347B70
	bool GetControlBool(const struct FName& ControlName);//Offset:Discovery.exe+0x2347C10
	struct FTransform GetBoneTransform(const struct FName& BoneName, enum class EControlRigComponentSpace Space);//Offset:Discovery.exe+0x23482F0
	float GetAbsoluteTime();//Offset:Discovery.exe+0x2349220
	bool DoesElementExist(const struct FName& Name, enum class ERigElementType ElementType);//Offset:Discovery.exe+0x2348430
	void ClearMappedElements();//Offset:Discovery.exe+0x2348D80
	bool CanExecute();//Offset:Discovery.exe+0x2349250
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves);//Offset:Discovery.exe+0x2348730
	void AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);//Offset:Discovery.exe+0x2348A00
	void AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components);//Offset:Discovery.exe+0x2348910
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);//Offset:Discovery.exe+0x2348690
};


// Class ControlRig.ControlRigControlActor
// 0x0098 (0x0360 - 0x02C8)
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                      ActorToTrack;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ControlRigClass;                                          // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRefreshOnTick;                                           // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelectable;                                            // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02DA(0x0006) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride;                                         // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ColorParameter;                                           // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCastShadows;                                             // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	class USceneComponent*                             ActorRootComponent;                                       // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UControlRig*                                 ControlRig;                                               // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ControlNames;                                             // 0x0310(0x0010) (ZeroConstructor, Transient)
	TArray<struct FTransform>                          ShapeTransforms;                                          // 0x0320(0x0010) (ZeroConstructor, Transient)
	TArray<class UStaticMeshComponent*>                Components;                                               // 0x0330(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                // 0x0340(0x0010) (ZeroConstructor, Transient)
	struct FName                                       ColorParameterName;                                       // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigControlActor"));
		return ptr;
	}


	void Refresh();//Offset:Discovery.exe+0x234E490
	void Clear();//Offset:Discovery.exe+0x234E4B0
};


// Class ControlRig.ControlRigShapeActor
// 0x0028 (0x02F0 - 0x02C8)
class AControlRigShapeActor : public AActor
{
public:
	class USceneComponent*                             ActorRootComponent;                                       // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x02D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	uint32_t                                           ControlRigIndex;                                          // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ControlName;                                              // 0x02DC(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorParameterName;                                       // 0x02E4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x02EC(0x0001) (BlueprintVisible)
	unsigned char                                      bSelected : 1;                                            // 0x02EC(0x0001) (BlueprintVisible)
	unsigned char                                      bSelectable : 1;                                          // 0x02EC(0x0001) (BlueprintVisible)
	unsigned char                                      bHovered : 1;                                             // 0x02EC(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigShapeActor"));
		return ptr;
	}


	void SetSelected(bool bInSelected);//Offset:Discovery.exe+0x234F130
	void SetSelectable(bool bInSelectable);//Offset:Discovery.exe+0x234F060
	void SetHovered(bool bInHovered);//Offset:Discovery.exe+0x234EFC0
	void SetGlobalTransform(const struct FTransform& InTransform);//Offset:Discovery.exe+0x234EEB0
	void SetEnabled(bool bInEnabled);//Offset:Discovery.exe+0x234F200
	void OnTransformChanged(const struct FTransform& NewTransform);//Offset:Discovery.exe+0x327F8B0
	void OnSelectionChanged(bool bIsSelected);//Offset:Discovery.exe+0x327F8B0
	void OnManipulatingChanged(bool bIsManipulating);//Offset:Discovery.exe+0x327F8B0
	void OnHoveredChanged(bool bIsSelected);//Offset:Discovery.exe+0x327F8B0
	void OnEnabledChanged(bool bIsEnabled);//Offset:Discovery.exe+0x327F8B0
	bool IsSelectedInEditor();//Offset:Discovery.exe+0x234F100
	bool IsHovered();//Offset:Discovery.exe+0x234EF90
	bool IsEnabled();//Offset:Discovery.exe+0x234F1D0
	struct FTransform GetGlobalTransform();//Offset:Discovery.exe+0x234EE20
};


// Class ControlRig.ControlRigShapeLibrary
// 0x00F8 (0x0120 - 0x0028)
class UControlRigShapeLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FControlRigShapeDefinition                  DefaultShape;                                             // 0x0030(0x00A0) (Edit)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00D0(0x0028) UNKNOWN PROPERTY: DefaultMaterial
	struct FName                                       MaterialColorParameter;                                   // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FControlRigShapeDefinition>          Shapes;                                                   // 0x0100(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigShapeLibrary"));
		return ptr;
	}

};


// Class ControlRig.ControlRigLayerInstance
// 0x0010 (0x0360 - 0x0350)
class UControlRigLayerInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigLayerInstance"));
		return ptr;
	}

};


// Class ControlRig.ControlRigValidationPass
// 0x0000 (0x0028 - 0x0028)
class UControlRigValidationPass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigValidationPass"));
		return ptr;
	}

};


// Class ControlRig.ControlRigNumericalValidationPass
// 0x0098 (0x00C0 - 0x0028)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                               bCheckControls;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckBones;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckCurves;                                             // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              TranslationPrecision;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationPrecision;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScalePrecision;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurvePrecision;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventNameA;                                               // 0x003C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       EventNameB;                                               // 0x0044(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FRigPose                                    Pose;                                                     // 0x0050(0x0070) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigNumericalValidationPass"));
		return ptr;
	}

};


// Class ControlRig.ControlRigObjectHolder
// 0x0010 (0x0038 - 0x0028)
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                             Objects;                                                  // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigObjectHolder"));
		return ptr;
	}

};


// Class ControlRig.ControlRigPoseAsset
// 0x0060 (0x0088 - 0x0028)
class UControlRigPoseAsset : public UObject
{
public:
	struct FControlRigControlPose                      Pose;                                                     // 0x0028(0x0060) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigPoseAsset"));
		return ptr;
	}


	void SelectControls(class UControlRig* InControlRig, bool bDoMirror);//Offset:Discovery.exe+0x2350710
	void SavePose(class UControlRig* InControlRig, bool bUseAll);//Offset:Discovery.exe+0x2350940
	void ReplaceControlName(const struct FName& CurrentName, const struct FName& NewName);//Offset:Discovery.exe+0x2350450
	void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);//Offset:Discovery.exe+0x2350800
	void GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose);//Offset:Discovery.exe+0x23505D0
	TArray<struct FName> GetControlNames();//Offset:Discovery.exe+0x2350550
	bool DoesMirrorMatch(class UControlRig* ControlRig, const struct FName& ControlName);//Offset:Discovery.exe+0x2350350
};


// Class ControlRig.ControlRigPoseMirrorSettings
// 0x0028 (0x0050 - 0x0028)
class UControlRigPoseMirrorSettings : public UObject
{
public:
	struct FString                                     RightSide;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     LeftSide;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EAxis>                                 AxisToFlip;                                               // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigPoseMirrorSettings"));
		return ptr;
	}

};


// Class ControlRig.ControlRigPoseProjectSettings
// 0x0010 (0x0038 - 0x0028)
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                      RootSaveDirs;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigPoseProjectSettings"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSequence
// 0x0058 (0x0220 - 0x01C8)
class UControlRigSequence : public ULevelSequence
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01C8(0x0028) UNKNOWN PROPERTY: LastExportedToAnimationSequence
	unsigned char                                      UnknownData01[0x28];                                      // 0x01F0(0x0028) UNKNOWN PROPERTY: LastExportedUsingSkeletalMesh
	float                                              LastExportedFrameRate;                                    // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x021C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigSequence"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSettings
// 0x0000 (0x0038 - 0x0038)
class UControlRigSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigSettings"));
		return ptr;
	}

};


// Class ControlRig.ControlRigEditorSettings
// 0x0000 (0x0038 - 0x0038)
class UControlRigEditorSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigEditorSettings"));
		return ptr;
	}

};


// Class ControlRig.ControlRigSnapSettings
// 0x0008 (0x0030 - 0x0028)
class UControlRigSnapSettings : public UObject
{
public:
	bool                                               bKeepOffset;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapPosition;                                            // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapRotation;                                            // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapScale;                                               // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigSnapSettings"));
		return ptr;
	}

};


// Class ControlRig.ControlRigValidator
// 0x0040 (0x0068 - 0x0028)
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>           Passes;                                                   // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.ControlRigValidator"));
		return ptr;
	}

};


// Class ControlRig.FKControlRig
// 0x0010 (0x04A0 - 0x0490)
class UFKControlRig : public UControlRig
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	enum class EControlRigFKRigExecuteMode             ApplyMode;                                                // 0x0498(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0499(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.FKControlRig"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterSection
// 0x0200 (0x0348 - 0x0148)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0148(0x0018) MISSED OFFSET
	class UControlRig*                                 ControlRig;                                               // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ControlRigClass;                                          // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ControlsMask;                                             // 0x0170(0x0010) (ZeroConstructor)
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x0180(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0188(0x00E8)
	TMap<struct FName, struct FChannelMapInfo>         ControlChannelMap;                                        // 0x0270(0x0050)
	TArray<struct FEnumParameterNameAndCurve>          EnumParameterNamesAndCurves;                              // 0x02C0(0x0010) (ZeroConstructor)
	TArray<struct FIntegerParameterNameAndCurve>       IntegerParameterNamesAndCurves;                           // 0x02D0(0x0010) (ZeroConstructor)
	TArray<struct FSpaceControlNameAndChannel>         SpaceChannels;                                            // 0x02E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x58];                                      // 0x02F0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.MovieSceneControlRigParameterSection"));
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterTrack
// 0x0050 (0x00E0 - 0x0090)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0090(0x0028) MISSED OFFSET
	class UControlRig*                                 ControlRig;                                               // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMovieSceneSection*                          SectionToKey;                                             // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00C8(0x0010) (ExportObject, ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.MovieSceneControlRigParameterTrack"));
		return ptr;
	}

};


// Class ControlRig.RigHierarchy
// 0x01D8 (0x0200 - 0x0028)
class URigHierarchy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	uint16_t                                           TopologyVersion;                                          // 0x0058(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableDirtyPropagation;                                  // 0x005A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x75];                                      // 0x005B(0x0075) MISSED OFFSET
	int                                                TransformStackIndex;                                      // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5C];                                      // 0x00D4(0x005C) MISSED OFFSET
	class URigHierarchyController*                     HierarchyController;                                      // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0138(0x0050) MISSED OFFSET
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                          // 0x0188(0x0050)
	unsigned char                                      UnknownData04[0x20];                                      // 0x01D8(0x0020) MISSED OFFSET
	class URigHierarchy*                               HierarchyForCacheValidation;                              // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.RigHierarchy"));
		return ptr;
	}


	bool SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);//Offset:Discovery.exe+0x2358420
	bool SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren);//Offset:Discovery.exe+0x23586E0
	bool SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);//Offset:Discovery.exe+0x2358580
	TArray<struct FRigElementKey> SortKeys(TArray<struct FRigElementKey> InKeys);//Offset:Discovery.exe+0x23601D0
	void SetPose_ForBlueprint(const struct FRigPose& InPose);//Offset:Discovery.exe+0x2357490
	bool SetParentWeightArray(const struct FRigElementKey& InChild, TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren);//Offset:Discovery.exe+0x23588A0
	bool SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren);//Offset:Discovery.exe+0x2358AB0
	void SetLocalTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x235F280
	void SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x235F640
	void SetGlobalTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo);//Offset:Discovery.exe+0x235E3B0
	void SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo);//Offset:Discovery.exe+0x235E710
	void SetCurveValueByIndex(int InElementIndex, float InValue, bool bSetupUndo);//Offset:Discovery.exe+0x235BCC0
	void SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo);//Offset:Discovery.exe+0x235BE50
	void SetControlVisibilityByIndex(int InElementIndex, bool bVisibility);//Offset:Discovery.exe+0x235C4C0
	void SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility);//Offset:Discovery.exe+0x235C5F0
	void SetControlValueByIndex(int InElementIndex, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x235C880
	void SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x235CBC0
	void SetControlShapeTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);//Offset:Discovery.exe+0x235ACB0
	void SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);//Offset:Discovery.exe+0x235AF80
	void SetControlSettingsByIndex(int InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);//Offset:Discovery.exe+0x23599B0
	void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);//Offset:Discovery.exe+0x235A0F0
	void SetControlOffsetTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x235B3F0
	void SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x235B790
	void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);//Offset:Discovery.exe+0x2357CA0
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter);//Offset:Discovery.exe+0x23642C0
	void ResetCurveValues();//Offset:Discovery.exe+0x23642A0
	void Reset();//Offset:Discovery.exe+0x2364530
	int Num();//Offset:Discovery.exe+0x2364280
	struct FRigControlValue STATIC_MakeControlValueFromVector2D(const struct FVector2D& InValue);//Offset:Discovery.exe+0x2356A10
	struct FRigControlValue STATIC_MakeControlValueFromVector(const struct FVector& InValue);//Offset:Discovery.exe+0x23566A0
	struct FRigControlValue STATIC_MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue);//Offset:Discovery.exe+0x2355560
	struct FRigControlValue STATIC_MakeControlValueFromTransform(const struct FTransform& InValue);//Offset:Discovery.exe+0x2355E10
	struct FRigControlValue STATIC_MakeControlValueFromRotator(const struct FRotator& InValue);//Offset:Discovery.exe+0x23562A0
	struct FRigControlValue STATIC_MakeControlValueFromInt(int InValue);//Offset:Discovery.exe+0x2356D50
	struct FRigControlValue STATIC_MakeControlValueFromFloat(float InValue);//Offset:Discovery.exe+0x2357080
	struct FRigControlValue STATIC_MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue);//Offset:Discovery.exe+0x2355990
	struct FRigControlValue STATIC_MakeControlValueFromBool(bool InValue);//Offset:Discovery.exe+0x2357290
	bool IsValidIndex(int InElementIndex);//Offset:Discovery.exe+0x23641D0
	bool IsSelectedByIndex(int InIndex);//Offset:Discovery.exe+0x2360540
	bool IsSelected(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2360610
	bool IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent);//Offset:Discovery.exe+0x2357EF0
	struct FVector STATIC_GetVectorFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x2356540
	struct FVector2D STATIC_GetVector2DFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x23568D0
	struct FTransformNoScale STATIC_GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x23553E0
	struct FTransform STATIC_GetTransformFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x2355C50
	TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter);//Offset:Discovery.exe+0x2360840
	struct FRotator STATIC_GetRotatorFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x23560E0
	TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse);//Offset:Discovery.exe+0x2360D60
	TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse);//Offset:Discovery.exe+0x2360910
	struct FRigElementKey GetPreviousParent(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2355260
	struct FName GetPreviousName(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2355320
	struct FRigPose GetPose(bool bInitial);//Offset:Discovery.exe+0x23578E0
	TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial);//Offset:Discovery.exe+0x2358D10
	struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial);//Offset:Discovery.exe+0x2358E50
	struct FTransform GetParentTransformByIndex(int InElementIndex, bool bInitial);//Offset:Discovery.exe+0x23593E0
	struct FTransform GetParentTransform(const struct FRigElementKey& InKey, bool bInitial);//Offset:Discovery.exe+0x2359610
	TArray<struct FRigElementKey> GetParents(const struct FRigElementKey& InKey, bool bRecursive);//Offset:Discovery.exe+0x2359160
	int GetNumberOfParents(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2358FD0
	TArray<struct FRigElementKey> GetNullKeys(bool bTraverse);//Offset:Discovery.exe+0x23618D0
	struct FTransform GetLocalTransformByIndex(int InElementIndex, bool bInitial);//Offset:Discovery.exe+0x235FBA0
	struct FTransform GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial);//Offset:Discovery.exe+0x235FE10
	struct FRigElementKey GetKey(int InElementIndex);//Offset:Discovery.exe+0x2363CB0
	int STATIC_GetIntFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x2356C20
	int GetIndex_ForBlueprint(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2363DD0
	struct FTransform GetGlobalTransformByIndex(int InElementIndex, bool bInitial);//Offset:Discovery.exe+0x235EC30
	struct FTransform GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial);//Offset:Discovery.exe+0x235EEA0
	struct FTransform GetGlobalControlShapeTransformByIndex(int InElementIndex, bool bInitial);//Offset:Discovery.exe+0x235D7D0
	struct FTransform GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial);//Offset:Discovery.exe+0x235DA20
	struct FTransform GetGlobalControlOffsetTransformByIndex(int InElementIndex, bool bInitial);//Offset:Discovery.exe+0x235DDC0
	struct FTransform GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial);//Offset:Discovery.exe+0x235E010
	float STATIC_GetFloatFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x2356F50
	struct FRigElementKey GetFirstParent(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2359090
	struct FEulerTransform STATIC_GetEulerTransformFromControlValue(const struct FRigControlValue& InValue);//Offset:Discovery.exe+0x23557E0
	float GetCurveValueByIndex(int InElementIndex);//Offset:Discovery.exe+0x235C160
	float GetCurveValue(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x235C250
	TArray<struct FRigElementKey> GetCurveKeys();//Offset:Discovery.exe+0x23611B0
	struct FRigControlValue GetControlValueByIndex(int InElementIndex, enum class ERigControlValueType InValueType);//Offset:Discovery.exe+0x235D080
	struct FRigControlValue GetControlValue(const struct FRigElementKey& InKey, enum class ERigControlValueType InValueType);//Offset:Discovery.exe+0x235D370
	class URigHierarchyController* GetController(bool bCreateIfNeeded);//Offset:Discovery.exe+0x2357C00
	TArray<struct FRigElementKey> GetControlKeys(bool bTraverse);//Offset:Discovery.exe+0x2361480
	TArray<struct FRigElementKey> GetChildren(const struct FRigElementKey& InKey, bool bRecursive);//Offset:Discovery.exe+0x23592A0
	TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse);//Offset:Discovery.exe+0x2361D20
	TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);//Offset:Discovery.exe+0x2357DF0
	struct FRigNullElement FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2362170
	struct FRigControlElement FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x23628B0
	struct FRigBoneElement FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x23637C0
	void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial);//Offset:Discovery.exe+0x2364350
	void CopyHierarchy(class URigHierarchy* InHierarchy);//Offset:Discovery.exe+0x2364490
	bool Contains_ForBlueprint(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2363FD0
};


// Class ControlRig.RigHierarchyController
// 0x0078 (0x00A0 - 0x0028)
class URigHierarchyController : public UObject
{
public:
	bool                                               bReportWarningsAndErrors;                                 // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	TWeakObjectPtr<class URigHierarchy>                Hierarchy;                                                // 0x002C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6C];                                      // 0x0034(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ControlRig.RigHierarchyController"));
		return ptr;
	}


	bool SetSelection(TArray<struct FRigElementKey> InKeys, bool bPrintPythonCommand);//Offset:Discovery.exe+0x2370B10
	bool SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236D950
	void SetHierarchy(class URigHierarchy* InHierarchy);//Offset:Discovery.exe+0x2370E90
	bool SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo);//Offset:Discovery.exe+0x236EE30
	bool SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection);//Offset:Discovery.exe+0x2370D30
	struct FRigElementKey RenameElement(const struct FRigElementKey& InElement, const struct FName& InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);//Offset:Discovery.exe+0x236E160
	bool RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236DD20
	bool RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236E380
	bool RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236DB70
	TArray<struct FRigElementKey> MirrorElements(TArray<struct FRigElementKey> InKeys, const struct FRigMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x236D360
	TArray<struct FRigElementKey> ImportFromText(const struct FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x236E4E0
	TArray<struct FRigElementKey> ImportCurves(class USkeleton* InSkeleton, const struct FName& InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236E930
	TArray<struct FRigElementKey> ImportBones(class USkeleton* InSkeleton, const struct FName& InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236EB50
	class URigHierarchy* GetHierarchy();//Offset:Discovery.exe+0x2370F30
	struct FRigControlSettings GetControlSettings(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x236F120
	struct FString ExportToText(TArray<struct FRigElementKey> InKeys);//Offset:Discovery.exe+0x236E770
	struct FString ExportSelectionToText();//Offset:Discovery.exe+0x236E8B0
	TArray<struct FRigElementKey> DuplicateElements(TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);//Offset:Discovery.exe+0x236D710
	bool DeselectElement(const struct FRigElementKey& InKey);//Offset:Discovery.exe+0x2370C20
	bool ClearSelection();//Offset:Discovery.exe+0x2370A50
	struct FRigElementKey AddRigidBody(const struct FName& InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236F410
	bool AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);//Offset:Discovery.exe+0x236DF40
	struct FRigElementKey AddNull(const struct FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x2370340
	struct FRigElementKey AddCurve(const struct FName& InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x236F760
	struct FRigElementKey AddControl_ForBlueprint(const struct FName& InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo);//Offset:Discovery.exe+0x236F900
	struct FRigElementKey AddBone(const struct FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);//Offset:Discovery.exe+0x23706A0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
