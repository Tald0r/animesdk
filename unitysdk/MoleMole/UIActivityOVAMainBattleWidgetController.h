#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_8C83ECDA6146AF10;
class Class_2_68D38DAD1613A778_5;
namespace MoleMole { class ActivityOVAMainBattleContext; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_CREATITEM_OFFSET UNITYSDK_OFFSET(0xD1D5790)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1D5610)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1D56B0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1D5030)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD1D51A0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUPDATEUI_OFFSET UNITYSDK_OFFSET(0xD1D5870)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_SHOWBATTLEROW_OFFSET UNITYSDK_OFFSET(0xD1D52D0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D58F0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1D5920)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1D5990)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1D5A10)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD1D5A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVAMainBattleWidgetController_TypeDefinitionIndex = 78655;

	class UIActivityOVAMainBattleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_68D38DAD1613A778_5* _view; // 0x2A0
		::MoleMole::ActivityOVAMainBattleContext* context; // 0x2A8
		::Class_1_8C83ECDA6146AF10* mData; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowBattleRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_SHOWBATTLEROW_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_CREATITEM_OFFSET))(this, arg);
		}

		::System::Void OnUpdateUI(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUPDATEUI_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
