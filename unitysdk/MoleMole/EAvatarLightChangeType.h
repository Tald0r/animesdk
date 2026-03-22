#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EAvatarLightChangeType_TypeDefinitionIndex = 56270;

	enum class EAvatarLightChangeType : ::System::Int32
	{
		Instant = 0,
		Linear = 2,
		Lerp = 1,
		ByCurve = 3,
	};
}
