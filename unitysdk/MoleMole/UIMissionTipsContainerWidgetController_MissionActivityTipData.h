#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipData.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"

class Class_1_4865323EE33E9248;

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_MISSIONACTIVITYTIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA225730)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_MissionActivityTipData_TypeDefinitionIndex = 70956;

	class UIMissionTipsContainerWidgetController_MissionActivityTipData : public ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData
	{
	public:
		::Class_1_4865323EE33E9248* ActivityPopData; // 0x20

		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_MISSIONACTIVITYTIPDATA__CTOR_OFFSET))(this, tipType, fromResume);
		}
	};
}
