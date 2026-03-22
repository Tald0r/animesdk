#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerOnViewState_TypeDefinitionIndex = 46502;

	enum class PlayerOnViewState : ::System::Byte
	{
		None = 0x0,
		LF = 0x3,
		UP = 0x5,
		MoveFail = 0x9,
		TeleportOut = 0x7,
		Born = 0x1,
		BM = 0x6,
		RT = 0x4,
		JumpMove = 0x8,
		Teleport = 0x2,
	};
}
