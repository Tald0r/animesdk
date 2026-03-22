#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIBattleState_TypeDefinitionIndex = 51224;

	enum class AIBattleState : ::System::Int32
	{
		None = 0,
		BattleState = 2,
		DieState = 3,
		BornState = 1,
	};
}
