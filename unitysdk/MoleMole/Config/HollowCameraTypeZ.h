#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraTypeZ_TypeDefinitionIndex = 78849;

	enum class HollowCameraTypeZ : ::System::Int32
	{
		FixedZ = 1,
		LastZ = 2,
		DynamicZ = 0,
	};
}
