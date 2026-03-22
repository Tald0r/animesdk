#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterFunctionType_TypeDefinitionIndex = 77736;

	enum class MonsterFunctionType : ::System::Int32
	{
		Monster = 1,
		Destruction = 2,
		Summoned = 4,
		Other = 0,
		Trap = 5,
		NPC = 3,
	};
}
