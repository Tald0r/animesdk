#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 37939;

	enum class Direction : ::System::Int32
	{
		Left = 3,
		Right = 1,
		Down = 2,
		Up = 0,
		None = 4,
	};
}
