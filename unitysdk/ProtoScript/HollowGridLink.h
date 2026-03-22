#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowGridLink_TypeDefinitionIndex = 20847;

	enum class HollowGridLink : ::System::Int32
	{
		DOWN = 2,
		RIGHT = 4,
		HOLLOW_GRID_LINK_ALL = 15,
		LEFT = 8,
		UP = 1,
		HOLLOW_GRID_LINK_NONE = 0,
	};
}
