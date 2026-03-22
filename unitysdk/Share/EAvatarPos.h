#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarPos_TypeDefinitionIndex = 13613;

	enum class EAvatarPos : ::System::Int16
	{
		All = 0,
		TeamCharacter3 = 4,
		EnumCount = 5,
		TeamCharacter1 = 2,
		TeamCharacter2 = 3,
		Random = 1,
	};
}
