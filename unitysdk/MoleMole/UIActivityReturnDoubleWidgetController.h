#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BackFlowWidget.h"

class Class_2_CBC0729A17A0609D;
namespace MoleMole { class UIActivityReturnDoubleRowItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralStaminaShowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_INITDOUBLEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xB735F50)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB735B50)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xB735D70)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONOPENRETURNDOUBLEWIDGET_OFFSET UNITYSDK_OFFSET(0xB735670)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB735730)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB735E70)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB735580)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB7355F0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER_SETDOUBLEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xB7358F0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB736140)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB736170)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xB7361E0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB736240)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB7362B0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB736330)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB736340)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnDoubleWidgetController_TypeDefinitionIndex = 68876;

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
