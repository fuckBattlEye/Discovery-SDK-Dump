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

// WidgetBlueprintGeneratedClass WBP_CTAButton.WBP_CTAButton_C
// 0x0010 (0x1148 - 0x1138)
class UWBP_CTAButton_C : public UCommonCTAButtonWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraSystemWidget*                        HoverFX;                                                  // 0x1140(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("WidgetBlueprintGeneratedClass WBP_CTAButton.WBP_CTAButton_C"));
		return ptr;
	}


	void Construct();//Offset:Discovery.exe+0x327F8B0
	void ButtonHovered();//Offset:Discovery.exe+0x327F8B0
	void ButtonUnHovered();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_WBP_CTAButton(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
