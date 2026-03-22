#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_AutoSpaceAllocateType_TypeDefinitionIndex = 43869;

enum class MonoUITableScrollV2_AutoSpaceAllocateType : ::System::Int32
{
	KeepOriginSpace = 1,
	CenterWithViewRectAdjust = 4,
	SpaceAndPadding = 0,
	Center = 3,
	CenterOnlyKeepOriginSpace = 5,
	KeepOriginPadding = 2,
};
