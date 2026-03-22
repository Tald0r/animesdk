#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeKey_TickFrom_TypeDefinitionIndex = 36154;

	enum class EyeKey_TickFrom : ::System::Byte
	{
		FromLateUpdate = 0x0,
		FromEntity = 0x1,
	};
}
