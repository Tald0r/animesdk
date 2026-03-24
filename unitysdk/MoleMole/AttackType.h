#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 61170;

	enum class AttackType : ::System::Int32
	{
		Range = 2,
		Max = 4,
		Unknown = 0,
		Melee = 1,
		Mix = 3,
	};
}
