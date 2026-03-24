#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int SerializationFormat_TypeDefinitionIndex = 36442;

	enum class SerializationFormat : ::System::Int32
	{
		Xml = 0,
		Binary = 1,
	};
}
