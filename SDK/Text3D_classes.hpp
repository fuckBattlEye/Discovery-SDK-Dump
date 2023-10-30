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

// Class Text3D.Text3DActor
// 0x0008 (0x02D0 - 0x02C8)
class AText3DActor : public AActor
{
public:
	class UText3DComponent*                            Text3DComponent;                                          // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Text3D.Text3DActor"));
		return ptr;
	}

};


// Class Text3D.Text3DCharacterTransform
// 0x00B0 (0x0380 - 0x02D0)
class UText3DCharacterTransform : public USceneComponent
{
public:
	bool                                               bLocationEnabled;                                         // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	float                                              LocationProgress;                                         // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EText3DCharacterEffectOrder             LocationOrder;                                            // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	float                                              LocationRange;                                            // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationDistance;                                         // 0x02E0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleEnabled;                                            // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	float                                              ScaleProgress;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EText3DCharacterEffectOrder             ScaleOrder;                                               // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	float                                              ScaleRange;                                               // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScaleBegin;                                               // 0x0308(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScaleEnd;                                                 // 0x0320(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateEnabled;                                           // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              RotateProgress;                                           // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EText3DCharacterEffectOrder             RotateOrder;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	float                                              RotateRange;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotateBegin;                                              // 0x0348(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotateEnd;                                                // 0x0360(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Text3D.Text3DCharacterTransform"));
		return ptr;
	}


	void SetScaleRange(float Range);//Offset:Discovery.exe+0x24AB270
	void SetScaleProgress(float Progress);//Offset:Discovery.exe+0x24AB3A0
	void SetScaleOrder(enum class EText3DCharacterEffectOrder Order);//Offset:Discovery.exe+0x24AB310
	void SetScaleEnd(const struct FVector& Value);//Offset:Discovery.exe+0x24AB130
	void SetScaleEnabled(bool bEnabled);//Offset:Discovery.exe+0x24AB440
	void SetScaleBegin(const struct FVector& Value);//Offset:Discovery.exe+0x24AB1D0
	void SetRotateRange(float Range);//Offset:Discovery.exe+0x24AAEC0
	void SetRotateProgress(float Progress);//Offset:Discovery.exe+0x24AAFF0
	void SetRotateOrder(enum class EText3DCharacterEffectOrder Order);//Offset:Discovery.exe+0x24AAF60
	void SetRotateEnd(const struct FRotator& Value);//Offset:Discovery.exe+0x24AAD80
	void SetRotateEnabled(bool bEnabled);//Offset:Discovery.exe+0x24AB090
	void SetRotateBegin(const struct FRotator& Value);//Offset:Discovery.exe+0x24AAE20
	void SetLocationRange(float Range);//Offset:Discovery.exe+0x24AB580
	void SetLocationProgress(float Progress);//Offset:Discovery.exe+0x24AB6B0
	void SetLocationOrder(enum class EText3DCharacterEffectOrder Order);//Offset:Discovery.exe+0x24AB620
	void SetLocationEnabled(bool bEnabled);//Offset:Discovery.exe+0x24AB750
	void SetLocationDistance(const struct FVector& Distance);//Offset:Discovery.exe+0x24AB4E0
};


