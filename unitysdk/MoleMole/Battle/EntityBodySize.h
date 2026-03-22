#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int EntityBodySize_TypeDefinitionIndex = 55579;

	enum class EntityBodySize : ::System::Int32
	{
		Gigantic = 32,
		Unknown = 1,
		Small = 4,
		Standard = 8,
		Point = 64,
		None = 0,
		Default = 8,
		Tiny = 2,
		DontCare = -1,
		Large = 16,
	};
}
