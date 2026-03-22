#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_MoveState_TypeDefinitionIndex = 62843;

	enum class PatrolMove_MoveState : ::System::Int32
	{
		Stay = 2,
		End = 3,
		Error = 4,
		MoveStart = 0,
		Moving = 1,
	};
}
