#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackType_TypeDefinitionIndex = 26088;

	enum class MessagePackType : ::System::Byte
	{
		Unknown = 0x0,
		Map = 0x8,
		String = 0x5,
		Nil = 0x2,
		Array = 0x7,
		Binary = 0x6,
		Boolean = 0x3,
		Extension = 0x9,
		Float = 0x4,
		Integer = 0x1,
	};
}
