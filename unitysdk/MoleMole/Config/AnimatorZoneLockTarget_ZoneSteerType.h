#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_ZoneSteerType_TypeDefinitionIndex = 60111;

	enum class AnimatorZoneLockTarget_ZoneSteerType : ::System::Int32
	{
		Fixed = 2,
		Instant = 0,
		None = 3,
		Clamp = 1,
	};
}
