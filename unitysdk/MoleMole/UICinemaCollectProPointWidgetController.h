#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C5C76936C9D491E6_1;
namespace MoleMole { class UICinemaCollectProPointContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xBEE22A0)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBEE2120)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBEE21C0)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEE1BE0)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBEE1C80)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_REFRESHITEMSTATE_OFFSET UNITYSDK_OFFSET(0xBEE1DB0)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE2430)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBEE2460)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBEE24D0)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEE2550)
#define MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBEE25B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectProPointWidgetController_TypeDefinitionIndex = 69277;

	class UICinemaCollectProPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C5C76936C9D491E6_1* _view; // 0x2A0
		::MoleMole::UICinemaCollectProPointContext* context; // 0x2A8
		::System::Int32 itemID; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshItemState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_REFRESHITEMSTATE_OFFSET))(this);
		}

		::System::Void OnClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER_ONCLICKBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
