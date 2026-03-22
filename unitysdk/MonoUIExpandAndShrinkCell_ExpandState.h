#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_ExpandState_TypeDefinitionIndex = 42365;

enum class MonoUIExpandAndShrinkCell_ExpandState : ::System::Int32
{
	Shrink = 4,
	Expand = 2,
	None = 0,
	ExpandStart = 1,
	ShrinkStart = 3,
};
