#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeVisible_TypeDefinitionIndex = 17098;

	enum class ENodeVisible : ::System::Int16
	{
		Blocked = 5,
		TemporaryVisibleAtAround = 4,
		EnumCount = 6,
		VisibleByTriggerEvent = 3,
		VisibleAtGridAround = 2,
		All = 0,
		Visible = 1,
	};
}
