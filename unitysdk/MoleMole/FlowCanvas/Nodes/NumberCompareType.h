#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int NumberCompareType_TypeDefinitionIndex = 56279;

	enum class NumberCompareType : ::System::Int32
	{
		Greater = 0,
		LessEqual = 4,
		Less = 3,
		Equal = 2,
		GreaterEqual = 1,
	};
}
