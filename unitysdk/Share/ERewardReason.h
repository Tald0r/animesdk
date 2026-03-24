#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ERewardReason_TypeDefinitionIndex = 11522;

	enum class ERewardReason : ::System::Int16
	{
		MainCityQuest = 1,
		Unknow = 0,
		AvatarDefaultItem = 2,
	};
}
