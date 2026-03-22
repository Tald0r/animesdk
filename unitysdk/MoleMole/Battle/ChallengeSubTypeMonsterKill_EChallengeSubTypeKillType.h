#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType_TypeDefinitionIndex = 54845;

	enum class ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType : ::System::Int16
	{
		ULTRA_KILL = 2,
		FLOATING_KILL = 4,
		COUNTER_KILL = 9,
		None = -1,
		DESTRUCTION_KILL = 6,
		ASSAULT_AID_KILL = 7,
		QTE_Kill = 1,
		ANY_SKILL_KILL = 5,
		TRAP_KILL = 8,
		BRANCH_KILL = 3,
	};
}
