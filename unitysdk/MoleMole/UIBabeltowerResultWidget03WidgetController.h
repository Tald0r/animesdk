#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3E1A0459A6647B99_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDF0E560)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDF0E600)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDF0E410)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDF0E4B0)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xDF0E6E0)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDF0E8E0)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDF0E910)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDF0E980)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDF0EA00)
#define MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDF0EA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerResultWidget03WidgetController_TypeDefinitionIndex = 77177;

	class UIBabeltowerResultWidget03WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3E1A0459A6647B99_11* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 score, ::System::Boolean showMvp, ::System::Boolean isMvp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, score, showMvp, isMvp);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRESULTWIDGET03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
