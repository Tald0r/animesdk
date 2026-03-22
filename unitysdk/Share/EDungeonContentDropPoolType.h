#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonContentDropPoolType_TypeDefinitionIndex = 9792;

	enum class EDungeonContentDropPoolType : ::System::Byte
	{
		EnumCount = 0x7,
		Arcana = 0x2,
		Blessing = 0x3,
		Curse = 0x4,
		BaneCard = 0x1,
		Card = 0x0,
		Reward = 0x5,
		HollowItem = 0x6,
	};
}
