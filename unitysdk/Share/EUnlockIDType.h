#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockIDType_TypeDefinitionIndex = 17426;

	enum class EUnlockIDType : ::System::Int16
	{
		Curse = 5,
		HollowItem = 4,
		HollowBuff = 2,
		HollowCard = 1,
		HollowEvent = 3,
	};
}
