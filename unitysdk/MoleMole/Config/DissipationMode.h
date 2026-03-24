#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DissipationMode_TypeDefinitionIndex = 71805;

	enum class DissipationMode : ::System::Int32
	{
		ExponentialDecay = 4,
		QuadraticDecay = 1,
		CustomDecay = 5,
		None = 0,
		LinearDecay = 2,
		SoftDecay = 3,
	};
}
