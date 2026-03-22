#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICpInfoChildWindowController_UITagInfo.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E361F896FA480D41;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EE8C60)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EE8CF0)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EE8B30)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EE8BC0)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x18EE8DC0)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE9210)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EE9240)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EE92B0)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EE9330)
#define MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EE9390)

namespace MoleMole
{
	inline static constexpr unsigned int UICpTagInfoWidgetController_TypeDefinitionIndex = 81467;

	class UICpTagInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E361F896FA480D41* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateData(::MoleMole::UICpInfoChildWindowController_UITagInfo inf)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICpInfoChildWindowController_UITagInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER_UPDATEDATA_OFFSET))(this, inf);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
