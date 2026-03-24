#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnterBattleState_TypeDefinitionIndex = 48087;

	enum class EnterBattleState : ::System::Int32
	{
		Idle = 2,
		Unknown = 99,
		EnterBattle = 1,
		ExitBattle = 0,
	};
}
