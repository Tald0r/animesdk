#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EItemRarity_TypeDefinitionIndex = 11618;

	enum class EItemRarity : ::System::Int16
	{
		SSR = 4,
		N = 1,
		SR = 3,
		EnumCount = 6,
		UR = 5,
		R = 2,
	};
}
