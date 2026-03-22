#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickingGroup_TypeDefinitionIndex = 8888;

	enum class ETickingGroup : ::System::Byte
	{
		PostLateUpdate = 0x6,
		PreUpdate = 0x1,
		None = 0x0,
		PreLateUpdate = 0x4,
		Count = 0x7,
		PostUpdate = 0x3,
		Update = 0x2,
		LateUpdate = 0x5,
	};
}
