#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_MoveReason_TypeDefinitionIndex = 43875;

enum class MonoUITableScrollV2_MoveReason : ::System::Int32
{
	Move = 1,
	ScrollGroup = 6,
	DampingRecover = 5,
	ScrollBar = 8,
	SelectAlign = 2,
	Drag = 7,
	UnKnow = 0,
	Rolling = 4,
	MouseScroll = 9,
	GridAlign = 3,
};
