#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus_TypeDefinitionIndex = 44463;

	enum class AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus : ::System::Int32
	{
		NONE = 0,
		CREATED_SCRATCH_EFFECT = 2,
		CREATED_START_TYPE = 1,
	};
}
