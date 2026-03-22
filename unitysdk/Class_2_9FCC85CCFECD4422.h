#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_RoomInfoData.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_5DA2E7556103D5A3_173;
class Class_1_5DA2E7556103D5A3_280;
class Class_1_5DA2E7556103D5A3_288;
class Class_2_104EA16A1BE40F83;
class Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F;
class Class_2_60DDD9C206686F44;
class Class_2_84CEDCEF739506C1_2;
class Class_2_9A3131FC3F38E383;
class Class_2_A8F5ABF31E066ED4;
class Class_2_D89CCC627A66D0AD;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBossChallengeDetailRoleRowWidgetController; }
namespace MoleMole { class UIBossChallengeQuickTeamListRowWidgetController_Context; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_3_95EF0285C16C5E7C;

#define CLASS_2_9FCC85CCFECD4422_METHOD_2_0002FD427F9DA06E_OFFSET UNITYSDK_OFFSET(0xC53F410)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0xC53C450)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_1734DB95D619A946_OFFSET UNITYSDK_OFFSET(0xC540010)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xC53CA60)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_1D2DF3ED4883497F_OFFSET UNITYSDK_OFFSET(0xC5400D0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_2769B3594603E4D1_OFFSET UNITYSDK_OFFSET(0xC53E6D0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xC53FC60)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_29890C802CC87ED8_OFFSET UNITYSDK_OFFSET(0xC53DDD0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_3E59D56A6D957BC3_OFFSET UNITYSDK_OFFSET(0xC53E890)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xC53E000)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_4AF9C4E6ABB35C62_OFFSET UNITYSDK_OFFSET(0xC53E6C0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_4BDDA83A3E9868DC_OFFSET UNITYSDK_OFFSET(0xC53ECC0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_4C93A371A0DC625B_OFFSET UNITYSDK_OFFSET(0xC53B000)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xC53D830)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xC53F980)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_57C4AEA703D76F6E_OFFSET UNITYSDK_OFFSET(0xC53F8E0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0xC53E5C0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_6C5DF8BFB3D9C640_OFFSET UNITYSDK_OFFSET(0xC540C80)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xC53F030)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0xC53FB10)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xC5402D0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_98D20D52586D1B5F_OFFSET UNITYSDK_OFFSET(0xC53F650)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_9E5B5F574C1205A4_OFFSET UNITYSDK_OFFSET(0xC53D0A0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xC53C5B0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xC53E300)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_ADE7EC82E13C7741_OFFSET UNITYSDK_OFFSET(0xC53EE70)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC541380)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xC53D290)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_C859A67AAEA0562C_OFFSET UNITYSDK_OFFSET(0xC541450)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC540C20)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_1_OFFSET UNITYSDK_OFFSET(0xC5411D0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xC53F660)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xC53C670)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xC53FEA0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xC53DCF0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xC53D210)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_F82DF5E806F12AEB_OFFSET UNITYSDK_OFFSET(0xC53EB40)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_F9DD5BEBBFAE60E4_OFFSET UNITYSDK_OFFSET(0xC540B80)
#define CLASS_2_9FCC85CCFECD4422__CTOR_OFFSET UNITYSDK_OFFSET(0xC53C820)

inline static constexpr unsigned int Class_2_9FCC85CCFECD4422_TypeDefinitionIndex = 43976;

class Class_2_9FCC85CCFECD4422 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	// static const ::System::Int32 Field_2_36 = 0x3; // 0x0
	// static const ::System::Int32 Field_2_37 = 0x3; // 0x0
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x50
	::UnityEngine::RectTransform* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_15; // 0x68
	::Class_1_5DA2E7556103D5A3_173* Field_2_41; // 0x70
	::Class_2_A8F5ABF31E066ED4* Field_2_17; // 0x78
	::Class_2_104EA16A1BE40F83* Field_2_45; // 0x80
	::UnityEngine::GameObject* Field_2_21; // 0x88
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x90
	::Class_2_A8F5ABF31E066ED4* Field_2_19; // 0x98
	::Class_2_A8F5ABF31E066ED4* Field_2_24; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_25; // 0xA8
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0xB0
	::UnityEngine::GameObject* Field_2_13; // 0xB8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_27; // 0xC0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_26; // 0xC8
	::Class_2_60DDD9C206686F44* Field_2_3; // 0xD0
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_33; // 0xD8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_30; // 0xE0
	::Class_2_A8F5ABF31E066ED4* Field_2_16; // 0xE8
	::Class_1_5DA2E7556103D5A3_288* Field_2_40; // 0xF0
	::MoleMole::MonoGamepadCustomList* Field_2_28; // 0xF8
	::System::Collections::Generic::List_1<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* Field_2_42; // 0x100
	::Class_1_5DA2E7556103D5A3_280* Field_2_39; // 0x108
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x110
	::UnityEngine::GameObject* Field_2_18; // 0x118
	::Class_2_9A3131FC3F38E383* Field_2_44; // 0x120
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x128
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x130
	::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*>* Field_2_20; // 0x138
	::System::Collections::Generic::List_1<::Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F*>* Field_2_31; // 0x140
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x148
	::Class_2_A8F5ABF31E066ED4* Field_2_12; // 0x150
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x158
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_34; // 0x160
	::Il2CppArray<::Class_2_D89CCC627A66D0AD*>* Field_2_32; // 0x168
	::UnityEngine::GameObject* Field_2_22; // 0x170
	::Class_2_A8F5ABF31E066ED4* Field_2_14; // 0x178
	::UnityEngine::RectTransform* Field_2_8; // 0x180
	::Class_2_60DDD9C206686F44* Field_2_23; // 0x188
	::Class_0_16E4307DCC419505_103<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Field_2_29; // 0x190
	::MoleMole::UIBossChallengePageController_RoomInfoData Field_2_38; // 0x198
	::System::Int32 Field_2_43; // 0x1A4
	::System::Int32 Field_2_35; // 0x1A8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4C93A371A0DC625B(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_4C93A371A0DC625B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_9E5B5F574C1205A4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_9E5B5F574C1205A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_4AF9C4E6ABB35C62(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_4AF9C4E6ABB35C62_OFFSET))(this, a1);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_2769B3594603E4D1(::Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_2769B3594603E4D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F82DF5E806F12AEB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_F82DF5E806F12AEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_0002FD427F9DA06E(::Class_2_A8F5ABF31E066ED4* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_0002FD427F9DA06E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_98D20D52586D1B5F(::Class_0_16E4307DCC419505_103<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_98D20D52586D1B5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_2_29890C802CC87ED8(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_29890C802CC87ED8_OFFSET))(this, a1);
	}

	::System::Void Method_2_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_497833CF065C1894_OFFSET))(this);
	}

	::MoleMole::UIBossChallengeDetailRoleRowWidgetController* Method_2_57C4AEA703D76F6E(::Class_3_95EF0285C16C5E7C<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* a1)
	{
		return ((::MoleMole::UIBossChallengeDetailRoleRowWidgetController*(*)(::PVOID, ::Class_3_95EF0285C16C5E7C<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_57C4AEA703D76F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_ADE7EC82E13C7741(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_ADE7EC82E13C7741_OFFSET))(this, a1);
	}

	::System::Void Method_2_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_1734DB95D619A946(::Class_2_A8F5ABF31E066ED4* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_1734DB95D619A946_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_1D2DF3ED4883497F(::Class_1_5DA2E7556103D5A3_173* a1, ::Class_2_84CEDCEF739506C1_2* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_173*, ::Class_2_84CEDCEF739506C1_2*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_1D2DF3ED4883497F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_4BDDA83A3E9868DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_4BDDA83A3E9868DC_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_6C5DF8BFB3D9C640(::System::Int32 a1, ::MoleMole::UIBossChallengePageController_RoomInfoData a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBossChallengePageController_RoomInfoData))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_6C5DF8BFB3D9C640_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D14D1C669EDC2D6B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_1_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_F9DD5BEBBFAE60E4(::Class_2_A8F5ABF31E066ED4* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_F9DD5BEBBFAE60E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_3E59D56A6D957BC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_3E59D56A6D957BC3_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_103<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Method_2_C859A67AAEA0562C()
	{
		return ((::Class_0_16E4307DCC419505_103<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_C859A67AAEA0562C_OFFSET))(this);
	}
};
