#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_E27192A56C924665;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewsStandChildWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONCLICKSCRATCH_OFFSET UNITYSDK_OFFSET(0xA841B60)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA841330)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONSIGNSCRSP_OFFSET UNITYSDK_OFFSET(0xA841E80)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA841AD0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA8413D0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA8419E0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SHOWCONSOLEONBUTTON_OFFSET UNITYSDK_OFFSET(0xA842080)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA842140)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0xA842150)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA842220)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA842290)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA8422A0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA8422B0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPageController_TypeDefinitionIndex = 38824;

	class UINewsStandPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* limitText; // 0x0
		::Class_2_E27192A56C924665* _view; // 0x308
		::MoleMole::UINewsStandChildWindowController* _childWindow; // 0x310
		::System::Boolean _isFocus; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickScratch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONCLICKSCRATCH_OFFSET))(this);
		}

		::System::Void OnSignScRsp(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONSIGNSCRSP_OFFSET))(this, eventArgs);
		}

		::System::Void ShowConsoleOnButton(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SHOWCONSOLEONBUTTON_OFFSET))(this, show);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
