#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridLink_TypeDefinitionIndex = 12609;

	enum class EHollowGridLink : ::System::Byte
	{
		Left = 0x8,
		All = 0xF,
		Down = 0x2,
		None = 0x0,
		Up = 0x1,
		Right = 0x4,
	};
}
