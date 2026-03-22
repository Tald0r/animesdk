#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPostEffectType_TypeDefinitionIndex = 15773;

	enum class EPostEffectType : ::System::Int16
	{
		VignetteEffect = 2,
		EnumCount = 5,
		ScreenEffect = 3,
		Glitch = 1,
		RadialBlur = 4,
	};
}
