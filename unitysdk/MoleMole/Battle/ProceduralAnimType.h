#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimType_TypeDefinitionIndex = 74285;

	enum class ProceduralAnimType : ::System::Int32
	{
		None = 0,
		Fixed = 2,
		Damper = 3,
		Instance = 1,
	};
}
