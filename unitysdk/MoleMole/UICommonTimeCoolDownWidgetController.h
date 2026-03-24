#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8127D35606966C67_35;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDDD94C0)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDD9560)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDD9370)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDDD9410)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0xDDD9640)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDDD9930)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDDD9960)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDD99D0)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDD9A50)
#define MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDDD9AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICommonTimeCoolDownWidgetController_TypeDefinitionIndex = 80364;

	class UICommonTimeCoolDownWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8127D35606966C67_35* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTime(::System::Int32 currentS, ::System::Int32 totalS)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER_SETTIME_OFFSET))(this, currentS, totalS);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONTIMECOOLDOWNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
