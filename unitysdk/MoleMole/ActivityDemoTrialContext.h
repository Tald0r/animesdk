#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityDemoTrialContext_EShowType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_79526D80B8F6897C;

#define MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x620FA40)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityDemoTrialContext_TypeDefinitionIndex = 47338;

	class ActivityDemoTrialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_79526D80B8F6897C* notificationNode; // 0x28
		::System::Int32 weaponId; // 0x30
		::System::Int32 gachaScheduleId; // 0x34
		::System::Boolean isFocus; // 0x38
		::System::Boolean hideNumImage; // 0x39
		::System::Boolean canDirectTake; // 0x3A
		::System::Boolean isSelect; // 0x3B
		::System::Int32 gachaId; // 0x3C
		::MoleMole::ActivityDemoTrialContext_EShowType showType; // 0x40
		::System::Int32 trialRoleID; // 0x44
		::System::Boolean muteSound; // 0x48
		::System::Boolean isCanClick; // 0x49
		::System::Int32 trialQuestID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
