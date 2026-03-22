#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int DirectType_TypeDefinitionIndex = 21254;

	enum class DirectType : ::System::Int32
	{
		RESET_GRID = 8,
		REPAIR = 9,
		DIRECT_UP = 1,
		TIME_REWIND_ENTER = 10,
		BIG_TV_ENTER = 6,
		DIRECT_DOWN = 2,
		TIME_SEGMENT_ENTER = 12,
		BIG_TV_EXIT = 7,
		SWITCH_CHESS_UP = 4,
		DIRECT_TYPE_NONE = 0,
		TIME_REWIND_EXIT = 11,
		CHANGE_GRID = 3,
		REPAIR_EXIT = 13,
		SWITCH_CHESS_DOWN = 5,
	};
}
