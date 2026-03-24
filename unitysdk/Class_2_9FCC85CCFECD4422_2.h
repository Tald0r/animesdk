#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_RoomInfoData.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_5DA2E7556103D5A3_195;
class Class_1_5DA2E7556103D5A3_245;
class Class_1_5DA2E7556103D5A3_319;
class Class_2_104EA16A1BE40F83;
class Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F;
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
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_3_CA832D813F452AD6;

#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0002FD427F9DA06E_OFFSET UNITYSDK_OFFSET(0x8E4C690)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x8E496F0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_1734DB95D619A946_OFFSET UNITYSDK_OFFSET(0x8E4C5D0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x8E4BBC0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_2769B3594603E4D1_OFFSET UNITYSDK_OFFSET(0x8E4E070)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x8E4B8A0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_29890C802CC87ED8_OFFSET UNITYSDK_OFFSET(0x8E4B4B0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_3E59D56A6D957BC3_OFFSET UNITYSDK_OFFSET(0x8E4DCB0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x8E49CF0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_4AF9C4E6ABB35C62_OFFSET UNITYSDK_OFFSET(0x8E4C8D0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_4BDDA83A3E9868DC_OFFSET UNITYSDK_OFFSET(0x8E49FE0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_4C93A371A0DC625B_OFFSET UNITYSDK_OFFSET(0x8E48290)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x8E4C8E0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8E4CE30)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_57C4AEA703D76F6E_OFFSET UNITYSDK_OFFSET(0x8E4C400)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x8E4E6E0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_6C5DF8BFB3D9C640_OFFSET UNITYSDK_OFFSET(0x8E4A340)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_7CD5A38E959CB979_OFFSET UNITYSDK_OFFSET(0x8E4C1F0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x8E4D750)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x8E4C490)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_98D20D52586D1B5F_OFFSET UNITYSDK_OFFSET(0x8E4E230)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x8E4AA10)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9E5B5F574C1205A4_OFFSET UNITYSDK_OFFSET(0x8E4E570)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8E49850)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x8E4E2A0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_ADE7EC82E13C7741_OFFSET UNITYSDK_OFFSET(0x8E4A190)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8E4D5E0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x8E4CFC0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_C859A67AAEA0562C_OFFSET UNITYSDK_OFFSET(0x8E4C8C0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8E4E240)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_D14D1C669EDC2D6B_1_OFFSET UNITYSDK_OFFSET(0x8E4B6E0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x8E4B230)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x8E49910)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8E4A890)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x8E4BAE0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x8E4D560)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F82DF5E806F12AEB_OFFSET UNITYSDK_OFFSET(0x8E4DB30)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F9DD5BEBBFAE60E4_OFFSET UNITYSDK_OFFSET(0x8E4D6B0)
#define CLASS_2_9FCC85CCFECD4422_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8E49AC0)

inline static constexpr unsigned int Class_2_9FCC85CCFECD4422_2_TypeDefinitionIndex = 72033;

