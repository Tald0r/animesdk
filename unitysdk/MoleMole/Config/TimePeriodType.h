#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 70603;

	enum class TimePeriodType : ::System::Int32
	{
		Noon = 3,
		Night = 2,
		Morning = 0,
		Dusk = 1,
	};
}
