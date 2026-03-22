#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrafficLightType_TypeDefinitionIndex = 58916;

	enum class TrafficLightType : ::System::Int32
	{
		Green = 3,
		Red = 0,
		Green_Breath = 2,
		Yellow = 4,
		None = 5,
		Red_Breath = 1,
	};
}
