#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerAccessoryType_TypeDefinitionIndex = 40214;

	enum class PlayerAccessoryType : ::System::Int32
	{
		Chest = 3,
		Back = 4,
		Head = 2,
		All = 1,
	};
}
