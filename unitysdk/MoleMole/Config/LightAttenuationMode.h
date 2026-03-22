#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LightAttenuationMode_TypeDefinitionIndex = 49872;

	enum class LightAttenuationMode : ::System::Int32
	{
		Linear = 1,
		Exponent = 0,
		None = 2,
	};
}
