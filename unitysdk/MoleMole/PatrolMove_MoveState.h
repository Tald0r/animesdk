#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_MoveState_TypeDefinitionIndex = 73380;

	enum class PatrolMove_MoveState : ::System::Int32
	{
		Moving = 1,
		End = 3,
		Stay = 2,
		Error = 4,
		MoveStart = 0,
	};
}
