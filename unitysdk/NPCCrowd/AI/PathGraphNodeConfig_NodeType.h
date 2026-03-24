#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphNodeConfig_NodeType_TypeDefinitionIndex = 79285;

	enum class PathGraphNodeConfig_NodeType : ::System::Int32
	{
		None = 0,
		Spline = 1,
		Connector = 2,
	};
}
