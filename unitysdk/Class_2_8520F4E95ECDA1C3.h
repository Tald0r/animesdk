#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_1.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5DA2E7556103D5A3_173;
class Class_1_5DA2E7556103D5A3_288;
class Class_1_6E27A6139B6AC956;
class Class_2_214A08D8A91F32A6;
class Class_2_60DDD9C206686F44;
class Class_2_84CEDCEF739506C1_2;
class Class_2_A8F5ABF31E066ED4;
class Class_2_D89CCC627A66D0AD;
class Class_2_E87F1D15F1D4AC72;
class Class_3_025FF4981524A424_274;
class Class_3_3D3D5AB52AC6095A;
class Class_3_A5D67C86F1CC8295_2_Class_4_E8B7CBB6A6429A63;
class Class_3_A5D67C86F1CC8295_2_Class_4_E8B7CBB6A6429A63_1;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBuffPanelWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_06C78929ECD81BD2_1_OFFSET UNITYSDK_OFFSET(0x9BE7E10)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_06C78929ECD81BD2_OFFSET UNITYSDK_OFFSET(0x9BE4E50)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_1_OFFSET UNITYSDK_OFFSET(0x9BE4DC0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_OFFSET UNITYSDK_OFFSET(0x9BE4D30)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x9BE7110)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x9BE4C40)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x9BE9B80)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x9BE7580)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_1AE07FDB9C7B9E43_OFFSET UNITYSDK_OFFSET(0x9BE4AB0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_306DD1EFCEBCF285_OFFSET UNITYSDK_OFFSET(0x9BEA710)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_33DA59074B8E204B_OFFSET UNITYSDK_OFFSET(0x9BE5750)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0x9BE8FA0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_40F7D0641865F192_OFFSET UNITYSDK_OFFSET(0x9BE5460)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_41145AA5EA656E9C_OFFSET UNITYSDK_OFFSET(0x9BE4100)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9BE3760)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x9BE7F30)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x9BE6500)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x9BE94D0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_66153C75D9B30EA6_OFFSET UNITYSDK_OFFSET(0x9BE39D0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x9BE5ED0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x9BE3260)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x9BE5BE0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_73147E571292E3F1_OFFSET UNITYSDK_OFFSET(0x9BE3EB0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x9BE7510)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x9BE71C0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x9BE6360)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7BEA63DE6FFF43F1_OFFSET UNITYSDK_OFFSET(0x9BE7A70)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_85DF30302C90C168_OFFSET UNITYSDK_OFFSET(0x9BE8AF0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x9BE8380)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x9BE6050)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_994BED77BB06AA91_OFFSET UNITYSDK_OFFSET(0x9BE7830)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x9BE7280)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_A076FFFD24F1CF82_OFFSET UNITYSDK_OFFSET(0x9BE3800)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_A0E765C281314950_OFFSET UNITYSDK_OFFSET(0x9BEA310)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x9BE4F70)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_A40FA560F023DE98_OFFSET UNITYSDK_OFFSET(0x9BE9FF0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x9BE69A0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x9BE0380)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x9BEA2A0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x9BE9540)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x9BE7C10)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9BEA890)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9BE4240)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x9BE5E60)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x9BE6790)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x9BE8250)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_D0A17F210D9AEE2B_OFFSET UNITYSDK_OFFSET(0x9BE92D0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x9BE30B0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x9BE7FC0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9BE9D30)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x9BE9F20)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x9BEA8F0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x9BE6DF0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x9BE8A80)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_F98EEC809427A73C_OFFSET UNITYSDK_OFFSET(0x9BE90B0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x9BE42A0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_1_OFFSET UNITYSDK_OFFSET(0x9BE82C0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_OFFSET UNITYSDK_OFFSET(0x9BE5DA0)
#define CLASS_2_8520F4E95ECDA1C3__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE3FF0)

inline static constexpr unsigned int Class_2_8520F4E95ECDA1C3_TypeDefinitionIndex = 51799;

class Class_2_8520F4E95ECDA1C3 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::UnityEngine::UI::Extension::UIImgText* Field_2_41; // 0x50
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_A5D67C86F1CC8295_2_Class_4_E8B7CBB6A6429A63*>*>* Field_2_31; // 0x58
	::UnityEngine::RectTransform* Field_2_10; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x68
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x70
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x78
	::UnityEngine::RectTransform* Field_2_56; // 0x80
	::Class_2_A8F5ABF31E066ED4* Field_2_19; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_37; // 0x90
	::Class_3_3D3D5AB52AC6095A* Field_2_71; // 0x98
	::UnityEngine::RectTransform* Field_2_28; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0xA8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_26; // 0xB0
	::Class_2_A8F5ABF31E066ED4* Field_2_60; // 0xB8
	::Class_2_84CEDCEF739506C1_2* Field_2_74; // 0xC0
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_47; // 0xC8
	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Field_2_63; // 0xD0
	::UnityEngine::RectTransform* Field_2_36; // 0xD8
	::UnityEngine::RectTransform* Field_2_46; // 0xE0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_40; // 0xE8
	::UnityEngine::RectTransform* Field_2_21; // 0xF0
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_34; // 0xF8
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_57; // 0x100
	::MoleMole::UIGeneralButtonController* Field_2_9; // 0x108
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x110
	::Class_2_A8F5ABF31E066ED4* Field_2_54; // 0x118
	::UnityEngine::RectTransform* Field_2_11; // 0x120
	::UnityEngine::RectTransform* Field_2_48; // 0x128
	::Class_2_A8F5ABF31E066ED4* Field_2_62; // 0x130
	::MoleMole::UIGeneralButtonController* Field_2_8; // 0x138
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_44; // 0x140
	::UnityEngine::RectTransform* Field_2_43; // 0x148
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x150
	::UnityEngine::RectTransform* Field_2_50; // 0x158
	::Class_2_60DDD9C206686F44* Field_2_25; // 0x160
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x168
	::UnityEngine::RectTransform* Field_2_32; // 0x170
	::UnityEngine::RectTransform* Field_2_22; // 0x178
	::MoleMole::UIGeneralBuffPanelWidgetController* Field_2_64; // 0x180
	::MoleMole::MonoGamepadCustomList* Field_2_58; // 0x188
	::UnityEngine::RectTransform* Field_2_18; // 0x190
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_76; // 0x198
	::Class_2_A8F5ABF31E066ED4* Field_2_55; // 0x1A0
	::UnityEngine::RectTransform* Field_2_49; // 0x1A8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_23; // 0x1B0
	::Class_1_5DA2E7556103D5A3_288* Field_2_72; // 0x1B8
	::Class_2_214A08D8A91F32A6* Field_2_66; // 0x1C0
	::UnityEngine::RectTransform* Field_2_33; // 0x1C8
	::Class_2_A8F5ABF31E066ED4* Field_2_53; // 0x1D0
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_77; // 0x1D8
	::UnityEngine::RectTransform* Field_2_6; // 0x1E0
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x1E8
	::UnityEngine::RectTransform* Field_2_30; // 0x1F0
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* Field_2_65; // 0x1F8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_24; // 0x200
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_27; // 0x208
	::UnityEngine::RectTransform* Field_2_39; // 0x210
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x218
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_29; // 0x220
	::Class_1_6E27A6139B6AC956* Field_2_80; // 0x228
	::UnityEngine::RectTransform* Field_2_45; // 0x230
	::Class_2_A8F5ABF31E066ED4* Field_2_61; // 0x238
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_35; // 0x240
	::Class_2_60DDD9C206686F44* Field_2_52; // 0x248
	::UnityEngine::RectTransform* Field_2_13; // 0x250
	::UnityEngine::RectTransform* Field_2_42; // 0x258
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_A5D67C86F1CC8295_2_Class_4_E8B7CBB6A6429A63_1*>*>* Field_2_38; // 0x260
	::Class_1_5DA2E7556103D5A3_173* Field_2_73; // 0x268
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x270
	::Class_2_60DDD9C206686F44* Field_2_59; // 0x278
	::UnityEngine::RectTransform* Field_2_20; // 0x280
	::Class_2_A8F5ABF31E066ED4* Field_2_51; // 0x288
	::Class_2_A8F5ABF31E066ED4* Field_2_15; // 0x290
	::Class_2_A8F5ABF31E066ED4* Field_2_16; // 0x298
	::System::Int32 Field_2_75; // 0x2A0
	::System::Int32 Field_2_79; // 0x2A4
	::System::Int32 Field_2_70; // 0x2A8
	::Enum_3_121CF606CB7E9CD1_1 Field_2_68; // 0x2AC
	::System::Int32 Field_2_69; // 0x2B0
	::System::Int32 Field_2_67; // 0x2B4
	::System::Int32 Field_2_78; // 0x2B8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_A076FFFD24F1CF82(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_A076FFFD24F1CF82_OFFSET))(this, a1);
	}

	::System::Void Method_2_41145AA5EA656E9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_41145AA5EA656E9C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_1AE07FDB9C7B9E43(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_1AE07FDB9C7B9E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_08BC5F80744BF2F7(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BC5F80744BF2F7_1(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_06C78929ECD81BD2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_06C78929ECD81BD2_OFFSET))(this, a1);
	}

	::System::Void Method_2_33DA59074B8E204B(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_33DA59074B8E204B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_FFADC3D869800452(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_73147E571292E3F1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_73147E571292E3F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_40F7D0641865F192()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_40F7D0641865F192_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_06C78929ECD81BD2_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_06C78929ECD81BD2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_47D42B95159AE8D1(::Class_3_025FF4981524A424_274* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_274*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_54757B8B62FBF467_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Void Method_2_FFADC3D869800452_1(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_994BED77BB06AA91(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_994BED77BB06AA91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_85DF30302C90C168(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_85DF30302C90C168_OFFSET))(this, a1);
	}

	::System::Void Method_2_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_F98EEC809427A73C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_F98EEC809427A73C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_EC00644AF39B5DED_OFFSET))(this);
	}

	::System::Void Method_2_7BEA63DE6FFF43F1(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7BEA63DE6FFF43F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A40FA560F023DE98()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_A40FA560F023DE98_OFFSET))(this);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_D0A17F210D9AEE2B()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_D0A17F210D9AEE2B_OFFSET))(this);
	}

	::System::String* Method_2_A0E765C281314950(::System::Int32 a1, ::System::Int32 a2, ::Class_2_D89CCC627A66D0AD* a3)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_A0E765C281314950_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_306DD1EFCEBCF285(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_306DD1EFCEBCF285_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_2_66153C75D9B30EA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_66153C75D9B30EA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}
};
