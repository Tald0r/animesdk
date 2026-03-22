#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DissipationMode_TypeDefinitionIndex = 57229;

	enum class DissipationMode : ::System::Int32
	{
		None = 0,
		CustomDecay = 5,
		SoftDecay = 3,
		ExponentialDecay = 4,
		LinearDecay = 2,
		QuadraticDecay = 1,
	};
}
