#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType_TypeDefinitionIndex = 57966;

	enum class AnimatorZoneSmoothMoveByJoystick_SpeedSmoothType : ::System::Int32
	{
		Lerp = 3,
		SpringDamp = 4,
		Fixed = 2,
		None = 0,
		Instant = 1,
	};
}
