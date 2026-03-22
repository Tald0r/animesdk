#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EModifierTimeScale_TypeDefinitionIndex = 10984;

	enum class EModifierTimeScale : ::System::Int16
	{
		Level = 2,
		Caster = 1,
		Owner = 0,
	};
}
