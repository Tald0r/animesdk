#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BuddyMoveStatus_TypeDefinitionIndex = 43553;

	enum class BuddyMoveStatus : ::System::Int32
	{
		Floating = 2,
		None = 0,
		OnGround = 1,
	};
}
