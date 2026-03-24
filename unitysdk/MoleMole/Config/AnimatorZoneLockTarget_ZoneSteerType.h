#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_ZoneSteerType_TypeDefinitionIndex = 63911;

	enum class AnimatorZoneLockTarget_ZoneSteerType : ::System::Int32
	{
		Clamp = 1,
		Fixed = 2,
		None = 3,
		Instant = 0,
	};
}
