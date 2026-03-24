#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowType_TypeDefinitionIndex = 59898;

	enum class NavmeshToPathFollowType : ::System::Int32
	{
		IgnoreObstacle = 1,
		Default = 0,
		CalcObstacle = 2,
		AlreadyRes = 3,
	};
}
