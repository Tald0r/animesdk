#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointConfig_SpawnStyle_TypeDefinitionIndex = 54587;

	enum class PathGraphSpawnPointConfig_SpawnStyle : ::System::Int32
	{
		MoveToSplineStartPoint = 3,
		MoveToSplineNearestPoint = 5,
		MoveToSplineEndPoint = 4,
		TeleportToSplineEndPoint = 1,
		TeleportToSplineStartPoint = 0,
		TeleportToSplineNearestPoint = 2,
		MoveBlendWithSplinePoints = 6,
	};
}
