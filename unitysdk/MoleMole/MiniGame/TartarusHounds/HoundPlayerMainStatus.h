#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerMainStatus_TypeDefinitionIndex = 59162;

	enum class HoundPlayerMainStatus : ::System::Int32
	{
		FallSlipLeft = 91,
		ClimbPre = 22,
		Push = 7,
		Respawn = 2,
		Idle = 130,
		ClimbStart = 21,
		Climb = 20,
		ProtectAttack = 106,
		Move = 100,
		Injured = 3,
		FakeJump = 108,
		Max = 201,
		InjuredFinish = 15,
		Attack = 105,
		Falling = 95,
		FallLanding = 110,
		FallSlipRight = 92,
		None = 200,
		PerformFall = 0,
		MoveAttack = 104,
		Diving = 5,
		DivingFinish = 4,
		Dead = 1,
	};
}
