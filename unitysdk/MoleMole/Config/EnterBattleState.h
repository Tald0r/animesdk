#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnterBattleState_TypeDefinitionIndex = 79001;

	enum class EnterBattleState : ::System::Int32
	{
		Idle = 2,
		EnterBattle = 1,
		Unknown = 99,
		ExitBattle = 0,
	};
}
