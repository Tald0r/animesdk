#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_MISSIONTIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x747A7A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_MissionTipData_TypeDefinitionIndex = 70957;

	class UIMissionTipsContainerWidgetController_MissionTipData : public ::System::Object
	{
	public:
		::System::Int32 DelayTime; // 0x10
		::System::Int32 QuestID; // 0x14
		::System::Boolean IsFadeOut; // 0x18
		::System::Boolean IsModified; // 0x19
		::System::Boolean IsFromResume; // 0x1A
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType TipType; // 0x1C

		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_MISSIONTIPDATA__CTOR_OFFSET))(this, tipType, fromResume, questID);
		}
	};
}
