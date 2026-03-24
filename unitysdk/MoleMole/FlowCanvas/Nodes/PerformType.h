#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PerformType_TypeDefinitionIndex = 56766;

	enum class PerformType : ::System::Int32
	{
		End = 1,
		Custom = 2,
		Begin = 0,
	};
}
