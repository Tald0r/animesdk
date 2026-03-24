#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_ValueType_TypeDefinitionIndex = 51612;

	enum class ConfigAbilityTargetData_ValueType : ::System::Int32
	{
		RangeRandomEnemyAbilityTarget = 2,
		SummonByTagAbilityTarget = 3,
		RangeEnemyAbilityTarget = 1,
		TimelineAbilityTarget = 7,
		SummonerAbilityTarget = 6,
		Null = 0,
		MultiTargettingAbilityTarget = 5,
		TelerportSelectionTarget = 8,
		CommonAbilityTarget = 4,
	};
}
