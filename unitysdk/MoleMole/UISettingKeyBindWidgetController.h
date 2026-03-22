#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_00CE3360E2CE5BB6;
class Class_2_A8C94EA612F5CBF3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralKeyBindingsTipsPopWindowController; }
namespace MoleMole { class UIKeyBindingContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA3FD990)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xA3FE050)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3FDC50)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONKEYBINDINGDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xA3FE230)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA3FE2C0)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3FDCF0)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3FD630)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3FD760)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET UNITYSDK_OFFSET(0xA3FDE60)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA3FDDD0)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FE3A0)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET UNITYSDK_OFFSET(0xA3FE3E0)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_1_OFFSET UNITYSDK_OFFSET(0xA3FE470)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_2_OFFSET UNITYSDK_OFFSET(0xA3FE500)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_3_OFFSET UNITYSDK_OFFSET(0xA3FE5A0)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3FE720)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3FE790)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3FE810)
#define MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3FE870)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingKeyBindWidgetController_TypeDefinitionIndex = 37660;

	class UISettingKeyBindWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A8C94EA612F5CBF3* _view; // 0x2A0
		::System::Boolean _isSettingOnUIDisable; // 0x2A8
		::MoleMole::UIKeyBindingContext* _context; // 0x2B0
		::MoleMole::LogicButtonInputType _logicButtonType; // 0x2B8
		::Class_1_00CE3360E2CE5BB6* _keyPanelItem; // 0x2C0
		::System::Boolean _isComboKeyValid; // 0x2C8
		::MoleMole::LogicButtonInputType _comboLogicButtonType; // 0x2CC
		::Class_1_00CE3360E2CE5BB6* _comboKeyPanelItem; // 0x2D0
		::MoleMole::UIGeneralKeyBindingsTipsPopWindowController* _keyBindingCtrl; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnKeyBindingDialogClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONKEYBINDINGDIALOGCLOSE_OFFSET))(this);
		}

		::System::Void OnSettingOnUIDisableStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshSettingOnUIDisableState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__2_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__2_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_1_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__2_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_2_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__2_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER__ONUIOPEN_B__2_3_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGKEYBINDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
