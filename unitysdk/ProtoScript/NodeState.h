#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeState_TypeDefinitionIndex = 19216;

	enum class NodeState : ::System::Int32
	{
		UNSTABLE = 10,
		FINISHED = 3,
		BRIGHTEN = 6,
		GUIDE = 7,
		DOOR = 5,
		UNLOCKED = 2,
		BRIGHTEN_ONLY_VISIBLE = 9,
		TARGET = 8,
		EMPTY = 11,
		SHOW_EVENT = 4,
		NODE_STATE_ALL = 0,
		UN_EMPTY = 15,
		LOCKED_WITH_STAMINA = 14,
		LOCKED = 1,
	};
}
