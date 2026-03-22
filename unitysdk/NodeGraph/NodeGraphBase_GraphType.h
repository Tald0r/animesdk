#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphType_TypeDefinitionIndex = 45146;

	enum class NodeGraphBase_GraphType : ::System::Int32
	{
		Macro = 2,
		Function = 1,
		Normal = 0,
		Child = 3,
	};
}
