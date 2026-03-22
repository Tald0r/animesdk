#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestStatisticsType_TypeDefinitionIndex = 16775;

	enum class EQuestStatisticsType : ::System::Byte
	{
		FinishedEventTypeCount = 0x9,
		TarotCardCount = 0x6,
		CostTime = 0x3,
		TotalCoinUse = 0xE,
		EnumBegin = 0x1,
		BangBooDreamLayer = 0x63,
		StaminaOverLevelTimes = 0x7,
		ArcanaCount = 0x5,
		ArrivedLevel = 0x1,
		EnumEnd = 0x64,
		EventCount = 0x2,
		FinishedEventIDCount = 0xA,
		KilledEnemyCount = 0x4,
		RebornTimes = 0x8,
	};
}
