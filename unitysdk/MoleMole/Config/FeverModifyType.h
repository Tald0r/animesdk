#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverModifyType_TypeDefinitionIndex = 70859;

	enum class FeverModifyType : ::System::Int32
	{
		StunResetOther2 = 4,
		BeingHit = 10,
		HitOther = 1,
		StunDestroyOther = 2,
		DodgeSuccess = 8,
		KillOther = 7,
		Ability = 9,
		StunResetOther1 = 3,
		ReduceByTime = 0,
		Other = 11,
		QTE = 6,
		StunResetOther3 = 5,
	};
}
