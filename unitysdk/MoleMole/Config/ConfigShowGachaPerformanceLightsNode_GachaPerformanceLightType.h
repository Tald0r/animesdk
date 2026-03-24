#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShowGachaPerformanceLightsNode_GachaPerformanceLightType_TypeDefinitionIndex = 46651;

	enum class ConfigShowGachaPerformanceLightsNode_GachaPerformanceLightType : ::System::Int32
	{
		CharacterLights = 2,
		SceneLights = 1,
		ShowLights = 0,
		TvSceneLights = 3,
	};
}
