#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemType_TypeDefinitionIndex = 14889;

	enum class EHollowSystemType : ::System::Int16
	{
		HollowResultPage = 6,
		EnumCount = 8,
		Curse = 3,
		Card = 1,
		Menu = 2,
		Bag = 4,
		HollowItem = 5,
		CurseInfo = 7,
	};
}
