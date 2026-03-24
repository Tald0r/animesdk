#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickFunctionFlags_TypeDefinitionIndex = 9003;

	enum class ETickFunctionFlags : ::System::Byte
	{
		MergeTick = 0x1,
		PartialTick = 0x2,
		VirtualTick = 0x4,
		Default = 0x3,
		ImmediateTick = 0x8,
		None = 0x0,
	};
}
