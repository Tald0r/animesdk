#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridCornerType_TypeDefinitionIndex = 17018;

	enum class EMapGridCornerType : ::System::Int16
	{
		RightUp = 2,
		None = 0,
		Center = 5,
		LeftUp = 1,
		LeftDown = 3,
		RightDown = 4,
	};
}
