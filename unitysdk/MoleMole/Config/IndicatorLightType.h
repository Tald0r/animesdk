#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightType_TypeDefinitionIndex = 69255;

	enum class IndicatorLightType : ::System::Int32
	{
		PlayerOnLight = 5,
		DecorationLight1 = 3,
		None = 0,
		EventLight = 2,
		VisibleLight = 1,
		DecorationLight2 = 4,
	};
}
