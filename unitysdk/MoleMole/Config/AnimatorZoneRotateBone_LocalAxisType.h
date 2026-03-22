#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_LocalAxisType_TypeDefinitionIndex = 39407;

	enum class AnimatorZoneRotateBone_LocalAxisType : ::System::Int32
	{
		EntityY = 5,
		WorldZ = 6,
		LocalZ = 0,
		WorldY = 8,
		LocalX = 1,
		LocalY = 2,
		EntityX = 4,
		EntityZ = 3,
		WorldX = 7,
	};
}
