#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDistanceVariation_StopReason_TypeDefinitionIndex = 36433;

	enum class AnimatorZoneDistanceVariation_StopReason : ::System::Int32
	{
		ExitZone = 1,
		OverMaxMoveDistance = 3,
		HitOther = 0,
		ToOtherState = 2,
	};
}
