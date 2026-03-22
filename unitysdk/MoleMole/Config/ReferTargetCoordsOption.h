#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReferTargetCoordsOption_TypeDefinitionIndex = 37519;

	enum class ReferTargetCoordsOption : ::System::Int32
	{
		AimTargetPoint = 11,
		LocalAvatar = 3,
		Relative = 2,
		Unknown = -1,
		Caster = 6,
		EntityJoystic = 10,
		ReferTarget = 7,
		View = 8,
		Buddy = 5,
		Target = 1,
		Self = 0,
		Camera = 4,
		PlayerJoyStick = 9,
	};
}
