#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EChallengeType_TypeDefinitionIndex = 15575;

	enum class EChallengeType : ::System::Int16
	{
		Damage = 3,
		HurtHPPercent = 11,
		LimitBattle = 10,
		BackAttackCount = 9,
		BeHitCount = 5,
		Dodge = 2,
		BattleTime = 1,
		ContinusKill = 8,
		QTECount = 7,
		AttackCount = 6,
		KillCount = 4,
	};
}
