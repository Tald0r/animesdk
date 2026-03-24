#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_881C52611D18C31A;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9EED530)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9EED5D0)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x9EEDC30)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x9EED6B0)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEDEF0)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9EEDF20)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9EEDF90)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusShowRowWidgetController_TypeDefinitionIndex = 78900;

	class UIVirusShowRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_881C52611D18C31A* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::Int32 questID, ::System::Int32 virusID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, questID, virusID);
		}

		::System::Void RefreshCount(::System::Int32 curCount, ::System::Int32 lastCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_REFRESHCOUNT_OFFSET))(this, curCount, lastCount);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
