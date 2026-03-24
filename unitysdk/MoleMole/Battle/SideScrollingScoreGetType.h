#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingScoreGetType_TypeDefinitionIndex = 78288;

	enum class SideScrollingScoreGetType : ::System::Int32
	{
		KillMonsterElite = 3,
		ExPunch = 5,
		None = 0,
		PerfectDodge = 4,
		KillMonsterNormal = 1,
		KillMonsterNormalLevelUp = 2,
	};
}
