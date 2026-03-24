#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackType_TypeDefinitionIndex = 26401;

	enum class MessagePackType : ::System::Byte
	{
		Unknown = 0x0,
		Integer = 0x1,
		Binary = 0x6,
		Nil = 0x2,
		Map = 0x8,
		Array = 0x7,
		String = 0x5,
		Float = 0x4,
		Boolean = 0x3,
		Extension = 0x9,
	};
}
