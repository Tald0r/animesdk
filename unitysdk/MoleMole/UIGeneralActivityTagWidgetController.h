#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F0E18D2802507F5.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_CE751D957B54564C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x8C06420)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C06030)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8C061B0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C060D0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C05EE0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C05F80)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETACTIVITYTAG_OFFSET UNITYSDK_OFFSET(0x8C06740)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETCONSOLEREGIONACTIVE_OFFSET UNITYSDK_OFFSET(0x8C06490)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETTAGICON_OFFSET UNITYSDK_OFFSET(0x8C06540)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C06830)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C06860)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8C068D0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C06940)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C069C0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C06A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagWidgetController_TypeDefinitionIndex = 76561;

	class UIGeneralActivityTagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_CE751D957B54564C* _view; // 0x2A0
		::System::Int32 tagRuleID; // 0x2A8
		::System::Boolean isExist; // 0x2AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::Class_2_CE751D957B54564C* GetView()
		{
			return ((::Class_2_CE751D957B54564C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetConsoleRegionActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETCONSOLEREGIONACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetTagIcon(::Enum_3_5F0E18D2802507F5 tagIcon)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5F0E18D2802507F5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETTAGICON_OFFSET))(this, tagIcon);
		}

		::System::Void SetActivityTag(::System::String* stringTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETACTIVITYTAG_OFFSET))(this, stringTag);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
