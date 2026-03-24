#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BuddyMoveStatus_TypeDefinitionIndex = 46401;

	enum class BuddyMoveStatus : ::System::Int32
	{
		None = 0,
		Floating = 2,
		OnGround = 1,
	};
}
