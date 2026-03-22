#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockIDType_TypeDefinitionIndex = 10132;

	enum class EUnlockIDType : ::System::Int16
	{
		HollowEvent = 3,
		HollowBuff = 2,
		HollowCard = 1,
		HollowItem = 4,
		Curse = 5,
	};
}
