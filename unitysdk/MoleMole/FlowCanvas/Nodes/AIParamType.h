#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AIParamType_TypeDefinitionIndex = 49452;

	enum class AIParamType : ::System::Int32
	{
		Int = 1,
		String = 2,
		Float = 0,
		Boolean = 3,
	};
}
