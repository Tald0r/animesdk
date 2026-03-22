#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeVisible_TypeDefinitionIndex = 23275;

	enum class NodeVisible : ::System::Int32
	{
		BLOCKED = 5,
		NODE_VISIBLE_ALL = 0,
		VISIBLE_BY_TRIGGER_EVENT = 3,
		TEMPORARY_VISIBLE_AT_AROUND = 4,
		VISIBLE = 1,
		VISIBLE_AT_GRID_AROUND = 2,
	};
}
