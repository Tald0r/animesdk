#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointComponent_StopMode_TypeDefinitionIndex = 41566;

	enum class PathGraphCrossingPointComponent_StopMode : ::System::Int32
	{
		OnBothImmediately = 4,
		OnStopNodeImmediately = 2,
		OnStartNodeImmediately = 3,
		OnStopNodeExit = 0,
		OnStartNodeEnter = 1,
	};
}
