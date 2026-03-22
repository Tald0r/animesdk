#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherMaterialTransitionType_TypeDefinitionIndex = 28807;

	enum class WeatherMaterialTransitionType : ::System::Int32
	{
		NoonFoggy = 0,
		SpecialRed = 1,
		None = 2,
	};
}
