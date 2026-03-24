#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_FeatureState_TypeDefinitionIndex = 64503;

enum class MonoUITableScrollV2_FeatureState : ::System::Int32
{
	Damp = 9,
	None = 0,
	End = 11,
	DragEnd = 2,
	Drag = 1,
	MouseScrollEnd = 6,
	SelectAlign = 10,
	Rolling = 7,
	GridAlign = 8,
	MouseScroll = 5,
	DragScrollBarEnd = 4,
	DragScrollBar = 3,
};
