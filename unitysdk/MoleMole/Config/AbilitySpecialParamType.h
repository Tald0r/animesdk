#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialParamType_TypeDefinitionIndex = 56854;

	enum class AbilitySpecialParamType : ::System::Int32
	{
		Int = 1,
		Boolean = 2,
		Float = 0,
		String = 3,
	};
}
