#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestStatisticsType_TypeDefinitionIndex = 14706;

	enum class EQuestStatisticsType : ::System::Byte
	{
		FinishedEventTypeCount = 0x9,
		EnumEnd = 0x64,
		ArrivedLevel = 0x1,
		KilledEnemyCount = 0x4,
		FinishedEventIDCount = 0xA,
		CostTime = 0x3,
		EventCount = 0x2,
		RebornTimes = 0x8,
		EnumBegin = 0x1,
		StaminaOverLevelTimes = 0x7,
		TotalCoinUse = 0xE,
		BangBooDreamLayer = 0x63,
		TarotCardCount = 0x6,
		ArcanaCount = 0x5,
	};
}
