#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_Dir_TypeDefinitionIndex = 69081;

	enum class HollowEntityMoveComponent_MoveCmd_Dir : ::System::Int32
	{
		Left = 2,
		Transfer = 6,
		Down = 1,
		Reset = 5,
		Undo = 4,
		Right = 3,
		Up = 0,
	};
}
