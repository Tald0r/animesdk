#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_C832474F3EB70101_2;
namespace MoleMole { class UIActivityChainV2WidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC25FB80)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC25FB90)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC25FC30)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC2603F0)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC25FF30)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xC260300)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC260480)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC260490)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC260500)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC260570)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC260580)
#define MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xC260590)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOperationalPageController_TypeDefinitionIndex = 44212;

	class UIActivityOperationalPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_C832474F3EB70101_2* _view; // 0x308
		::MoleMole::UIActivityChainV2WidgetController* _activityChainV2Widget; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOPERATIONALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
