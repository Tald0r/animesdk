#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerOnViewState_TypeDefinitionIndex = 72312;

	enum class PlayerOnViewState : ::System::Byte
	{
		MoveFail = 0x9,
		RT = 0x4,
		Teleport = 0x2,
		Born = 0x1,
		LF = 0x3,
		UP = 0x5,
		None = 0x0,
		TeleportOut = 0x7,
		BM = 0x6,
		JumpMove = 0x8,
	};
}
