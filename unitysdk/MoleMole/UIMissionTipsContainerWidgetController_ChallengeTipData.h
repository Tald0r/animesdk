#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipData.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_CHALLENGETIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA41E500)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_ChallengeTipData_TypeDefinitionIndex = 70933;

	class UIMissionTipsContainerWidgetController_ChallengeTipData : public ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData
	{
	public:
		::System::UInt32 GroupId; // 0x20
		::System::Int32 ChallengeID; // 0x24
		::System::Boolean NeedPlayFadeInAnim; // 0x28

		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_CHALLENGETIPDATA__CTOR_OFFSET))(this, tipType, fromResume, questID);
		}
	};
}
