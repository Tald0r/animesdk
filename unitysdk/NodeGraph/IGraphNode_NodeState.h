#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphNode_NodeState_TypeDefinitionIndex = 56376;

	enum class IGraphNode_NodeState : ::System::Int32
	{
		Create = 0,
		Done = 2,
		Active = 1,
	};
}
