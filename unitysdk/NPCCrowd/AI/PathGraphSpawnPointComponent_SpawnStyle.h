#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_SpawnStyle_TypeDefinitionIndex = 77647;

	enum class PathGraphSpawnPointComponent_SpawnStyle : ::System::Int32
	{
		MoveToSplineEndPoint = 4,
		TeleportToSplineStartPoint = 0,
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineNearestPoint = 2,
		MoveToSplineStartPoint = 3,
		TeleportToSplineEndPoint = 1,
		MoveToSplineNearestPoint = 5,
	};
}
