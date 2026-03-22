#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TerrainMatType_TypeDefinitionIndex = 71424;

	enum class TerrainMatType : ::System::Int32
	{
		Concrete = 0,
		Metal = 5,
		Default = -1,
		Wood = 4,
		Sand = 2,
		Grass = 1,
		Carpet = 6,
		Water = 3,
	};
}
