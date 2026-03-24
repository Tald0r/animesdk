#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialParamType_TypeDefinitionIndex = 65151;

	enum class AbilitySpecialParamType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		Boolean = 2,
		String = 3,
	};
}
