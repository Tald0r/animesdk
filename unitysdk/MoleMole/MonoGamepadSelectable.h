#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1BED4272B39C388A.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/MonoGamepadSelectable_Struct_2_05AF451D7E433529.h"
#include "unitysdk/MoleMole/MonoGamepadSelectable_Struct_2_05AF451D7E433529_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoGamepadBaseList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole::Config { class ConfigSoundAction_Post2DEvent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_MONOGAMEPADSELECTABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x6B08B40)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_CLICK_OFFSET UNITYSDK_OFFSET(0x6B09DB0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x6B08810)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONWEAKFOCUSLIST_OFFSET UNITYSDK_OFFSET(0x6B08980)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x6B08800)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASFOCUSUI_OFFSET UNITYSDK_OFFSET(0x6B08830)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASWEAKFOCUSUI_OFFSET UNITYSDK_OFFSET(0x6B089A0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x6B087F0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x6B087E0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISWEAKFOCUS_OFFSET UNITYSDK_OFFSET(0x6B08910)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x6B08A50)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x6B08A30)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x6B08A70)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x6B08A20)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x6B0C4F0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_160C17CB65B037A2_OFFSET UNITYSDK_OFFSET(0x6B0BB10)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_2E0C51FDF21DA52C_OFFSET UNITYSDK_OFFSET(0x6B0C1C0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6B0BA60)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x6B09800)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x6B0B930)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_410589D224C92E30_OFFSET UNITYSDK_OFFSET(0x6B0CBB0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x6B0C950)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_53A95D7F26B7A0DC_OFFSET UNITYSDK_OFFSET(0x6B0C000)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0x6B0CA20)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0x6B08DF0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_829093B8270F20B5_OFFSET UNITYSDK_OFFSET(0x6B0AA20)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_9D06908BA5951172_OFFSET UNITYSDK_OFFSET(0x6B0BE90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_AD4F6DA9E13A593D_OFFSET UNITYSDK_OFFSET(0x6B091E0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_C28FD3DCE36A1B99_OFFSET UNITYSDK_OFFSET(0x6B0A480)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x6B0B640)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_D8B59F34B62564EC_OFFSET UNITYSDK_OFFSET(0x6B0AB90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x6B0B7C0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_DEE9AC9242A07128_1_OFFSET UNITYSDK_OFFSET(0x6B0A8C0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_DEE9AC9242A07128_OFFSET UNITYSDK_OFFSET(0x6B0BD10)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_F073AB35FFD90830_OFFSET UNITYSDK_OFFSET(0x6B09870)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FFDA922A11CAA698_OFFSET UNITYSDK_OFFSET(0x6B0C130)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBTNFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x6B0A710)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTONV2_OFFSET UNITYSDK_OFFSET(0x6B0ACC0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x6B0AE30)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x6B08820)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONWEAKFOCUSLIST_OFFSET UNITYSDK_OFFSET(0x6B08990)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x6B08A60)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x6B08A40)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x6B09C90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDIGNORE_OFFSET UNITYSDK_OFFSET(0x6B09430)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_TRYDEACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x6B0AD30)
#define MOLEMOLE_MONOGAMEPADSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x6B0BAF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSelectable_TypeDefinitionIndex = 44038;

	class MonoGamepadSelectable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x19
		::System::Boolean forceIgnore; // 0x1A
		::System::Boolean forceExclude; // 0x1B
		::System::Boolean ExcludeWhenIgnore; // 0x1C
		::System::Boolean _ignoreWhenSmallAlpha; // 0x1D
		::MoleMole::MonoGamepadBaseList* _list; // 0x20
		::System::Boolean _ignoreWhenListEmpty; // 0x28
		::System::Boolean _excludeWhenListEmpty; // 0x29
		::UnityEngine::UI::Extension::UIButtonBase* _buttonV2; // 0x30
		::UnityEngine::UI::Button* _untiyButton; // 0x38
		::System::Boolean _setButtonStateOnSelect; // 0x40
		::System::Boolean _selectWhenButtonUnavailable; // 0x41
		::UnityEngine::UI::InputField* _inputField; // 0x48
		::UnityEngine::GameObject* _activateOnSelect; // 0x50
		::Il2CppArray<::UnityEngine::GameObject*>* _activateOnSelectList; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* _activateOnWeakFocusList; // 0x60
		::MoleMole::GamepadNavTargetConfig _targetModule; // 0x68
		::System::Boolean _focusOnTargetModuleOnClick; // 0x78
		::System::Boolean _focusOnTargetModuleOnSelect; // 0x79
		::System::Boolean _focusImmediately; // 0x7A
		::System::Boolean _affectChildSelectable; // 0x7B
		::Enum_3_1BED4272B39C388A _affectChildSelectableType; // 0x7C
		::UnityEngine::CanvasGroup* Field_5_23; // 0x80
		::System::Boolean _muteSelectSound; // 0x88
		::System::Boolean _overrideSelectSound; // 0x89
		::MoleMole::Config::ConfigSoundAction_Post2DEvent* _selectSound; // 0x90
		::System::Action_1<::System::Boolean>* Field_5_27; // 0x98
		::System::Action_1<::System::Boolean>* Field_5_28; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISSELECT_OFFSET))(this);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISFOCUS_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIButtonBase* get_Button()
		{
			return ((::UnityEngine::UI::Extension::UIButtonBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_BUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ActivateOnSelect()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONSELECT_OFFSET))(this);
		}

		::System::Void set_ActivateOnSelect(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONSELECT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasFocusUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASFOCUSUI_OFFSET))(this);
		}

		::System::Boolean get_IsWeakFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISWEAKFOCUS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GameObject*>* get_ActivateOnWeakFocusList()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONWEAKFOCUSLIST_OFFSET))(this);
		}

		::System::Void set_ActivateOnWeakFocusList(::Il2CppArray<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONWEAKFOCUSLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasWeakFocusUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASWEAKFOCUSUI_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::Action_1<::System::Boolean>* get_OnSelectChanged()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONSELECTCHANGED_OFFSET))(this);
		}

		::System::Void set_OnSelectChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONSELECTCHANGED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Boolean>* get_OnFocusStateChanged()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONFOCUSSTATECHANGED_OFFSET))(this);
		}

		::System::Void set_OnFocusStateChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONFOCUSSTATECHANGED_OFFSET))(this, a1);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_AWAKE_OFFSET))(this);
		}

		::System::Boolean ShouldIgnore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDIGNORE_OFFSET))(this);
		}

		::System::Boolean ShouldExclude()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDEXCLUDE_OFFSET))(this);
		}

		::System::Boolean Click(::MoleMole::MonoGamepadModule* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_CLICK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBtnFocusState(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBTNFOCUSSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetButtonV2(::UnityEngine::UI::Extension::UIButtonBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTONV2_OFFSET))(this, a1);
		}

		::System::Boolean TryDeactivateInputField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_TRYDEACTIVATEINPUTFIELD_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean a1, ::MoleMole::MonoGamepadModule* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::MonoGamepadModule*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETSELECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_160C17CB65B037A2(::System::Boolean a1, ::MoleMole::MonoGamepadModule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_160C17CB65B037A2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* Method_5_2E0C51FDF21DA52C()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_2E0C51FDF21DA52C_OFFSET))(this);
		}

		::System::Void Method_5_DEE9AC9242A07128(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_DEE9AC9242A07128_OFFSET))(this, a1);
		}

		::System::Void Method_5_53A95D7F26B7A0DC(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_53A95D7F26B7A0DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_050D955490C4C3D0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_050D955490C4C3D0_OFFSET))(this);
		}

		::System::Void Method_5_7D008406A3311600()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_7D008406A3311600_OFFSET))(this);
		}

		::System::Void Method_5_3CAB3F134E5CEF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_3CAB3F134E5CEF52_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_D8B59F34B62564EC(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_D8B59F34B62564EC_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D06908BA5951172(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_9D06908BA5951172_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_DB67EEFB041425EC_OFFSET))(this);
		}

		::System::Void Method_5_56E8ED155DF34A44()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_56E8ED155DF34A44_OFFSET))(this);
		}

		::System::String* Method_5_410589D224C92E30(::UnityEngine::Transform* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_410589D224C92E30_OFFSET))(this, a1);
		}

		::System::Void Method_5_FFDA922A11CAA698(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FFDA922A11CAA698_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadModule* Method_5_C28FD3DCE36A1B99()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_C28FD3DCE36A1B99_OFFSET))(this);
		}

		::System::Void Method_5_DEE9AC9242A07128_1(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_DEE9AC9242A07128_1_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadSelectable* Method_5_F073AB35FFD90830(::System::Boolean a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_F073AB35FFD90830_OFFSET))(this, a1);
		}

		::System::Void Method_5_829093B8270F20B5(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_829093B8270F20B5_OFFSET))(this, a1);
		}

		::System::Void Method_5_AD4F6DA9E13A593D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_AD4F6DA9E13A593D_OFFSET))(this);
		}
	};
}
