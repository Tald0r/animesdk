#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterStrengthType_TypeDefinitionIndex = 66796;

	enum class MonsterStrengthType : ::System::Int32
	{
		Elite = 1,
		Boss = 2,
		Normal = 0,
	};
}
