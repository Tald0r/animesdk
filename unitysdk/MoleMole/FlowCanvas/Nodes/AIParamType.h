#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AIParamType_TypeDefinitionIndex = 56027;

	enum class AIParamType : ::System::Int32
	{
		Int = 1,
		Float = 0,
		String = 2,
		Boolean = 3,
	};
}
