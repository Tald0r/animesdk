#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorAirHitType_TypeDefinitionIndex = 52389;

	enum class AnimatorAirHitType : ::System::Int32
	{
		ThrowLow = 0,
		Wall = 99,
		Fly = 1,
		ThrowHigh = 4,
		InAir = 2,
		Knock = 3,
	};
}
