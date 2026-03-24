#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 80239;

	enum class Direction : ::System::Int32
	{
		Left = 3,
		Down = 2,
		Right = 1,
		None = 4,
		Up = 0,
	};
}
