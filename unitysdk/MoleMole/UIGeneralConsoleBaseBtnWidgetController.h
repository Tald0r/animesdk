#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_087E0883E6EFDD1C.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_79526D80B8F6897C;
class Class_2_60DDD9C206686F44;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ADDCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x8C42040)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x8C426E0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_CLEARNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x8C42750)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x8C41B50)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITGENERALCONSOLEBTNBASE_OFFSET UNITYSDK_OFFSET(0x8C41F40)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITSETBTNENTITY_OFFSET UNITYSDK_OFFSET(0x8C41FD0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8C41CF0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_PLAYHIDETIP_OFFSET UNITYSDK_OFFSET(0x8C41A80)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETACTIVE_OFFSET UNITYSDK_OFFSET(0x8C425E0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETFOCUS_OFFSET UNITYSDK_OFFSET(0x8C424F0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x8C42400)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETCONSOLESTYLE_OFFSET UNITYSDK_OFFSET(0x8C42160)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETSORTORDER_OFFSET UNITYSDK_OFFSET(0x8C42480)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETTIPTEXTKEY_OFFSET UNITYSDK_OFFSET(0x8C41890)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x8C41B60)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SWITCHCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x8C41DA0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C427B0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8C427E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralConsoleBaseBtnWidgetController_TypeDefinitionIndex = 71934;

	class UIGeneralConsoleBaseBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::RectTransform* tipRoot; // 0x2A0
		::UnityEngine::UI::Extension::UILocalizationText* tipInfoText; // 0x2A8
		::UnityEngine::UI::Extension::UILocalizationText* tipNum; // 0x2B0
		::Class_2_A8F5ABF31E066ED4* tipIcon; // 0x2B8
		::Class_2_A8F5ABF31E066ED4* tipXImage; // 0x2C0
		::Class_2_9E3E3CDA608A4F58* TipAnimation; // 0x2C8
		::MoleMole::UIBaseController* uiController; // 0x2D0
		::MoleMole::UIGeneralButtonController* ButtonEntity; // 0x2D8
		::MoleMole::MonoGamepadModule* ConsoleModule; // 0x2E0
		::MoleMole::MonoInputKey* ConsoleInputKey; // 0x2E8
		::Class_2_60DDD9C206686F44* ConsoleBtn; // 0x2F0
		::Enum_3_087E0883E6EFDD1C styleEnum; // 0x2F8
		::MoleMole::GamepadHintKeyConfig hintStruct; // 0x300
		::MoleMole::InputLogicEventType logicEventType; // 0x360
		::System::Boolean isModuleFocus; // 0x364
		::System::Int32 sortOrder; // 0x368
		::System::Boolean _interactable; // 0x36C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTipTextKey(::System::String* textKey, ::System::String* numKey, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETTIPTEXTKEY_OFFSET))(this, textKey, numKey, iconPath);
		}

		::System::Void PlayHideTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_PLAYHIDETIP_OFFSET))(this);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void InitGeneralConsoleBtnBase(::MoleMole::MonoGamepadModule* ConsoleModule, ::MoleMole::MonoInputKey* ConsoleInputKey, ::Class_2_60DDD9C206686F44* ConsoleBtn)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoInputKey*, ::Class_2_60DDD9C206686F44*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITGENERALCONSOLEBTNBASE_OFFSET))(this, ConsoleModule, ConsoleInputKey, ConsoleBtn);
		}

		::System::Void InitSetBtnEntity(::MoleMole::UIGeneralButtonController* GuideGoBtn)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITSETBTNENTITY_OFFSET))(this, GuideGoBtn);
		}

		::System::Void AddClickListener(::UnityEngine::Events::UnityAction* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ADDCLICKLISTENER_OFFSET))(this, clickAction);
		}

		::System::Void SetConsoleStyle(::MoleMole::InputLogicEventType logicEvent, ::Enum_3_087E0883E6EFDD1C styleEnum, ::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::Enum_3_087E0883E6EFDD1C, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETCONSOLESTYLE_OFFSET))(this, logicEvent, styleEnum, textKey);
		}

		::System::Void SwitchConsoleActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SWITCHCONSOLEACTIVE_OFFSET))(this);
		}

		::System::Void SetButtonText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBUTTONTEXT_OFFSET))(this, text);
		}

		::System::Void SetSortOrder(::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETSORTORDER_OFFSET))(this, order);
		}

		::System::Void SetBtnWidgetFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void SetBtnWidgetActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETACTIVE_OFFSET))(this, isActive);
		}

		::System::Void BindNotificationNode(::Class_1_79526D80B8F6897C* notificationNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET))(this, notificationNode);
		}

		::System::Void ClearNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_CLEARNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}
	};
}
