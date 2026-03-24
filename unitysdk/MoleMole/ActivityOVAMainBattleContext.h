#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_8A5136246E588D6D;

#define MOLEMOLE_ACTIVITYOVAMAINBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EEE20)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVAMainBattleContext_TypeDefinitionIndex = 53403;

	class ActivityOVAMainBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_8A5136246E588D6D* BattleEntryData; // 0x28
		::System::Int32 focusQuest; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVAMAINBATTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
