#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityTargetting_TypeDefinitionIndex = 61140;

	enum class AbilityTargetting : ::System::Int32
	{
		LastSelfAttackTarget = 21,
		TeamAvatarsAll = 31,
		CasterAlliedNoNeedEnterBattle = 28,
		TargetAlliedNoNeedEnterBattle = 29,
		CoopTeamAvatarsAllExceptSelf = 33,
		TeamEntity = 13,
		SavePoint = 15,
		EnemyAlliedNoNeedEnterBattle = 30,
		Custom = 99,
		CasterAllied = 5,
		RecordEntityKey = 34,
		TeamAvatars = 10,
		NodePoint = 16,
		Caster = 1,
		Level = 18,
		SelfAttackTarget = 4,
		All = 8,
		None = 90,
		Camera = 14,
		LastLocalAvatarAttackTarget = 19,
		Buddy_Fight = 22,
		Buddy_Partner = 27,
		Buddy_Support = 23,
		LocalAvatarAttackTarget = 17,
		Buddy = 11,
		BuddyAllied = 20,
		EnemyAllied = 7,
		TeamAllied = 25,
		Target = 2,
		LocalAvatar = 3,
		CoopTeamAvatarsExceptSelf = 32,
		QTETarget = 12,
		PartnerAvatars = 26,
		AimTarget = 24,
		TargetAllied = 6,
		Self = 0,
		Other = 9,
	};
}
