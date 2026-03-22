#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfVehicleExtraEffectFlags_TypeDefinitionIndex = 56019;

	enum class SurfVehicleExtraEffectFlags : ::System::Int32
	{
		None = 0,
		BuffProlong = 2,
		DebuffImmune = 1,
	};
}
