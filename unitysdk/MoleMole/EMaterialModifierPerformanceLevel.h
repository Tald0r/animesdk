#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EMaterialModifierPerformanceLevel_TypeDefinitionIndex = 48018;

	enum class EMaterialModifierPerformanceLevel : ::System::Int32
	{
		Medium = 1,
		High = 2,
		Low = 0,
		VeryHigh = 3,
	};
}