// Class Text3D.Text3DComponent
// 0x0100 (0x03D0 - 0x02D0)
class UText3DComponent : public USceneComponent
{
public:
	struct FText                                       Text;                                                     // 0x02D0(0x0018) (Edit, BlueprintVisible)
	float                                              Extrude;                                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bevel;                                                    // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EText3DBevelType                        BevelType;                                                // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	int                                                BevelSegments;                                            // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOutline;                                                 // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	float                                              OutlineExpand;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FrontMaterial;                                            // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BevelMaterial;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ExtrudeMaterial;                                          // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BackMaterial;                                             // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EText3DHorizontalTextAlignment          HorizontalAlignment;                                      // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EText3DVerticalTextAlignment            VerticalAlignment;                                        // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x032A(0x0002) MISSED OFFSET
	float                                              Kerning;                                                  // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineSpacing;                                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WordSpacing;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMaxWidth;                                             // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              MaxWidth;                                                 // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMaxHeight;                                            // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleProportionally;                                     // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x034A(0x0006) MISSED OFFSET
	class USceneComponent*                             TextRoot;                                                 // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    TextGeneratedDelegate;                                    // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x40];                                      // 0x0368(0x0040) MISSED OFFSET
	TArray<class USceneComponent*>                     CharacterKernings;                                        // 0x03A8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UStaticMeshComponent*>                CharacterMeshes;                                          // 0x03B8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Text3D.Text3DComponent"));
		return ptr;
	}


	void TextGenerated__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	void SetWordSpacing(float Value);//Offset:Discovery.exe+0x24ACC60
	void SetVerticalAlignment(enum class EText3DVerticalTextAlignment Value);//Offset:Discovery.exe+0x24ACB40
	void SetText(const struct FText& Value);//Offset:Discovery.exe+0x24AD510
	void SetScaleProportionally(bool Value);//Offset:Discovery.exe+0x24AC820
	void SetOutlineExpand(float Value);//Offset:Discovery.exe+0x24AD330
	void SetOutline(bool bValue);//Offset:Discovery.exe+0x24AD3D0
	void SetMaxWidth(float Value);//Offset:Discovery.exe+0x24ACA00
	void SetMaxHeight(float Value);//Offset:Discovery.exe+0x24AC8C0
	void SetLineSpacing(float Value);//Offset:Discovery.exe+0x24ACD00
	void SetKerning(float Value);//Offset:Discovery.exe+0x24ACDA0
	void SetHorizontalAlignment(enum class EText3DHorizontalTextAlignment Value);//Offset:Discovery.exe+0x24ACBD0
	void SetHasMaxWidth(bool Value);//Offset:Discovery.exe+0x24ACAA0
	void SetHasMaxHeight(bool Value);//Offset:Discovery.exe+0x24AC960
	void SetFrontMaterial(class UMaterialInterface* Value);//Offset:Discovery.exe+0x24AD020
	void SetFreeze(bool bFreeze);//Offset:Discovery.exe+0x24AC780
	void SetFont(class UFont* InFont);//Offset:Discovery.exe+0x24AD470
	void SetExtrudeMaterial(class UMaterialInterface* Value);//Offset:Discovery.exe+0x24ACEE0
	void SetExtrude(float Value);//Offset:Discovery.exe+0x24AD290
	void SetCastShadow(bool NewCastShadow);//Offset:Discovery.exe+0x24AC6E0
	void SetBevelType(enum class EText3DBevelType Value);//Offset:Discovery.exe+0x24AD160
	void SetBevelSegments(int Value);//Offset:Discovery.exe+0x24AD0C0
	void SetBevelMaterial(class UMaterialInterface* Value);//Offset:Discovery.exe+0x24ACF80
	void SetBevel(float Value);//Offset:Discovery.exe+0x24AD1F0
	void SetBackMaterial(class UMaterialInterface* Value);//Offset:Discovery.exe+0x24ACE40
	TArray<class UStaticMeshComponent*> GetGlyphMeshComponents();//Offset:Discovery.exe+0x24AC3A0
	class UStaticMeshComponent* GetGlyphMeshComponent(int Index);//Offset:Discovery.exe+0x24AC410
	TArray<class USceneComponent*> GetGlyphKerningComponents();//Offset:Discovery.exe+0x24AC4B0
	class USceneComponent* GetGlyphKerningComponent(int Index);//Offset:Discovery.exe+0x24AC520
	int GetGlyphCount();//Offset:Discovery.exe+0x24AC5C0
	void GetBounds(struct FVector* Origin, struct FVector* BoxExtent);//Offset:Discovery.exe+0x24AC5F0
};


// Class Text3D.Text3DEngineSubsystem
// 0x0068 (0x0098 - 0x0030)
class UText3DEngineSubsystem : public UEngineSubsystem
{
public:
	class UMaterial*                                   DefaultMaterial;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, struct FCachedFontData>             CachedFonts;                                              // 0x0038(0x0050)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Text3D.Text3DEngineSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
