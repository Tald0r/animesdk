#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonEx_TypeDefinitionIndex = 67895;

	enum class GamepadButtonEx : ::System::Int32
	{
		LStickRight = 3,
		LStickLeft = 2,
		RStickLeft = 6,
		RStickUp = 4,
		LStickUp = 0,
		RStickRight = 7,
		RStickDown = 5,
		LStickDown = 1,
	};
}
