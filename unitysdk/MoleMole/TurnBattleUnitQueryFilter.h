#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryFilter_TypeDefinitionIndex = 41408;

	enum class TurnBattleUnitQueryFilter : ::System::Int32
	{
		AllyNoDummyNoTemp = 1,
		All = 0,
		EnemyNoDummyNoTemp = 2,
	};
}
