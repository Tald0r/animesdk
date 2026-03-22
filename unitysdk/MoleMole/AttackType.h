#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 63635;

	enum class AttackType : ::System::Int32
	{
		Melee = 1,
		Unknown = 0,
		Max = 4,
		Range = 2,
		Mix = 3,
	};
}
