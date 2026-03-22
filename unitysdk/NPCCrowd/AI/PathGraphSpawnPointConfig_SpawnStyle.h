#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointConfig_SpawnStyle_TypeDefinitionIndex = 75197;

	enum class PathGraphSpawnPointConfig_SpawnStyle : ::System::Int32
	{
		TeleportToSplineEndPoint = 1,
		MoveToSplineNearestPoint = 5,
		TeleportToSplineStartPoint = 0,
		MoveToSplineEndPoint = 4,
		MoveToSplineStartPoint = 3,
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineNearestPoint = 2,
	};
}
