#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_AutoSpaceAllocateType_TypeDefinitionIndex = 64399;

enum class MonoUITableScrollV2_AutoSpaceAllocateType : ::System::Int32
{
	Center = 3,
	KeepOriginPadding = 2,
	CenterWithViewRectAdjust = 4,
	KeepOriginSpace = 1,
	SpaceAndPadding = 0,
	CenterOnlyKeepOriginSpace = 5,
};
