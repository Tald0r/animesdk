#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrafficLightType_TypeDefinitionIndex = 48109;

	enum class TrafficLightType : ::System::Int32
	{
		None = 5,
		Yellow = 4,
		Red = 0,
		Green = 3,
		Red_Breath = 1,
		Green_Breath = 2,
	};
}
