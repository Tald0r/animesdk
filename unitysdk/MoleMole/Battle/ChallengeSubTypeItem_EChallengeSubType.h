#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeItem_EChallengeSubType_TypeDefinitionIndex = 53876;

	enum class ChallengeSubTypeItem_EChallengeSubType : ::System::Int16
	{
		RegionVisited = 6,
		ManualCondition = 8,
		OccupyInteractive = 5,
		CharacterStatus = 2,
		LevelConditionLink = 7,
		ExploreCollect = 4,
		None = -1,
		MonsterKill = 1,
		AliveOrNpcGuard = 3,
	};
}
