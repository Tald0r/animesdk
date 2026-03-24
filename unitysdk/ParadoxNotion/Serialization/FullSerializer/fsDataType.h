#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDataType_TypeDefinitionIndex = 26929;

	enum class fsDataType : ::System::Int32
	{
		Boolean = 4,
		Null = 6,
		String = 5,
		Object = 1,
		Array = 0,
		Int64 = 3,
		Double = 2,
	};
}
