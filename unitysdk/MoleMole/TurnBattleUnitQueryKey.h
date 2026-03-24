#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryKey_TypeDefinitionIndex = 55735;

	enum class TurnBattleUnitQueryKey : ::System::Int32
	{
		FastestSortableUnit = 1,
		All = 0,
		SlowestSortableUnit = 2,
	};
}
