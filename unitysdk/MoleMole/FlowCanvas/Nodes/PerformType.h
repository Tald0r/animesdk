#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PerformType_TypeDefinitionIndex = 39002;

	enum class PerformType : ::System::Int32
	{
		Custom = 2,
		End = 1,
		Begin = 0,
	};
}
