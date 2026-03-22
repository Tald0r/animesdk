#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsShowMode_TypeDefinitionIndex = 16549;

	enum class EOptionsShowMode : ::System::Int16
	{
		Normal = 0,
		Item = 2,
		Challenge = 4,
		Event = 1,
		Card = 3,
	};
}
