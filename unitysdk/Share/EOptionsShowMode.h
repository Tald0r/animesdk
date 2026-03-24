#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsShowMode_TypeDefinitionIndex = 17983;

	enum class EOptionsShowMode : ::System::Int16
	{
		Challenge = 4,
		Event = 1,
		Card = 3,
		Item = 2,
		Normal = 0,
	};
}
