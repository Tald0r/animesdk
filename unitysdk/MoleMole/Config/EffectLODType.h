#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLODType_TypeDefinitionIndex = 66510;

	enum class EffectLODType : ::System::Int32
	{
		Low = 1,
		High = 3,
		Medium = 2,
		Default = 0,
		LowBefore = 4,
	};
}
