#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlows_ValueType_TypeDefinitionIndex = 46546;

	enum class ConfigEntityTimeSlows_ValueType : ::System::Int32
	{
		ConfigEntityTimeSlow = 1,
		Null = 0,
		ConfigEntityTimeSlowCurve = 2,
	};
}
