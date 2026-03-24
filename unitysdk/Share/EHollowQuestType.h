#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowQuestType_TypeDefinitionIndex = 17382;

	enum class EHollowQuestType : ::System::Int16
	{
		RallyBattle = 13,
		AvatarSide = 7,
		TheGun = 18,
		Arpeggio = 17,
		Common = 0,
		AbyssS2_HobaPrefac = 26,
		ChallengeChaos = 6,
		EnumCount = 34,
		MainQuestChessboard = 21,
		BossRushBattle = 14,
		AbyssS2_Story = 19,
		AbyssS2_Period = 20,
		DreamEndLess = 24,
		HackerActivity = 16,
		World = 8,
		Urgent = 3,
		MainQuest = 1,
		MonsterFantasyStory = 30,
		Challenge = 5,
		AbyssS2_ThirdLoop = 33,
		GoldenMechaBoo = 31,
		MusicBattle = 32,
		NormalBattle = 10,
		DifficutyBattle = 12,
		AbyssS2_RoleChallenge = 22,
		DreamNormal = 23,
		NestVeryHard = 15,
		UrgentSupplement = 4,
		AbyssS2_Event = 25,
		SideQuest = 2,
		PromoteBattle = 11,
	};
}
