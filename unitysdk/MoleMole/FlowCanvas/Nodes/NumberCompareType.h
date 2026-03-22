#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int NumberCompareType_TypeDefinitionIndex = 72732;

	enum class NumberCompareType : ::System::Int32
	{
		Equal = 2,
		LessEqual = 4,
		Less = 3,
		Greater = 0,
		GreaterEqual = 1,
	};
}
