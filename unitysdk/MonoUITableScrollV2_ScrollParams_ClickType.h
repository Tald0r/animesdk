#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollParams_ClickType_TypeDefinitionIndex = 64467;

enum class MonoUITableScrollV2_ScrollParams_ClickType : ::System::Int32
{
	UpdateSelectAndTriggerOnClick = 2,
	OnlyTriggerOnClick = 0,
	OnlyUpdateSelect = 1,
};
