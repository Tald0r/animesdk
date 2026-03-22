#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonPressType_TypeDefinitionIndex = 78950;

	enum class ButtonPressType : ::System::Int32
	{
		Pressed = 1,
		Down = 0,
		Up = 2,
	};
}
