#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_14B8F1A93C1DC200;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendSystemWidgetController; }

#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA28D070)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_INITACTIVETABS_OFFSET UNITYSDK_OFFSET(0xA28D5B0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA28D080)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONFRIENDTABCLICK_OFFSET UNITYSDK_OFFSET(0xA28D2D0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA28D920)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA28DAD0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA28D120)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA28D350)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA28DB60)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA28DB70)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA28DBE0)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA28DC50)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA28DC60)
#define MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA28DC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPageController_TypeDefinitionIndex = 69006;

	class UIFriendSystemPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_14B8F1A93C1DC200* _view; // 0x2F8
		::MoleMole::UIFriendSystemWidgetController* _friendSystemWidgetController; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnFriendTabClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONFRIENDTABCLICK_OFFSET))(this, index);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitActiveTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_INITACTIVETABS_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
