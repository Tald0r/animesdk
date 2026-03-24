#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailState_TypeDefinitionIndex = 11614;

	enum class EMailState : ::System::Byte
	{
		Read = 0x2,
		New = 0x0,
		Awarded = 0x3,
		Removed = 0x4,
		Old = 0x1,
	};
}
