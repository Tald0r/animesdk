#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 27658;

	enum class ValueType : ::System::Byte
	{
		Null = 0x0,
		Double = 0x3,
		ULong = 0x5,
		Decimal = 0x6,
		False = 0x2,
		Long = 0x4,
		True = 0x1,
		String = 0x7,
	};
}
