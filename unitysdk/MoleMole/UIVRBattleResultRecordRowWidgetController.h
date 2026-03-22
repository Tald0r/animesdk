#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_75FB4A09078427E5_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVRBattleResultRecordRowWidgetController_RecordData; }

#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9A2CCA0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9A2CD40)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9A2CB50)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9A2CBF0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x9A2CE20)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A2D0A0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9A2D0D0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9A2D140)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9A2D1C0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9A2D220)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBattleResultRecordRowWidgetController_TypeDefinitionIndex = 47289;

	class UIVRBattleResultRecordRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5_1* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::MoleMole::UIVRBattleResultRecordRowWidgetController_RecordData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVRBattleResultRecordRowWidgetController_RecordData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
