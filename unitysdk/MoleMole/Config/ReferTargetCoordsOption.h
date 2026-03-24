#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReferTargetCoordsOption_TypeDefinitionIndex = 73661;

	enum class ReferTargetCoordsOption : ::System::Int32
	{
		Target = 1,
		Buddy = 5,
		PlayerJoyStick = 9,
		Unknown = -1,
		Relative = 2,
		ReferTarget = 7,
		LocalAvatar = 3,
		EntityJoystic = 10,
		Caster = 6,
		AimTargetPoint = 11,
		Self = 0,
		View = 8,
		Camera = 4,
	};
}
