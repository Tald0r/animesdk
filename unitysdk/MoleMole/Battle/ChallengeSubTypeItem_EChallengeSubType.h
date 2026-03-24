#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeItem_EChallengeSubType_TypeDefinitionIndex = 50863;

	enum class ChallengeSubTypeItem_EChallengeSubType : ::System::Int16
	{
		LevelConditionLink = 7,
		None = -1,
		MonsterKill = 1,
		RegionVisited = 6,
		ExploreCollect = 4,
		OccupyInteractive = 5,
		ManualCondition = 8,
		CharacterStatus = 2,
		AliveOrNpcGuard = 3,
	};
}
