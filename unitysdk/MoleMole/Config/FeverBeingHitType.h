#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverBeingHitType_TypeDefinitionIndex = 55855;

	enum class FeverBeingHitType : ::System::Int32
	{
		Shake = 1,
		HitGroundHeavy = 3,
		HitGroundLight = 2,
		HitSkyFly = 4,
		Mute = 0,
	};
}
