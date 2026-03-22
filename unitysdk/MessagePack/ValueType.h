#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 25873;

	enum class ValueType : ::System::Byte
	{
		Decimal = 0x6,
		Double = 0x3,
		ULong = 0x5,
		False = 0x2,
		Long = 0x4,
		Null = 0x0,
		True = 0x1,
		String = 0x7,
	};
}
