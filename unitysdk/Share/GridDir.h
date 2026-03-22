#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int GridDir_TypeDefinitionIndex = 15088;

	enum class GridDir : ::System::Int32
	{
		Down = 1,
		All = 4,
		Left = 2,
		Right = 3,
		None = -1,
		Transfer = 99,
		Up = 0,
	};
}
