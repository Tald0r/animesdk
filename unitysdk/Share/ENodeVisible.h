#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeVisible_TypeDefinitionIndex = 16268;

	enum class ENodeVisible : ::System::Int16
	{
		VisibleByTriggerEvent = 3,
		Visible = 1,
		VisibleAtGridAround = 2,
		All = 0,
		Blocked = 5,
		EnumCount = 6,
		TemporaryVisibleAtAround = 4,
	};
}
