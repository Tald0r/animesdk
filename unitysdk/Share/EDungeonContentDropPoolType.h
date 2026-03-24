#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonContentDropPoolType_TypeDefinitionIndex = 16326;

	enum class EDungeonContentDropPoolType : ::System::Byte
	{
		EnumCount = 0x7,
		BaneCard = 0x1,
		Curse = 0x4,
		Blessing = 0x3,
		Card = 0x0,
		HollowItem = 0x6,
		Arcana = 0x2,
		Reward = 0x5,
	};
}
