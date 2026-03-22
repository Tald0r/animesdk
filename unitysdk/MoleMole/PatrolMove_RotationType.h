#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_RotationType_TypeDefinitionIndex = 62845;

	enum class PatrolMove_RotationType : ::System::Int32
	{
		UseRotationSpeed = 1,
		Instant = 0,
	};
}
