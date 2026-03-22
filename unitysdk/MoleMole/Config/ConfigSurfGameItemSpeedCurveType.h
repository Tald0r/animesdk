#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSpeedCurveType_TypeDefinitionIndex = 65965;

	enum class ConfigSurfGameItemSpeedCurveType : ::System::Int32
	{
		None = 0,
		Acceleration = 1,
		Deceleration = 2,
	};
}
