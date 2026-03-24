#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowShopType_TypeDefinitionIndex = 9958;

	enum class EHollowShopType : ::System::Int16
	{
		EnumCount = 7,
		HollowItem = 4,
		Gachashop = 6,
		Item = 1,
		Curse = 3,
		Discount = 5,
		All = 0,
		Card = 2,
	};
}
