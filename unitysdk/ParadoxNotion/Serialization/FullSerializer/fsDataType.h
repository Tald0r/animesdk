#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDataType_TypeDefinitionIndex = 25172;

	enum class fsDataType : ::System::Int32
	{
		Int64 = 3,
		Boolean = 4,
		String = 5,
		Null = 6,
		Array = 0,
		Double = 2,
		Object = 1,
	};
}
