#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_80927B392D07AC08;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC3C4AC0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3C4890)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONJUMPBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xC3C5270)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC3C54C0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3C4E20)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3C4930)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0xC3C50E0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET UNITYSDK_OFFSET(0xC3C4F00)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C5590)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3C55F0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3C5660)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3C56E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingJumpWidgetController_TypeDefinitionIndex = 72460;

	class UISettingJumpWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_80927B392D07AC08* _view; // 0x2A0
		::System::Boolean _isSettingOnUIDisable; // 0x2A8
		::System::Int32 _hintVersion; // 0x2AC
		::Enum_3_543B6B88E17BAFE0 _settingContentType; // 0x2B0
		::MoleMole::ESystemSettingType _settingType; // 0x2B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnJumpBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONJUMPBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnSettingOnUIDisableStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshSettingOnUIDisableState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET))(this);
		}

		::System::Void RefreshNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
