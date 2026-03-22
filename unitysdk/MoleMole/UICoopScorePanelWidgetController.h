#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICoopScorePanelWidgetController_RecordData.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0297A7D24F4557EE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF588D0)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF58970)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF58780)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF58820)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0xBF58A50)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF58C40)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF58C70)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF58CE0)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF58D60)
#define MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF58DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopScorePanelWidgetController_TypeDefinitionIndex = 55519;

	class UICoopScorePanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0297A7D24F4557EE* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshScore(::MoleMole::UICoopScorePanelWidgetController_RecordData recordData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopScorePanelWidgetController_RecordData))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER_REFRESHSCORE_OFFSET))(this, recordData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSCOREPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
