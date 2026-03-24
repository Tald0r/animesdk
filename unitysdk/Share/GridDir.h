#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int GridDir_TypeDefinitionIndex = 11131;

	enum class GridDir : ::System::Int32
	{
		Down = 1,
		Transfer = 99,
		Left = 2,
		All = 4,
		Up = 0,
		Right = 3,
		None = -1,
	};
}
