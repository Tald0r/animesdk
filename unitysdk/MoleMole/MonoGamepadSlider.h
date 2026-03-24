#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadSlider_Struct_2_E71A4E719BBCD0AD_1.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"

namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define MOLEMOLE_MONOGAMEPADSLIDER_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0xA3A7840)
#define MOLEMOLE_MONOGAMEPADSLIDER_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0xA3A7750)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_1EB21A58DE184521_OFFSET UNITYSDK_OFFSET(0xA3A8F10)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_270FB166A0A47324_OFFSET UNITYSDK_OFFSET(0xA3A84A0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0xA3A7510)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0xA3A7AB0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_4852C8351A25DF62_OFFSET UNITYSDK_OFFSET(0xA3A69A0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_5F08B426ADF31FF5_1_OFFSET UNITYSDK_OFFSET(0xA3A9890)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xA3A9790)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_64EB95A9F2FF32EC_OFFSET UNITYSDK_OFFSET(0xA3A8930)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xA3A6AE0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0xA3A6FF0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xA3A75F0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_8B1D1F4F3D0E01CB_OFFSET UNITYSDK_OFFSET(0xA3A8D60)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_9B97A7966B23A4A7_OFFSET UNITYSDK_OFFSET(0xA3A7B90)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_9CD277022FA67BA6_OFFSET UNITYSDK_OFFSET(0xA3A8F40)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xA3A9720)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0xA3A6F30)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_BA7CD4E316D99D30_OFFSET UNITYSDK_OFFSET(0xA3A7F00)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA3A6A70)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA3A8420)
#define MOLEMOLE_MONOGAMEPADSLIDER_SETOVERRIDESLIDESTEP_OFFSET UNITYSDK_OFFSET(0xA3A6910)
#define MOLEMOLE_MONOGAMEPADSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3A8AB0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0xA3A8AF0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0xA3A8B60)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISWORKABLEINNER_OFFSET UNITYSDK_OFFSET(0xA3A8BC0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA3A8C20)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEDISABLE_OFFSET UNITYSDK_OFFSET(0xA3A8CB0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA3A8CC0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA3A8CD0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xA3A8D50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSlider_TypeDefinitionIndex = 45762;

	class MonoGamepadSlider : public ::MoleMole::MonoGamepadModule
	{
	public:
		::UnityEngine::UI::Extension::UISlider* _slider; // 0xE8
		::UnityEngine::UI::Slider* _unitySlider; // 0xF0
		::System::Single _slideStep; // 0xF8
		::MoleMole::InputLogicEventType _slideNegativeEvent; // 0xFC
		::MoleMole::InputLogicEventType _slidePositiveEvent; // 0x100
		::MoleMole::InputLogicEventType _slideAxisEvent; // 0x104
		::System::Boolean _allowLoop; // 0x108
		::UnityEngine::UI::Extension::UIButtonEx* _addButton; // 0x110
		::UnityEngine::UI::Extension::UIButtonEx* _reduceButton; // 0x118
		::System::Boolean _enablePressSpeedUp; // 0x120
		::System::Single Field_6_10; // 0x124
		::System::Single Field_6_11; // 0x128
		::System::Single Field_6_12; // 0x12C
		::System::Single Field_6_13; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void SetOverrideSlideStep(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_SETOVERRIDESLIDESTEP_OFFSET))(this, a1);
		}

		::System::Void Method_6_4852C8351A25DF62(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_4852C8351A25DF62_OFFSET))(this, a1);
		}

		::System::Void Method_6_B00A1D822E6F5C31()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_B00A1D822E6F5C31_OFFSET))(this);
		}

		::System::Void Method_6_2A2B4A2E0BDAAF15(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_2A2B4A2E0BDAAF15_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_7AEA4B2B25797605()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_7AEA4B2B25797605_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Void Method_6_3306F24AC967FE79()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_3306F24AC967FE79_OFFSET))(this);
		}

		::System::Boolean Method_6_BA7CD4E316D99D30(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_BA7CD4E316D99D30_OFFSET))(this, a1);
		}

		::System::Boolean __base_IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Boolean __base_IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean __base_IsWorkableInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISWORKABLEINNER_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEDISABLE_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_8B1D1F4F3D0E01CB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_8B1D1F4F3D0E01CB_OFFSET))(this, a1);
		}

		static ::System::Single Method_6_1EB21A58DE184521(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::MonoGamepadSlider_Struct_2_E71A4E719BBCD0AD_1& a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::MoleMole::MonoGamepadSlider_Struct_2_E71A4E719BBCD0AD_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_1EB21A58DE184521_OFFSET))(a1, a2, a3, a4);
		}

		::System::Single Method_6_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Void Method_6_67D41ACFEF39E84E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_67D41ACFEF39E84E_OFFSET))(this);
		}

		::System::Boolean Method_6_270FB166A0A47324(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_270FB166A0A47324_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::RectTransform_Axis Method_6_64EB95A9F2FF32EC()
		{
			return ((::UnityEngine::RectTransform_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_64EB95A9F2FF32EC_OFFSET))(this);
		}

		::System::Void Method_6_5F08B426ADF31FF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_5F08B426ADF31FF5_OFFSET))(this);
		}

		::System::Int32 Method_6_9CD277022FA67BA6(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_9CD277022FA67BA6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_9B97A7966B23A4A7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_9B97A7966B23A4A7_OFFSET))(this, a1);
		}

		::System::Void Method_6_686221D5DF498040()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_686221D5DF498040_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_6_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Void Method_6_5F08B426ADF31FF5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_5F08B426ADF31FF5_1_OFFSET))(this);
		}
	};
}
