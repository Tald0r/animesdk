#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int PressTypes_TypeDefinitionIndex = 25236;

	enum class PressTypes : ::System::Int32
	{
		Down = 0,
		Up = 1,
		Pressed = 2,
	};
}
