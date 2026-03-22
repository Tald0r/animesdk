#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowShopType_TypeDefinitionIndex = 10613;

	enum class EHollowShopType : ::System::Int16
	{
		All = 0,
		Card = 2,
		EnumCount = 7,
		Gachashop = 6,
		Discount = 5,
		Curse = 3,
		Item = 1,
		HollowItem = 4,
	};
}
