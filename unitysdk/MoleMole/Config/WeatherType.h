#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeatherType_TypeDefinitionIndex = 67008;

	enum class WeatherType : ::System::Int32
	{
		ThickFog = 5,
		Fog = 1,
		SunShine = 0,
		Cloudy = 2,
		None = -1,
		ThickCloudy = 6,
		Thunder = 4,
		Rain = 3,
	};
}
