#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailState_TypeDefinitionIndex = 15809;

	enum class EMailState : ::System::Byte
	{
		New = 0x0,
		Read = 0x2,
		Removed = 0x4,
		Awarded = 0x3,
		Old = 0x1,
	};
}
