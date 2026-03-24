#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int CompareMethod_TypeDefinitionIndex = 27620;

	enum class CompareMethod : ::System::Int32
	{
		LessThan = 2,
		GreaterOrEqualTo = 3,
		LessOrEqualTo = 4,
		EqualTo = 0,
		GreaterThan = 1,
	};
}
