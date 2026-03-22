#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorAirHitType_TypeDefinitionIndex = 41949;

	enum class AnimatorAirHitType : ::System::Int32
	{
		InAir = 2,
		Fly = 1,
		ThrowLow = 0,
		Wall = 99,
		Knock = 3,
		ThrowHigh = 4,
	};
}
