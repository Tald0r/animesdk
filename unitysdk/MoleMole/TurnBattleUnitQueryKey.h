#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryKey_TypeDefinitionIndex = 42415;

	enum class TurnBattleUnitQueryKey : ::System::Int32
	{
		All = 0,
		FastestSortableUnit = 1,
		SlowestSortableUnit = 2,
	};
}
