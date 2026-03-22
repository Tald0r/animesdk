#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8B36B2DB492DBF9B_5;
namespace MoleMole { class ActivityOVAMainStoryContext; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_CREATEITEMHANDLE_OFFSET UNITYSDK_OFFSET(0xB8F7250)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB8F70D0)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB8F7170)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB8F6DA0)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB8F6ED0)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F7330)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB8F7360)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB8F73D0)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB8F7450)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB8F74B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVAMainStoryWidgetController_TypeDefinitionIndex = 61278;

	class UIActivityOVAMainStoryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8B36B2DB492DBF9B_5* _view; // 0x2A0
		::MoleMole::ActivityOVAMainStoryContext* context; // 0x2A8
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _compRewardBtn; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemHandle(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_CREATEITEMHANDLE_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
