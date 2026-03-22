#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeSelectionFallback_TypeDefinitionIndex = 26977;

	enum class StateTreeSelectionFallback : ::System::Int32
	{
		None = 0,
		NextSelectableSibling = 1,
	};
}
