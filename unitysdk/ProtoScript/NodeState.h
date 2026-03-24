#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeState_TypeDefinitionIndex = 21482;

	enum class NodeState : ::System::Int32
	{
		NODE_STATE_ALL = 0,
		GUIDE = 7,
		SHOW_EVENT = 4,
		UNLOCKED = 2,
		TARGET = 8,
		LOCKED_WITH_STAMINA = 14,
		BRIGHTEN_ONLY_VISIBLE = 9,
		UNSTABLE = 10,
		LOCKED = 1,
		DOOR = 5,
		EMPTY = 11,
		UN_EMPTY = 15,
		FINISHED = 3,
		BRIGHTEN = 6,
	};
}