class Class_2_9FCC85CCFECD4422_2 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	// static const ::System::Int32 Field_2_36 = 0x3; // 0x0
	// static const ::System::Int32 Field_2_37 = 0x3; // 0x0
	::Class_2_A8F5ABF31E066ED4* Field_2_17; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_16; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_25; // 0x68
	::Il2CppArray<::Class_2_D89CCC627A66D0AD*>* Field_2_32; // 0x70
	::UnityEngine::GameObject* Field_2_21; // 0x78
	::Class_2_A8F5ABF31E066ED4* Field_2_19; // 0x80
	::UnityEngine::RectTransform* Field_2_8; // 0x88
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x90
	::Class_2_A8F5ABF31E066ED4* Field_2_24; // 0x98
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0xA0
	::MoleMole::MonoGamepadCustomList* Field_2_28; // 0xA8
	::Class_1_5DA2E7556103D5A3_195* Field_2_41; // 0xB0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_30; // 0xB8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_34; // 0xC0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_27; // 0xC8
	::UnityEngine::GameObject* Field_2_13; // 0xD0
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0xD8
	::System::Collections::Generic::List_1<::Class_3_CA832D813F452AD6<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*>* Field_2_20; // 0xE0
	::System::Collections::Generic::List_1<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* Field_2_42; // 0xE8
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0xF0
	::Class_2_A8F5ABF31E066ED4* Field_2_15; // 0xF8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x100
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x108
	::UnityEngine::GameObject* Field_2_18; // 0x110
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x118
	::Class_1_5DA2E7556103D5A3_319* Field_2_40; // 0x120
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_26; // 0x128
	::Class_1_5DA2E7556103D5A3_245* Field_2_39; // 0x130
	::UnityEngine::RectTransform* Field_2_7; // 0x138
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x140
	::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Field_2_29; // 0x148
	::Class_2_104EA16A1BE40F83* Field_2_45; // 0x150
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x158
	::UnityEngine::GameObject* Field_2_22; // 0x160
	::Class_2_A8F5ABF31E066ED4* Field_2_14; // 0x168
	::Class_2_60DDD9C206686F44* Field_2_23; // 0x170
	::System::Collections::Generic::List_1<::Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F*>* Field_2_31; // 0x178
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_33; // 0x180
	::Class_2_A8F5ABF31E066ED4* Field_2_12; // 0x188
	::Class_2_9A3131FC3F38E383* Field_2_44; // 0x190
	::System::Int32 Field_2_43; // 0x198
	::System::Int32 Field_2_35; // 0x19C
	::MoleMole::UIBossChallengePageController_RoomInfoData Field_2_38; // 0x1A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4C93A371A0DC625B(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_4C93A371A0DC625B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_6C5DF8BFB3D9C640(::System::Int32 a1, ::MoleMole::UIBossChallengePageController_RoomInfoData a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBossChallengePageController_RoomInfoData))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_6C5DF8BFB3D9C640_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_7CD5A38E959CB979(::Class_1_5DA2E7556103D5A3_195* a1, ::Class_2_84CEDCEF739506C1_2* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_195*, ::Class_2_84CEDCEF739506C1_2*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_7CD5A38E959CB979_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIBossChallengeDetailRoleRowWidgetController* Method_2_57C4AEA703D76F6E(::Class_3_CA832D813F452AD6<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* a1)
	{
		return ((::MoleMole::UIBossChallengeDetailRoleRowWidgetController*(*)(::PVOID, ::Class_3_CA832D813F452AD6<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_57C4AEA703D76F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_1734DB95D619A946(::Class_2_A8F5ABF31E066ED4* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_1734DB95D619A946_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Method_2_C859A67AAEA0562C()
	{
		return ((::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_C859A67AAEA0562C_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_4AF9C4E6ABB35C62(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_4AF9C4E6ABB35C62_OFFSET))(this, a1);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_F9DD5BEBBFAE60E4(::Class_2_A8F5ABF31E066ED4* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F9DD5BEBBFAE60E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_D14D1C669EDC2D6B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_D14D1C669EDC2D6B_1_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_F82DF5E806F12AEB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F82DF5E806F12AEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E59D56A6D957BC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_3E59D56A6D957BC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0002FD427F9DA06E(::Class_2_A8F5ABF31E066ED4* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0002FD427F9DA06E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29890C802CC87ED8(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_29890C802CC87ED8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_2769B3594603E4D1(::Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_2769B3594603E4D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_98D20D52586D1B5F(::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_98D20D52586D1B5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_ADE7EC82E13C7741(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_ADE7EC82E13C7741_OFFSET))(this, a1);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Int32 Method_2_4BDDA83A3E9868DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_4BDDA83A3E9868DC_OFFSET))(this);
	}

	::System::Void Method_2_9E5B5F574C1205A4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9E5B5F574C1205A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_609FA3D38FA252B6_OFFSET))(this, a1);
	}
};
