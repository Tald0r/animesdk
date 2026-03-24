#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverBeingHitType_TypeDefinitionIndex = 42959;

	enum class FeverBeingHitType : ::System::Int32
	{
		HitGroundLight = 2,
		Mute = 0,
		HitSkyFly = 4,
		HitGroundHeavy = 3,
		Shake = 1,
	};
}
