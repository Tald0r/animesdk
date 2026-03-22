#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EChallengeType_TypeDefinitionIndex = 11235;

	enum class EChallengeType : ::System::Int16
	{
		AttackCount = 6,
		HurtHPPercent = 11,
		ContinusKill = 8,
		Damage = 3,
		LimitBattle = 10,
		KillCount = 4,
		BattleTime = 1,
		Dodge = 2,
		QTECount = 7,
		BackAttackCount = 9,
		BeHitCount = 5,
	};
}
