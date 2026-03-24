#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeSelectionFallback_TypeDefinitionIndex = 27901;

	enum class StateTreeSelectionFallback : ::System::Byte
	{
		None = 0x0,
		NextSelectableSibling = 0x1,
	};
}
