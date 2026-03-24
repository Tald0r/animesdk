#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int EntityBodySize_TypeDefinitionIndex = 42135;

	enum class EntityBodySize : ::System::Int32
	{
		None = 0,
		Large = 16,
		Small = 4,
		Standard = 8,
		Default = 8,
		Point = 64,
		Tiny = 2,
		Unknown = 1,
		Gigantic = 32,
		DontCare = -1,
	};
}
