#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPropertyFunction_TypeDefinitionIndex = 12235;

	enum class EPropertyFunction : ::System::Int32
	{
		Hierarchy = 1,
		Add = 2,
		InitMax = 99,
		EnumCount = 100,
		LimitMin = 97,
		Normal = 0,
		InitMin = 98,
	};
}
