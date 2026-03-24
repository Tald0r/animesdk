#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISWITCHTEAMBATTLEACTIVITYLEVELINFODIALOGPAGECONTROLLER_CONTEXT_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x970C870)
#define MOLEMOLE_UISWITCHTEAMBATTLEACTIVITYLEVELINFODIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x970C8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamBattleActivityLevelInfoDialogPageController_Context_TypeDefinitionIndex = 47763;

	class UISwitchTeamBattleActivityLevelInfoDialogPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 activityId; // 0x28
		::System::Int32 generalLevelId; // 0x2C
		::System::Boolean noNeedDarkAnimOnBack; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLEACTIVITYLEVELINFODIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_QuestId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLEACTIVITYLEVELINFODIALOGPAGECONTROLLER_CONTEXT_GET_QUESTID_OFFSET))(this);
		}
	};
}
