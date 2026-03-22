#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerMainStatus_TypeDefinitionIndex = 71400;

	enum class HoundPlayerMainStatus : ::System::Int32
	{
		Falling = 95,
		PerformFall = 0,
		InjuredFinish = 15,
		Move = 100,
		FallSlipRight = 92,
		DivingFinish = 4,
		None = 200,
		ClimbPre = 22,
		Dead = 1,
		Climb = 20,
		ProtectAttack = 106,
		Respawn = 2,
		FallLanding = 110,
		ClimbStart = 21,
		FakeJump = 108,
		Attack = 105,
		Injured = 3,
		FallSlipLeft = 91,
		Push = 7,
		MoveAttack = 104,
		Diving = 5,
		Max = 201,
		Idle = 130,
	};
}
