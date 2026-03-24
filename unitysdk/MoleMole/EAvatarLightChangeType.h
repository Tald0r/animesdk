#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EAvatarLightChangeType_TypeDefinitionIndex = 42316;

	enum class EAvatarLightChangeType : ::System::Int32
	{
		Linear = 2,
		ByCurve = 3,
		Instant = 0,
		Lerp = 1,
	};
}
