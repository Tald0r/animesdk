#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_EffectType_TypeDefinitionIndex = 51191;

	enum class EffectPatternInfoConfig_EffectType : ::System::Int32
	{
		Avatar = 1,
		None = 0,
		Permanent = 4,
		Monster = 2,
	};
}
