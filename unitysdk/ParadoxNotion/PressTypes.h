#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int PressTypes_TypeDefinitionIndex = 26303;

	enum class PressTypes : ::System::Int32
	{
		Pressed = 2,
		Up = 1,
		Down = 0,
	};
}
