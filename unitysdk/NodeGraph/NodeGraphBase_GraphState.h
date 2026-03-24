#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphState_TypeDefinitionIndex = 68781;

	enum class NodeGraphBase_GraphState : ::System::Int32
	{
		Running = 2,
		None = 0,
		End = 3,
		Init = 1,
	};
}
