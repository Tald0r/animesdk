#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int SplineControllerConnectionBehavior_TypeDefinitionIndex = 35718;

	enum class SplineControllerConnectionBehavior : ::System::Int32
	{
		CurrentSpline = 0,
		FollowUpSpline = 1,
		RandomSpline = 2,
		FollowUpOtherwiseRandom = 3,
		Custom = 4,
	};
}
