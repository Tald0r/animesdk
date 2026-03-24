#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlayerType_TypeDefinitionIndex = 16777;

	enum class EPlayerType : ::System::Int16
	{
		TeamCharacter3 = 3,
		TeamCharacter1 = 1,
		TeamCharacter2 = 2,
		EnumCount = 4,
		All = 0,
	};
}
