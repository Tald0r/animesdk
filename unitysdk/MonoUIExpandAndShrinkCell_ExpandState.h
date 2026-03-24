#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_ExpandState_TypeDefinitionIndex = 39761;

enum class MonoUIExpandAndShrinkCell_ExpandState : ::System::Int32
{
	Expand = 2,
	Shrink = 4,
	ExpandStart = 1,
	ShrinkStart = 3,
	None = 0,
};
