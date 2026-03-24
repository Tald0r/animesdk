#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 53319;

	enum class AddLightMode : ::System::Int32
	{
		Ambient = 2,
		Toon = 3,
		Blend = 1,
	};
}
