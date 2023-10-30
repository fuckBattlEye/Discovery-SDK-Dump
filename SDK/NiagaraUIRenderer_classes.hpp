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

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x00A0 (0x01C8 - 0x0128)
class UNiagaraSystemWidget : public UWidget
{
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                        // 0x0130(0x0050) (Edit, BlueprintVisible)
	bool                                               AutoActivate;                                             // 0x0180(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenPaused;                                           // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
	struct FVector2D                                   DesiredWidgetSize;                                        // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FakeDepthScale;                                           // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              FakeDepthScaleDistance;                                   // 0x019C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugSystemInWorld;                                   // 0x01A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableWarnings;                                          // 0x01A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x01A2(0x0016) MISSED OFFSET
	class ANiagaraUIActor*                             NiagaraActor;                                             // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraUIComponent*                         NiagaraComponent;                                         // 0x01C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NiagaraUIRenderer.NiagaraSystemWidget"));
		return ptr;
	}


	void UpdateTickWhenPaused(bool NewTickWhenPaused);//Offset:Discovery.exe+0x2C60930
	void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);//Offset:Discovery.exe+0x2C609D0
	void SetRemapMaterial(class UMaterialInterface* OriginalMaterial, class UMaterialInterface* RemapMaterial);//Offset:Discovery.exe+0x2C607B0
	void SetDesiredWidgetSize(const struct FVector2D& NewDesiredSize);//Offset:Discovery.exe+0x2C60890
	class UMaterialInterface* GetRemapMaterial(class UMaterialInterface* OriginalMaterial);//Offset:Discovery.exe+0x2C60710
	class UNiagaraUIComponent* GetNiagaraComponent();//Offset:Discovery.exe+0x2C60A70
	void DeactivateSystem();//Offset:Discovery.exe+0x2C60AA0
	void ActivateSystem(bool Reset);//Offset:Discovery.exe+0x2C60AC0
};


// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x02C8 - 0x02C8)
class ANiagaraUIActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NiagaraUIRenderer.NiagaraUIActor"));
		return ptr;
	}

};


// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0000 (0x0820 - 0x0820)
class UNiagaraUIComponent : public UNiagaraComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NiagaraUIRenderer.NiagaraUIComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
