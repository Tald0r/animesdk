#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_MoveReason_TypeDefinitionIndex = 64482;

enum class MonoUITableScrollV2_MoveReason : ::System::Int32
{
	Drag = 7,
	Rolling = 4,
	UnKnow = 0,
	ScrollBar = 8,
	Move = 1,
	GridAlign = 3,
	DampingRecover = 5,
	SelectAlign = 2,
	MouseScroll = 9,
	ScrollGroup = 6,
};
