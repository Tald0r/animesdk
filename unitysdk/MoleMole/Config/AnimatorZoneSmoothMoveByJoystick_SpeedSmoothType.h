#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType_TypeDefinitionIndex = 39992;

	enum class AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType : ::System::Int32
	{
		SpringDamp = 4,
		Fixed = 2,
		Lerp = 3,
		Instant = 1,
		None = 0,
	};
}
