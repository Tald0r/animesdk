#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridLink_TypeDefinitionIndex = 15678;

	enum class EHollowGridLink : ::System::Byte
	{
		Left = 0x8,
		Right = 0x4,
		All = 0xF,
		None = 0x0,
		Down = 0x2,
		Up = 0x1,
	};
}
