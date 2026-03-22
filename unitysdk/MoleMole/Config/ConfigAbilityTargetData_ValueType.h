#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_ValueType_TypeDefinitionIndex = 69640;

	enum class ConfigAbilityTargetData_ValueType : ::System::Int32
	{
		Null = 0,
		RangeEnemyAbilityTarget = 1,
		SummonerAbilityTarget = 6,
		TimelineAbilityTarget = 7,
		MultiTargettingAbilityTarget = 5,
		TelerportSelectionTarget = 8,
		CommonAbilityTarget = 4,
		RangeRandomEnemyAbilityTarget = 2,
		SummonByTagAbilityTarget = 3,
	};
}
