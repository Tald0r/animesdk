#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemType_TypeDefinitionIndex = 12209;

	enum class EHollowSystemType : ::System::Int16
	{
		Card = 1,
		HollowResultPage = 6,
		EnumCount = 8,
		Curse = 3,
		CurseInfo = 7,
		HollowItem = 5,
		Menu = 2,
		Bag = 4,
	};
}
