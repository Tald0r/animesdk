#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphNodeConfig_NodeType_TypeDefinitionIndex = 49919;

	enum class PathGraphNodeConfig_NodeType : ::System::Int32
	{
		Spline = 1,
		None = 0,
		Connector = 2,
	};
}
