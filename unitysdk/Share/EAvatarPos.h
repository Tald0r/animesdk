#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarPos_TypeDefinitionIndex = 11393;

	enum class EAvatarPos : ::System::Int16
	{
		EnumCount = 5,
		TeamCharacter1 = 2,
		TeamCharacter2 = 3,
		All = 0,
		Random = 1,
		TeamCharacter3 = 4,
	};
}
