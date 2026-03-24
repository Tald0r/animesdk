#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_ZoneLayerStatus_TypeDefinitionIndex = 40926;

	enum class UIHadalZone_Common_ZoneLayerStatus : ::System::Int32
	{
		RATE_S = 2,
		LOCKED = 0,
		RATE_SS = 5,
		RATE_A = 3,
		RATE_B = 4,
		START = 1,
	};
}
