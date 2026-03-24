#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerAccessoryType_TypeDefinitionIndex = 47087;

	enum class PlayerAccessoryType : ::System::Int32
	{
		Back = 4,
		Chest = 3,
		Head = 2,
		All = 1,
	};
}
