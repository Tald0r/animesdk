#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowType_TypeDefinitionIndex = 36809;

	enum class NavmeshToPathFollowType : ::System::Int32
	{
		AlreadyRes = 3,
		CalcObstacle = 2,
		IgnoreObstacle = 1,
		Default = 0,
	};
}
