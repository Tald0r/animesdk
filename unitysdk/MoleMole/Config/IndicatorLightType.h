#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightType_TypeDefinitionIndex = 58999;

	enum class IndicatorLightType : ::System::Int32
	{
		PlayerOnLight = 5,
		EventLight = 2,
		DecorationLight2 = 4,
		None = 0,
		DecorationLight1 = 3,
		VisibleLight = 1,
	};
}
