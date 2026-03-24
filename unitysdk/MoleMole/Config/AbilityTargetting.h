#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityTargetting_TypeDefinitionIndex = 56362;

	enum class AbilityTargetting : ::System::Int32
	{
		Custom = 99,
		NodePoint = 16,
		EnemyAlliedNoNeedEnterBattle = 30,
		CasterAlliedNoNeedEnterBattle = 28,
		BuddyAllied = 20,
		Self = 0,
		Buddy_Partner = 27,
		SelfAttackTarget = 4,
		LastSelfAttackTarget = 21,
		TargetAllied = 6,
		None = 90,
		Caster = 1,
		AimTarget = 24,
		TeamAvatars = 10,
		Buddy = 11,
		SavePoint = 15,
		LocalAvatarAttackTarget = 17,
		Target = 2,
		RecordEntityKey = 34,
		LocalAvatar = 3,
		Buddy_Fight = 22,
		CoopTeamAvatarsExceptSelf = 32,
		Level = 18,
		EnemyAllied = 7,
		LastLocalAvatarAttackTarget = 19,
		TeamAllied = 25,
		All = 8,
		CasterAllied = 5,
		CoopTeamAvatarsAllExceptSelf = 33,
		QTETarget = 12,
		Other = 9,
		PartnerAvatars = 26,
		TargetAlliedNoNeedEnterBattle = 29,
		Buddy_Support = 23,
		TeamAvatarsAll = 31,
		Camera = 14,
		TeamEntity = 13,
	};
}
