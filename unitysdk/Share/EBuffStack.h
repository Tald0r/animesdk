#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBuffStack_TypeDefinitionIndex = 13192;

	enum class EBuffStack : ::System::Int16
	{
		EnumCount = 3,
		Stack = 2,
		Unique = 0,
		Overwrite = 1,
	};
}
