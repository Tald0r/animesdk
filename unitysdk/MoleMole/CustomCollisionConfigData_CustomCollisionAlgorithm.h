#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CustomCollisionConfigData_CustomCollisionAlgorithm_TypeDefinitionIndex = 43062;

	enum class CustomCollisionConfigData_CustomCollisionAlgorithm : ::System::Int32
	{
		Spherical = 1,
		Volumetric = 2,
		Simple = 0,
	};
}
