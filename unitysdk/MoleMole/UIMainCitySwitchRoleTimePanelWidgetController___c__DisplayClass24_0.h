#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC04110)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS24_0__REFRESHTIME_B__0_OFFSET UNITYSDK_OFFSET(0xAC04120)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass24_0_TypeDefinitionIndex = 70188;

	class UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* __4__this; // 0x10
		::System::Single targetMinues; // 0x18
		::System::Single currentMinues; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTime_b__0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS24_0__REFRESHTIME_B__0_OFFSET))(this, value);
		}
	};
}
