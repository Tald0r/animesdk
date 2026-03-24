#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType_TypeDefinitionIndex = 66275;

	enum class ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType : ::System::Int16
	{
		QTE_Kill = 1,
		TRAP_KILL = 8,
		DESTRUCTION_KILL = 6,
		ASSAULT_AID_KILL = 7,
		None = -1,
		BRANCH_KILL = 3,
		ULTRA_KILL = 2,
		COUNTER_KILL = 9,
		FLOATING_KILL = 4,
		ANY_SKILL_KILL = 5,
	};
}
