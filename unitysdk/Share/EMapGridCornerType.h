#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridCornerType_TypeDefinitionIndex = 12911;

	enum class EMapGridCornerType : ::System::Int16
	{
		None = 0,
		LeftUp = 1,
		RightUp = 2,
		LeftDown = 3,
		Center = 5,
		RightDown = 4,
	};
}
