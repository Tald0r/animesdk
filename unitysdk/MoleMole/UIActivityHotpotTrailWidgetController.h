#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_759F9F5E10B92499;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB734B90)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB734C30)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB734FD0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB734A40)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB734AE0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SAMPLE_OFFSET UNITYSDK_OFFSET(0xB7350B0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETHIGHORLOW_OFFSET UNITYSDK_OFFSET(0xB734EC0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETWIDTH_OFFSET UNITYSDK_OFFSET(0xB735220)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB7352F0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB735350)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB7353C0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB735430)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB7354B0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB735510)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotTrailWidgetController_TypeDefinitionIndex = 78951;

	class UIActivityHotpotTrailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_759F9F5E10B92499* _view; // 0x2A0
		::System::String* animKey; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetHighOrLow(::System::Boolean highOrLow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETHIGHORLOW_OFFSET))(this, highOrLow);
		}

		::System::Void Sample(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SAMPLE_OFFSET))(this, ratio);
		}

		::System::Void SetWidth(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETWIDTH_OFFSET))(this, width);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
