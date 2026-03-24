#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECompareFunction_TypeDefinitionIndex = 14781;

	enum class ECompareFunction : ::System::Int16
	{
		EnumCount = 7,
		GreaterEqual = 1,
		NotEqual = 6,
		Equal = 2,
		Greater = 0,
		LessEqual = 4,
		Less = 3,
	};
}
