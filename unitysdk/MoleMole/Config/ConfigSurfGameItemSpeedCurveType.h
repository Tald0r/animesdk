#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSpeedCurveType_TypeDefinitionIndex = 66436;

	enum class ConfigSurfGameItemSpeedCurveType : ::System::Int32
	{
		Deceleration = 2,
		Acceleration = 1,
		None = 0,
	};
}
