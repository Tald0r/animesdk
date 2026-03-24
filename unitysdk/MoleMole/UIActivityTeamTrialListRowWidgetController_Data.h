#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIACTIVITYTEAMTRIALLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1E490)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialListRowWidgetController_Data_TypeDefinitionIndex = 78935;

	class UIActivityTeamTrialListRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 questID; // 0x10
		::System::Int32 activityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
