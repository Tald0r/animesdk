#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackPatternType_TypeDefinitionIndex = 66739;

	enum class ConfigAttackPatternType : ::System::Int32
	{
		AttackPatternList = 1,
		AttackPattern = 0,
		ContinuousAttackPatternList = 2,
	};
}
