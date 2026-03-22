#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EItemRarity_TypeDefinitionIndex = 14598;

	enum class EItemRarity : ::System::Int16
	{
		N = 1,
		SSR = 4,
		UR = 5,
		SR = 3,
		EnumCount = 6,
		R = 2,
	};
}
