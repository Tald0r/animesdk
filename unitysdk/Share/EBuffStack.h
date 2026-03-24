#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBuffStack_TypeDefinitionIndex = 13634;

	enum class EBuffStack : ::System::Int16
	{
		Stack = 2,
		Unique = 0,
		Overwrite = 1,
		EnumCount = 3,
	};
}
