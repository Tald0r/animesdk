#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_Dir_TypeDefinitionIndex = 49794;

	enum class HollowEntityMoveComponent_MoveCmd_Dir : ::System::Int32
	{
		Up = 0,
		Transfer = 6,
		Down = 1,
		Right = 3,
		Reset = 5,
		Undo = 4,
		Left = 2,
	};
}
