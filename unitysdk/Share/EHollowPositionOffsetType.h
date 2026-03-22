#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowPositionOffsetType_TypeDefinitionIndex = 17446;

	enum class EHollowPositionOffsetType : ::System::Int16
	{
		EventPos = 2,
		EnumCount = 3,
		Absolute = 1,
		Relative = 0,
	};
}
