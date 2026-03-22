#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_StartMode_TypeDefinitionIndex = 62844;

	enum class PatrolMove_StartMode : ::System::Int32
	{
		FromClosestNode = 1,
		FromClosestUnpassNode = 2,
		FromFirstNode = 0,
	};
}
