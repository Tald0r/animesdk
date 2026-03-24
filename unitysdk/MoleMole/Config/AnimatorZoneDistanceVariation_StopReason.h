#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDistanceVariation_StopReason_TypeDefinitionIndex = 46239;

	enum class AnimatorZoneDistanceVariation_StopReason : ::System::Int32
	{
		OverMaxMoveDistance = 3,
		HitOther = 0,
		ExitZone = 1,
		ToOtherState = 2,
	};
}
