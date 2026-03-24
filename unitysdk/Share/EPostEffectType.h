#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPostEffectType_TypeDefinitionIndex = 16668;

	enum class EPostEffectType : ::System::Int16
	{
		RadialBlur = 4,
		Glitch = 1,
		EnumCount = 5,
		VignetteEffect = 2,
		ScreenEffect = 3,
	};
}
