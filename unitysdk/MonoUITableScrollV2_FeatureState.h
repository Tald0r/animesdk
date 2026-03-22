#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_FeatureState_TypeDefinitionIndex = 43808;

enum class MonoUITableScrollV2_FeatureState : ::System::Int32
{
	Drag = 1,
	SelectAlign = 10,
	MouseScroll = 5,
	DragEnd = 2,
	GridAlign = 8,
	DragScrollBarEnd = 4,
	Rolling = 7,
	DragScrollBar = 3,
	Damp = 9,
	End = 11,
	MouseScrollEnd = 6,
	None = 0,
};
