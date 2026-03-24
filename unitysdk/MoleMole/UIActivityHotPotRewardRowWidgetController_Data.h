#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind; }

#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC35D240)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotRewardRowWidgetController_Data_TypeDefinitionIndex = 73253;

	class UIActivityHotPotRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
