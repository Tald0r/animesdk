#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimType_TypeDefinitionIndex = 56167;

	enum class ProceduralAnimType : ::System::Int32
	{
		Damper = 3,
		Fixed = 2,
		None = 0,
		Instance = 1,
	};
}
