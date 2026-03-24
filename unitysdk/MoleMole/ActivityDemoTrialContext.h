#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityDemoTrialContext_EShowType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5A585DEB704A07E2;

#define MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x84E33F0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityDemoTrialContext_TypeDefinitionIndex = 37642;

	class ActivityDemoTrialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_5A585DEB704A07E2* notificationNode; // 0x28
		::System::Boolean hideNumImage; // 0x30
		::System::Boolean isSelect; // 0x31
		::System::Boolean canDirectTake; // 0x32
		::System::Boolean isFocus; // 0x33
		::System::Int32 gachaScheduleId; // 0x34
		::System::Int32 trialQuestID; // 0x38
		::System::Int32 weaponId; // 0x3C
		::System::Int32 gachaId; // 0x40
		::MoleMole::ActivityDemoTrialContext_EShowType showType; // 0x44
		::System::Boolean muteSound; // 0x48
		::System::Boolean isCanClick; // 0x49
		::System::Int32 trialRoleID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
