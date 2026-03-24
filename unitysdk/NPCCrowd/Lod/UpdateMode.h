#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 63609;

	enum class UpdateMode : ::System::Int32
	{
		AutoFrame = 1,
		FixFrame = 0,
		FixFrame2D = 10,
		MovementCheck = 2,
		AutoFrame2D = 11,
	};
}
