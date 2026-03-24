#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_LocalAxisType_TypeDefinitionIndex = 80839;

	enum class AnimatorZoneRotateBone_LocalAxisType : ::System::Int32
	{
		WorldZ = 6,
		EntityX = 4,
		LocalX = 1,
		WorldY = 8,
		EntityY = 5,
		WorldX = 7,
		LocalZ = 0,
		LocalY = 2,
		EntityZ = 3,
	};
}
