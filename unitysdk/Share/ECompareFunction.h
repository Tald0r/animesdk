#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECompareFunction_TypeDefinitionIndex = 10174;

	enum class ECompareFunction : ::System::Int16
	{
		Greater = 0,
		GreaterEqual = 1,
		Less = 3,
		LessEqual = 4,
		EnumCount = 7,
		Equal = 2,
		NotEqual = 6,
	};
}
