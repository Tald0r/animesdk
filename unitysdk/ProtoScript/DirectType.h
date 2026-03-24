#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int DirectType_TypeDefinitionIndex = 20688;

	enum class DirectType : ::System::Int32
	{
		RESET_GRID = 8,
		SWITCH_CHESS_UP = 4,
		BIG_TV_EXIT = 7,
		BIG_TV_ENTER = 6,
		TIME_REWIND_ENTER = 10,
		CHANGE_GRID = 3,
		REPAIR_EXIT = 13,
		REPAIR = 9,
		SWITCH_CHESS_DOWN = 5,
		DIRECT_UP = 1,
		TIME_REWIND_EXIT = 11,
		DIRECT_TYPE_NONE = 0,
		DIRECT_DOWN = 2,
		TIME_SEGMENT_ENTER = 12,
	};
}
