#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestType_TypeDefinitionIndex = 15684;

	enum class EQuestType : ::System::Int16
	{
		Manual = 4,
		ArchiveBattle = 7,
		DungeonInner = 2,
		Daily = 9,
		Knowledge = 8,
		ArchiveFile = 1,
		MainCity = 5,
		Hollow = 3,
		HollowChallenge = 6,
	};
}
