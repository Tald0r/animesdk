#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeatherType_TypeDefinitionIndex = 71475;

	enum class WeatherType : ::System::Int32
	{
		Fog = 1,
		ThickCloudy = 6,
		Cloudy = 2,
		Thunder = 4,
		SunShine = 0,
		None = -1,
		Rain = 3,
		ThickFog = 5,
	};
}
