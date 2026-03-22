#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestType_TypeDefinitionIndex = 14196;

	enum class EQuestType : ::System::Int16
	{
		Daily = 9,
		Manual = 4,
		Knowledge = 8,
		HollowChallenge = 6,
		DungeonInner = 2,
		Hollow = 3,
		ArchiveBattle = 7,
		ArchiveFile = 1,
		MainCity = 5,
	};
}
