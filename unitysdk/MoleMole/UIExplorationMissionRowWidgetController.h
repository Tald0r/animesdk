#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ADF060EC4731546F_1.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_42A7CB1229F9AA52;
class Class_2_24456E84F3C6FD1D;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD050700)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD050880)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD0507A0)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD050660)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_SHOWQUESTSTATE_OFFSET UNITYSDK_OFFSET(0xD050F70)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD051020)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD051030)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD0510A0)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD051120)
#define MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD0511A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIExplorationMissionRowWidgetController_TypeDefinitionIndex = 59220;

	class UIExplorationMissionRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_24456E84F3C6FD1D* _view; // 0x2D0
		::Class_1_42A7CB1229F9AA52* _quest; // 0x2D8
		::Enum_3_ADF060EC4731546F_1 _questState; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowQuestState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER_SHOWQUESTSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
