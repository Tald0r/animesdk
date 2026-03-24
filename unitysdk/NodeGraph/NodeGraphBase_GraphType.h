#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphType_TypeDefinitionIndex = 68780;

	enum class NodeGraphBase_GraphType : ::System::Int32
	{
		Child = 3,
		Function = 1,
		Normal = 0,
		Macro = 2,
	};
}
