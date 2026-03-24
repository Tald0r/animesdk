#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowPositionOffsetType_TypeDefinitionIndex = 13792;

	enum class EHollowPositionOffsetType : ::System::Int16
	{
		EnumCount = 3,
		EventPos = 2,
		Absolute = 1,
		Relative = 0,
	};
}
