#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphState_TypeDefinitionIndex = 45147;

	enum class NodeGraphBase_GraphState : ::System::Int32
	{
		End = 3,
		Running = 2,
		Init = 1,
		None = 0,
	};
}
