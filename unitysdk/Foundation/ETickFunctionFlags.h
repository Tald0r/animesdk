#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickFunctionFlags_TypeDefinitionIndex = 8846;

	enum class ETickFunctionFlags : ::System::Byte
	{
		VirtualTick = 0x4,
		MergeTick = 0x1,
		None = 0x0,
		Default = 0x3,
		ImmediateTick = 0x8,
		PartialTick = 0x2,
	};
}
