#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TerrainMatType_TypeDefinitionIndex = 51104;

	enum class TerrainMatType : ::System::Int32
	{
		Grass = 1,
		Wood = 4,
		Sand = 2,
		Concrete = 0,
		Metal = 5,
		Default = -1,
		Water = 3,
		Carpet = 6,
	};
}
