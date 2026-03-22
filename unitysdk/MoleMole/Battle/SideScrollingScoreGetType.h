#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingScoreGetType_TypeDefinitionIndex = 53607;

	enum class SideScrollingScoreGetType : ::System::Int32
	{
		PerfectDodge = 4,
		KillMonsterElite = 3,
		None = 0,
		KillMonsterNormal = 1,
		KillMonsterNormalLevelUp = 2,
		ExPunch = 5,
	};
}
