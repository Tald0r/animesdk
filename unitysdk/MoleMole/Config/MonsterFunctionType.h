#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterFunctionType_TypeDefinitionIndex = 43092;

	enum class MonsterFunctionType : ::System::Int32
	{
		Destruction = 2,
		NPC = 3,
		Summoned = 4,
		Trap = 5,
		Monster = 1,
		Other = 0,
	};
}
