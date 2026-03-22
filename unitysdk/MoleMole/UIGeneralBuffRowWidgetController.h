#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7369EF3AE6F53ACE;
namespace MoleMole { class GeneralBuffRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFA6200)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFA62A0)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFA5930)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFA5B10)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0xBFA5C30)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBFA6650)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_REGISTERCLICKCB_OFFSET UNITYSDK_OFFSET(0xBFA6380)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xBFA65C0)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xBFA63F0)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA66D0)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xBFA6700)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFA6720)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFA6790)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFA6810)
#define MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFA6870)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBuffRowWidgetController_TypeDefinitionIndex = 40264;

	class UIGeneralBuffRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7369EF3AE6F53ACE* _view; // 0x2A0
		::MoleMole::GeneralBuffRowContext* _context; // 0x2A8
		::System::Action* _onClick; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RegisterClickCb(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_REGISTERCLICKCB_OFFSET))(this, callback);
		}

		::System::Boolean TriggerButtonClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, active);
		}

		::System::Void RefreshView(::MoleMole::GeneralBuffRowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GeneralBuffRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void RefreshView_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
