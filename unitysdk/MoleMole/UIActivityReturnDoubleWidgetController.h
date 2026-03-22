#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BackFlowWidget.h"

class Class_2_CBC0729A17A0609D;
namespace MoleMole { class UIActivityReturnDoubleRowItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralStaminaShowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_INITDOUBLEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA30AF00)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA30AB00)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA30AD20)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONOPENRETURNDOUBLEWIDGET_OFFSET UNITYSDK_OFFSET(0xA30A610)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA30A6D0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA30AE20)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA30A520)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA30A590)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_SETDOUBLEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA30A8A0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA30B0F0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA30B120)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA30B190)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA30B1F0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA30B260)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA30B2E0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA30B2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnDoubleWidgetController_TypeDefinitionIndex = 49724;

	class UIActivityReturnDoubleWidgetController : public ::MoleMole::BackFlowWidget
	{
	public:
		::Class_2_CBC0729A17A0609D* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>* itemWidgetList; // 0x2D0
		::MoleMole::UIGeneralStaminaShowWidgetController* staminaShowController; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenReturnDoubleWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONOPENRETURNDOUBLEWIDGET_OFFSET))(this);
		}

		::System::Void InitDoubleBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_INITDOUBLEBUFFINFO_OFFSET))(this);
		}

		::System::Void SetDoubleBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_SETDOUBLEBUFFINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
