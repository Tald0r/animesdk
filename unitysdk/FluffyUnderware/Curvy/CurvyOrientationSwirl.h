#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyOrientationSwirl_TypeDefinitionIndex = 35621;

	enum class CurvyOrientationSwirl : ::System::Int32
	{
		None = 0,
		Segment = 1,
		AnchorGroup = 2,
		AnchorGroupAbs = 3,
	};
}
