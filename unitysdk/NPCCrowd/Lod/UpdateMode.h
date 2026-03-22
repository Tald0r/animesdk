#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 70746;

	enum class UpdateMode : ::System::Int32
	{
		AutoFrame2D = 11,
		MovementCheck = 2,
		FixFrame2D = 10,
		AutoFrame = 1,
		FixFrame = 0,
	};
}
