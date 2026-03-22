#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EFightRanking_TypeDefinitionIndex = 17544;

	enum class EFightRanking : ::System::Int16
	{
		D = 1,
		B = 3,
		S = 5,
		A = 4,
		C = 2,
		None = 0,
	};
}
