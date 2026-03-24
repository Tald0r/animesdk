#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISWITCHTEAMBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCAAC8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamBattleContext_TypeDefinitionIndex = 68148;

	class UISwitchTeamBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 activityId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
