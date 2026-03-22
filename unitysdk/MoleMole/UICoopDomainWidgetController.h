#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3EBF9B5060CE4F4.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_69CBB7FF0BE6A673_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0D0EE0)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0D0F80)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0D0D90)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0D0E30)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xC0D1060)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D1130)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0D1160)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0D11D0)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0D1250)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0D12B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopDomainWidgetController_TypeDefinitionIndex = 41703;

	class UICoopDomainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_7* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshState(::Enum_3_D3EBF9B5060CE4F4 state)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D3EBF9B5060CE4F4))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this, state);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
