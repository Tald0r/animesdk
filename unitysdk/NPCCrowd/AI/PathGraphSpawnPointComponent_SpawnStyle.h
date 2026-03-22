#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_SpawnStyle_TypeDefinitionIndex = 65823;

	enum class PathGraphSpawnPointComponent_SpawnStyle : ::System::Int32
	{
		TeleportToSplineNearestPoint = 2,
		MoveToSplineEndPoint = 4,
		MoveBlendWithSplinePoints = 6,
		MoveToSplineStartPoint = 3,
		TeleportToSplineEndPoint = 1,
		TeleportToSplineStartPoint = 0,
		MoveToSplineNearestPoint = 5,
	};
}
