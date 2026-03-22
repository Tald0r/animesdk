#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4F9C1A2827CAB53.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/Struct_2_55B1720D3ECF0A32.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class NotificationBadgeEx; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_ADDJUMPCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x7A3F260)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDREDSIGN_OFFSET UNITYSDK_OFFSET(0x7A3DB10)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A3E5C0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATEINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x7A3D1C0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATETEXTKEY_OFFSET UNITYSDK_OFFSET(0x7A3CE20)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x7A3D2E0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETEFFECTENABLED_OFFSET UNITYSDK_OFFSET(0x7A3F1F0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETTEXT_OFFSET UNITYSDK_OFFSET(0x7A3EE90)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x7A3E1A0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_REBINDVIEWCALLBACKADVANCE_OFFSET UNITYSDK_OFFSET(0x7A3E350)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_REMOVECLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x7A3E4F0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x7A3E1D0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETARGS_OFFSET UNITYSDK_OFFSET(0x7A3F6A0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_1_OFFSET UNITYSDK_OFFSET(0x7A3D150)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x7A3CF40)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_1_OFFSET UNITYSDK_OFFSET(0x7A3CDB0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_OFFSET UNITYSDK_OFFSET(0x7A3C850)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_1_OFFSET UNITYSDK_OFFSET(0x7A3D460)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x7A3D350)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETEFFECTENABLED_OFFSET UNITYSDK_OFFSET(0x7A3EF10)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x7A3D050)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETKEY_OFFSET UNITYSDK_OFFSET(0x7A3F630)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x7A3E2D0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTARGS_OFFSET UNITYSDK_OFFSET(0x7A3E670)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x7A3EBA0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTKEY_OFFSET UNITYSDK_OFFSET(0x7A3C970)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x7A3DC20)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x7A3DA90)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_TRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x7A3F4F0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A3F710)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralButtonController_TypeDefinitionIndex = 64070;

	class UIGeneralButtonController : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::Transform* LockRoot; // 0x80
		::UnityEngine::UI::Extension::UIButtonEx* button; // 0x88
		::UnityEngine::UI::Extension::UILocalizationText* buttonText; // 0x90
		::UnityEngine::UI::Extension::UILocalizationText* buttonEffectText; // 0x98
		::System::Boolean effectOn; // 0xA0
		::UnityEngine::UI::Extension::UILocalizationText* buttonTextGrey; // 0xA8
		::UnityEngine::UI::Extension::UILocalizationText* buttonTextWhite; // 0xB0
		::UnityEngine::RectTransform* arrowBg; // 0xB8
		::UnityEngine::RectTransform* grayBg; // 0xC0
		::MoleMole::NotificationBadgeEx* RedSign; // 0xC8
		::Enum_3_B4F9C1A2827CAB53 _buttonState; // 0xD0
		::System::Collections::Generic::Dictionary_2<::Enum_3_B4F9C1A2827CAB53, ::System::String*>* _buttonStateTextKeys; // 0xD8
		::System::Collections::Generic::Dictionary_2<::Enum_3_B4F9C1A2827CAB53, ::System::Boolean>* _buttonStateInteractable; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetButtonStateTextKey(::Enum_3_B4F9C1A2827CAB53 state, ::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B4F9C1A2827CAB53, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_OFFSET))(this, state, textKey);
		}

		::System::Void SetButtonStateTextKey_1(::System::Collections::Generic::Dictionary_2<::Enum_3_B4F9C1A2827CAB53, ::System::String*>* stateTextKeys)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_B4F9C1A2827CAB53, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_1_OFFSET))(this, stateTextKeys);
		}

		::System::String* GetButtonStateTextKey(::Enum_3_B4F9C1A2827CAB53 state)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_B4F9C1A2827CAB53))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATETEXTKEY_OFFSET))(this, state);
		}

		::System::Void SetButtonStateInteractable(::Enum_3_B4F9C1A2827CAB53 state, ::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B4F9C1A2827CAB53, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_OFFSET))(this, state, interactable);
		}

		::System::Void SetButtonStateInteractable_1(::System::Collections::Generic::Dictionary_2<::Enum_3_B4F9C1A2827CAB53, ::System::Boolean>* stateInteractable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_B4F9C1A2827CAB53, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_1_OFFSET))(this, stateInteractable);
		}

		::System::Boolean GetButtonStateInteractable(::Enum_3_B4F9C1A2827CAB53 state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_B4F9C1A2827CAB53))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATEINTERACTABLE_OFFSET))(this, state);
		}

		::Enum_3_B4F9C1A2827CAB53 GetButtonState()
		{
			return ((::Enum_3_B4F9C1A2827CAB53(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATE_OFFSET))(this);
		}

		::System::Void SetButtonState(::Struct_2_55B1720D3ECF0A32 param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_55B1720D3ECF0A32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_OFFSET))(this, param);
		}

		::System::Void BindRedSign(::Share::ENotificationBadgeType redType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDREDSIGN_OFFSET))(this, redType);
		}

		::System::Void SetButtonState_1(::Enum_3_B4F9C1A2827CAB53 state, ::System::String* textStr)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B4F9C1A2827CAB53, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_1_OFFSET))(this, state, textStr);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void SafeSetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SAFESETACTIVE_OFFSET))(this, value);
		}

		::System::Void SetLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETLOCK_OFFSET))(this, value);
		}

		::System::Void RebindViewCallbackAdvance(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_REBINDVIEWCALLBACKADVANCE_OFFSET))(this, callback);
		}

		::System::Void BindViewCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDVIEWCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveClickListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_REMOVECLICKLISTENER_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTextKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTKEY_OFFSET))(this, key);
		}

		::System::Void SetTextArgs(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTARGS_OFFSET))(this, args);
		}

		::System::Void SetTextColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTCOLOR_OFFSET))(this, color);
		}

		::System::String* GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETTEXT_OFFSET))(this);
		}

		::System::Void SetEffectEnabled(::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETEFFECTENABLED_OFFSET))(this, on);
		}

		::System::Boolean GetEffectEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETEFFECTENABLED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void AddJumpClickListener(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_ADDJUMPCLICKLISTENER_OFFSET))(this, callback);
		}

		::System::Boolean TriggerButtonClick(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_TRIGGERBUTTONCLICK_OFFSET))(this, isSkipCDCheck);
		}

		::System::Void SetKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETKEY_OFFSET))(this, key);
		}

		::System::Void SetArgs(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETARGS_OFFSET))(this, args);
		}
	};
}
