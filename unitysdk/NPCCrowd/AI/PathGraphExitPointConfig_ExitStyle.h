#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointConfig_ExitStyle_TypeDefinitionIndex = 72120;

	enum class PathGraphExitPointConfig_ExitStyle : ::System::Int32
	{
		MoveFromSplineStartPoint = 3,
		MoveFromSplineNearestPoint = 5,
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineEndPoint = 4,
		ExitAtSplineEndPoint = 1,
		ExitAtSplineStartPoint = 0,
		ExitAtSplineNearestPoint = 2,
	};
}
