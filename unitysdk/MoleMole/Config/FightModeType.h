#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FightModeType_TypeDefinitionIndex = 42919;

	enum class FightModeType : ::System::Int32
	{
		Move = 1,
		Attack = 2,
		Evade = 0,
	};
}
