#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/MoleMole/UISuibianTempleProductionPanelWidgetController_BuddyState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xCA756C0)
#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA75790)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleProductionPanelWidgetController_UIState_TypeDefinitionIndex = 77467;

	class UISuibianTempleProductionPanelWidgetController_UIState : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TrackItemMap; // 0x60
		::Class_0_16E4307DCC419505_103<::System::Boolean>* GatherEnable; // 0x68
		::Class_0_16E4307DCC419505_103<::MoleMole::UISuibianTempleProductionPanelWidgetController_BuddyState>* State; // 0x70
		::Class_0_16E4307DCC419505_103<::System::Boolean>* IsAutoGet; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
