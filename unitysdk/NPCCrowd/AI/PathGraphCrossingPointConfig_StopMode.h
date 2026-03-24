#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointConfig_StopMode_TypeDefinitionIndex = 64874;

	enum class PathGraphCrossingPointConfig_StopMode : ::System::Int32
	{
		OnStopNodeExit = 0,
		OnStopNodeImmediately = 2,
		OnStartNodeImmediately = 3,
		OnBothImmediately = 4,
		OnStartNodeEnter = 1,
	};
}
