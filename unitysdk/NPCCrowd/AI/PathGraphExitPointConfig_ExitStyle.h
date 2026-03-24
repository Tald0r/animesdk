#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointConfig_ExitStyle_TypeDefinitionIndex = 61950;

	enum class PathGraphExitPointConfig_ExitStyle : ::System::Int32
	{
		MoveFromSplineStartPoint = 3,
		ExitAtSplineNearestPoint = 2,
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineEndPoint = 1,
		ExitAtSplineStartPoint = 0,
		MoveFromSplineEndPoint = 4,
	};
}
