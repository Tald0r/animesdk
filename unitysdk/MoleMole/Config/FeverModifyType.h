#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverModifyType_TypeDefinitionIndex = 45709;

	enum class FeverModifyType : ::System::Int32
	{
		ReduceByTime = 0,
		StunResetOther3 = 5,
		KillOther = 7,
		StunDestroyOther = 2,
		Other = 11,
		DodgeSuccess = 8,
		StunResetOther1 = 3,
		BeingHit = 10,
		StunResetOther2 = 4,
		Ability = 9,
		QTE = 6,
		HitOther = 1,
	};
}
