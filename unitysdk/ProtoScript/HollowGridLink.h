#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowGridLink_TypeDefinitionIndex = 19824;

	enum class HollowGridLink : ::System::Int32
	{
		DOWN = 2,
		LEFT = 8,
		UP = 1,
		HOLLOW_GRID_LINK_ALL = 15,
		HOLLOW_GRID_LINK_NONE = 0,
		RIGHT = 4,
	};
}
